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
#include <aws/core/utils/logging/ErrorMacros.h>

#include <aws/cloudformation/CloudFormationClient.h>
#include <aws/cloudformation/CloudFormationErrorMarshaller.h>
#include <aws/cloudformation/CloudFormationEndpointProvider.h>
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
using ResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;


const char* CloudFormationClient::SERVICE_NAME = "cloudformation";
const char* CloudFormationClient::ALLOCATION_TAG = "CloudFormationClient";

CloudFormationClient::CloudFormationClient(const CloudFormation::CloudFormationClientConfiguration& clientConfiguration,
                                           std::shared_ptr<CloudFormationEndpointProviderBase> endpointProvider) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<CloudFormationErrorMarshaller>(ALLOCATION_TAG)),
  m_clientConfiguration(clientConfiguration),
  m_executor(clientConfiguration.executor),
  m_endpointProvider(std::move(endpointProvider))
{
  init(m_clientConfiguration);
}

CloudFormationClient::CloudFormationClient(const AWSCredentials& credentials,
                                           std::shared_ptr<CloudFormationEndpointProviderBase> endpointProvider,
                                           const CloudFormation::CloudFormationClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<CloudFormationErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(std::move(endpointProvider))
{
  init(m_clientConfiguration);
}

CloudFormationClient::CloudFormationClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                           std::shared_ptr<CloudFormationEndpointProviderBase> endpointProvider,
                                           const CloudFormation::CloudFormationClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             credentialsProvider,
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<CloudFormationErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(std::move(endpointProvider))
{
  init(m_clientConfiguration);
}

    /* Legacy constructors due deprecation */
  CloudFormationClient::CloudFormationClient(const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<CloudFormationErrorMarshaller>(ALLOCATION_TAG)),
  m_clientConfiguration(clientConfiguration),
  m_executor(clientConfiguration.executor),
  m_endpointProvider(Aws::MakeShared<CloudFormationEndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

CloudFormationClient::CloudFormationClient(const AWSCredentials& credentials,
                                           const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<CloudFormationErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(Aws::MakeShared<CloudFormationEndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

CloudFormationClient::CloudFormationClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                           const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             credentialsProvider,
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<CloudFormationErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(Aws::MakeShared<CloudFormationEndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

    /* End of legacy constructors due deprecation */
CloudFormationClient::~CloudFormationClient()
{
}

std::shared_ptr<CloudFormationEndpointProviderBase>& CloudFormationClient::accessEndpointProvider()
{
  return m_endpointProvider;
}

void CloudFormationClient::init(const CloudFormation::CloudFormationClientConfiguration& config)
{
  AWSClient::SetServiceClientName("CloudFormation");
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->InitBuiltInParameters(config);
}

void CloudFormationClient::OverrideEndpoint(const Aws::String& endpoint)
{
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->OverrideEndpoint(endpoint);
}

Aws::String CloudFormationClient::ConvertRequestToPresignedUrl(const AmazonSerializableWebServiceRequest& requestToConvert, const char* region) const
{
  if (!m_endpointProvider)
  {
    AWS_LOGSTREAM_ERROR(ALLOCATION_TAG, "Presigned URL generating failed. Endpoint provider is not initialized.");
    return "";
  }
  Aws::Endpoint::EndpointParameters endpointParameters;
  endpointParameters.emplace_back(Aws::Endpoint::EndpointParameter("Region", Aws::String(region)));
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(endpointParameters);
  if (!endpointResolutionOutcome.IsSuccess())
  {
    AWS_LOGSTREAM_ERROR(ALLOCATION_TAG, "Endpoint resolution failed: " << endpointResolutionOutcome.GetError().GetMessage());
    return "";
  }
  Aws::StringStream ss;
  ss << "?" << requestToConvert.SerializePayload();
  endpointResolutionOutcome.GetResult().SetQueryString(ss.str());

  return GeneratePresignedUrl(endpointResolutionOutcome.GetResult().GetURI(), Aws::Http::HttpMethod::HTTP_GET, region, 3600);
}

ActivateTypeOutcome CloudFormationClient::ActivateType(const ActivateTypeRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ActivateType, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ActivateType, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ActivateTypeOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

ActivateTypeOutcomeCallable CloudFormationClient::ActivateTypeCallable(const ActivateTypeRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ActivateTypeOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ActivateType(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudFormationClient::ActivateTypeAsync(const ActivateTypeRequest& request, const ActivateTypeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ActivateType(request), context);
    } );
}

BatchDescribeTypeConfigurationsOutcome CloudFormationClient::BatchDescribeTypeConfigurations(const BatchDescribeTypeConfigurationsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, BatchDescribeTypeConfigurations, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, BatchDescribeTypeConfigurations, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return BatchDescribeTypeConfigurationsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

BatchDescribeTypeConfigurationsOutcomeCallable CloudFormationClient::BatchDescribeTypeConfigurationsCallable(const BatchDescribeTypeConfigurationsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< BatchDescribeTypeConfigurationsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->BatchDescribeTypeConfigurations(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudFormationClient::BatchDescribeTypeConfigurationsAsync(const BatchDescribeTypeConfigurationsRequest& request, const BatchDescribeTypeConfigurationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, BatchDescribeTypeConfigurations(request), context);
    } );
}

CancelUpdateStackOutcome CloudFormationClient::CancelUpdateStack(const CancelUpdateStackRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CancelUpdateStack, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CancelUpdateStack, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return CancelUpdateStackOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

CancelUpdateStackOutcomeCallable CloudFormationClient::CancelUpdateStackCallable(const CancelUpdateStackRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CancelUpdateStackOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CancelUpdateStack(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudFormationClient::CancelUpdateStackAsync(const CancelUpdateStackRequest& request, const CancelUpdateStackResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CancelUpdateStack(request), context);
    } );
}

ContinueUpdateRollbackOutcome CloudFormationClient::ContinueUpdateRollback(const ContinueUpdateRollbackRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ContinueUpdateRollback, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ContinueUpdateRollback, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ContinueUpdateRollbackOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

ContinueUpdateRollbackOutcomeCallable CloudFormationClient::ContinueUpdateRollbackCallable(const ContinueUpdateRollbackRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ContinueUpdateRollbackOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ContinueUpdateRollback(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudFormationClient::ContinueUpdateRollbackAsync(const ContinueUpdateRollbackRequest& request, const ContinueUpdateRollbackResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ContinueUpdateRollback(request), context);
    } );
}

CreateChangeSetOutcome CloudFormationClient::CreateChangeSet(const CreateChangeSetRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateChangeSet, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateChangeSet, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return CreateChangeSetOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

CreateChangeSetOutcomeCallable CloudFormationClient::CreateChangeSetCallable(const CreateChangeSetRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateChangeSetOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateChangeSet(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudFormationClient::CreateChangeSetAsync(const CreateChangeSetRequest& request, const CreateChangeSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreateChangeSet(request), context);
    } );
}

CreateStackOutcome CloudFormationClient::CreateStack(const CreateStackRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateStack, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateStack, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return CreateStackOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

CreateStackOutcomeCallable CloudFormationClient::CreateStackCallable(const CreateStackRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateStackOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateStack(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudFormationClient::CreateStackAsync(const CreateStackRequest& request, const CreateStackResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreateStack(request), context);
    } );
}

CreateStackInstancesOutcome CloudFormationClient::CreateStackInstances(const CreateStackInstancesRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateStackInstances, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateStackInstances, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return CreateStackInstancesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

CreateStackInstancesOutcomeCallable CloudFormationClient::CreateStackInstancesCallable(const CreateStackInstancesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateStackInstancesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateStackInstances(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudFormationClient::CreateStackInstancesAsync(const CreateStackInstancesRequest& request, const CreateStackInstancesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreateStackInstances(request), context);
    } );
}

CreateStackSetOutcome CloudFormationClient::CreateStackSet(const CreateStackSetRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateStackSet, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateStackSet, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return CreateStackSetOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

CreateStackSetOutcomeCallable CloudFormationClient::CreateStackSetCallable(const CreateStackSetRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateStackSetOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateStackSet(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudFormationClient::CreateStackSetAsync(const CreateStackSetRequest& request, const CreateStackSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreateStackSet(request), context);
    } );
}

DeactivateTypeOutcome CloudFormationClient::DeactivateType(const DeactivateTypeRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeactivateType, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeactivateType, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DeactivateTypeOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

DeactivateTypeOutcomeCallable CloudFormationClient::DeactivateTypeCallable(const DeactivateTypeRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeactivateTypeOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeactivateType(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudFormationClient::DeactivateTypeAsync(const DeactivateTypeRequest& request, const DeactivateTypeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeactivateType(request), context);
    } );
}

DeleteChangeSetOutcome CloudFormationClient::DeleteChangeSet(const DeleteChangeSetRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteChangeSet, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteChangeSet, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DeleteChangeSetOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

DeleteChangeSetOutcomeCallable CloudFormationClient::DeleteChangeSetCallable(const DeleteChangeSetRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteChangeSetOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteChangeSet(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudFormationClient::DeleteChangeSetAsync(const DeleteChangeSetRequest& request, const DeleteChangeSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteChangeSet(request), context);
    } );
}

DeleteStackOutcome CloudFormationClient::DeleteStack(const DeleteStackRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteStack, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteStack, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DeleteStackOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

DeleteStackOutcomeCallable CloudFormationClient::DeleteStackCallable(const DeleteStackRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteStackOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteStack(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudFormationClient::DeleteStackAsync(const DeleteStackRequest& request, const DeleteStackResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteStack(request), context);
    } );
}

DeleteStackInstancesOutcome CloudFormationClient::DeleteStackInstances(const DeleteStackInstancesRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteStackInstances, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteStackInstances, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DeleteStackInstancesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

DeleteStackInstancesOutcomeCallable CloudFormationClient::DeleteStackInstancesCallable(const DeleteStackInstancesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteStackInstancesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteStackInstances(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudFormationClient::DeleteStackInstancesAsync(const DeleteStackInstancesRequest& request, const DeleteStackInstancesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteStackInstances(request), context);
    } );
}

DeleteStackSetOutcome CloudFormationClient::DeleteStackSet(const DeleteStackSetRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteStackSet, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteStackSet, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DeleteStackSetOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

DeleteStackSetOutcomeCallable CloudFormationClient::DeleteStackSetCallable(const DeleteStackSetRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteStackSetOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteStackSet(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudFormationClient::DeleteStackSetAsync(const DeleteStackSetRequest& request, const DeleteStackSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteStackSet(request), context);
    } );
}

DeregisterTypeOutcome CloudFormationClient::DeregisterType(const DeregisterTypeRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeregisterType, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeregisterType, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DeregisterTypeOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

DeregisterTypeOutcomeCallable CloudFormationClient::DeregisterTypeCallable(const DeregisterTypeRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeregisterTypeOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeregisterType(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudFormationClient::DeregisterTypeAsync(const DeregisterTypeRequest& request, const DeregisterTypeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeregisterType(request), context);
    } );
}

DescribeAccountLimitsOutcome CloudFormationClient::DescribeAccountLimits(const DescribeAccountLimitsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeAccountLimits, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeAccountLimits, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeAccountLimitsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

DescribeAccountLimitsOutcomeCallable CloudFormationClient::DescribeAccountLimitsCallable(const DescribeAccountLimitsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeAccountLimitsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeAccountLimits(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudFormationClient::DescribeAccountLimitsAsync(const DescribeAccountLimitsRequest& request, const DescribeAccountLimitsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribeAccountLimits(request), context);
    } );
}

DescribeChangeSetOutcome CloudFormationClient::DescribeChangeSet(const DescribeChangeSetRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeChangeSet, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeChangeSet, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeChangeSetOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

DescribeChangeSetOutcomeCallable CloudFormationClient::DescribeChangeSetCallable(const DescribeChangeSetRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeChangeSetOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeChangeSet(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudFormationClient::DescribeChangeSetAsync(const DescribeChangeSetRequest& request, const DescribeChangeSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribeChangeSet(request), context);
    } );
}

DescribeChangeSetHooksOutcome CloudFormationClient::DescribeChangeSetHooks(const DescribeChangeSetHooksRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeChangeSetHooks, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeChangeSetHooks, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeChangeSetHooksOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

DescribeChangeSetHooksOutcomeCallable CloudFormationClient::DescribeChangeSetHooksCallable(const DescribeChangeSetHooksRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeChangeSetHooksOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeChangeSetHooks(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudFormationClient::DescribeChangeSetHooksAsync(const DescribeChangeSetHooksRequest& request, const DescribeChangeSetHooksResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribeChangeSetHooks(request), context);
    } );
}

DescribePublisherOutcome CloudFormationClient::DescribePublisher(const DescribePublisherRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribePublisher, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribePublisher, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribePublisherOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

DescribePublisherOutcomeCallable CloudFormationClient::DescribePublisherCallable(const DescribePublisherRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribePublisherOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribePublisher(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudFormationClient::DescribePublisherAsync(const DescribePublisherRequest& request, const DescribePublisherResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribePublisher(request), context);
    } );
}

DescribeStackDriftDetectionStatusOutcome CloudFormationClient::DescribeStackDriftDetectionStatus(const DescribeStackDriftDetectionStatusRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeStackDriftDetectionStatus, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeStackDriftDetectionStatus, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeStackDriftDetectionStatusOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

DescribeStackDriftDetectionStatusOutcomeCallable CloudFormationClient::DescribeStackDriftDetectionStatusCallable(const DescribeStackDriftDetectionStatusRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeStackDriftDetectionStatusOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeStackDriftDetectionStatus(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudFormationClient::DescribeStackDriftDetectionStatusAsync(const DescribeStackDriftDetectionStatusRequest& request, const DescribeStackDriftDetectionStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribeStackDriftDetectionStatus(request), context);
    } );
}

DescribeStackEventsOutcome CloudFormationClient::DescribeStackEvents(const DescribeStackEventsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeStackEvents, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeStackEvents, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeStackEventsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

DescribeStackEventsOutcomeCallable CloudFormationClient::DescribeStackEventsCallable(const DescribeStackEventsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeStackEventsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeStackEvents(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudFormationClient::DescribeStackEventsAsync(const DescribeStackEventsRequest& request, const DescribeStackEventsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribeStackEvents(request), context);
    } );
}

DescribeStackInstanceOutcome CloudFormationClient::DescribeStackInstance(const DescribeStackInstanceRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeStackInstance, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeStackInstance, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeStackInstanceOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

DescribeStackInstanceOutcomeCallable CloudFormationClient::DescribeStackInstanceCallable(const DescribeStackInstanceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeStackInstanceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeStackInstance(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudFormationClient::DescribeStackInstanceAsync(const DescribeStackInstanceRequest& request, const DescribeStackInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribeStackInstance(request), context);
    } );
}

DescribeStackResourceOutcome CloudFormationClient::DescribeStackResource(const DescribeStackResourceRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeStackResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeStackResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeStackResourceOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

DescribeStackResourceOutcomeCallable CloudFormationClient::DescribeStackResourceCallable(const DescribeStackResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeStackResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeStackResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudFormationClient::DescribeStackResourceAsync(const DescribeStackResourceRequest& request, const DescribeStackResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribeStackResource(request), context);
    } );
}

DescribeStackResourceDriftsOutcome CloudFormationClient::DescribeStackResourceDrifts(const DescribeStackResourceDriftsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeStackResourceDrifts, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeStackResourceDrifts, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeStackResourceDriftsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

DescribeStackResourceDriftsOutcomeCallable CloudFormationClient::DescribeStackResourceDriftsCallable(const DescribeStackResourceDriftsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeStackResourceDriftsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeStackResourceDrifts(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudFormationClient::DescribeStackResourceDriftsAsync(const DescribeStackResourceDriftsRequest& request, const DescribeStackResourceDriftsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribeStackResourceDrifts(request), context);
    } );
}

DescribeStackResourcesOutcome CloudFormationClient::DescribeStackResources(const DescribeStackResourcesRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeStackResources, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeStackResources, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeStackResourcesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

DescribeStackResourcesOutcomeCallable CloudFormationClient::DescribeStackResourcesCallable(const DescribeStackResourcesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeStackResourcesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeStackResources(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudFormationClient::DescribeStackResourcesAsync(const DescribeStackResourcesRequest& request, const DescribeStackResourcesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribeStackResources(request), context);
    } );
}

DescribeStackSetOutcome CloudFormationClient::DescribeStackSet(const DescribeStackSetRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeStackSet, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeStackSet, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeStackSetOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

DescribeStackSetOutcomeCallable CloudFormationClient::DescribeStackSetCallable(const DescribeStackSetRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeStackSetOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeStackSet(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudFormationClient::DescribeStackSetAsync(const DescribeStackSetRequest& request, const DescribeStackSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribeStackSet(request), context);
    } );
}

DescribeStackSetOperationOutcome CloudFormationClient::DescribeStackSetOperation(const DescribeStackSetOperationRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeStackSetOperation, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeStackSetOperation, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeStackSetOperationOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

DescribeStackSetOperationOutcomeCallable CloudFormationClient::DescribeStackSetOperationCallable(const DescribeStackSetOperationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeStackSetOperationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeStackSetOperation(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudFormationClient::DescribeStackSetOperationAsync(const DescribeStackSetOperationRequest& request, const DescribeStackSetOperationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribeStackSetOperation(request), context);
    } );
}

DescribeStacksOutcome CloudFormationClient::DescribeStacks(const DescribeStacksRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeStacks, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeStacks, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeStacksOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

DescribeStacksOutcomeCallable CloudFormationClient::DescribeStacksCallable(const DescribeStacksRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeStacksOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeStacks(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudFormationClient::DescribeStacksAsync(const DescribeStacksRequest& request, const DescribeStacksResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribeStacks(request), context);
    } );
}

DescribeTypeOutcome CloudFormationClient::DescribeType(const DescribeTypeRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeType, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeType, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeTypeOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

DescribeTypeOutcomeCallable CloudFormationClient::DescribeTypeCallable(const DescribeTypeRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeTypeOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeType(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudFormationClient::DescribeTypeAsync(const DescribeTypeRequest& request, const DescribeTypeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribeType(request), context);
    } );
}

DescribeTypeRegistrationOutcome CloudFormationClient::DescribeTypeRegistration(const DescribeTypeRegistrationRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeTypeRegistration, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeTypeRegistration, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeTypeRegistrationOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

DescribeTypeRegistrationOutcomeCallable CloudFormationClient::DescribeTypeRegistrationCallable(const DescribeTypeRegistrationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeTypeRegistrationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeTypeRegistration(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudFormationClient::DescribeTypeRegistrationAsync(const DescribeTypeRegistrationRequest& request, const DescribeTypeRegistrationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribeTypeRegistration(request), context);
    } );
}

DetectStackDriftOutcome CloudFormationClient::DetectStackDrift(const DetectStackDriftRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DetectStackDrift, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DetectStackDrift, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DetectStackDriftOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

DetectStackDriftOutcomeCallable CloudFormationClient::DetectStackDriftCallable(const DetectStackDriftRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DetectStackDriftOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DetectStackDrift(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudFormationClient::DetectStackDriftAsync(const DetectStackDriftRequest& request, const DetectStackDriftResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DetectStackDrift(request), context);
    } );
}

DetectStackResourceDriftOutcome CloudFormationClient::DetectStackResourceDrift(const DetectStackResourceDriftRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DetectStackResourceDrift, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DetectStackResourceDrift, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DetectStackResourceDriftOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

DetectStackResourceDriftOutcomeCallable CloudFormationClient::DetectStackResourceDriftCallable(const DetectStackResourceDriftRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DetectStackResourceDriftOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DetectStackResourceDrift(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudFormationClient::DetectStackResourceDriftAsync(const DetectStackResourceDriftRequest& request, const DetectStackResourceDriftResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DetectStackResourceDrift(request), context);
    } );
}

DetectStackSetDriftOutcome CloudFormationClient::DetectStackSetDrift(const DetectStackSetDriftRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DetectStackSetDrift, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DetectStackSetDrift, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DetectStackSetDriftOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

DetectStackSetDriftOutcomeCallable CloudFormationClient::DetectStackSetDriftCallable(const DetectStackSetDriftRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DetectStackSetDriftOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DetectStackSetDrift(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudFormationClient::DetectStackSetDriftAsync(const DetectStackSetDriftRequest& request, const DetectStackSetDriftResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DetectStackSetDrift(request), context);
    } );
}

EstimateTemplateCostOutcome CloudFormationClient::EstimateTemplateCost(const EstimateTemplateCostRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, EstimateTemplateCost, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, EstimateTemplateCost, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return EstimateTemplateCostOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

EstimateTemplateCostOutcomeCallable CloudFormationClient::EstimateTemplateCostCallable(const EstimateTemplateCostRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< EstimateTemplateCostOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->EstimateTemplateCost(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudFormationClient::EstimateTemplateCostAsync(const EstimateTemplateCostRequest& request, const EstimateTemplateCostResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, EstimateTemplateCost(request), context);
    } );
}

ExecuteChangeSetOutcome CloudFormationClient::ExecuteChangeSet(const ExecuteChangeSetRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ExecuteChangeSet, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ExecuteChangeSet, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ExecuteChangeSetOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

ExecuteChangeSetOutcomeCallable CloudFormationClient::ExecuteChangeSetCallable(const ExecuteChangeSetRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ExecuteChangeSetOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ExecuteChangeSet(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudFormationClient::ExecuteChangeSetAsync(const ExecuteChangeSetRequest& request, const ExecuteChangeSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ExecuteChangeSet(request), context);
    } );
}

GetStackPolicyOutcome CloudFormationClient::GetStackPolicy(const GetStackPolicyRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetStackPolicy, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetStackPolicy, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return GetStackPolicyOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

GetStackPolicyOutcomeCallable CloudFormationClient::GetStackPolicyCallable(const GetStackPolicyRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetStackPolicyOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetStackPolicy(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudFormationClient::GetStackPolicyAsync(const GetStackPolicyRequest& request, const GetStackPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetStackPolicy(request), context);
    } );
}

GetTemplateOutcome CloudFormationClient::GetTemplate(const GetTemplateRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetTemplate, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetTemplate, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return GetTemplateOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

GetTemplateOutcomeCallable CloudFormationClient::GetTemplateCallable(const GetTemplateRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetTemplateOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetTemplate(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudFormationClient::GetTemplateAsync(const GetTemplateRequest& request, const GetTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetTemplate(request), context);
    } );
}

GetTemplateSummaryOutcome CloudFormationClient::GetTemplateSummary(const GetTemplateSummaryRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetTemplateSummary, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetTemplateSummary, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return GetTemplateSummaryOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

GetTemplateSummaryOutcomeCallable CloudFormationClient::GetTemplateSummaryCallable(const GetTemplateSummaryRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetTemplateSummaryOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetTemplateSummary(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudFormationClient::GetTemplateSummaryAsync(const GetTemplateSummaryRequest& request, const GetTemplateSummaryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetTemplateSummary(request), context);
    } );
}

ImportStacksToStackSetOutcome CloudFormationClient::ImportStacksToStackSet(const ImportStacksToStackSetRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ImportStacksToStackSet, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ImportStacksToStackSet, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ImportStacksToStackSetOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

ImportStacksToStackSetOutcomeCallable CloudFormationClient::ImportStacksToStackSetCallable(const ImportStacksToStackSetRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ImportStacksToStackSetOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ImportStacksToStackSet(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudFormationClient::ImportStacksToStackSetAsync(const ImportStacksToStackSetRequest& request, const ImportStacksToStackSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ImportStacksToStackSet(request), context);
    } );
}

ListChangeSetsOutcome CloudFormationClient::ListChangeSets(const ListChangeSetsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListChangeSets, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListChangeSets, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ListChangeSetsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

ListChangeSetsOutcomeCallable CloudFormationClient::ListChangeSetsCallable(const ListChangeSetsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListChangeSetsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListChangeSets(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudFormationClient::ListChangeSetsAsync(const ListChangeSetsRequest& request, const ListChangeSetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListChangeSets(request), context);
    } );
}

ListExportsOutcome CloudFormationClient::ListExports(const ListExportsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListExports, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListExports, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ListExportsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

ListExportsOutcomeCallable CloudFormationClient::ListExportsCallable(const ListExportsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListExportsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListExports(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudFormationClient::ListExportsAsync(const ListExportsRequest& request, const ListExportsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListExports(request), context);
    } );
}

ListImportsOutcome CloudFormationClient::ListImports(const ListImportsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListImports, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListImports, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ListImportsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

ListImportsOutcomeCallable CloudFormationClient::ListImportsCallable(const ListImportsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListImportsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListImports(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudFormationClient::ListImportsAsync(const ListImportsRequest& request, const ListImportsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListImports(request), context);
    } );
}

ListStackInstancesOutcome CloudFormationClient::ListStackInstances(const ListStackInstancesRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListStackInstances, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListStackInstances, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ListStackInstancesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

ListStackInstancesOutcomeCallable CloudFormationClient::ListStackInstancesCallable(const ListStackInstancesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListStackInstancesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListStackInstances(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudFormationClient::ListStackInstancesAsync(const ListStackInstancesRequest& request, const ListStackInstancesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListStackInstances(request), context);
    } );
}

ListStackResourcesOutcome CloudFormationClient::ListStackResources(const ListStackResourcesRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListStackResources, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListStackResources, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ListStackResourcesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

ListStackResourcesOutcomeCallable CloudFormationClient::ListStackResourcesCallable(const ListStackResourcesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListStackResourcesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListStackResources(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudFormationClient::ListStackResourcesAsync(const ListStackResourcesRequest& request, const ListStackResourcesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListStackResources(request), context);
    } );
}

ListStackSetOperationResultsOutcome CloudFormationClient::ListStackSetOperationResults(const ListStackSetOperationResultsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListStackSetOperationResults, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListStackSetOperationResults, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ListStackSetOperationResultsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

ListStackSetOperationResultsOutcomeCallable CloudFormationClient::ListStackSetOperationResultsCallable(const ListStackSetOperationResultsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListStackSetOperationResultsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListStackSetOperationResults(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudFormationClient::ListStackSetOperationResultsAsync(const ListStackSetOperationResultsRequest& request, const ListStackSetOperationResultsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListStackSetOperationResults(request), context);
    } );
}

ListStackSetOperationsOutcome CloudFormationClient::ListStackSetOperations(const ListStackSetOperationsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListStackSetOperations, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListStackSetOperations, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ListStackSetOperationsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

ListStackSetOperationsOutcomeCallable CloudFormationClient::ListStackSetOperationsCallable(const ListStackSetOperationsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListStackSetOperationsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListStackSetOperations(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudFormationClient::ListStackSetOperationsAsync(const ListStackSetOperationsRequest& request, const ListStackSetOperationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListStackSetOperations(request), context);
    } );
}

ListStackSetsOutcome CloudFormationClient::ListStackSets(const ListStackSetsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListStackSets, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListStackSets, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ListStackSetsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

ListStackSetsOutcomeCallable CloudFormationClient::ListStackSetsCallable(const ListStackSetsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListStackSetsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListStackSets(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudFormationClient::ListStackSetsAsync(const ListStackSetsRequest& request, const ListStackSetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListStackSets(request), context);
    } );
}

ListStacksOutcome CloudFormationClient::ListStacks(const ListStacksRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListStacks, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListStacks, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ListStacksOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

ListStacksOutcomeCallable CloudFormationClient::ListStacksCallable(const ListStacksRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListStacksOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListStacks(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudFormationClient::ListStacksAsync(const ListStacksRequest& request, const ListStacksResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListStacks(request), context);
    } );
}

ListTypeRegistrationsOutcome CloudFormationClient::ListTypeRegistrations(const ListTypeRegistrationsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListTypeRegistrations, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListTypeRegistrations, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ListTypeRegistrationsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

ListTypeRegistrationsOutcomeCallable CloudFormationClient::ListTypeRegistrationsCallable(const ListTypeRegistrationsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListTypeRegistrationsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListTypeRegistrations(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudFormationClient::ListTypeRegistrationsAsync(const ListTypeRegistrationsRequest& request, const ListTypeRegistrationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListTypeRegistrations(request), context);
    } );
}

ListTypeVersionsOutcome CloudFormationClient::ListTypeVersions(const ListTypeVersionsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListTypeVersions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListTypeVersions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ListTypeVersionsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

ListTypeVersionsOutcomeCallable CloudFormationClient::ListTypeVersionsCallable(const ListTypeVersionsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListTypeVersionsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListTypeVersions(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudFormationClient::ListTypeVersionsAsync(const ListTypeVersionsRequest& request, const ListTypeVersionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListTypeVersions(request), context);
    } );
}

ListTypesOutcome CloudFormationClient::ListTypes(const ListTypesRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListTypes, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListTypes, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ListTypesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

ListTypesOutcomeCallable CloudFormationClient::ListTypesCallable(const ListTypesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListTypesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListTypes(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudFormationClient::ListTypesAsync(const ListTypesRequest& request, const ListTypesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListTypes(request), context);
    } );
}

PublishTypeOutcome CloudFormationClient::PublishType(const PublishTypeRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, PublishType, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, PublishType, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return PublishTypeOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

PublishTypeOutcomeCallable CloudFormationClient::PublishTypeCallable(const PublishTypeRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< PublishTypeOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->PublishType(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudFormationClient::PublishTypeAsync(const PublishTypeRequest& request, const PublishTypeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, PublishType(request), context);
    } );
}

RecordHandlerProgressOutcome CloudFormationClient::RecordHandlerProgress(const RecordHandlerProgressRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, RecordHandlerProgress, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, RecordHandlerProgress, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return RecordHandlerProgressOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

RecordHandlerProgressOutcomeCallable CloudFormationClient::RecordHandlerProgressCallable(const RecordHandlerProgressRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< RecordHandlerProgressOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->RecordHandlerProgress(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudFormationClient::RecordHandlerProgressAsync(const RecordHandlerProgressRequest& request, const RecordHandlerProgressResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, RecordHandlerProgress(request), context);
    } );
}

RegisterPublisherOutcome CloudFormationClient::RegisterPublisher(const RegisterPublisherRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, RegisterPublisher, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, RegisterPublisher, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return RegisterPublisherOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

RegisterPublisherOutcomeCallable CloudFormationClient::RegisterPublisherCallable(const RegisterPublisherRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< RegisterPublisherOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->RegisterPublisher(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudFormationClient::RegisterPublisherAsync(const RegisterPublisherRequest& request, const RegisterPublisherResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, RegisterPublisher(request), context);
    } );
}

RegisterTypeOutcome CloudFormationClient::RegisterType(const RegisterTypeRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, RegisterType, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, RegisterType, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return RegisterTypeOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

RegisterTypeOutcomeCallable CloudFormationClient::RegisterTypeCallable(const RegisterTypeRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< RegisterTypeOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->RegisterType(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudFormationClient::RegisterTypeAsync(const RegisterTypeRequest& request, const RegisterTypeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, RegisterType(request), context);
    } );
}

RollbackStackOutcome CloudFormationClient::RollbackStack(const RollbackStackRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, RollbackStack, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, RollbackStack, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return RollbackStackOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

RollbackStackOutcomeCallable CloudFormationClient::RollbackStackCallable(const RollbackStackRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< RollbackStackOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->RollbackStack(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudFormationClient::RollbackStackAsync(const RollbackStackRequest& request, const RollbackStackResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, RollbackStack(request), context);
    } );
}

SetStackPolicyOutcome CloudFormationClient::SetStackPolicy(const SetStackPolicyRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, SetStackPolicy, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, SetStackPolicy, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return SetStackPolicyOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

SetStackPolicyOutcomeCallable CloudFormationClient::SetStackPolicyCallable(const SetStackPolicyRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< SetStackPolicyOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->SetStackPolicy(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudFormationClient::SetStackPolicyAsync(const SetStackPolicyRequest& request, const SetStackPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, SetStackPolicy(request), context);
    } );
}

SetTypeConfigurationOutcome CloudFormationClient::SetTypeConfiguration(const SetTypeConfigurationRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, SetTypeConfiguration, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, SetTypeConfiguration, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return SetTypeConfigurationOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

SetTypeConfigurationOutcomeCallable CloudFormationClient::SetTypeConfigurationCallable(const SetTypeConfigurationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< SetTypeConfigurationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->SetTypeConfiguration(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudFormationClient::SetTypeConfigurationAsync(const SetTypeConfigurationRequest& request, const SetTypeConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, SetTypeConfiguration(request), context);
    } );
}

SetTypeDefaultVersionOutcome CloudFormationClient::SetTypeDefaultVersion(const SetTypeDefaultVersionRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, SetTypeDefaultVersion, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, SetTypeDefaultVersion, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return SetTypeDefaultVersionOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

SetTypeDefaultVersionOutcomeCallable CloudFormationClient::SetTypeDefaultVersionCallable(const SetTypeDefaultVersionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< SetTypeDefaultVersionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->SetTypeDefaultVersion(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudFormationClient::SetTypeDefaultVersionAsync(const SetTypeDefaultVersionRequest& request, const SetTypeDefaultVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, SetTypeDefaultVersion(request), context);
    } );
}

SignalResourceOutcome CloudFormationClient::SignalResource(const SignalResourceRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, SignalResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, SignalResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return SignalResourceOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

SignalResourceOutcomeCallable CloudFormationClient::SignalResourceCallable(const SignalResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< SignalResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->SignalResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudFormationClient::SignalResourceAsync(const SignalResourceRequest& request, const SignalResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, SignalResource(request), context);
    } );
}

StopStackSetOperationOutcome CloudFormationClient::StopStackSetOperation(const StopStackSetOperationRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, StopStackSetOperation, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, StopStackSetOperation, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return StopStackSetOperationOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

StopStackSetOperationOutcomeCallable CloudFormationClient::StopStackSetOperationCallable(const StopStackSetOperationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< StopStackSetOperationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->StopStackSetOperation(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudFormationClient::StopStackSetOperationAsync(const StopStackSetOperationRequest& request, const StopStackSetOperationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, StopStackSetOperation(request), context);
    } );
}

TestTypeOutcome CloudFormationClient::TestType(const TestTypeRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, TestType, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, TestType, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return TestTypeOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

TestTypeOutcomeCallable CloudFormationClient::TestTypeCallable(const TestTypeRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< TestTypeOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->TestType(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudFormationClient::TestTypeAsync(const TestTypeRequest& request, const TestTypeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, TestType(request), context);
    } );
}

UpdateStackOutcome CloudFormationClient::UpdateStack(const UpdateStackRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateStack, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateStack, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return UpdateStackOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

UpdateStackOutcomeCallable CloudFormationClient::UpdateStackCallable(const UpdateStackRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateStackOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateStack(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudFormationClient::UpdateStackAsync(const UpdateStackRequest& request, const UpdateStackResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, UpdateStack(request), context);
    } );
}

UpdateStackInstancesOutcome CloudFormationClient::UpdateStackInstances(const UpdateStackInstancesRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateStackInstances, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateStackInstances, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return UpdateStackInstancesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

UpdateStackInstancesOutcomeCallable CloudFormationClient::UpdateStackInstancesCallable(const UpdateStackInstancesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateStackInstancesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateStackInstances(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudFormationClient::UpdateStackInstancesAsync(const UpdateStackInstancesRequest& request, const UpdateStackInstancesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, UpdateStackInstances(request), context);
    } );
}

UpdateStackSetOutcome CloudFormationClient::UpdateStackSet(const UpdateStackSetRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateStackSet, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateStackSet, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return UpdateStackSetOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

UpdateStackSetOutcomeCallable CloudFormationClient::UpdateStackSetCallable(const UpdateStackSetRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateStackSetOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateStackSet(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudFormationClient::UpdateStackSetAsync(const UpdateStackSetRequest& request, const UpdateStackSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, UpdateStackSet(request), context);
    } );
}

UpdateTerminationProtectionOutcome CloudFormationClient::UpdateTerminationProtection(const UpdateTerminationProtectionRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateTerminationProtection, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateTerminationProtection, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return UpdateTerminationProtectionOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

UpdateTerminationProtectionOutcomeCallable CloudFormationClient::UpdateTerminationProtectionCallable(const UpdateTerminationProtectionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateTerminationProtectionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateTerminationProtection(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudFormationClient::UpdateTerminationProtectionAsync(const UpdateTerminationProtectionRequest& request, const UpdateTerminationProtectionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, UpdateTerminationProtection(request), context);
    } );
}

ValidateTemplateOutcome CloudFormationClient::ValidateTemplate(const ValidateTemplateRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ValidateTemplate, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ValidateTemplate, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ValidateTemplateOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

ValidateTemplateOutcomeCallable CloudFormationClient::ValidateTemplateCallable(const ValidateTemplateRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ValidateTemplateOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ValidateTemplate(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudFormationClient::ValidateTemplateAsync(const ValidateTemplateRequest& request, const ValidateTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ValidateTemplate(request), context);
    } );
}

