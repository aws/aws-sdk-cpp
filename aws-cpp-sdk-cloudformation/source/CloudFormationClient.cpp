/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
#include <aws/cloudformation/model/CancelUpdateStackRequest.h>
#include <aws/cloudformation/model/ContinueUpdateRollbackRequest.h>
#include <aws/cloudformation/model/CreateChangeSetRequest.h>
#include <aws/cloudformation/model/CreateStackRequest.h>
#include <aws/cloudformation/model/CreateStackInstancesRequest.h>
#include <aws/cloudformation/model/CreateStackSetRequest.h>
#include <aws/cloudformation/model/DeleteChangeSetRequest.h>
#include <aws/cloudformation/model/DeleteStackRequest.h>
#include <aws/cloudformation/model/DeleteStackInstancesRequest.h>
#include <aws/cloudformation/model/DeleteStackSetRequest.h>
#include <aws/cloudformation/model/DescribeAccountLimitsRequest.h>
#include <aws/cloudformation/model/DescribeChangeSetRequest.h>
#include <aws/cloudformation/model/DescribeStackDriftDetectionStatusRequest.h>
#include <aws/cloudformation/model/DescribeStackEventsRequest.h>
#include <aws/cloudformation/model/DescribeStackInstanceRequest.h>
#include <aws/cloudformation/model/DescribeStackResourceRequest.h>
#include <aws/cloudformation/model/DescribeStackResourceDriftsRequest.h>
#include <aws/cloudformation/model/DescribeStackResourcesRequest.h>
#include <aws/cloudformation/model/DescribeStackSetRequest.h>
#include <aws/cloudformation/model/DescribeStackSetOperationRequest.h>
#include <aws/cloudformation/model/DescribeStacksRequest.h>
#include <aws/cloudformation/model/DetectStackDriftRequest.h>
#include <aws/cloudformation/model/DetectStackResourceDriftRequest.h>
#include <aws/cloudformation/model/EstimateTemplateCostRequest.h>
#include <aws/cloudformation/model/ExecuteChangeSetRequest.h>
#include <aws/cloudformation/model/GetStackPolicyRequest.h>
#include <aws/cloudformation/model/GetTemplateRequest.h>
#include <aws/cloudformation/model/GetTemplateSummaryRequest.h>
#include <aws/cloudformation/model/ListChangeSetsRequest.h>
#include <aws/cloudformation/model/ListExportsRequest.h>
#include <aws/cloudformation/model/ListImportsRequest.h>
#include <aws/cloudformation/model/ListStackInstancesRequest.h>
#include <aws/cloudformation/model/ListStackResourcesRequest.h>
#include <aws/cloudformation/model/ListStackSetOperationResultsRequest.h>
#include <aws/cloudformation/model/ListStackSetOperationsRequest.h>
#include <aws/cloudformation/model/ListStackSetsRequest.h>
#include <aws/cloudformation/model/ListStacksRequest.h>
#include <aws/cloudformation/model/SetStackPolicyRequest.h>
#include <aws/cloudformation/model/SignalResourceRequest.h>
#include <aws/cloudformation/model/StopStackSetOperationRequest.h>
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
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
        SERVICE_NAME, clientConfiguration.region),
    Aws::MakeShared<CloudFormationErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

CloudFormationClient::CloudFormationClient(const AWSCredentials& credentials, const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
         SERVICE_NAME, clientConfiguration.region),
    Aws::MakeShared<CloudFormationErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

CloudFormationClient::CloudFormationClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
  const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider,
         SERVICE_NAME, clientConfiguration.region),
    Aws::MakeShared<CloudFormationErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

CloudFormationClient::~CloudFormationClient()
{
}

void CloudFormationClient::init(const ClientConfiguration& config)
{
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
  return GeneratePresignedUrl(uri, HttpMethod::HTTP_GET, region, 3600);
}

CancelUpdateStackOutcome CloudFormationClient::CancelUpdateStack(const CancelUpdateStackRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return CancelUpdateStackOutcome(NoResult());
  }
  else
  {
    return CancelUpdateStackOutcome(outcome.GetError());
  }
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
  m_executor->Submit( [this, request, handler, context](){ this->CancelUpdateStackAsyncHelper( request, handler, context ); } );
}

void CloudFormationClient::CancelUpdateStackAsyncHelper(const CancelUpdateStackRequest& request, const CancelUpdateStackResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CancelUpdateStack(request), context);
}

ContinueUpdateRollbackOutcome CloudFormationClient::ContinueUpdateRollback(const ContinueUpdateRollbackRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return ContinueUpdateRollbackOutcome(ContinueUpdateRollbackResult(outcome.GetResult()));
  }
  else
  {
    return ContinueUpdateRollbackOutcome(outcome.GetError());
  }
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
  m_executor->Submit( [this, request, handler, context](){ this->ContinueUpdateRollbackAsyncHelper( request, handler, context ); } );
}

void CloudFormationClient::ContinueUpdateRollbackAsyncHelper(const ContinueUpdateRollbackRequest& request, const ContinueUpdateRollbackResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ContinueUpdateRollback(request), context);
}

CreateChangeSetOutcome CloudFormationClient::CreateChangeSet(const CreateChangeSetRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return CreateChangeSetOutcome(CreateChangeSetResult(outcome.GetResult()));
  }
  else
  {
    return CreateChangeSetOutcome(outcome.GetError());
  }
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
  m_executor->Submit( [this, request, handler, context](){ this->CreateChangeSetAsyncHelper( request, handler, context ); } );
}

void CloudFormationClient::CreateChangeSetAsyncHelper(const CreateChangeSetRequest& request, const CreateChangeSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateChangeSet(request), context);
}

CreateStackOutcome CloudFormationClient::CreateStack(const CreateStackRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return CreateStackOutcome(CreateStackResult(outcome.GetResult()));
  }
  else
  {
    return CreateStackOutcome(outcome.GetError());
  }
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
  m_executor->Submit( [this, request, handler, context](){ this->CreateStackAsyncHelper( request, handler, context ); } );
}

void CloudFormationClient::CreateStackAsyncHelper(const CreateStackRequest& request, const CreateStackResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateStack(request), context);
}

CreateStackInstancesOutcome CloudFormationClient::CreateStackInstances(const CreateStackInstancesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return CreateStackInstancesOutcome(CreateStackInstancesResult(outcome.GetResult()));
  }
  else
  {
    return CreateStackInstancesOutcome(outcome.GetError());
  }
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
  m_executor->Submit( [this, request, handler, context](){ this->CreateStackInstancesAsyncHelper( request, handler, context ); } );
}

void CloudFormationClient::CreateStackInstancesAsyncHelper(const CreateStackInstancesRequest& request, const CreateStackInstancesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateStackInstances(request), context);
}

CreateStackSetOutcome CloudFormationClient::CreateStackSet(const CreateStackSetRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return CreateStackSetOutcome(CreateStackSetResult(outcome.GetResult()));
  }
  else
  {
    return CreateStackSetOutcome(outcome.GetError());
  }
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
  m_executor->Submit( [this, request, handler, context](){ this->CreateStackSetAsyncHelper( request, handler, context ); } );
}

void CloudFormationClient::CreateStackSetAsyncHelper(const CreateStackSetRequest& request, const CreateStackSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateStackSet(request), context);
}

DeleteChangeSetOutcome CloudFormationClient::DeleteChangeSet(const DeleteChangeSetRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return DeleteChangeSetOutcome(DeleteChangeSetResult(outcome.GetResult()));
  }
  else
  {
    return DeleteChangeSetOutcome(outcome.GetError());
  }
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
  m_executor->Submit( [this, request, handler, context](){ this->DeleteChangeSetAsyncHelper( request, handler, context ); } );
}

void CloudFormationClient::DeleteChangeSetAsyncHelper(const DeleteChangeSetRequest& request, const DeleteChangeSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteChangeSet(request), context);
}

DeleteStackOutcome CloudFormationClient::DeleteStack(const DeleteStackRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return DeleteStackOutcome(NoResult());
  }
  else
  {
    return DeleteStackOutcome(outcome.GetError());
  }
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
  m_executor->Submit( [this, request, handler, context](){ this->DeleteStackAsyncHelper( request, handler, context ); } );
}

void CloudFormationClient::DeleteStackAsyncHelper(const DeleteStackRequest& request, const DeleteStackResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteStack(request), context);
}

DeleteStackInstancesOutcome CloudFormationClient::DeleteStackInstances(const DeleteStackInstancesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return DeleteStackInstancesOutcome(DeleteStackInstancesResult(outcome.GetResult()));
  }
  else
  {
    return DeleteStackInstancesOutcome(outcome.GetError());
  }
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
  m_executor->Submit( [this, request, handler, context](){ this->DeleteStackInstancesAsyncHelper( request, handler, context ); } );
}

void CloudFormationClient::DeleteStackInstancesAsyncHelper(const DeleteStackInstancesRequest& request, const DeleteStackInstancesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteStackInstances(request), context);
}

DeleteStackSetOutcome CloudFormationClient::DeleteStackSet(const DeleteStackSetRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return DeleteStackSetOutcome(DeleteStackSetResult(outcome.GetResult()));
  }
  else
  {
    return DeleteStackSetOutcome(outcome.GetError());
  }
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
  m_executor->Submit( [this, request, handler, context](){ this->DeleteStackSetAsyncHelper( request, handler, context ); } );
}

void CloudFormationClient::DeleteStackSetAsyncHelper(const DeleteStackSetRequest& request, const DeleteStackSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteStackSet(request), context);
}

DescribeAccountLimitsOutcome CloudFormationClient::DescribeAccountLimits(const DescribeAccountLimitsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return DescribeAccountLimitsOutcome(DescribeAccountLimitsResult(outcome.GetResult()));
  }
  else
  {
    return DescribeAccountLimitsOutcome(outcome.GetError());
  }
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
  m_executor->Submit( [this, request, handler, context](){ this->DescribeAccountLimitsAsyncHelper( request, handler, context ); } );
}

void CloudFormationClient::DescribeAccountLimitsAsyncHelper(const DescribeAccountLimitsRequest& request, const DescribeAccountLimitsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeAccountLimits(request), context);
}

DescribeChangeSetOutcome CloudFormationClient::DescribeChangeSet(const DescribeChangeSetRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return DescribeChangeSetOutcome(DescribeChangeSetResult(outcome.GetResult()));
  }
  else
  {
    return DescribeChangeSetOutcome(outcome.GetError());
  }
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
  m_executor->Submit( [this, request, handler, context](){ this->DescribeChangeSetAsyncHelper( request, handler, context ); } );
}

void CloudFormationClient::DescribeChangeSetAsyncHelper(const DescribeChangeSetRequest& request, const DescribeChangeSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeChangeSet(request), context);
}

DescribeStackDriftDetectionStatusOutcome CloudFormationClient::DescribeStackDriftDetectionStatus(const DescribeStackDriftDetectionStatusRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return DescribeStackDriftDetectionStatusOutcome(DescribeStackDriftDetectionStatusResult(outcome.GetResult()));
  }
  else
  {
    return DescribeStackDriftDetectionStatusOutcome(outcome.GetError());
  }
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
  m_executor->Submit( [this, request, handler, context](){ this->DescribeStackDriftDetectionStatusAsyncHelper( request, handler, context ); } );
}

void CloudFormationClient::DescribeStackDriftDetectionStatusAsyncHelper(const DescribeStackDriftDetectionStatusRequest& request, const DescribeStackDriftDetectionStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeStackDriftDetectionStatus(request), context);
}

DescribeStackEventsOutcome CloudFormationClient::DescribeStackEvents(const DescribeStackEventsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return DescribeStackEventsOutcome(DescribeStackEventsResult(outcome.GetResult()));
  }
  else
  {
    return DescribeStackEventsOutcome(outcome.GetError());
  }
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
  m_executor->Submit( [this, request, handler, context](){ this->DescribeStackEventsAsyncHelper( request, handler, context ); } );
}

void CloudFormationClient::DescribeStackEventsAsyncHelper(const DescribeStackEventsRequest& request, const DescribeStackEventsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeStackEvents(request), context);
}

DescribeStackInstanceOutcome CloudFormationClient::DescribeStackInstance(const DescribeStackInstanceRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return DescribeStackInstanceOutcome(DescribeStackInstanceResult(outcome.GetResult()));
  }
  else
  {
    return DescribeStackInstanceOutcome(outcome.GetError());
  }
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
  m_executor->Submit( [this, request, handler, context](){ this->DescribeStackInstanceAsyncHelper( request, handler, context ); } );
}

void CloudFormationClient::DescribeStackInstanceAsyncHelper(const DescribeStackInstanceRequest& request, const DescribeStackInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeStackInstance(request), context);
}

DescribeStackResourceOutcome CloudFormationClient::DescribeStackResource(const DescribeStackResourceRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return DescribeStackResourceOutcome(DescribeStackResourceResult(outcome.GetResult()));
  }
  else
  {
    return DescribeStackResourceOutcome(outcome.GetError());
  }
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
  m_executor->Submit( [this, request, handler, context](){ this->DescribeStackResourceAsyncHelper( request, handler, context ); } );
}

void CloudFormationClient::DescribeStackResourceAsyncHelper(const DescribeStackResourceRequest& request, const DescribeStackResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeStackResource(request), context);
}

DescribeStackResourceDriftsOutcome CloudFormationClient::DescribeStackResourceDrifts(const DescribeStackResourceDriftsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return DescribeStackResourceDriftsOutcome(DescribeStackResourceDriftsResult(outcome.GetResult()));
  }
  else
  {
    return DescribeStackResourceDriftsOutcome(outcome.GetError());
  }
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
  m_executor->Submit( [this, request, handler, context](){ this->DescribeStackResourceDriftsAsyncHelper( request, handler, context ); } );
}

void CloudFormationClient::DescribeStackResourceDriftsAsyncHelper(const DescribeStackResourceDriftsRequest& request, const DescribeStackResourceDriftsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeStackResourceDrifts(request), context);
}

DescribeStackResourcesOutcome CloudFormationClient::DescribeStackResources(const DescribeStackResourcesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return DescribeStackResourcesOutcome(DescribeStackResourcesResult(outcome.GetResult()));
  }
  else
  {
    return DescribeStackResourcesOutcome(outcome.GetError());
  }
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
  m_executor->Submit( [this, request, handler, context](){ this->DescribeStackResourcesAsyncHelper( request, handler, context ); } );
}

void CloudFormationClient::DescribeStackResourcesAsyncHelper(const DescribeStackResourcesRequest& request, const DescribeStackResourcesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeStackResources(request), context);
}

DescribeStackSetOutcome CloudFormationClient::DescribeStackSet(const DescribeStackSetRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return DescribeStackSetOutcome(DescribeStackSetResult(outcome.GetResult()));
  }
  else
  {
    return DescribeStackSetOutcome(outcome.GetError());
  }
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
  m_executor->Submit( [this, request, handler, context](){ this->DescribeStackSetAsyncHelper( request, handler, context ); } );
}

void CloudFormationClient::DescribeStackSetAsyncHelper(const DescribeStackSetRequest& request, const DescribeStackSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeStackSet(request), context);
}

DescribeStackSetOperationOutcome CloudFormationClient::DescribeStackSetOperation(const DescribeStackSetOperationRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return DescribeStackSetOperationOutcome(DescribeStackSetOperationResult(outcome.GetResult()));
  }
  else
  {
    return DescribeStackSetOperationOutcome(outcome.GetError());
  }
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
  m_executor->Submit( [this, request, handler, context](){ this->DescribeStackSetOperationAsyncHelper( request, handler, context ); } );
}

void CloudFormationClient::DescribeStackSetOperationAsyncHelper(const DescribeStackSetOperationRequest& request, const DescribeStackSetOperationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeStackSetOperation(request), context);
}

DescribeStacksOutcome CloudFormationClient::DescribeStacks(const DescribeStacksRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return DescribeStacksOutcome(DescribeStacksResult(outcome.GetResult()));
  }
  else
  {
    return DescribeStacksOutcome(outcome.GetError());
  }
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
  m_executor->Submit( [this, request, handler, context](){ this->DescribeStacksAsyncHelper( request, handler, context ); } );
}

void CloudFormationClient::DescribeStacksAsyncHelper(const DescribeStacksRequest& request, const DescribeStacksResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeStacks(request), context);
}

DetectStackDriftOutcome CloudFormationClient::DetectStackDrift(const DetectStackDriftRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return DetectStackDriftOutcome(DetectStackDriftResult(outcome.GetResult()));
  }
  else
  {
    return DetectStackDriftOutcome(outcome.GetError());
  }
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
  m_executor->Submit( [this, request, handler, context](){ this->DetectStackDriftAsyncHelper( request, handler, context ); } );
}

void CloudFormationClient::DetectStackDriftAsyncHelper(const DetectStackDriftRequest& request, const DetectStackDriftResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DetectStackDrift(request), context);
}

DetectStackResourceDriftOutcome CloudFormationClient::DetectStackResourceDrift(const DetectStackResourceDriftRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return DetectStackResourceDriftOutcome(DetectStackResourceDriftResult(outcome.GetResult()));
  }
  else
  {
    return DetectStackResourceDriftOutcome(outcome.GetError());
  }
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
  m_executor->Submit( [this, request, handler, context](){ this->DetectStackResourceDriftAsyncHelper( request, handler, context ); } );
}

void CloudFormationClient::DetectStackResourceDriftAsyncHelper(const DetectStackResourceDriftRequest& request, const DetectStackResourceDriftResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DetectStackResourceDrift(request), context);
}

EstimateTemplateCostOutcome CloudFormationClient::EstimateTemplateCost(const EstimateTemplateCostRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return EstimateTemplateCostOutcome(EstimateTemplateCostResult(outcome.GetResult()));
  }
  else
  {
    return EstimateTemplateCostOutcome(outcome.GetError());
  }
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
  m_executor->Submit( [this, request, handler, context](){ this->EstimateTemplateCostAsyncHelper( request, handler, context ); } );
}

void CloudFormationClient::EstimateTemplateCostAsyncHelper(const EstimateTemplateCostRequest& request, const EstimateTemplateCostResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, EstimateTemplateCost(request), context);
}

ExecuteChangeSetOutcome CloudFormationClient::ExecuteChangeSet(const ExecuteChangeSetRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return ExecuteChangeSetOutcome(ExecuteChangeSetResult(outcome.GetResult()));
  }
  else
  {
    return ExecuteChangeSetOutcome(outcome.GetError());
  }
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
  m_executor->Submit( [this, request, handler, context](){ this->ExecuteChangeSetAsyncHelper( request, handler, context ); } );
}

void CloudFormationClient::ExecuteChangeSetAsyncHelper(const ExecuteChangeSetRequest& request, const ExecuteChangeSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ExecuteChangeSet(request), context);
}

GetStackPolicyOutcome CloudFormationClient::GetStackPolicy(const GetStackPolicyRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return GetStackPolicyOutcome(GetStackPolicyResult(outcome.GetResult()));
  }
  else
  {
    return GetStackPolicyOutcome(outcome.GetError());
  }
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
  m_executor->Submit( [this, request, handler, context](){ this->GetStackPolicyAsyncHelper( request, handler, context ); } );
}

void CloudFormationClient::GetStackPolicyAsyncHelper(const GetStackPolicyRequest& request, const GetStackPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetStackPolicy(request), context);
}

GetTemplateOutcome CloudFormationClient::GetTemplate(const GetTemplateRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return GetTemplateOutcome(GetTemplateResult(outcome.GetResult()));
  }
  else
  {
    return GetTemplateOutcome(outcome.GetError());
  }
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
  m_executor->Submit( [this, request, handler, context](){ this->GetTemplateAsyncHelper( request, handler, context ); } );
}

void CloudFormationClient::GetTemplateAsyncHelper(const GetTemplateRequest& request, const GetTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetTemplate(request), context);
}

GetTemplateSummaryOutcome CloudFormationClient::GetTemplateSummary(const GetTemplateSummaryRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return GetTemplateSummaryOutcome(GetTemplateSummaryResult(outcome.GetResult()));
  }
  else
  {
    return GetTemplateSummaryOutcome(outcome.GetError());
  }
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
  m_executor->Submit( [this, request, handler, context](){ this->GetTemplateSummaryAsyncHelper( request, handler, context ); } );
}

void CloudFormationClient::GetTemplateSummaryAsyncHelper(const GetTemplateSummaryRequest& request, const GetTemplateSummaryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetTemplateSummary(request), context);
}

ListChangeSetsOutcome CloudFormationClient::ListChangeSets(const ListChangeSetsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return ListChangeSetsOutcome(ListChangeSetsResult(outcome.GetResult()));
  }
  else
  {
    return ListChangeSetsOutcome(outcome.GetError());
  }
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
  m_executor->Submit( [this, request, handler, context](){ this->ListChangeSetsAsyncHelper( request, handler, context ); } );
}

void CloudFormationClient::ListChangeSetsAsyncHelper(const ListChangeSetsRequest& request, const ListChangeSetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListChangeSets(request), context);
}

ListExportsOutcome CloudFormationClient::ListExports(const ListExportsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return ListExportsOutcome(ListExportsResult(outcome.GetResult()));
  }
  else
  {
    return ListExportsOutcome(outcome.GetError());
  }
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
  m_executor->Submit( [this, request, handler, context](){ this->ListExportsAsyncHelper( request, handler, context ); } );
}

void CloudFormationClient::ListExportsAsyncHelper(const ListExportsRequest& request, const ListExportsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListExports(request), context);
}

ListImportsOutcome CloudFormationClient::ListImports(const ListImportsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return ListImportsOutcome(ListImportsResult(outcome.GetResult()));
  }
  else
  {
    return ListImportsOutcome(outcome.GetError());
  }
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
  m_executor->Submit( [this, request, handler, context](){ this->ListImportsAsyncHelper( request, handler, context ); } );
}

void CloudFormationClient::ListImportsAsyncHelper(const ListImportsRequest& request, const ListImportsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListImports(request), context);
}

ListStackInstancesOutcome CloudFormationClient::ListStackInstances(const ListStackInstancesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return ListStackInstancesOutcome(ListStackInstancesResult(outcome.GetResult()));
  }
  else
  {
    return ListStackInstancesOutcome(outcome.GetError());
  }
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
  m_executor->Submit( [this, request, handler, context](){ this->ListStackInstancesAsyncHelper( request, handler, context ); } );
}

void CloudFormationClient::ListStackInstancesAsyncHelper(const ListStackInstancesRequest& request, const ListStackInstancesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListStackInstances(request), context);
}

ListStackResourcesOutcome CloudFormationClient::ListStackResources(const ListStackResourcesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return ListStackResourcesOutcome(ListStackResourcesResult(outcome.GetResult()));
  }
  else
  {
    return ListStackResourcesOutcome(outcome.GetError());
  }
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
  m_executor->Submit( [this, request, handler, context](){ this->ListStackResourcesAsyncHelper( request, handler, context ); } );
}

void CloudFormationClient::ListStackResourcesAsyncHelper(const ListStackResourcesRequest& request, const ListStackResourcesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListStackResources(request), context);
}

ListStackSetOperationResultsOutcome CloudFormationClient::ListStackSetOperationResults(const ListStackSetOperationResultsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return ListStackSetOperationResultsOutcome(ListStackSetOperationResultsResult(outcome.GetResult()));
  }
  else
  {
    return ListStackSetOperationResultsOutcome(outcome.GetError());
  }
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
  m_executor->Submit( [this, request, handler, context](){ this->ListStackSetOperationResultsAsyncHelper( request, handler, context ); } );
}

void CloudFormationClient::ListStackSetOperationResultsAsyncHelper(const ListStackSetOperationResultsRequest& request, const ListStackSetOperationResultsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListStackSetOperationResults(request), context);
}

ListStackSetOperationsOutcome CloudFormationClient::ListStackSetOperations(const ListStackSetOperationsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return ListStackSetOperationsOutcome(ListStackSetOperationsResult(outcome.GetResult()));
  }
  else
  {
    return ListStackSetOperationsOutcome(outcome.GetError());
  }
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
  m_executor->Submit( [this, request, handler, context](){ this->ListStackSetOperationsAsyncHelper( request, handler, context ); } );
}

void CloudFormationClient::ListStackSetOperationsAsyncHelper(const ListStackSetOperationsRequest& request, const ListStackSetOperationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListStackSetOperations(request), context);
}

ListStackSetsOutcome CloudFormationClient::ListStackSets(const ListStackSetsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return ListStackSetsOutcome(ListStackSetsResult(outcome.GetResult()));
  }
  else
  {
    return ListStackSetsOutcome(outcome.GetError());
  }
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
  m_executor->Submit( [this, request, handler, context](){ this->ListStackSetsAsyncHelper( request, handler, context ); } );
}

void CloudFormationClient::ListStackSetsAsyncHelper(const ListStackSetsRequest& request, const ListStackSetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListStackSets(request), context);
}

ListStacksOutcome CloudFormationClient::ListStacks(const ListStacksRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return ListStacksOutcome(ListStacksResult(outcome.GetResult()));
  }
  else
  {
    return ListStacksOutcome(outcome.GetError());
  }
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
  m_executor->Submit( [this, request, handler, context](){ this->ListStacksAsyncHelper( request, handler, context ); } );
}

void CloudFormationClient::ListStacksAsyncHelper(const ListStacksRequest& request, const ListStacksResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListStacks(request), context);
}

SetStackPolicyOutcome CloudFormationClient::SetStackPolicy(const SetStackPolicyRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return SetStackPolicyOutcome(NoResult());
  }
  else
  {
    return SetStackPolicyOutcome(outcome.GetError());
  }
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
  m_executor->Submit( [this, request, handler, context](){ this->SetStackPolicyAsyncHelper( request, handler, context ); } );
}

void CloudFormationClient::SetStackPolicyAsyncHelper(const SetStackPolicyRequest& request, const SetStackPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, SetStackPolicy(request), context);
}

SignalResourceOutcome CloudFormationClient::SignalResource(const SignalResourceRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return SignalResourceOutcome(NoResult());
  }
  else
  {
    return SignalResourceOutcome(outcome.GetError());
  }
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
  m_executor->Submit( [this, request, handler, context](){ this->SignalResourceAsyncHelper( request, handler, context ); } );
}

void CloudFormationClient::SignalResourceAsyncHelper(const SignalResourceRequest& request, const SignalResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, SignalResource(request), context);
}

StopStackSetOperationOutcome CloudFormationClient::StopStackSetOperation(const StopStackSetOperationRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return StopStackSetOperationOutcome(StopStackSetOperationResult(outcome.GetResult()));
  }
  else
  {
    return StopStackSetOperationOutcome(outcome.GetError());
  }
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
  m_executor->Submit( [this, request, handler, context](){ this->StopStackSetOperationAsyncHelper( request, handler, context ); } );
}

void CloudFormationClient::StopStackSetOperationAsyncHelper(const StopStackSetOperationRequest& request, const StopStackSetOperationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, StopStackSetOperation(request), context);
}

UpdateStackOutcome CloudFormationClient::UpdateStack(const UpdateStackRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return UpdateStackOutcome(UpdateStackResult(outcome.GetResult()));
  }
  else
  {
    return UpdateStackOutcome(outcome.GetError());
  }
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
  m_executor->Submit( [this, request, handler, context](){ this->UpdateStackAsyncHelper( request, handler, context ); } );
}

void CloudFormationClient::UpdateStackAsyncHelper(const UpdateStackRequest& request, const UpdateStackResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateStack(request), context);
}

UpdateStackInstancesOutcome CloudFormationClient::UpdateStackInstances(const UpdateStackInstancesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return UpdateStackInstancesOutcome(UpdateStackInstancesResult(outcome.GetResult()));
  }
  else
  {
    return UpdateStackInstancesOutcome(outcome.GetError());
  }
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
  m_executor->Submit( [this, request, handler, context](){ this->UpdateStackInstancesAsyncHelper( request, handler, context ); } );
}

void CloudFormationClient::UpdateStackInstancesAsyncHelper(const UpdateStackInstancesRequest& request, const UpdateStackInstancesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateStackInstances(request), context);
}

UpdateStackSetOutcome CloudFormationClient::UpdateStackSet(const UpdateStackSetRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return UpdateStackSetOutcome(UpdateStackSetResult(outcome.GetResult()));
  }
  else
  {
    return UpdateStackSetOutcome(outcome.GetError());
  }
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
  m_executor->Submit( [this, request, handler, context](){ this->UpdateStackSetAsyncHelper( request, handler, context ); } );
}

void CloudFormationClient::UpdateStackSetAsyncHelper(const UpdateStackSetRequest& request, const UpdateStackSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateStackSet(request), context);
}

UpdateTerminationProtectionOutcome CloudFormationClient::UpdateTerminationProtection(const UpdateTerminationProtectionRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return UpdateTerminationProtectionOutcome(UpdateTerminationProtectionResult(outcome.GetResult()));
  }
  else
  {
    return UpdateTerminationProtectionOutcome(outcome.GetError());
  }
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
  m_executor->Submit( [this, request, handler, context](){ this->UpdateTerminationProtectionAsyncHelper( request, handler, context ); } );
}

void CloudFormationClient::UpdateTerminationProtectionAsyncHelper(const UpdateTerminationProtectionRequest& request, const UpdateTerminationProtectionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateTerminationProtection(request), context);
}

ValidateTemplateOutcome CloudFormationClient::ValidateTemplate(const ValidateTemplateRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return ValidateTemplateOutcome(ValidateTemplateResult(outcome.GetResult()));
  }
  else
  {
    return ValidateTemplateOutcome(outcome.GetError());
  }
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
  m_executor->Submit( [this, request, handler, context](){ this->ValidateTemplateAsyncHelper( request, handler, context ); } );
}

void CloudFormationClient::ValidateTemplateAsyncHelper(const ValidateTemplateRequest& request, const ValidateTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ValidateTemplate(request), context);
}



