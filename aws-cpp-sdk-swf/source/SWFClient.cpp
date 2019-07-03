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
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/utils/threading/Executor.h>
#include <aws/core/utils/DNS.h>
#include <aws/core/utils/logging/LogMacros.h>

#include <aws/swf/SWFClient.h>
#include <aws/swf/SWFEndpoint.h>
#include <aws/swf/SWFErrorMarshaller.h>
#include <aws/swf/model/CountClosedWorkflowExecutionsRequest.h>
#include <aws/swf/model/CountOpenWorkflowExecutionsRequest.h>
#include <aws/swf/model/CountPendingActivityTasksRequest.h>
#include <aws/swf/model/CountPendingDecisionTasksRequest.h>
#include <aws/swf/model/DeprecateActivityTypeRequest.h>
#include <aws/swf/model/DeprecateDomainRequest.h>
#include <aws/swf/model/DeprecateWorkflowTypeRequest.h>
#include <aws/swf/model/DescribeActivityTypeRequest.h>
#include <aws/swf/model/DescribeDomainRequest.h>
#include <aws/swf/model/DescribeWorkflowExecutionRequest.h>
#include <aws/swf/model/DescribeWorkflowTypeRequest.h>
#include <aws/swf/model/GetWorkflowExecutionHistoryRequest.h>
#include <aws/swf/model/ListActivityTypesRequest.h>
#include <aws/swf/model/ListClosedWorkflowExecutionsRequest.h>
#include <aws/swf/model/ListDomainsRequest.h>
#include <aws/swf/model/ListOpenWorkflowExecutionsRequest.h>
#include <aws/swf/model/ListTagsForResourceRequest.h>
#include <aws/swf/model/ListWorkflowTypesRequest.h>
#include <aws/swf/model/PollForActivityTaskRequest.h>
#include <aws/swf/model/PollForDecisionTaskRequest.h>
#include <aws/swf/model/RecordActivityTaskHeartbeatRequest.h>
#include <aws/swf/model/RegisterActivityTypeRequest.h>
#include <aws/swf/model/RegisterDomainRequest.h>
#include <aws/swf/model/RegisterWorkflowTypeRequest.h>
#include <aws/swf/model/RequestCancelWorkflowExecutionRequest.h>
#include <aws/swf/model/RespondActivityTaskCanceledRequest.h>
#include <aws/swf/model/RespondActivityTaskCompletedRequest.h>
#include <aws/swf/model/RespondActivityTaskFailedRequest.h>
#include <aws/swf/model/RespondDecisionTaskCompletedRequest.h>
#include <aws/swf/model/SignalWorkflowExecutionRequest.h>
#include <aws/swf/model/StartWorkflowExecutionRequest.h>
#include <aws/swf/model/TagResourceRequest.h>
#include <aws/swf/model/TerminateWorkflowExecutionRequest.h>
#include <aws/swf/model/UndeprecateActivityTypeRequest.h>
#include <aws/swf/model/UndeprecateDomainRequest.h>
#include <aws/swf/model/UndeprecateWorkflowTypeRequest.h>
#include <aws/swf/model/UntagResourceRequest.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::SWF;
using namespace Aws::SWF::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;

static const char* SERVICE_NAME = "swf";
static const char* ALLOCATION_TAG = "SWFClient";


SWFClient::SWFClient(const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
        SERVICE_NAME, clientConfiguration.region),
    Aws::MakeShared<SWFErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

SWFClient::SWFClient(const AWSCredentials& credentials, const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
         SERVICE_NAME, clientConfiguration.region),
    Aws::MakeShared<SWFErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

SWFClient::SWFClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
  const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider,
         SERVICE_NAME, clientConfiguration.region),
    Aws::MakeShared<SWFErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

SWFClient::~SWFClient()
{
}

void SWFClient::init(const ClientConfiguration& config)
{
  m_configScheme = SchemeMapper::ToString(config.scheme);
  if (config.endpointOverride.empty())
  {
      m_uri = m_configScheme + "://" + SWFEndpoint::ForRegion(config.region, config.useDualStack);
  }
  else
  {
      OverrideEndpoint(config.endpointOverride);
  }
}

void SWFClient::OverrideEndpoint(const Aws::String& endpoint)
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

CountClosedWorkflowExecutionsOutcome SWFClient::CountClosedWorkflowExecutions(const CountClosedWorkflowExecutionsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return CountClosedWorkflowExecutionsOutcome(CountClosedWorkflowExecutionsResult(outcome.GetResult()));
  }
  else
  {
    return CountClosedWorkflowExecutionsOutcome(outcome.GetError());
  }
}

CountClosedWorkflowExecutionsOutcomeCallable SWFClient::CountClosedWorkflowExecutionsCallable(const CountClosedWorkflowExecutionsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CountClosedWorkflowExecutionsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CountClosedWorkflowExecutions(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SWFClient::CountClosedWorkflowExecutionsAsync(const CountClosedWorkflowExecutionsRequest& request, const CountClosedWorkflowExecutionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CountClosedWorkflowExecutionsAsyncHelper( request, handler, context ); } );
}

void SWFClient::CountClosedWorkflowExecutionsAsyncHelper(const CountClosedWorkflowExecutionsRequest& request, const CountClosedWorkflowExecutionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CountClosedWorkflowExecutions(request), context);
}

CountOpenWorkflowExecutionsOutcome SWFClient::CountOpenWorkflowExecutions(const CountOpenWorkflowExecutionsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return CountOpenWorkflowExecutionsOutcome(CountOpenWorkflowExecutionsResult(outcome.GetResult()));
  }
  else
  {
    return CountOpenWorkflowExecutionsOutcome(outcome.GetError());
  }
}

CountOpenWorkflowExecutionsOutcomeCallable SWFClient::CountOpenWorkflowExecutionsCallable(const CountOpenWorkflowExecutionsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CountOpenWorkflowExecutionsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CountOpenWorkflowExecutions(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SWFClient::CountOpenWorkflowExecutionsAsync(const CountOpenWorkflowExecutionsRequest& request, const CountOpenWorkflowExecutionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CountOpenWorkflowExecutionsAsyncHelper( request, handler, context ); } );
}

void SWFClient::CountOpenWorkflowExecutionsAsyncHelper(const CountOpenWorkflowExecutionsRequest& request, const CountOpenWorkflowExecutionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CountOpenWorkflowExecutions(request), context);
}

CountPendingActivityTasksOutcome SWFClient::CountPendingActivityTasks(const CountPendingActivityTasksRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return CountPendingActivityTasksOutcome(CountPendingActivityTasksResult(outcome.GetResult()));
  }
  else
  {
    return CountPendingActivityTasksOutcome(outcome.GetError());
  }
}

CountPendingActivityTasksOutcomeCallable SWFClient::CountPendingActivityTasksCallable(const CountPendingActivityTasksRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CountPendingActivityTasksOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CountPendingActivityTasks(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SWFClient::CountPendingActivityTasksAsync(const CountPendingActivityTasksRequest& request, const CountPendingActivityTasksResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CountPendingActivityTasksAsyncHelper( request, handler, context ); } );
}

void SWFClient::CountPendingActivityTasksAsyncHelper(const CountPendingActivityTasksRequest& request, const CountPendingActivityTasksResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CountPendingActivityTasks(request), context);
}

CountPendingDecisionTasksOutcome SWFClient::CountPendingDecisionTasks(const CountPendingDecisionTasksRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return CountPendingDecisionTasksOutcome(CountPendingDecisionTasksResult(outcome.GetResult()));
  }
  else
  {
    return CountPendingDecisionTasksOutcome(outcome.GetError());
  }
}

CountPendingDecisionTasksOutcomeCallable SWFClient::CountPendingDecisionTasksCallable(const CountPendingDecisionTasksRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CountPendingDecisionTasksOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CountPendingDecisionTasks(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SWFClient::CountPendingDecisionTasksAsync(const CountPendingDecisionTasksRequest& request, const CountPendingDecisionTasksResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CountPendingDecisionTasksAsyncHelper( request, handler, context ); } );
}

void SWFClient::CountPendingDecisionTasksAsyncHelper(const CountPendingDecisionTasksRequest& request, const CountPendingDecisionTasksResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CountPendingDecisionTasks(request), context);
}

DeprecateActivityTypeOutcome SWFClient::DeprecateActivityType(const DeprecateActivityTypeRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DeprecateActivityTypeOutcome(NoResult());
  }
  else
  {
    return DeprecateActivityTypeOutcome(outcome.GetError());
  }
}

DeprecateActivityTypeOutcomeCallable SWFClient::DeprecateActivityTypeCallable(const DeprecateActivityTypeRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeprecateActivityTypeOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeprecateActivityType(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SWFClient::DeprecateActivityTypeAsync(const DeprecateActivityTypeRequest& request, const DeprecateActivityTypeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeprecateActivityTypeAsyncHelper( request, handler, context ); } );
}

void SWFClient::DeprecateActivityTypeAsyncHelper(const DeprecateActivityTypeRequest& request, const DeprecateActivityTypeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeprecateActivityType(request), context);
}

DeprecateDomainOutcome SWFClient::DeprecateDomain(const DeprecateDomainRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DeprecateDomainOutcome(NoResult());
  }
  else
  {
    return DeprecateDomainOutcome(outcome.GetError());
  }
}

DeprecateDomainOutcomeCallable SWFClient::DeprecateDomainCallable(const DeprecateDomainRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeprecateDomainOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeprecateDomain(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SWFClient::DeprecateDomainAsync(const DeprecateDomainRequest& request, const DeprecateDomainResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeprecateDomainAsyncHelper( request, handler, context ); } );
}

void SWFClient::DeprecateDomainAsyncHelper(const DeprecateDomainRequest& request, const DeprecateDomainResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeprecateDomain(request), context);
}

DeprecateWorkflowTypeOutcome SWFClient::DeprecateWorkflowType(const DeprecateWorkflowTypeRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DeprecateWorkflowTypeOutcome(NoResult());
  }
  else
  {
    return DeprecateWorkflowTypeOutcome(outcome.GetError());
  }
}

DeprecateWorkflowTypeOutcomeCallable SWFClient::DeprecateWorkflowTypeCallable(const DeprecateWorkflowTypeRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeprecateWorkflowTypeOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeprecateWorkflowType(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SWFClient::DeprecateWorkflowTypeAsync(const DeprecateWorkflowTypeRequest& request, const DeprecateWorkflowTypeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeprecateWorkflowTypeAsyncHelper( request, handler, context ); } );
}

void SWFClient::DeprecateWorkflowTypeAsyncHelper(const DeprecateWorkflowTypeRequest& request, const DeprecateWorkflowTypeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeprecateWorkflowType(request), context);
}

DescribeActivityTypeOutcome SWFClient::DescribeActivityType(const DescribeActivityTypeRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DescribeActivityTypeOutcome(DescribeActivityTypeResult(outcome.GetResult()));
  }
  else
  {
    return DescribeActivityTypeOutcome(outcome.GetError());
  }
}

DescribeActivityTypeOutcomeCallable SWFClient::DescribeActivityTypeCallable(const DescribeActivityTypeRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeActivityTypeOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeActivityType(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SWFClient::DescribeActivityTypeAsync(const DescribeActivityTypeRequest& request, const DescribeActivityTypeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeActivityTypeAsyncHelper( request, handler, context ); } );
}

void SWFClient::DescribeActivityTypeAsyncHelper(const DescribeActivityTypeRequest& request, const DescribeActivityTypeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeActivityType(request), context);
}

DescribeDomainOutcome SWFClient::DescribeDomain(const DescribeDomainRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DescribeDomainOutcome(DescribeDomainResult(outcome.GetResult()));
  }
  else
  {
    return DescribeDomainOutcome(outcome.GetError());
  }
}

DescribeDomainOutcomeCallable SWFClient::DescribeDomainCallable(const DescribeDomainRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeDomainOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeDomain(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SWFClient::DescribeDomainAsync(const DescribeDomainRequest& request, const DescribeDomainResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeDomainAsyncHelper( request, handler, context ); } );
}

void SWFClient::DescribeDomainAsyncHelper(const DescribeDomainRequest& request, const DescribeDomainResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeDomain(request), context);
}

DescribeWorkflowExecutionOutcome SWFClient::DescribeWorkflowExecution(const DescribeWorkflowExecutionRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DescribeWorkflowExecutionOutcome(DescribeWorkflowExecutionResult(outcome.GetResult()));
  }
  else
  {
    return DescribeWorkflowExecutionOutcome(outcome.GetError());
  }
}

DescribeWorkflowExecutionOutcomeCallable SWFClient::DescribeWorkflowExecutionCallable(const DescribeWorkflowExecutionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeWorkflowExecutionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeWorkflowExecution(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SWFClient::DescribeWorkflowExecutionAsync(const DescribeWorkflowExecutionRequest& request, const DescribeWorkflowExecutionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeWorkflowExecutionAsyncHelper( request, handler, context ); } );
}

void SWFClient::DescribeWorkflowExecutionAsyncHelper(const DescribeWorkflowExecutionRequest& request, const DescribeWorkflowExecutionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeWorkflowExecution(request), context);
}

DescribeWorkflowTypeOutcome SWFClient::DescribeWorkflowType(const DescribeWorkflowTypeRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DescribeWorkflowTypeOutcome(DescribeWorkflowTypeResult(outcome.GetResult()));
  }
  else
  {
    return DescribeWorkflowTypeOutcome(outcome.GetError());
  }
}

DescribeWorkflowTypeOutcomeCallable SWFClient::DescribeWorkflowTypeCallable(const DescribeWorkflowTypeRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeWorkflowTypeOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeWorkflowType(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SWFClient::DescribeWorkflowTypeAsync(const DescribeWorkflowTypeRequest& request, const DescribeWorkflowTypeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeWorkflowTypeAsyncHelper( request, handler, context ); } );
}

void SWFClient::DescribeWorkflowTypeAsyncHelper(const DescribeWorkflowTypeRequest& request, const DescribeWorkflowTypeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeWorkflowType(request), context);
}

GetWorkflowExecutionHistoryOutcome SWFClient::GetWorkflowExecutionHistory(const GetWorkflowExecutionHistoryRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return GetWorkflowExecutionHistoryOutcome(GetWorkflowExecutionHistoryResult(outcome.GetResult()));
  }
  else
  {
    return GetWorkflowExecutionHistoryOutcome(outcome.GetError());
  }
}

GetWorkflowExecutionHistoryOutcomeCallable SWFClient::GetWorkflowExecutionHistoryCallable(const GetWorkflowExecutionHistoryRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetWorkflowExecutionHistoryOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetWorkflowExecutionHistory(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SWFClient::GetWorkflowExecutionHistoryAsync(const GetWorkflowExecutionHistoryRequest& request, const GetWorkflowExecutionHistoryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetWorkflowExecutionHistoryAsyncHelper( request, handler, context ); } );
}

void SWFClient::GetWorkflowExecutionHistoryAsyncHelper(const GetWorkflowExecutionHistoryRequest& request, const GetWorkflowExecutionHistoryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetWorkflowExecutionHistory(request), context);
}

ListActivityTypesOutcome SWFClient::ListActivityTypes(const ListActivityTypesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return ListActivityTypesOutcome(ListActivityTypesResult(outcome.GetResult()));
  }
  else
  {
    return ListActivityTypesOutcome(outcome.GetError());
  }
}

ListActivityTypesOutcomeCallable SWFClient::ListActivityTypesCallable(const ListActivityTypesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListActivityTypesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListActivityTypes(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SWFClient::ListActivityTypesAsync(const ListActivityTypesRequest& request, const ListActivityTypesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListActivityTypesAsyncHelper( request, handler, context ); } );
}

void SWFClient::ListActivityTypesAsyncHelper(const ListActivityTypesRequest& request, const ListActivityTypesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListActivityTypes(request), context);
}

ListClosedWorkflowExecutionsOutcome SWFClient::ListClosedWorkflowExecutions(const ListClosedWorkflowExecutionsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return ListClosedWorkflowExecutionsOutcome(ListClosedWorkflowExecutionsResult(outcome.GetResult()));
  }
  else
  {
    return ListClosedWorkflowExecutionsOutcome(outcome.GetError());
  }
}

ListClosedWorkflowExecutionsOutcomeCallable SWFClient::ListClosedWorkflowExecutionsCallable(const ListClosedWorkflowExecutionsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListClosedWorkflowExecutionsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListClosedWorkflowExecutions(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SWFClient::ListClosedWorkflowExecutionsAsync(const ListClosedWorkflowExecutionsRequest& request, const ListClosedWorkflowExecutionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListClosedWorkflowExecutionsAsyncHelper( request, handler, context ); } );
}

void SWFClient::ListClosedWorkflowExecutionsAsyncHelper(const ListClosedWorkflowExecutionsRequest& request, const ListClosedWorkflowExecutionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListClosedWorkflowExecutions(request), context);
}

ListDomainsOutcome SWFClient::ListDomains(const ListDomainsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return ListDomainsOutcome(ListDomainsResult(outcome.GetResult()));
  }
  else
  {
    return ListDomainsOutcome(outcome.GetError());
  }
}

ListDomainsOutcomeCallable SWFClient::ListDomainsCallable(const ListDomainsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListDomainsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListDomains(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SWFClient::ListDomainsAsync(const ListDomainsRequest& request, const ListDomainsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListDomainsAsyncHelper( request, handler, context ); } );
}

void SWFClient::ListDomainsAsyncHelper(const ListDomainsRequest& request, const ListDomainsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListDomains(request), context);
}

ListOpenWorkflowExecutionsOutcome SWFClient::ListOpenWorkflowExecutions(const ListOpenWorkflowExecutionsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return ListOpenWorkflowExecutionsOutcome(ListOpenWorkflowExecutionsResult(outcome.GetResult()));
  }
  else
  {
    return ListOpenWorkflowExecutionsOutcome(outcome.GetError());
  }
}

ListOpenWorkflowExecutionsOutcomeCallable SWFClient::ListOpenWorkflowExecutionsCallable(const ListOpenWorkflowExecutionsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListOpenWorkflowExecutionsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListOpenWorkflowExecutions(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SWFClient::ListOpenWorkflowExecutionsAsync(const ListOpenWorkflowExecutionsRequest& request, const ListOpenWorkflowExecutionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListOpenWorkflowExecutionsAsyncHelper( request, handler, context ); } );
}

void SWFClient::ListOpenWorkflowExecutionsAsyncHelper(const ListOpenWorkflowExecutionsRequest& request, const ListOpenWorkflowExecutionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListOpenWorkflowExecutions(request), context);
}

ListTagsForResourceOutcome SWFClient::ListTagsForResource(const ListTagsForResourceRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return ListTagsForResourceOutcome(ListTagsForResourceResult(outcome.GetResult()));
  }
  else
  {
    return ListTagsForResourceOutcome(outcome.GetError());
  }
}

ListTagsForResourceOutcomeCallable SWFClient::ListTagsForResourceCallable(const ListTagsForResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListTagsForResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListTagsForResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SWFClient::ListTagsForResourceAsync(const ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListTagsForResourceAsyncHelper( request, handler, context ); } );
}

void SWFClient::ListTagsForResourceAsyncHelper(const ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListTagsForResource(request), context);
}

ListWorkflowTypesOutcome SWFClient::ListWorkflowTypes(const ListWorkflowTypesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return ListWorkflowTypesOutcome(ListWorkflowTypesResult(outcome.GetResult()));
  }
  else
  {
    return ListWorkflowTypesOutcome(outcome.GetError());
  }
}

ListWorkflowTypesOutcomeCallable SWFClient::ListWorkflowTypesCallable(const ListWorkflowTypesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListWorkflowTypesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListWorkflowTypes(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SWFClient::ListWorkflowTypesAsync(const ListWorkflowTypesRequest& request, const ListWorkflowTypesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListWorkflowTypesAsyncHelper( request, handler, context ); } );
}

void SWFClient::ListWorkflowTypesAsyncHelper(const ListWorkflowTypesRequest& request, const ListWorkflowTypesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListWorkflowTypes(request), context);
}

PollForActivityTaskOutcome SWFClient::PollForActivityTask(const PollForActivityTaskRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return PollForActivityTaskOutcome(PollForActivityTaskResult(outcome.GetResult()));
  }
  else
  {
    return PollForActivityTaskOutcome(outcome.GetError());
  }
}

PollForActivityTaskOutcomeCallable SWFClient::PollForActivityTaskCallable(const PollForActivityTaskRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< PollForActivityTaskOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->PollForActivityTask(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SWFClient::PollForActivityTaskAsync(const PollForActivityTaskRequest& request, const PollForActivityTaskResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->PollForActivityTaskAsyncHelper( request, handler, context ); } );
}

void SWFClient::PollForActivityTaskAsyncHelper(const PollForActivityTaskRequest& request, const PollForActivityTaskResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, PollForActivityTask(request), context);
}

PollForDecisionTaskOutcome SWFClient::PollForDecisionTask(const PollForDecisionTaskRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return PollForDecisionTaskOutcome(PollForDecisionTaskResult(outcome.GetResult()));
  }
  else
  {
    return PollForDecisionTaskOutcome(outcome.GetError());
  }
}

PollForDecisionTaskOutcomeCallable SWFClient::PollForDecisionTaskCallable(const PollForDecisionTaskRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< PollForDecisionTaskOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->PollForDecisionTask(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SWFClient::PollForDecisionTaskAsync(const PollForDecisionTaskRequest& request, const PollForDecisionTaskResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->PollForDecisionTaskAsyncHelper( request, handler, context ); } );
}

void SWFClient::PollForDecisionTaskAsyncHelper(const PollForDecisionTaskRequest& request, const PollForDecisionTaskResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, PollForDecisionTask(request), context);
}

RecordActivityTaskHeartbeatOutcome SWFClient::RecordActivityTaskHeartbeat(const RecordActivityTaskHeartbeatRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return RecordActivityTaskHeartbeatOutcome(RecordActivityTaskHeartbeatResult(outcome.GetResult()));
  }
  else
  {
    return RecordActivityTaskHeartbeatOutcome(outcome.GetError());
  }
}

RecordActivityTaskHeartbeatOutcomeCallable SWFClient::RecordActivityTaskHeartbeatCallable(const RecordActivityTaskHeartbeatRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< RecordActivityTaskHeartbeatOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->RecordActivityTaskHeartbeat(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SWFClient::RecordActivityTaskHeartbeatAsync(const RecordActivityTaskHeartbeatRequest& request, const RecordActivityTaskHeartbeatResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->RecordActivityTaskHeartbeatAsyncHelper( request, handler, context ); } );
}

void SWFClient::RecordActivityTaskHeartbeatAsyncHelper(const RecordActivityTaskHeartbeatRequest& request, const RecordActivityTaskHeartbeatResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, RecordActivityTaskHeartbeat(request), context);
}

RegisterActivityTypeOutcome SWFClient::RegisterActivityType(const RegisterActivityTypeRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return RegisterActivityTypeOutcome(NoResult());
  }
  else
  {
    return RegisterActivityTypeOutcome(outcome.GetError());
  }
}

RegisterActivityTypeOutcomeCallable SWFClient::RegisterActivityTypeCallable(const RegisterActivityTypeRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< RegisterActivityTypeOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->RegisterActivityType(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SWFClient::RegisterActivityTypeAsync(const RegisterActivityTypeRequest& request, const RegisterActivityTypeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->RegisterActivityTypeAsyncHelper( request, handler, context ); } );
}

void SWFClient::RegisterActivityTypeAsyncHelper(const RegisterActivityTypeRequest& request, const RegisterActivityTypeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, RegisterActivityType(request), context);
}

RegisterDomainOutcome SWFClient::RegisterDomain(const RegisterDomainRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return RegisterDomainOutcome(NoResult());
  }
  else
  {
    return RegisterDomainOutcome(outcome.GetError());
  }
}

RegisterDomainOutcomeCallable SWFClient::RegisterDomainCallable(const RegisterDomainRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< RegisterDomainOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->RegisterDomain(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SWFClient::RegisterDomainAsync(const RegisterDomainRequest& request, const RegisterDomainResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->RegisterDomainAsyncHelper( request, handler, context ); } );
}

void SWFClient::RegisterDomainAsyncHelper(const RegisterDomainRequest& request, const RegisterDomainResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, RegisterDomain(request), context);
}

RegisterWorkflowTypeOutcome SWFClient::RegisterWorkflowType(const RegisterWorkflowTypeRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return RegisterWorkflowTypeOutcome(NoResult());
  }
  else
  {
    return RegisterWorkflowTypeOutcome(outcome.GetError());
  }
}

RegisterWorkflowTypeOutcomeCallable SWFClient::RegisterWorkflowTypeCallable(const RegisterWorkflowTypeRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< RegisterWorkflowTypeOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->RegisterWorkflowType(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SWFClient::RegisterWorkflowTypeAsync(const RegisterWorkflowTypeRequest& request, const RegisterWorkflowTypeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->RegisterWorkflowTypeAsyncHelper( request, handler, context ); } );
}

void SWFClient::RegisterWorkflowTypeAsyncHelper(const RegisterWorkflowTypeRequest& request, const RegisterWorkflowTypeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, RegisterWorkflowType(request), context);
}

RequestCancelWorkflowExecutionOutcome SWFClient::RequestCancelWorkflowExecution(const RequestCancelWorkflowExecutionRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return RequestCancelWorkflowExecutionOutcome(NoResult());
  }
  else
  {
    return RequestCancelWorkflowExecutionOutcome(outcome.GetError());
  }
}

RequestCancelWorkflowExecutionOutcomeCallable SWFClient::RequestCancelWorkflowExecutionCallable(const RequestCancelWorkflowExecutionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< RequestCancelWorkflowExecutionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->RequestCancelWorkflowExecution(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SWFClient::RequestCancelWorkflowExecutionAsync(const RequestCancelWorkflowExecutionRequest& request, const RequestCancelWorkflowExecutionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->RequestCancelWorkflowExecutionAsyncHelper( request, handler, context ); } );
}

void SWFClient::RequestCancelWorkflowExecutionAsyncHelper(const RequestCancelWorkflowExecutionRequest& request, const RequestCancelWorkflowExecutionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, RequestCancelWorkflowExecution(request), context);
}

RespondActivityTaskCanceledOutcome SWFClient::RespondActivityTaskCanceled(const RespondActivityTaskCanceledRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return RespondActivityTaskCanceledOutcome(NoResult());
  }
  else
  {
    return RespondActivityTaskCanceledOutcome(outcome.GetError());
  }
}

RespondActivityTaskCanceledOutcomeCallable SWFClient::RespondActivityTaskCanceledCallable(const RespondActivityTaskCanceledRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< RespondActivityTaskCanceledOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->RespondActivityTaskCanceled(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SWFClient::RespondActivityTaskCanceledAsync(const RespondActivityTaskCanceledRequest& request, const RespondActivityTaskCanceledResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->RespondActivityTaskCanceledAsyncHelper( request, handler, context ); } );
}

void SWFClient::RespondActivityTaskCanceledAsyncHelper(const RespondActivityTaskCanceledRequest& request, const RespondActivityTaskCanceledResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, RespondActivityTaskCanceled(request), context);
}

RespondActivityTaskCompletedOutcome SWFClient::RespondActivityTaskCompleted(const RespondActivityTaskCompletedRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return RespondActivityTaskCompletedOutcome(NoResult());
  }
  else
  {
    return RespondActivityTaskCompletedOutcome(outcome.GetError());
  }
}

RespondActivityTaskCompletedOutcomeCallable SWFClient::RespondActivityTaskCompletedCallable(const RespondActivityTaskCompletedRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< RespondActivityTaskCompletedOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->RespondActivityTaskCompleted(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SWFClient::RespondActivityTaskCompletedAsync(const RespondActivityTaskCompletedRequest& request, const RespondActivityTaskCompletedResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->RespondActivityTaskCompletedAsyncHelper( request, handler, context ); } );
}

void SWFClient::RespondActivityTaskCompletedAsyncHelper(const RespondActivityTaskCompletedRequest& request, const RespondActivityTaskCompletedResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, RespondActivityTaskCompleted(request), context);
}

RespondActivityTaskFailedOutcome SWFClient::RespondActivityTaskFailed(const RespondActivityTaskFailedRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return RespondActivityTaskFailedOutcome(NoResult());
  }
  else
  {
    return RespondActivityTaskFailedOutcome(outcome.GetError());
  }
}

RespondActivityTaskFailedOutcomeCallable SWFClient::RespondActivityTaskFailedCallable(const RespondActivityTaskFailedRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< RespondActivityTaskFailedOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->RespondActivityTaskFailed(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SWFClient::RespondActivityTaskFailedAsync(const RespondActivityTaskFailedRequest& request, const RespondActivityTaskFailedResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->RespondActivityTaskFailedAsyncHelper( request, handler, context ); } );
}

void SWFClient::RespondActivityTaskFailedAsyncHelper(const RespondActivityTaskFailedRequest& request, const RespondActivityTaskFailedResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, RespondActivityTaskFailed(request), context);
}

RespondDecisionTaskCompletedOutcome SWFClient::RespondDecisionTaskCompleted(const RespondDecisionTaskCompletedRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return RespondDecisionTaskCompletedOutcome(NoResult());
  }
  else
  {
    return RespondDecisionTaskCompletedOutcome(outcome.GetError());
  }
}

RespondDecisionTaskCompletedOutcomeCallable SWFClient::RespondDecisionTaskCompletedCallable(const RespondDecisionTaskCompletedRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< RespondDecisionTaskCompletedOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->RespondDecisionTaskCompleted(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SWFClient::RespondDecisionTaskCompletedAsync(const RespondDecisionTaskCompletedRequest& request, const RespondDecisionTaskCompletedResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->RespondDecisionTaskCompletedAsyncHelper( request, handler, context ); } );
}

void SWFClient::RespondDecisionTaskCompletedAsyncHelper(const RespondDecisionTaskCompletedRequest& request, const RespondDecisionTaskCompletedResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, RespondDecisionTaskCompleted(request), context);
}

SignalWorkflowExecutionOutcome SWFClient::SignalWorkflowExecution(const SignalWorkflowExecutionRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return SignalWorkflowExecutionOutcome(NoResult());
  }
  else
  {
    return SignalWorkflowExecutionOutcome(outcome.GetError());
  }
}

SignalWorkflowExecutionOutcomeCallable SWFClient::SignalWorkflowExecutionCallable(const SignalWorkflowExecutionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< SignalWorkflowExecutionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->SignalWorkflowExecution(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SWFClient::SignalWorkflowExecutionAsync(const SignalWorkflowExecutionRequest& request, const SignalWorkflowExecutionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->SignalWorkflowExecutionAsyncHelper( request, handler, context ); } );
}

void SWFClient::SignalWorkflowExecutionAsyncHelper(const SignalWorkflowExecutionRequest& request, const SignalWorkflowExecutionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, SignalWorkflowExecution(request), context);
}

StartWorkflowExecutionOutcome SWFClient::StartWorkflowExecution(const StartWorkflowExecutionRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return StartWorkflowExecutionOutcome(StartWorkflowExecutionResult(outcome.GetResult()));
  }
  else
  {
    return StartWorkflowExecutionOutcome(outcome.GetError());
  }
}

StartWorkflowExecutionOutcomeCallable SWFClient::StartWorkflowExecutionCallable(const StartWorkflowExecutionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< StartWorkflowExecutionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->StartWorkflowExecution(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SWFClient::StartWorkflowExecutionAsync(const StartWorkflowExecutionRequest& request, const StartWorkflowExecutionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->StartWorkflowExecutionAsyncHelper( request, handler, context ); } );
}

void SWFClient::StartWorkflowExecutionAsyncHelper(const StartWorkflowExecutionRequest& request, const StartWorkflowExecutionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, StartWorkflowExecution(request), context);
}

TagResourceOutcome SWFClient::TagResource(const TagResourceRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return TagResourceOutcome(NoResult());
  }
  else
  {
    return TagResourceOutcome(outcome.GetError());
  }
}

TagResourceOutcomeCallable SWFClient::TagResourceCallable(const TagResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< TagResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->TagResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SWFClient::TagResourceAsync(const TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->TagResourceAsyncHelper( request, handler, context ); } );
}

void SWFClient::TagResourceAsyncHelper(const TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, TagResource(request), context);
}

TerminateWorkflowExecutionOutcome SWFClient::TerminateWorkflowExecution(const TerminateWorkflowExecutionRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return TerminateWorkflowExecutionOutcome(NoResult());
  }
  else
  {
    return TerminateWorkflowExecutionOutcome(outcome.GetError());
  }
}

TerminateWorkflowExecutionOutcomeCallable SWFClient::TerminateWorkflowExecutionCallable(const TerminateWorkflowExecutionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< TerminateWorkflowExecutionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->TerminateWorkflowExecution(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SWFClient::TerminateWorkflowExecutionAsync(const TerminateWorkflowExecutionRequest& request, const TerminateWorkflowExecutionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->TerminateWorkflowExecutionAsyncHelper( request, handler, context ); } );
}

void SWFClient::TerminateWorkflowExecutionAsyncHelper(const TerminateWorkflowExecutionRequest& request, const TerminateWorkflowExecutionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, TerminateWorkflowExecution(request), context);
}

UndeprecateActivityTypeOutcome SWFClient::UndeprecateActivityType(const UndeprecateActivityTypeRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return UndeprecateActivityTypeOutcome(NoResult());
  }
  else
  {
    return UndeprecateActivityTypeOutcome(outcome.GetError());
  }
}

UndeprecateActivityTypeOutcomeCallable SWFClient::UndeprecateActivityTypeCallable(const UndeprecateActivityTypeRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UndeprecateActivityTypeOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UndeprecateActivityType(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SWFClient::UndeprecateActivityTypeAsync(const UndeprecateActivityTypeRequest& request, const UndeprecateActivityTypeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UndeprecateActivityTypeAsyncHelper( request, handler, context ); } );
}

void SWFClient::UndeprecateActivityTypeAsyncHelper(const UndeprecateActivityTypeRequest& request, const UndeprecateActivityTypeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UndeprecateActivityType(request), context);
}

UndeprecateDomainOutcome SWFClient::UndeprecateDomain(const UndeprecateDomainRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return UndeprecateDomainOutcome(NoResult());
  }
  else
  {
    return UndeprecateDomainOutcome(outcome.GetError());
  }
}

UndeprecateDomainOutcomeCallable SWFClient::UndeprecateDomainCallable(const UndeprecateDomainRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UndeprecateDomainOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UndeprecateDomain(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SWFClient::UndeprecateDomainAsync(const UndeprecateDomainRequest& request, const UndeprecateDomainResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UndeprecateDomainAsyncHelper( request, handler, context ); } );
}

void SWFClient::UndeprecateDomainAsyncHelper(const UndeprecateDomainRequest& request, const UndeprecateDomainResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UndeprecateDomain(request), context);
}

UndeprecateWorkflowTypeOutcome SWFClient::UndeprecateWorkflowType(const UndeprecateWorkflowTypeRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return UndeprecateWorkflowTypeOutcome(NoResult());
  }
  else
  {
    return UndeprecateWorkflowTypeOutcome(outcome.GetError());
  }
}

UndeprecateWorkflowTypeOutcomeCallable SWFClient::UndeprecateWorkflowTypeCallable(const UndeprecateWorkflowTypeRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UndeprecateWorkflowTypeOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UndeprecateWorkflowType(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SWFClient::UndeprecateWorkflowTypeAsync(const UndeprecateWorkflowTypeRequest& request, const UndeprecateWorkflowTypeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UndeprecateWorkflowTypeAsyncHelper( request, handler, context ); } );
}

void SWFClient::UndeprecateWorkflowTypeAsyncHelper(const UndeprecateWorkflowTypeRequest& request, const UndeprecateWorkflowTypeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UndeprecateWorkflowType(request), context);
}

UntagResourceOutcome SWFClient::UntagResource(const UntagResourceRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return UntagResourceOutcome(NoResult());
  }
  else
  {
    return UntagResourceOutcome(outcome.GetError());
  }
}

UntagResourceOutcomeCallable SWFClient::UntagResourceCallable(const UntagResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UntagResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UntagResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SWFClient::UntagResourceAsync(const UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UntagResourceAsyncHelper( request, handler, context ); } );
}

void SWFClient::UntagResourceAsyncHelper(const UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UntagResource(request), context);
}

