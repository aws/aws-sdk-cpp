/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/Outcome.h>
#include <aws/core/auth/AWSAuthSigner.h>
#include <aws/core/client/CoreErrors.h>
#include <aws/core/client/RetryStrategy.h>
#include <aws/core/http/HttpClient.h>
#include <aws/core/http/HttpResponse.h>
#include <aws/core/http/HttpClientFactory.h>
#include <aws/core/auth/AWSCredentialsProviderChain.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/utils/threading/Executor.h>
#include <aws/core/utils/DNS.h>
#include <aws/core/utils/logging/LogMacros.h>

#include <aws/cloudformation/CloudFormationClient.h>
#include <aws/cloudformation/CloudFormationEndpoint.h>
#include <aws/cloudformation/CloudFormationErrorMarshaller.h>
#include <aws/cloudformation/model/ActivateTypeRequest.h>
#include <aws/cloudformation/model/BatchDescribeTypeConfigurationsRequest.h>
#include <aws/cloudformation/model/CancelUpdateStackRequest.h>
#include <aws/cloudformation/model/ContinueUpdateRollbackRequest.h>
#include <aws/cloudformation/model/CreateChangeSetRequest.h>
#include <aws/cloudformation/model/CreateStackRequest.h>
#include <aws/cloudformation/model/CreateStackInstancesRequest.h>
#include <aws/cloudformation/model/CreateStackSetRequest.h>
#include <aws/cloudformation/model/DeactivateTypeRequest.h>
#include <aws/cloudformation/model/DeleteChangeSetRequest.h>
#include <aws/cloudformation/model/DeleteStackRequest.h>
#include <aws/cloudformation/model/DeleteStackInstancesRequest.h>
#include <aws/cloudformation/model/DeleteStackSetRequest.h>
#include <aws/cloudformation/model/DeregisterTypeRequest.h>
#include <aws/cloudformation/model/DescribeAccountLimitsRequest.h>
#include <aws/cloudformation/model/DescribeChangeSetRequest.h>
#include <aws/cloudformation/model/DescribeChangeSetHooksRequest.h>
#include <aws/cloudformation/model/DescribePublisherRequest.h>
#include <aws/cloudformation/model/DescribeStackDriftDetectionStatusRequest.h>
#include <aws/cloudformation/model/DescribeStackEventsRequest.h>
#include <aws/cloudformation/model/DescribeStackInstanceRequest.h>
#include <aws/cloudformation/model/DescribeStackResourceRequest.h>
#include <aws/cloudformation/model/DescribeStackResourceDriftsRequest.h>
#include <aws/cloudformation/model/DescribeStackResourcesRequest.h>
#include <aws/cloudformation/model/DescribeStackSetRequest.h>
#include <aws/cloudformation/model/DescribeStackSetOperationRequest.h>
#include <aws/cloudformation/model/DescribeStacksRequest.h>
#include <aws/cloudformation/model/DescribeTypeRequest.h>
#include <aws/cloudformation/model/DescribeTypeRegistrationRequest.h>
#include <aws/cloudformation/model/DetectStackDriftRequest.h>
#include <aws/cloudformation/model/DetectStackResourceDriftRequest.h>
#include <aws/cloudformation/model/DetectStackSetDriftRequest.h>
#include <aws/cloudformation/model/EstimateTemplateCostRequest.h>
#include <aws/cloudformation/model/ExecuteChangeSetRequest.h>
#include <aws/cloudformation/model/GetStackPolicyRequest.h>
#include <aws/cloudformation/model/GetTemplateRequest.h>
#include <aws/cloudformation/model/GetTemplateSummaryRequest.h>
#include <aws/cloudformation/model/ImportStacksToStackSetRequest.h>
#include <aws/cloudformation/model/ListChangeSetsRequest.h>
#include <aws/cloudformation/model/ListExportsRequest.h>
#include <aws/cloudformation/model/ListImportsRequest.h>
#include <aws/cloudformation/model/ListStackInstancesRequest.h>
#include <aws/cloudformation/model/ListStackResourcesRequest.h>
#include <aws/cloudformation/model/ListStackSetOperationResultsRequest.h>
#include <aws/cloudformation/model/ListStackSetOperationsRequest.h>
#include <aws/cloudformation/model/ListStackSetsRequest.h>
#include <aws/cloudformation/model/ListStacksRequest.h>
#include <aws/cloudformation/model/ListTypeRegistrationsRequest.h>
#include <aws/cloudformation/model/ListTypeVersionsRequest.h>
#include <aws/cloudformation/model/ListTypesRequest.h>
#include <aws/cloudformation/model/PublishTypeRequest.h>
#include <aws/cloudformation/model/RecordHandlerProgressRequest.h>
#include <aws/cloudformation/model/RegisterPublisherRequest.h>
#include <aws/cloudformation/model/RegisterTypeRequest.h>
#include <aws/cloudformation/model/RollbackStackRequest.h>
#include <aws/cloudformation/model/SetStackPolicyRequest.h>
#include <aws/cloudformation/model/SetTypeConfigurationRequest.h>
#include <aws/cloudformation/model/SetTypeDefaultVersionRequest.h>
#include <aws/cloudformation/model/SignalResourceRequest.h>
#include <aws/cloudformation/model/StopStackSetOperationRequest.h>
#include <aws/cloudformation/model/TestTypeRequest.h>
#include <aws/cloudformation/model/UpdateStackRequest.h>
#include <aws/cloudformation/model/UpdateStackInstancesRequest.h>
#include <aws/cloudformation/model/UpdateStackSetRequest.h>
#include <aws/cloudformation/model/UpdateTerminationProtectionRequest.h>
#include <aws/cloudformation/model/ValidateTemplateRequest.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::CloudFormation;
using namespace Aws::CloudFormation::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Xml;


static const char* SERVICE_NAME = "cloudformation";
static const char* ALLOCATION_TAG = "CloudFormationClient";

CloudFormationClient::CloudFormationClient(const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<CloudFormationErrorMarshaller>(ALLOCATION_TAG)),
  m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

CloudFormationClient::CloudFormationClient(const AWSCredentials& credentials,
                                           const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<CloudFormationErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

CloudFormationClient::CloudFormationClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                           const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             credentialsProvider,
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<CloudFormationErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

CloudFormationClient::~CloudFormationClient()
{
}

void CloudFormationClient::init(const Client::ClientConfiguration& config)
{
  AWSClient::SetServiceClientName("CloudFormation");
  m_configScheme = SchemeMapper::ToString(config.scheme);
  if (config.endpointOverride.empty())
  {
      m_uri = m_configScheme + "://" + CloudFormationEndpoint::ForRegion(config.region, config.useDualStack);
  }
  else
  {
      OverrideEndpoint(config.endpointOverride);
  }
}

void CloudFormationClient::OverrideEndpoint(const Aws::String& endpoint)
{
  if (endpoint.compare(0, 7, "http://") == 0 || endpoint.compare(0, 8, "https://") == 0)
  {
      m_uri = endpoint;
  }
  else
  {
      m_uri = m_configScheme + "://" + endpoint;
  }
}

Aws::String CloudFormationClient::ConvertRequestToPresignedUrl(const AmazonSerializableWebServiceRequest& requestToConvert, const char* region) const
{
  Aws::StringStream ss;
  ss << "https://" << CloudFormationEndpoint::ForRegion(region);
  ss << "?" << requestToConvert.SerializePayload();

  URI uri(ss.str());
  return GeneratePresignedUrl(uri, Aws::Http::HttpMethod::HTTP_GET, region, 3600);
}

ActivateTypeOutcome CloudFormationClient::ActivateType(const ActivateTypeRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ActivateTypeOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

ActivateTypeOutcomeCallable CloudFormationClient::ActivateTypeCallable(const ActivateTypeRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ActivateTypeOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ActivateType(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudFormationClientActivateTypeAsyncHelper(CloudFormationClient const * const clientThis, const ActivateTypeRequest& request, const ActivateTypeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ActivateType(request), context);
}

void CloudFormationClient::ActivateTypeAsync(const ActivateTypeRequest& request, const ActivateTypeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ CloudFormationClientActivateTypeAsyncHelper( this, request, handler, context ); } );
}

BatchDescribeTypeConfigurationsOutcome CloudFormationClient::BatchDescribeTypeConfigurations(const BatchDescribeTypeConfigurationsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return BatchDescribeTypeConfigurationsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

BatchDescribeTypeConfigurationsOutcomeCallable CloudFormationClient::BatchDescribeTypeConfigurationsCallable(const BatchDescribeTypeConfigurationsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< BatchDescribeTypeConfigurationsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->BatchDescribeTypeConfigurations(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudFormationClientBatchDescribeTypeConfigurationsAsyncHelper(CloudFormationClient const * const clientThis, const BatchDescribeTypeConfigurationsRequest& request, const BatchDescribeTypeConfigurationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->BatchDescribeTypeConfigurations(request), context);
}

void CloudFormationClient::BatchDescribeTypeConfigurationsAsync(const BatchDescribeTypeConfigurationsRequest& request, const BatchDescribeTypeConfigurationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ CloudFormationClientBatchDescribeTypeConfigurationsAsyncHelper( this, request, handler, context ); } );
}

CancelUpdateStackOutcome CloudFormationClient::CancelUpdateStack(const CancelUpdateStackRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return CancelUpdateStackOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

CancelUpdateStackOutcomeCallable CloudFormationClient::CancelUpdateStackCallable(const CancelUpdateStackRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CancelUpdateStackOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CancelUpdateStack(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudFormationClientCancelUpdateStackAsyncHelper(CloudFormationClient const * const clientThis, const CancelUpdateStackRequest& request, const CancelUpdateStackResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CancelUpdateStack(request), context);
}

void CloudFormationClient::CancelUpdateStackAsync(const CancelUpdateStackRequest& request, const CancelUpdateStackResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ CloudFormationClientCancelUpdateStackAsyncHelper( this, request, handler, context ); } );
}

ContinueUpdateRollbackOutcome CloudFormationClient::ContinueUpdateRollback(const ContinueUpdateRollbackRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ContinueUpdateRollbackOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

ContinueUpdateRollbackOutcomeCallable CloudFormationClient::ContinueUpdateRollbackCallable(const ContinueUpdateRollbackRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ContinueUpdateRollbackOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ContinueUpdateRollback(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudFormationClientContinueUpdateRollbackAsyncHelper(CloudFormationClient const * const clientThis, const ContinueUpdateRollbackRequest& request, const ContinueUpdateRollbackResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ContinueUpdateRollback(request), context);
}

void CloudFormationClient::ContinueUpdateRollbackAsync(const ContinueUpdateRollbackRequest& request, const ContinueUpdateRollbackResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ CloudFormationClientContinueUpdateRollbackAsyncHelper( this, request, handler, context ); } );
}

CreateChangeSetOutcome CloudFormationClient::CreateChangeSet(const CreateChangeSetRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return CreateChangeSetOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

CreateChangeSetOutcomeCallable CloudFormationClient::CreateChangeSetCallable(const CreateChangeSetRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateChangeSetOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateChangeSet(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudFormationClientCreateChangeSetAsyncHelper(CloudFormationClient const * const clientThis, const CreateChangeSetRequest& request, const CreateChangeSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateChangeSet(request), context);
}

void CloudFormationClient::CreateChangeSetAsync(const CreateChangeSetRequest& request, const CreateChangeSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ CloudFormationClientCreateChangeSetAsyncHelper( this, request, handler, context ); } );
}

CreateStackOutcome CloudFormationClient::CreateStack(const CreateStackRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return CreateStackOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

CreateStackOutcomeCallable CloudFormationClient::CreateStackCallable(const CreateStackRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateStackOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateStack(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudFormationClientCreateStackAsyncHelper(CloudFormationClient const * const clientThis, const CreateStackRequest& request, const CreateStackResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateStack(request), context);
}

void CloudFormationClient::CreateStackAsync(const CreateStackRequest& request, const CreateStackResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ CloudFormationClientCreateStackAsyncHelper( this, request, handler, context ); } );
}

CreateStackInstancesOutcome CloudFormationClient::CreateStackInstances(const CreateStackInstancesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return CreateStackInstancesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

CreateStackInstancesOutcomeCallable CloudFormationClient::CreateStackInstancesCallable(const CreateStackInstancesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateStackInstancesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateStackInstances(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudFormationClientCreateStackInstancesAsyncHelper(CloudFormationClient const * const clientThis, const CreateStackInstancesRequest& request, const CreateStackInstancesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateStackInstances(request), context);
}

void CloudFormationClient::CreateStackInstancesAsync(const CreateStackInstancesRequest& request, const CreateStackInstancesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ CloudFormationClientCreateStackInstancesAsyncHelper( this, request, handler, context ); } );
}

CreateStackSetOutcome CloudFormationClient::CreateStackSet(const CreateStackSetRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return CreateStackSetOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

CreateStackSetOutcomeCallable CloudFormationClient::CreateStackSetCallable(const CreateStackSetRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateStackSetOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateStackSet(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudFormationClientCreateStackSetAsyncHelper(CloudFormationClient const * const clientThis, const CreateStackSetRequest& request, const CreateStackSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateStackSet(request), context);
}

void CloudFormationClient::CreateStackSetAsync(const CreateStackSetRequest& request, const CreateStackSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ CloudFormationClientCreateStackSetAsyncHelper( this, request, handler, context ); } );
}

DeactivateTypeOutcome CloudFormationClient::DeactivateType(const DeactivateTypeRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeactivateTypeOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

DeactivateTypeOutcomeCallable CloudFormationClient::DeactivateTypeCallable(const DeactivateTypeRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeactivateTypeOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeactivateType(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudFormationClientDeactivateTypeAsyncHelper(CloudFormationClient const * const clientThis, const DeactivateTypeRequest& request, const DeactivateTypeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeactivateType(request), context);
}

void CloudFormationClient::DeactivateTypeAsync(const DeactivateTypeRequest& request, const DeactivateTypeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ CloudFormationClientDeactivateTypeAsyncHelper( this, request, handler, context ); } );
}

DeleteChangeSetOutcome CloudFormationClient::DeleteChangeSet(const DeleteChangeSetRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeleteChangeSetOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

DeleteChangeSetOutcomeCallable CloudFormationClient::DeleteChangeSetCallable(const DeleteChangeSetRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteChangeSetOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteChangeSet(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudFormationClientDeleteChangeSetAsyncHelper(CloudFormationClient const * const clientThis, const DeleteChangeSetRequest& request, const DeleteChangeSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteChangeSet(request), context);
}

void CloudFormationClient::DeleteChangeSetAsync(const DeleteChangeSetRequest& request, const DeleteChangeSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ CloudFormationClientDeleteChangeSetAsyncHelper( this, request, handler, context ); } );
}

DeleteStackOutcome CloudFormationClient::DeleteStack(const DeleteStackRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeleteStackOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

DeleteStackOutcomeCallable CloudFormationClient::DeleteStackCallable(const DeleteStackRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteStackOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteStack(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudFormationClientDeleteStackAsyncHelper(CloudFormationClient const * const clientThis, const DeleteStackRequest& request, const DeleteStackResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteStack(request), context);
}

void CloudFormationClient::DeleteStackAsync(const DeleteStackRequest& request, const DeleteStackResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ CloudFormationClientDeleteStackAsyncHelper( this, request, handler, context ); } );
}

DeleteStackInstancesOutcome CloudFormationClient::DeleteStackInstances(const DeleteStackInstancesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeleteStackInstancesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

DeleteStackInstancesOutcomeCallable CloudFormationClient::DeleteStackInstancesCallable(const DeleteStackInstancesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteStackInstancesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteStackInstances(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudFormationClientDeleteStackInstancesAsyncHelper(CloudFormationClient const * const clientThis, const DeleteStackInstancesRequest& request, const DeleteStackInstancesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteStackInstances(request), context);
}

void CloudFormationClient::DeleteStackInstancesAsync(const DeleteStackInstancesRequest& request, const DeleteStackInstancesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ CloudFormationClientDeleteStackInstancesAsyncHelper( this, request, handler, context ); } );
}

DeleteStackSetOutcome CloudFormationClient::DeleteStackSet(const DeleteStackSetRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeleteStackSetOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

DeleteStackSetOutcomeCallable CloudFormationClient::DeleteStackSetCallable(const DeleteStackSetRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteStackSetOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteStackSet(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudFormationClientDeleteStackSetAsyncHelper(CloudFormationClient const * const clientThis, const DeleteStackSetRequest& request, const DeleteStackSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteStackSet(request), context);
}

void CloudFormationClient::DeleteStackSetAsync(const DeleteStackSetRequest& request, const DeleteStackSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ CloudFormationClientDeleteStackSetAsyncHelper( this, request, handler, context ); } );
}

DeregisterTypeOutcome CloudFormationClient::DeregisterType(const DeregisterTypeRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeregisterTypeOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

DeregisterTypeOutcomeCallable CloudFormationClient::DeregisterTypeCallable(const DeregisterTypeRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeregisterTypeOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeregisterType(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudFormationClientDeregisterTypeAsyncHelper(CloudFormationClient const * const clientThis, const DeregisterTypeRequest& request, const DeregisterTypeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeregisterType(request), context);
}

void CloudFormationClient::DeregisterTypeAsync(const DeregisterTypeRequest& request, const DeregisterTypeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ CloudFormationClientDeregisterTypeAsyncHelper( this, request, handler, context ); } );
}

DescribeAccountLimitsOutcome CloudFormationClient::DescribeAccountLimits(const DescribeAccountLimitsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeAccountLimitsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

DescribeAccountLimitsOutcomeCallable CloudFormationClient::DescribeAccountLimitsCallable(const DescribeAccountLimitsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeAccountLimitsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeAccountLimits(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudFormationClientDescribeAccountLimitsAsyncHelper(CloudFormationClient const * const clientThis, const DescribeAccountLimitsRequest& request, const DescribeAccountLimitsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeAccountLimits(request), context);
}

void CloudFormationClient::DescribeAccountLimitsAsync(const DescribeAccountLimitsRequest& request, const DescribeAccountLimitsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ CloudFormationClientDescribeAccountLimitsAsyncHelper( this, request, handler, context ); } );
}

DescribeChangeSetOutcome CloudFormationClient::DescribeChangeSet(const DescribeChangeSetRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeChangeSetOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

DescribeChangeSetOutcomeCallable CloudFormationClient::DescribeChangeSetCallable(const DescribeChangeSetRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeChangeSetOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeChangeSet(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudFormationClientDescribeChangeSetAsyncHelper(CloudFormationClient const * const clientThis, const DescribeChangeSetRequest& request, const DescribeChangeSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeChangeSet(request), context);
}

void CloudFormationClient::DescribeChangeSetAsync(const DescribeChangeSetRequest& request, const DescribeChangeSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ CloudFormationClientDescribeChangeSetAsyncHelper( this, request, handler, context ); } );
}

DescribeChangeSetHooksOutcome CloudFormationClient::DescribeChangeSetHooks(const DescribeChangeSetHooksRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeChangeSetHooksOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

DescribeChangeSetHooksOutcomeCallable CloudFormationClient::DescribeChangeSetHooksCallable(const DescribeChangeSetHooksRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeChangeSetHooksOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeChangeSetHooks(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudFormationClientDescribeChangeSetHooksAsyncHelper(CloudFormationClient const * const clientThis, const DescribeChangeSetHooksRequest& request, const DescribeChangeSetHooksResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeChangeSetHooks(request), context);
}

void CloudFormationClient::DescribeChangeSetHooksAsync(const DescribeChangeSetHooksRequest& request, const DescribeChangeSetHooksResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ CloudFormationClientDescribeChangeSetHooksAsyncHelper( this, request, handler, context ); } );
}

DescribePublisherOutcome CloudFormationClient::DescribePublisher(const DescribePublisherRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribePublisherOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

DescribePublisherOutcomeCallable CloudFormationClient::DescribePublisherCallable(const DescribePublisherRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribePublisherOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribePublisher(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudFormationClientDescribePublisherAsyncHelper(CloudFormationClient const * const clientThis, const DescribePublisherRequest& request, const DescribePublisherResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribePublisher(request), context);
}

void CloudFormationClient::DescribePublisherAsync(const DescribePublisherRequest& request, const DescribePublisherResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ CloudFormationClientDescribePublisherAsyncHelper( this, request, handler, context ); } );
}

DescribeStackDriftDetectionStatusOutcome CloudFormationClient::DescribeStackDriftDetectionStatus(const DescribeStackDriftDetectionStatusRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeStackDriftDetectionStatusOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

DescribeStackDriftDetectionStatusOutcomeCallable CloudFormationClient::DescribeStackDriftDetectionStatusCallable(const DescribeStackDriftDetectionStatusRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeStackDriftDetectionStatusOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeStackDriftDetectionStatus(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudFormationClientDescribeStackDriftDetectionStatusAsyncHelper(CloudFormationClient const * const clientThis, const DescribeStackDriftDetectionStatusRequest& request, const DescribeStackDriftDetectionStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeStackDriftDetectionStatus(request), context);
}

void CloudFormationClient::DescribeStackDriftDetectionStatusAsync(const DescribeStackDriftDetectionStatusRequest& request, const DescribeStackDriftDetectionStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ CloudFormationClientDescribeStackDriftDetectionStatusAsyncHelper( this, request, handler, context ); } );
}

DescribeStackEventsOutcome CloudFormationClient::DescribeStackEvents(const DescribeStackEventsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeStackEventsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

DescribeStackEventsOutcomeCallable CloudFormationClient::DescribeStackEventsCallable(const DescribeStackEventsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeStackEventsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeStackEvents(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudFormationClientDescribeStackEventsAsyncHelper(CloudFormationClient const * const clientThis, const DescribeStackEventsRequest& request, const DescribeStackEventsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeStackEvents(request), context);
}

void CloudFormationClient::DescribeStackEventsAsync(const DescribeStackEventsRequest& request, const DescribeStackEventsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ CloudFormationClientDescribeStackEventsAsyncHelper( this, request, handler, context ); } );
}

DescribeStackInstanceOutcome CloudFormationClient::DescribeStackInstance(const DescribeStackInstanceRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeStackInstanceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

DescribeStackInstanceOutcomeCallable CloudFormationClient::DescribeStackInstanceCallable(const DescribeStackInstanceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeStackInstanceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeStackInstance(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudFormationClientDescribeStackInstanceAsyncHelper(CloudFormationClient const * const clientThis, const DescribeStackInstanceRequest& request, const DescribeStackInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeStackInstance(request), context);
}

void CloudFormationClient::DescribeStackInstanceAsync(const DescribeStackInstanceRequest& request, const DescribeStackInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ CloudFormationClientDescribeStackInstanceAsyncHelper( this, request, handler, context ); } );
}

DescribeStackResourceOutcome CloudFormationClient::DescribeStackResource(const DescribeStackResourceRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeStackResourceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

DescribeStackResourceOutcomeCallable CloudFormationClient::DescribeStackResourceCallable(const DescribeStackResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeStackResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeStackResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudFormationClientDescribeStackResourceAsyncHelper(CloudFormationClient const * const clientThis, const DescribeStackResourceRequest& request, const DescribeStackResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeStackResource(request), context);
}

void CloudFormationClient::DescribeStackResourceAsync(const DescribeStackResourceRequest& request, const DescribeStackResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ CloudFormationClientDescribeStackResourceAsyncHelper( this, request, handler, context ); } );
}

DescribeStackResourceDriftsOutcome CloudFormationClient::DescribeStackResourceDrifts(const DescribeStackResourceDriftsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeStackResourceDriftsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

DescribeStackResourceDriftsOutcomeCallable CloudFormationClient::DescribeStackResourceDriftsCallable(const DescribeStackResourceDriftsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeStackResourceDriftsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeStackResourceDrifts(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudFormationClientDescribeStackResourceDriftsAsyncHelper(CloudFormationClient const * const clientThis, const DescribeStackResourceDriftsRequest& request, const DescribeStackResourceDriftsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeStackResourceDrifts(request), context);
}

void CloudFormationClient::DescribeStackResourceDriftsAsync(const DescribeStackResourceDriftsRequest& request, const DescribeStackResourceDriftsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ CloudFormationClientDescribeStackResourceDriftsAsyncHelper( this, request, handler, context ); } );
}

DescribeStackResourcesOutcome CloudFormationClient::DescribeStackResources(const DescribeStackResourcesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeStackResourcesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

DescribeStackResourcesOutcomeCallable CloudFormationClient::DescribeStackResourcesCallable(const DescribeStackResourcesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeStackResourcesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeStackResources(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudFormationClientDescribeStackResourcesAsyncHelper(CloudFormationClient const * const clientThis, const DescribeStackResourcesRequest& request, const DescribeStackResourcesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeStackResources(request), context);
}

void CloudFormationClient::DescribeStackResourcesAsync(const DescribeStackResourcesRequest& request, const DescribeStackResourcesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ CloudFormationClientDescribeStackResourcesAsyncHelper( this, request, handler, context ); } );
}

DescribeStackSetOutcome CloudFormationClient::DescribeStackSet(const DescribeStackSetRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeStackSetOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

DescribeStackSetOutcomeCallable CloudFormationClient::DescribeStackSetCallable(const DescribeStackSetRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeStackSetOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeStackSet(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudFormationClientDescribeStackSetAsyncHelper(CloudFormationClient const * const clientThis, const DescribeStackSetRequest& request, const DescribeStackSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeStackSet(request), context);
}

void CloudFormationClient::DescribeStackSetAsync(const DescribeStackSetRequest& request, const DescribeStackSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ CloudFormationClientDescribeStackSetAsyncHelper( this, request, handler, context ); } );
}

DescribeStackSetOperationOutcome CloudFormationClient::DescribeStackSetOperation(const DescribeStackSetOperationRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeStackSetOperationOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

DescribeStackSetOperationOutcomeCallable CloudFormationClient::DescribeStackSetOperationCallable(const DescribeStackSetOperationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeStackSetOperationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeStackSetOperation(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudFormationClientDescribeStackSetOperationAsyncHelper(CloudFormationClient const * const clientThis, const DescribeStackSetOperationRequest& request, const DescribeStackSetOperationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeStackSetOperation(request), context);
}

void CloudFormationClient::DescribeStackSetOperationAsync(const DescribeStackSetOperationRequest& request, const DescribeStackSetOperationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ CloudFormationClientDescribeStackSetOperationAsyncHelper( this, request, handler, context ); } );
}

DescribeStacksOutcome CloudFormationClient::DescribeStacks(const DescribeStacksRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeStacksOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

DescribeStacksOutcomeCallable CloudFormationClient::DescribeStacksCallable(const DescribeStacksRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeStacksOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeStacks(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudFormationClientDescribeStacksAsyncHelper(CloudFormationClient const * const clientThis, const DescribeStacksRequest& request, const DescribeStacksResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeStacks(request), context);
}

void CloudFormationClient::DescribeStacksAsync(const DescribeStacksRequest& request, const DescribeStacksResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ CloudFormationClientDescribeStacksAsyncHelper( this, request, handler, context ); } );
}

DescribeTypeOutcome CloudFormationClient::DescribeType(const DescribeTypeRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeTypeOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

DescribeTypeOutcomeCallable CloudFormationClient::DescribeTypeCallable(const DescribeTypeRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeTypeOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeType(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudFormationClientDescribeTypeAsyncHelper(CloudFormationClient const * const clientThis, const DescribeTypeRequest& request, const DescribeTypeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeType(request), context);
}

void CloudFormationClient::DescribeTypeAsync(const DescribeTypeRequest& request, const DescribeTypeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ CloudFormationClientDescribeTypeAsyncHelper( this, request, handler, context ); } );
}

DescribeTypeRegistrationOutcome CloudFormationClient::DescribeTypeRegistration(const DescribeTypeRegistrationRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeTypeRegistrationOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

DescribeTypeRegistrationOutcomeCallable CloudFormationClient::DescribeTypeRegistrationCallable(const DescribeTypeRegistrationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeTypeRegistrationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeTypeRegistration(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudFormationClientDescribeTypeRegistrationAsyncHelper(CloudFormationClient const * const clientThis, const DescribeTypeRegistrationRequest& request, const DescribeTypeRegistrationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeTypeRegistration(request), context);
}

void CloudFormationClient::DescribeTypeRegistrationAsync(const DescribeTypeRegistrationRequest& request, const DescribeTypeRegistrationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ CloudFormationClientDescribeTypeRegistrationAsyncHelper( this, request, handler, context ); } );
}

DetectStackDriftOutcome CloudFormationClient::DetectStackDrift(const DetectStackDriftRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DetectStackDriftOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

DetectStackDriftOutcomeCallable CloudFormationClient::DetectStackDriftCallable(const DetectStackDriftRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DetectStackDriftOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DetectStackDrift(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudFormationClientDetectStackDriftAsyncHelper(CloudFormationClient const * const clientThis, const DetectStackDriftRequest& request, const DetectStackDriftResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DetectStackDrift(request), context);
}

void CloudFormationClient::DetectStackDriftAsync(const DetectStackDriftRequest& request, const DetectStackDriftResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ CloudFormationClientDetectStackDriftAsyncHelper( this, request, handler, context ); } );
}

DetectStackResourceDriftOutcome CloudFormationClient::DetectStackResourceDrift(const DetectStackResourceDriftRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DetectStackResourceDriftOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

DetectStackResourceDriftOutcomeCallable CloudFormationClient::DetectStackResourceDriftCallable(const DetectStackResourceDriftRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DetectStackResourceDriftOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DetectStackResourceDrift(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudFormationClientDetectStackResourceDriftAsyncHelper(CloudFormationClient const * const clientThis, const DetectStackResourceDriftRequest& request, const DetectStackResourceDriftResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DetectStackResourceDrift(request), context);
}

void CloudFormationClient::DetectStackResourceDriftAsync(const DetectStackResourceDriftRequest& request, const DetectStackResourceDriftResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ CloudFormationClientDetectStackResourceDriftAsyncHelper( this, request, handler, context ); } );
}

DetectStackSetDriftOutcome CloudFormationClient::DetectStackSetDrift(const DetectStackSetDriftRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DetectStackSetDriftOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

DetectStackSetDriftOutcomeCallable CloudFormationClient::DetectStackSetDriftCallable(const DetectStackSetDriftRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DetectStackSetDriftOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DetectStackSetDrift(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudFormationClientDetectStackSetDriftAsyncHelper(CloudFormationClient const * const clientThis, const DetectStackSetDriftRequest& request, const DetectStackSetDriftResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DetectStackSetDrift(request), context);
}

void CloudFormationClient::DetectStackSetDriftAsync(const DetectStackSetDriftRequest& request, const DetectStackSetDriftResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ CloudFormationClientDetectStackSetDriftAsyncHelper( this, request, handler, context ); } );
}

EstimateTemplateCostOutcome CloudFormationClient::EstimateTemplateCost(const EstimateTemplateCostRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return EstimateTemplateCostOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

EstimateTemplateCostOutcomeCallable CloudFormationClient::EstimateTemplateCostCallable(const EstimateTemplateCostRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< EstimateTemplateCostOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->EstimateTemplateCost(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudFormationClientEstimateTemplateCostAsyncHelper(CloudFormationClient const * const clientThis, const EstimateTemplateCostRequest& request, const EstimateTemplateCostResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->EstimateTemplateCost(request), context);
}

void CloudFormationClient::EstimateTemplateCostAsync(const EstimateTemplateCostRequest& request, const EstimateTemplateCostResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ CloudFormationClientEstimateTemplateCostAsyncHelper( this, request, handler, context ); } );
}

ExecuteChangeSetOutcome CloudFormationClient::ExecuteChangeSet(const ExecuteChangeSetRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ExecuteChangeSetOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

ExecuteChangeSetOutcomeCallable CloudFormationClient::ExecuteChangeSetCallable(const ExecuteChangeSetRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ExecuteChangeSetOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ExecuteChangeSet(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudFormationClientExecuteChangeSetAsyncHelper(CloudFormationClient const * const clientThis, const ExecuteChangeSetRequest& request, const ExecuteChangeSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ExecuteChangeSet(request), context);
}

void CloudFormationClient::ExecuteChangeSetAsync(const ExecuteChangeSetRequest& request, const ExecuteChangeSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ CloudFormationClientExecuteChangeSetAsyncHelper( this, request, handler, context ); } );
}

GetStackPolicyOutcome CloudFormationClient::GetStackPolicy(const GetStackPolicyRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return GetStackPolicyOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

GetStackPolicyOutcomeCallable CloudFormationClient::GetStackPolicyCallable(const GetStackPolicyRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetStackPolicyOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetStackPolicy(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudFormationClientGetStackPolicyAsyncHelper(CloudFormationClient const * const clientThis, const GetStackPolicyRequest& request, const GetStackPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetStackPolicy(request), context);
}

void CloudFormationClient::GetStackPolicyAsync(const GetStackPolicyRequest& request, const GetStackPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ CloudFormationClientGetStackPolicyAsyncHelper( this, request, handler, context ); } );
}

GetTemplateOutcome CloudFormationClient::GetTemplate(const GetTemplateRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return GetTemplateOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

GetTemplateOutcomeCallable CloudFormationClient::GetTemplateCallable(const GetTemplateRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetTemplateOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetTemplate(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudFormationClientGetTemplateAsyncHelper(CloudFormationClient const * const clientThis, const GetTemplateRequest& request, const GetTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetTemplate(request), context);
}

void CloudFormationClient::GetTemplateAsync(const GetTemplateRequest& request, const GetTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ CloudFormationClientGetTemplateAsyncHelper( this, request, handler, context ); } );
}

GetTemplateSummaryOutcome CloudFormationClient::GetTemplateSummary(const GetTemplateSummaryRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return GetTemplateSummaryOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

GetTemplateSummaryOutcomeCallable CloudFormationClient::GetTemplateSummaryCallable(const GetTemplateSummaryRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetTemplateSummaryOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetTemplateSummary(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudFormationClientGetTemplateSummaryAsyncHelper(CloudFormationClient const * const clientThis, const GetTemplateSummaryRequest& request, const GetTemplateSummaryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetTemplateSummary(request), context);
}

void CloudFormationClient::GetTemplateSummaryAsync(const GetTemplateSummaryRequest& request, const GetTemplateSummaryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ CloudFormationClientGetTemplateSummaryAsyncHelper( this, request, handler, context ); } );
}

ImportStacksToStackSetOutcome CloudFormationClient::ImportStacksToStackSet(const ImportStacksToStackSetRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ImportStacksToStackSetOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

ImportStacksToStackSetOutcomeCallable CloudFormationClient::ImportStacksToStackSetCallable(const ImportStacksToStackSetRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ImportStacksToStackSetOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ImportStacksToStackSet(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudFormationClientImportStacksToStackSetAsyncHelper(CloudFormationClient const * const clientThis, const ImportStacksToStackSetRequest& request, const ImportStacksToStackSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ImportStacksToStackSet(request), context);
}

void CloudFormationClient::ImportStacksToStackSetAsync(const ImportStacksToStackSetRequest& request, const ImportStacksToStackSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ CloudFormationClientImportStacksToStackSetAsyncHelper( this, request, handler, context ); } );
}

ListChangeSetsOutcome CloudFormationClient::ListChangeSets(const ListChangeSetsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListChangeSetsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

ListChangeSetsOutcomeCallable CloudFormationClient::ListChangeSetsCallable(const ListChangeSetsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListChangeSetsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListChangeSets(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudFormationClientListChangeSetsAsyncHelper(CloudFormationClient const * const clientThis, const ListChangeSetsRequest& request, const ListChangeSetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListChangeSets(request), context);
}

void CloudFormationClient::ListChangeSetsAsync(const ListChangeSetsRequest& request, const ListChangeSetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ CloudFormationClientListChangeSetsAsyncHelper( this, request, handler, context ); } );
}

ListExportsOutcome CloudFormationClient::ListExports(const ListExportsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListExportsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

ListExportsOutcomeCallable CloudFormationClient::ListExportsCallable(const ListExportsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListExportsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListExports(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudFormationClientListExportsAsyncHelper(CloudFormationClient const * const clientThis, const ListExportsRequest& request, const ListExportsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListExports(request), context);
}

void CloudFormationClient::ListExportsAsync(const ListExportsRequest& request, const ListExportsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ CloudFormationClientListExportsAsyncHelper( this, request, handler, context ); } );
}

ListImportsOutcome CloudFormationClient::ListImports(const ListImportsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListImportsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

ListImportsOutcomeCallable CloudFormationClient::ListImportsCallable(const ListImportsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListImportsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListImports(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudFormationClientListImportsAsyncHelper(CloudFormationClient const * const clientThis, const ListImportsRequest& request, const ListImportsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListImports(request), context);
}

void CloudFormationClient::ListImportsAsync(const ListImportsRequest& request, const ListImportsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ CloudFormationClientListImportsAsyncHelper( this, request, handler, context ); } );
}

ListStackInstancesOutcome CloudFormationClient::ListStackInstances(const ListStackInstancesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListStackInstancesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

ListStackInstancesOutcomeCallable CloudFormationClient::ListStackInstancesCallable(const ListStackInstancesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListStackInstancesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListStackInstances(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudFormationClientListStackInstancesAsyncHelper(CloudFormationClient const * const clientThis, const ListStackInstancesRequest& request, const ListStackInstancesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListStackInstances(request), context);
}

void CloudFormationClient::ListStackInstancesAsync(const ListStackInstancesRequest& request, const ListStackInstancesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ CloudFormationClientListStackInstancesAsyncHelper( this, request, handler, context ); } );
}

ListStackResourcesOutcome CloudFormationClient::ListStackResources(const ListStackResourcesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListStackResourcesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

ListStackResourcesOutcomeCallable CloudFormationClient::ListStackResourcesCallable(const ListStackResourcesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListStackResourcesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListStackResources(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudFormationClientListStackResourcesAsyncHelper(CloudFormationClient const * const clientThis, const ListStackResourcesRequest& request, const ListStackResourcesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListStackResources(request), context);
}

void CloudFormationClient::ListStackResourcesAsync(const ListStackResourcesRequest& request, const ListStackResourcesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ CloudFormationClientListStackResourcesAsyncHelper( this, request, handler, context ); } );
}

ListStackSetOperationResultsOutcome CloudFormationClient::ListStackSetOperationResults(const ListStackSetOperationResultsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListStackSetOperationResultsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

ListStackSetOperationResultsOutcomeCallable CloudFormationClient::ListStackSetOperationResultsCallable(const ListStackSetOperationResultsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListStackSetOperationResultsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListStackSetOperationResults(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudFormationClientListStackSetOperationResultsAsyncHelper(CloudFormationClient const * const clientThis, const ListStackSetOperationResultsRequest& request, const ListStackSetOperationResultsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListStackSetOperationResults(request), context);
}

void CloudFormationClient::ListStackSetOperationResultsAsync(const ListStackSetOperationResultsRequest& request, const ListStackSetOperationResultsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ CloudFormationClientListStackSetOperationResultsAsyncHelper( this, request, handler, context ); } );
}

ListStackSetOperationsOutcome CloudFormationClient::ListStackSetOperations(const ListStackSetOperationsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListStackSetOperationsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

ListStackSetOperationsOutcomeCallable CloudFormationClient::ListStackSetOperationsCallable(const ListStackSetOperationsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListStackSetOperationsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListStackSetOperations(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudFormationClientListStackSetOperationsAsyncHelper(CloudFormationClient const * const clientThis, const ListStackSetOperationsRequest& request, const ListStackSetOperationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListStackSetOperations(request), context);
}

void CloudFormationClient::ListStackSetOperationsAsync(const ListStackSetOperationsRequest& request, const ListStackSetOperationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ CloudFormationClientListStackSetOperationsAsyncHelper( this, request, handler, context ); } );
}

ListStackSetsOutcome CloudFormationClient::ListStackSets(const ListStackSetsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListStackSetsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

ListStackSetsOutcomeCallable CloudFormationClient::ListStackSetsCallable(const ListStackSetsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListStackSetsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListStackSets(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudFormationClientListStackSetsAsyncHelper(CloudFormationClient const * const clientThis, const ListStackSetsRequest& request, const ListStackSetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListStackSets(request), context);
}

void CloudFormationClient::ListStackSetsAsync(const ListStackSetsRequest& request, const ListStackSetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ CloudFormationClientListStackSetsAsyncHelper( this, request, handler, context ); } );
}

ListStacksOutcome CloudFormationClient::ListStacks(const ListStacksRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListStacksOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

ListStacksOutcomeCallable CloudFormationClient::ListStacksCallable(const ListStacksRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListStacksOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListStacks(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudFormationClientListStacksAsyncHelper(CloudFormationClient const * const clientThis, const ListStacksRequest& request, const ListStacksResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListStacks(request), context);
}

void CloudFormationClient::ListStacksAsync(const ListStacksRequest& request, const ListStacksResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ CloudFormationClientListStacksAsyncHelper( this, request, handler, context ); } );
}

ListTypeRegistrationsOutcome CloudFormationClient::ListTypeRegistrations(const ListTypeRegistrationsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListTypeRegistrationsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

ListTypeRegistrationsOutcomeCallable CloudFormationClient::ListTypeRegistrationsCallable(const ListTypeRegistrationsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListTypeRegistrationsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListTypeRegistrations(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudFormationClientListTypeRegistrationsAsyncHelper(CloudFormationClient const * const clientThis, const ListTypeRegistrationsRequest& request, const ListTypeRegistrationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListTypeRegistrations(request), context);
}

void CloudFormationClient::ListTypeRegistrationsAsync(const ListTypeRegistrationsRequest& request, const ListTypeRegistrationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ CloudFormationClientListTypeRegistrationsAsyncHelper( this, request, handler, context ); } );
}

ListTypeVersionsOutcome CloudFormationClient::ListTypeVersions(const ListTypeVersionsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListTypeVersionsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

ListTypeVersionsOutcomeCallable CloudFormationClient::ListTypeVersionsCallable(const ListTypeVersionsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListTypeVersionsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListTypeVersions(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudFormationClientListTypeVersionsAsyncHelper(CloudFormationClient const * const clientThis, const ListTypeVersionsRequest& request, const ListTypeVersionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListTypeVersions(request), context);
}

void CloudFormationClient::ListTypeVersionsAsync(const ListTypeVersionsRequest& request, const ListTypeVersionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ CloudFormationClientListTypeVersionsAsyncHelper( this, request, handler, context ); } );
}

ListTypesOutcome CloudFormationClient::ListTypes(const ListTypesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListTypesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

ListTypesOutcomeCallable CloudFormationClient::ListTypesCallable(const ListTypesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListTypesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListTypes(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudFormationClientListTypesAsyncHelper(CloudFormationClient const * const clientThis, const ListTypesRequest& request, const ListTypesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListTypes(request), context);
}

void CloudFormationClient::ListTypesAsync(const ListTypesRequest& request, const ListTypesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ CloudFormationClientListTypesAsyncHelper( this, request, handler, context ); } );
}

PublishTypeOutcome CloudFormationClient::PublishType(const PublishTypeRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return PublishTypeOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

PublishTypeOutcomeCallable CloudFormationClient::PublishTypeCallable(const PublishTypeRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< PublishTypeOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->PublishType(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudFormationClientPublishTypeAsyncHelper(CloudFormationClient const * const clientThis, const PublishTypeRequest& request, const PublishTypeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->PublishType(request), context);
}

void CloudFormationClient::PublishTypeAsync(const PublishTypeRequest& request, const PublishTypeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ CloudFormationClientPublishTypeAsyncHelper( this, request, handler, context ); } );
}

RecordHandlerProgressOutcome CloudFormationClient::RecordHandlerProgress(const RecordHandlerProgressRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return RecordHandlerProgressOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

RecordHandlerProgressOutcomeCallable CloudFormationClient::RecordHandlerProgressCallable(const RecordHandlerProgressRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< RecordHandlerProgressOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->RecordHandlerProgress(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudFormationClientRecordHandlerProgressAsyncHelper(CloudFormationClient const * const clientThis, const RecordHandlerProgressRequest& request, const RecordHandlerProgressResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->RecordHandlerProgress(request), context);
}

void CloudFormationClient::RecordHandlerProgressAsync(const RecordHandlerProgressRequest& request, const RecordHandlerProgressResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ CloudFormationClientRecordHandlerProgressAsyncHelper( this, request, handler, context ); } );
}

RegisterPublisherOutcome CloudFormationClient::RegisterPublisher(const RegisterPublisherRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return RegisterPublisherOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

RegisterPublisherOutcomeCallable CloudFormationClient::RegisterPublisherCallable(const RegisterPublisherRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< RegisterPublisherOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->RegisterPublisher(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudFormationClientRegisterPublisherAsyncHelper(CloudFormationClient const * const clientThis, const RegisterPublisherRequest& request, const RegisterPublisherResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->RegisterPublisher(request), context);
}

void CloudFormationClient::RegisterPublisherAsync(const RegisterPublisherRequest& request, const RegisterPublisherResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ CloudFormationClientRegisterPublisherAsyncHelper( this, request, handler, context ); } );
}

RegisterTypeOutcome CloudFormationClient::RegisterType(const RegisterTypeRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return RegisterTypeOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

RegisterTypeOutcomeCallable CloudFormationClient::RegisterTypeCallable(const RegisterTypeRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< RegisterTypeOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->RegisterType(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudFormationClientRegisterTypeAsyncHelper(CloudFormationClient const * const clientThis, const RegisterTypeRequest& request, const RegisterTypeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->RegisterType(request), context);
}

void CloudFormationClient::RegisterTypeAsync(const RegisterTypeRequest& request, const RegisterTypeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ CloudFormationClientRegisterTypeAsyncHelper( this, request, handler, context ); } );
}

RollbackStackOutcome CloudFormationClient::RollbackStack(const RollbackStackRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return RollbackStackOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

RollbackStackOutcomeCallable CloudFormationClient::RollbackStackCallable(const RollbackStackRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< RollbackStackOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->RollbackStack(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudFormationClientRollbackStackAsyncHelper(CloudFormationClient const * const clientThis, const RollbackStackRequest& request, const RollbackStackResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->RollbackStack(request), context);
}

void CloudFormationClient::RollbackStackAsync(const RollbackStackRequest& request, const RollbackStackResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ CloudFormationClientRollbackStackAsyncHelper( this, request, handler, context ); } );
}

SetStackPolicyOutcome CloudFormationClient::SetStackPolicy(const SetStackPolicyRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return SetStackPolicyOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

SetStackPolicyOutcomeCallable CloudFormationClient::SetStackPolicyCallable(const SetStackPolicyRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< SetStackPolicyOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->SetStackPolicy(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudFormationClientSetStackPolicyAsyncHelper(CloudFormationClient const * const clientThis, const SetStackPolicyRequest& request, const SetStackPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->SetStackPolicy(request), context);
}

void CloudFormationClient::SetStackPolicyAsync(const SetStackPolicyRequest& request, const SetStackPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ CloudFormationClientSetStackPolicyAsyncHelper( this, request, handler, context ); } );
}

SetTypeConfigurationOutcome CloudFormationClient::SetTypeConfiguration(const SetTypeConfigurationRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return SetTypeConfigurationOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

SetTypeConfigurationOutcomeCallable CloudFormationClient::SetTypeConfigurationCallable(const SetTypeConfigurationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< SetTypeConfigurationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->SetTypeConfiguration(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudFormationClientSetTypeConfigurationAsyncHelper(CloudFormationClient const * const clientThis, const SetTypeConfigurationRequest& request, const SetTypeConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->SetTypeConfiguration(request), context);
}

void CloudFormationClient::SetTypeConfigurationAsync(const SetTypeConfigurationRequest& request, const SetTypeConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ CloudFormationClientSetTypeConfigurationAsyncHelper( this, request, handler, context ); } );
}

SetTypeDefaultVersionOutcome CloudFormationClient::SetTypeDefaultVersion(const SetTypeDefaultVersionRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return SetTypeDefaultVersionOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

SetTypeDefaultVersionOutcomeCallable CloudFormationClient::SetTypeDefaultVersionCallable(const SetTypeDefaultVersionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< SetTypeDefaultVersionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->SetTypeDefaultVersion(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudFormationClientSetTypeDefaultVersionAsyncHelper(CloudFormationClient const * const clientThis, const SetTypeDefaultVersionRequest& request, const SetTypeDefaultVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->SetTypeDefaultVersion(request), context);
}

void CloudFormationClient::SetTypeDefaultVersionAsync(const SetTypeDefaultVersionRequest& request, const SetTypeDefaultVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ CloudFormationClientSetTypeDefaultVersionAsyncHelper( this, request, handler, context ); } );
}

SignalResourceOutcome CloudFormationClient::SignalResource(const SignalResourceRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return SignalResourceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

SignalResourceOutcomeCallable CloudFormationClient::SignalResourceCallable(const SignalResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< SignalResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->SignalResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudFormationClientSignalResourceAsyncHelper(CloudFormationClient const * const clientThis, const SignalResourceRequest& request, const SignalResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->SignalResource(request), context);
}

void CloudFormationClient::SignalResourceAsync(const SignalResourceRequest& request, const SignalResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ CloudFormationClientSignalResourceAsyncHelper( this, request, handler, context ); } );
}

StopStackSetOperationOutcome CloudFormationClient::StopStackSetOperation(const StopStackSetOperationRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return StopStackSetOperationOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

StopStackSetOperationOutcomeCallable CloudFormationClient::StopStackSetOperationCallable(const StopStackSetOperationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< StopStackSetOperationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->StopStackSetOperation(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudFormationClientStopStackSetOperationAsyncHelper(CloudFormationClient const * const clientThis, const StopStackSetOperationRequest& request, const StopStackSetOperationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->StopStackSetOperation(request), context);
}

void CloudFormationClient::StopStackSetOperationAsync(const StopStackSetOperationRequest& request, const StopStackSetOperationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ CloudFormationClientStopStackSetOperationAsyncHelper( this, request, handler, context ); } );
}

TestTypeOutcome CloudFormationClient::TestType(const TestTypeRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return TestTypeOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

TestTypeOutcomeCallable CloudFormationClient::TestTypeCallable(const TestTypeRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< TestTypeOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->TestType(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudFormationClientTestTypeAsyncHelper(CloudFormationClient const * const clientThis, const TestTypeRequest& request, const TestTypeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->TestType(request), context);
}

void CloudFormationClient::TestTypeAsync(const TestTypeRequest& request, const TestTypeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ CloudFormationClientTestTypeAsyncHelper( this, request, handler, context ); } );
}

UpdateStackOutcome CloudFormationClient::UpdateStack(const UpdateStackRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return UpdateStackOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

UpdateStackOutcomeCallable CloudFormationClient::UpdateStackCallable(const UpdateStackRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateStackOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateStack(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudFormationClientUpdateStackAsyncHelper(CloudFormationClient const * const clientThis, const UpdateStackRequest& request, const UpdateStackResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdateStack(request), context);
}

void CloudFormationClient::UpdateStackAsync(const UpdateStackRequest& request, const UpdateStackResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ CloudFormationClientUpdateStackAsyncHelper( this, request, handler, context ); } );
}

UpdateStackInstancesOutcome CloudFormationClient::UpdateStackInstances(const UpdateStackInstancesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return UpdateStackInstancesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

UpdateStackInstancesOutcomeCallable CloudFormationClient::UpdateStackInstancesCallable(const UpdateStackInstancesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateStackInstancesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateStackInstances(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudFormationClientUpdateStackInstancesAsyncHelper(CloudFormationClient const * const clientThis, const UpdateStackInstancesRequest& request, const UpdateStackInstancesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdateStackInstances(request), context);
}

void CloudFormationClient::UpdateStackInstancesAsync(const UpdateStackInstancesRequest& request, const UpdateStackInstancesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ CloudFormationClientUpdateStackInstancesAsyncHelper( this, request, handler, context ); } );
}

UpdateStackSetOutcome CloudFormationClient::UpdateStackSet(const UpdateStackSetRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return UpdateStackSetOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

UpdateStackSetOutcomeCallable CloudFormationClient::UpdateStackSetCallable(const UpdateStackSetRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateStackSetOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateStackSet(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudFormationClientUpdateStackSetAsyncHelper(CloudFormationClient const * const clientThis, const UpdateStackSetRequest& request, const UpdateStackSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdateStackSet(request), context);
}

void CloudFormationClient::UpdateStackSetAsync(const UpdateStackSetRequest& request, const UpdateStackSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ CloudFormationClientUpdateStackSetAsyncHelper( this, request, handler, context ); } );
}

UpdateTerminationProtectionOutcome CloudFormationClient::UpdateTerminationProtection(const UpdateTerminationProtectionRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return UpdateTerminationProtectionOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

UpdateTerminationProtectionOutcomeCallable CloudFormationClient::UpdateTerminationProtectionCallable(const UpdateTerminationProtectionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateTerminationProtectionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateTerminationProtection(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudFormationClientUpdateTerminationProtectionAsyncHelper(CloudFormationClient const * const clientThis, const UpdateTerminationProtectionRequest& request, const UpdateTerminationProtectionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdateTerminationProtection(request), context);
}

void CloudFormationClient::UpdateTerminationProtectionAsync(const UpdateTerminationProtectionRequest& request, const UpdateTerminationProtectionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ CloudFormationClientUpdateTerminationProtectionAsyncHelper( this, request, handler, context ); } );
}

ValidateTemplateOutcome CloudFormationClient::ValidateTemplate(const ValidateTemplateRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ValidateTemplateOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

ValidateTemplateOutcomeCallable CloudFormationClient::ValidateTemplateCallable(const ValidateTemplateRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ValidateTemplateOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ValidateTemplate(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudFormationClientValidateTemplateAsyncHelper(CloudFormationClient const * const clientThis, const ValidateTemplateRequest& request, const ValidateTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ValidateTemplate(request), context);
}

void CloudFormationClient::ValidateTemplateAsync(const ValidateTemplateRequest& request, const ValidateTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ CloudFormationClientValidateTemplateAsyncHelper( this, request, handler, context ); } );
}

