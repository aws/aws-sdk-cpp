/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/cloudformation/CloudFormationClient.h>
#include <aws/cloudformation/CloudFormationEndpoint.h>
#include <aws/cloudformation/CloudFormationErrorMarshaller.h>
#include <aws/cloudformation/model/CancelUpdateStackRequest.h>
#include <aws/cloudformation/model/ContinueUpdateRollbackRequest.h>
#include <aws/cloudformation/model/CreateChangeSetRequest.h>
#include <aws/cloudformation/model/CreateStackRequest.h>
#include <aws/cloudformation/model/DeleteChangeSetRequest.h>
#include <aws/cloudformation/model/DeleteStackRequest.h>
#include <aws/cloudformation/model/DescribeAccountLimitsRequest.h>
#include <aws/cloudformation/model/DescribeChangeSetRequest.h>
#include <aws/cloudformation/model/DescribeStackEventsRequest.h>
#include <aws/cloudformation/model/DescribeStackResourceRequest.h>
#include <aws/cloudformation/model/DescribeStackResourcesRequest.h>
#include <aws/cloudformation/model/DescribeStacksRequest.h>
#include <aws/cloudformation/model/EstimateTemplateCostRequest.h>
#include <aws/cloudformation/model/ExecuteChangeSetRequest.h>
#include <aws/cloudformation/model/GetStackPolicyRequest.h>
#include <aws/cloudformation/model/GetTemplateRequest.h>
#include <aws/cloudformation/model/GetTemplateSummaryRequest.h>
#include <aws/cloudformation/model/ListChangeSetsRequest.h>
#include <aws/cloudformation/model/ListExportsRequest.h>
#include <aws/cloudformation/model/ListStackResourcesRequest.h>
#include <aws/cloudformation/model/ListStacksRequest.h>
#include <aws/cloudformation/model/SetStackPolicyRequest.h>
#include <aws/cloudformation/model/SignalResourceRequest.h>
#include <aws/cloudformation/model/UpdateStackRequest.h>
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
  Aws::StringStream ss;
  ss << SchemeMapper::ToString(config.scheme) << "://";

  if(config.endpointOverride.empty())
  {
    ss << CloudFormationEndpoint::ForRegion(config.region, config.useDualStack);
  }
  else
  {
    ss << config.endpointOverride;
  }

  m_uri = ss.str();
}

CancelUpdateStackOutcome CloudFormationClient::CancelUpdateStack(const CancelUpdateStackRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";
  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
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
  Aws::StringStream ss;
  ss << m_uri << "/";
  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
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
  Aws::StringStream ss;
  ss << m_uri << "/";
  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
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
  Aws::StringStream ss;
  ss << m_uri << "/";
  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
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

DeleteChangeSetOutcome CloudFormationClient::DeleteChangeSet(const DeleteChangeSetRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";
  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
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
  Aws::StringStream ss;
  ss << m_uri << "/";
  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
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

DescribeAccountLimitsOutcome CloudFormationClient::DescribeAccountLimits(const DescribeAccountLimitsRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";
  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
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
  Aws::StringStream ss;
  ss << m_uri << "/";
  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
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

DescribeStackEventsOutcome CloudFormationClient::DescribeStackEvents(const DescribeStackEventsRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";
  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
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

DescribeStackResourceOutcome CloudFormationClient::DescribeStackResource(const DescribeStackResourceRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";
  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
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

DescribeStackResourcesOutcome CloudFormationClient::DescribeStackResources(const DescribeStackResourcesRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";
  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
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

DescribeStacksOutcome CloudFormationClient::DescribeStacks(const DescribeStacksRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";
  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
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

EstimateTemplateCostOutcome CloudFormationClient::EstimateTemplateCost(const EstimateTemplateCostRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";
  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
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
  Aws::StringStream ss;
  ss << m_uri << "/";
  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
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
  Aws::StringStream ss;
  ss << m_uri << "/";
  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
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
  Aws::StringStream ss;
  ss << m_uri << "/";
  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
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
  Aws::StringStream ss;
  ss << m_uri << "/";
  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
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
  Aws::StringStream ss;
  ss << m_uri << "/";
  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
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
  Aws::StringStream ss;
  ss << m_uri << "/";
  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
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

ListStackResourcesOutcome CloudFormationClient::ListStackResources(const ListStackResourcesRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";
  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
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

ListStacksOutcome CloudFormationClient::ListStacks(const ListStacksRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";
  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
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
  Aws::StringStream ss;
  ss << m_uri << "/";
  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
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
  Aws::StringStream ss;
  ss << m_uri << "/";
  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
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

UpdateStackOutcome CloudFormationClient::UpdateStack(const UpdateStackRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";
  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
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

ValidateTemplateOutcome CloudFormationClient::ValidateTemplate(const ValidateTemplateRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";
  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
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

