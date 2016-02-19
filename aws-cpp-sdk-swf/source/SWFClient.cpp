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
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/utils/threading/Executor.h>
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
#include <aws/swf/model/TerminateWorkflowExecutionRequest.h>

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
  BASECLASS(Aws::MakeShared<HttpClientFactory>(ALLOCATION_TAG), clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
        SERVICE_NAME, clientConfiguration.authenticationRegion.empty() ? RegionMapper::GetRegionName(clientConfiguration.region) : clientConfiguration.authenticationRegion),
    Aws::MakeShared<SWFErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

SWFClient::SWFClient(const AWSCredentials& credentials, const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(Aws::MakeShared<HttpClientFactory>(ALLOCATION_TAG), clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
         SERVICE_NAME, clientConfiguration.authenticationRegion.empty() ? RegionMapper::GetRegionName(clientConfiguration.region) : clientConfiguration.authenticationRegion),
    Aws::MakeShared<SWFErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

SWFClient::SWFClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
  const Client::ClientConfiguration& clientConfiguration, const std::shared_ptr<HttpClientFactory const>& httpClientFactory) :
  BASECLASS(httpClientFactory != nullptr ? httpClientFactory : Aws::MakeShared<HttpClientFactory>(ALLOCATION_TAG), clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider,
         SERVICE_NAME, clientConfiguration.authenticationRegion.empty() ? RegionMapper::GetRegionName(clientConfiguration.region) : clientConfiguration.authenticationRegion),
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
  Aws::StringStream ss;
  ss << SchemeMapper::ToString(config.scheme) << "://";

  if(config.endpointOverride.empty() && config.authenticationRegion.empty())
  {
    ss << SWFEndpoint::ForRegion(config.region);
  }
  else
  {
    ss << config.endpointOverride;
  }

  m_uri = ss.str();
}
CountClosedWorkflowExecutionsOutcome SWFClient::CountClosedWorkflowExecutions(const CountClosedWorkflowExecutionsRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
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
  return std::async(std::launch::async, &SWFClient::CountClosedWorkflowExecutions, this, request);
}

void SWFClient::CountClosedWorkflowExecutionsAsync(const CountClosedWorkflowExecutionsRequest& request, const CountClosedWorkflowExecutionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&SWFClient::CountClosedWorkflowExecutionsAsyncHelper, this, request, handler, context);
}

void SWFClient::CountClosedWorkflowExecutionsAsyncHelper(const CountClosedWorkflowExecutionsRequest& request, const CountClosedWorkflowExecutionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CountClosedWorkflowExecutions(request), context);
}

CountOpenWorkflowExecutionsOutcome SWFClient::CountOpenWorkflowExecutions(const CountOpenWorkflowExecutionsRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
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
  return std::async(std::launch::async, &SWFClient::CountOpenWorkflowExecutions, this, request);
}

void SWFClient::CountOpenWorkflowExecutionsAsync(const CountOpenWorkflowExecutionsRequest& request, const CountOpenWorkflowExecutionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&SWFClient::CountOpenWorkflowExecutionsAsyncHelper, this, request, handler, context);
}

void SWFClient::CountOpenWorkflowExecutionsAsyncHelper(const CountOpenWorkflowExecutionsRequest& request, const CountOpenWorkflowExecutionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CountOpenWorkflowExecutions(request), context);
}

CountPendingActivityTasksOutcome SWFClient::CountPendingActivityTasks(const CountPendingActivityTasksRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
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
  return std::async(std::launch::async, &SWFClient::CountPendingActivityTasks, this, request);
}

void SWFClient::CountPendingActivityTasksAsync(const CountPendingActivityTasksRequest& request, const CountPendingActivityTasksResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&SWFClient::CountPendingActivityTasksAsyncHelper, this, request, handler, context);
}

void SWFClient::CountPendingActivityTasksAsyncHelper(const CountPendingActivityTasksRequest& request, const CountPendingActivityTasksResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CountPendingActivityTasks(request), context);
}

CountPendingDecisionTasksOutcome SWFClient::CountPendingDecisionTasks(const CountPendingDecisionTasksRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
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
  return std::async(std::launch::async, &SWFClient::CountPendingDecisionTasks, this, request);
}

void SWFClient::CountPendingDecisionTasksAsync(const CountPendingDecisionTasksRequest& request, const CountPendingDecisionTasksResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&SWFClient::CountPendingDecisionTasksAsyncHelper, this, request, handler, context);
}

void SWFClient::CountPendingDecisionTasksAsyncHelper(const CountPendingDecisionTasksRequest& request, const CountPendingDecisionTasksResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CountPendingDecisionTasks(request), context);
}

DeprecateActivityTypeOutcome SWFClient::DeprecateActivityType(const DeprecateActivityTypeRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
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
  return std::async(std::launch::async, &SWFClient::DeprecateActivityType, this, request);
}

void SWFClient::DeprecateActivityTypeAsync(const DeprecateActivityTypeRequest& request, const DeprecateActivityTypeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&SWFClient::DeprecateActivityTypeAsyncHelper, this, request, handler, context);
}

void SWFClient::DeprecateActivityTypeAsyncHelper(const DeprecateActivityTypeRequest& request, const DeprecateActivityTypeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeprecateActivityType(request), context);
}

DeprecateDomainOutcome SWFClient::DeprecateDomain(const DeprecateDomainRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
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
  return std::async(std::launch::async, &SWFClient::DeprecateDomain, this, request);
}

void SWFClient::DeprecateDomainAsync(const DeprecateDomainRequest& request, const DeprecateDomainResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&SWFClient::DeprecateDomainAsyncHelper, this, request, handler, context);
}

void SWFClient::DeprecateDomainAsyncHelper(const DeprecateDomainRequest& request, const DeprecateDomainResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeprecateDomain(request), context);
}

DeprecateWorkflowTypeOutcome SWFClient::DeprecateWorkflowType(const DeprecateWorkflowTypeRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
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
  return std::async(std::launch::async, &SWFClient::DeprecateWorkflowType, this, request);
}

void SWFClient::DeprecateWorkflowTypeAsync(const DeprecateWorkflowTypeRequest& request, const DeprecateWorkflowTypeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&SWFClient::DeprecateWorkflowTypeAsyncHelper, this, request, handler, context);
}

void SWFClient::DeprecateWorkflowTypeAsyncHelper(const DeprecateWorkflowTypeRequest& request, const DeprecateWorkflowTypeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeprecateWorkflowType(request), context);
}

DescribeActivityTypeOutcome SWFClient::DescribeActivityType(const DescribeActivityTypeRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
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
  return std::async(std::launch::async, &SWFClient::DescribeActivityType, this, request);
}

void SWFClient::DescribeActivityTypeAsync(const DescribeActivityTypeRequest& request, const DescribeActivityTypeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&SWFClient::DescribeActivityTypeAsyncHelper, this, request, handler, context);
}

void SWFClient::DescribeActivityTypeAsyncHelper(const DescribeActivityTypeRequest& request, const DescribeActivityTypeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeActivityType(request), context);
}

DescribeDomainOutcome SWFClient::DescribeDomain(const DescribeDomainRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
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
  return std::async(std::launch::async, &SWFClient::DescribeDomain, this, request);
}

void SWFClient::DescribeDomainAsync(const DescribeDomainRequest& request, const DescribeDomainResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&SWFClient::DescribeDomainAsyncHelper, this, request, handler, context);
}

void SWFClient::DescribeDomainAsyncHelper(const DescribeDomainRequest& request, const DescribeDomainResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeDomain(request), context);
}

DescribeWorkflowExecutionOutcome SWFClient::DescribeWorkflowExecution(const DescribeWorkflowExecutionRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
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
  return std::async(std::launch::async, &SWFClient::DescribeWorkflowExecution, this, request);
}

void SWFClient::DescribeWorkflowExecutionAsync(const DescribeWorkflowExecutionRequest& request, const DescribeWorkflowExecutionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&SWFClient::DescribeWorkflowExecutionAsyncHelper, this, request, handler, context);
}

void SWFClient::DescribeWorkflowExecutionAsyncHelper(const DescribeWorkflowExecutionRequest& request, const DescribeWorkflowExecutionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeWorkflowExecution(request), context);
}

DescribeWorkflowTypeOutcome SWFClient::DescribeWorkflowType(const DescribeWorkflowTypeRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
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
  return std::async(std::launch::async, &SWFClient::DescribeWorkflowType, this, request);
}

void SWFClient::DescribeWorkflowTypeAsync(const DescribeWorkflowTypeRequest& request, const DescribeWorkflowTypeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&SWFClient::DescribeWorkflowTypeAsyncHelper, this, request, handler, context);
}

void SWFClient::DescribeWorkflowTypeAsyncHelper(const DescribeWorkflowTypeRequest& request, const DescribeWorkflowTypeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeWorkflowType(request), context);
}

GetWorkflowExecutionHistoryOutcome SWFClient::GetWorkflowExecutionHistory(const GetWorkflowExecutionHistoryRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
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
  return std::async(std::launch::async, &SWFClient::GetWorkflowExecutionHistory, this, request);
}

void SWFClient::GetWorkflowExecutionHistoryAsync(const GetWorkflowExecutionHistoryRequest& request, const GetWorkflowExecutionHistoryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&SWFClient::GetWorkflowExecutionHistoryAsyncHelper, this, request, handler, context);
}

void SWFClient::GetWorkflowExecutionHistoryAsyncHelper(const GetWorkflowExecutionHistoryRequest& request, const GetWorkflowExecutionHistoryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetWorkflowExecutionHistory(request), context);
}

ListActivityTypesOutcome SWFClient::ListActivityTypes(const ListActivityTypesRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
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
  return std::async(std::launch::async, &SWFClient::ListActivityTypes, this, request);
}

void SWFClient::ListActivityTypesAsync(const ListActivityTypesRequest& request, const ListActivityTypesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&SWFClient::ListActivityTypesAsyncHelper, this, request, handler, context);
}

void SWFClient::ListActivityTypesAsyncHelper(const ListActivityTypesRequest& request, const ListActivityTypesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListActivityTypes(request), context);
}

ListClosedWorkflowExecutionsOutcome SWFClient::ListClosedWorkflowExecutions(const ListClosedWorkflowExecutionsRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
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
  return std::async(std::launch::async, &SWFClient::ListClosedWorkflowExecutions, this, request);
}

void SWFClient::ListClosedWorkflowExecutionsAsync(const ListClosedWorkflowExecutionsRequest& request, const ListClosedWorkflowExecutionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&SWFClient::ListClosedWorkflowExecutionsAsyncHelper, this, request, handler, context);
}

void SWFClient::ListClosedWorkflowExecutionsAsyncHelper(const ListClosedWorkflowExecutionsRequest& request, const ListClosedWorkflowExecutionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListClosedWorkflowExecutions(request), context);
}

ListDomainsOutcome SWFClient::ListDomains(const ListDomainsRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
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
  return std::async(std::launch::async, &SWFClient::ListDomains, this, request);
}

void SWFClient::ListDomainsAsync(const ListDomainsRequest& request, const ListDomainsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&SWFClient::ListDomainsAsyncHelper, this, request, handler, context);
}

void SWFClient::ListDomainsAsyncHelper(const ListDomainsRequest& request, const ListDomainsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListDomains(request), context);
}

ListOpenWorkflowExecutionsOutcome SWFClient::ListOpenWorkflowExecutions(const ListOpenWorkflowExecutionsRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
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
  return std::async(std::launch::async, &SWFClient::ListOpenWorkflowExecutions, this, request);
}

void SWFClient::ListOpenWorkflowExecutionsAsync(const ListOpenWorkflowExecutionsRequest& request, const ListOpenWorkflowExecutionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&SWFClient::ListOpenWorkflowExecutionsAsyncHelper, this, request, handler, context);
}

void SWFClient::ListOpenWorkflowExecutionsAsyncHelper(const ListOpenWorkflowExecutionsRequest& request, const ListOpenWorkflowExecutionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListOpenWorkflowExecutions(request), context);
}

ListWorkflowTypesOutcome SWFClient::ListWorkflowTypes(const ListWorkflowTypesRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
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
  return std::async(std::launch::async, &SWFClient::ListWorkflowTypes, this, request);
}

void SWFClient::ListWorkflowTypesAsync(const ListWorkflowTypesRequest& request, const ListWorkflowTypesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&SWFClient::ListWorkflowTypesAsyncHelper, this, request, handler, context);
}

void SWFClient::ListWorkflowTypesAsyncHelper(const ListWorkflowTypesRequest& request, const ListWorkflowTypesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListWorkflowTypes(request), context);
}

PollForActivityTaskOutcome SWFClient::PollForActivityTask(const PollForActivityTaskRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
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
  return std::async(std::launch::async, &SWFClient::PollForActivityTask, this, request);
}

void SWFClient::PollForActivityTaskAsync(const PollForActivityTaskRequest& request, const PollForActivityTaskResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&SWFClient::PollForActivityTaskAsyncHelper, this, request, handler, context);
}

void SWFClient::PollForActivityTaskAsyncHelper(const PollForActivityTaskRequest& request, const PollForActivityTaskResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, PollForActivityTask(request), context);
}

PollForDecisionTaskOutcome SWFClient::PollForDecisionTask(const PollForDecisionTaskRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
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
  return std::async(std::launch::async, &SWFClient::PollForDecisionTask, this, request);
}

void SWFClient::PollForDecisionTaskAsync(const PollForDecisionTaskRequest& request, const PollForDecisionTaskResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&SWFClient::PollForDecisionTaskAsyncHelper, this, request, handler, context);
}

void SWFClient::PollForDecisionTaskAsyncHelper(const PollForDecisionTaskRequest& request, const PollForDecisionTaskResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, PollForDecisionTask(request), context);
}

RecordActivityTaskHeartbeatOutcome SWFClient::RecordActivityTaskHeartbeat(const RecordActivityTaskHeartbeatRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
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
  return std::async(std::launch::async, &SWFClient::RecordActivityTaskHeartbeat, this, request);
}

void SWFClient::RecordActivityTaskHeartbeatAsync(const RecordActivityTaskHeartbeatRequest& request, const RecordActivityTaskHeartbeatResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&SWFClient::RecordActivityTaskHeartbeatAsyncHelper, this, request, handler, context);
}

void SWFClient::RecordActivityTaskHeartbeatAsyncHelper(const RecordActivityTaskHeartbeatRequest& request, const RecordActivityTaskHeartbeatResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, RecordActivityTaskHeartbeat(request), context);
}

RegisterActivityTypeOutcome SWFClient::RegisterActivityType(const RegisterActivityTypeRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
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
  return std::async(std::launch::async, &SWFClient::RegisterActivityType, this, request);
}

void SWFClient::RegisterActivityTypeAsync(const RegisterActivityTypeRequest& request, const RegisterActivityTypeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&SWFClient::RegisterActivityTypeAsyncHelper, this, request, handler, context);
}

void SWFClient::RegisterActivityTypeAsyncHelper(const RegisterActivityTypeRequest& request, const RegisterActivityTypeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, RegisterActivityType(request), context);
}

RegisterDomainOutcome SWFClient::RegisterDomain(const RegisterDomainRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
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
  return std::async(std::launch::async, &SWFClient::RegisterDomain, this, request);
}

void SWFClient::RegisterDomainAsync(const RegisterDomainRequest& request, const RegisterDomainResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&SWFClient::RegisterDomainAsyncHelper, this, request, handler, context);
}

void SWFClient::RegisterDomainAsyncHelper(const RegisterDomainRequest& request, const RegisterDomainResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, RegisterDomain(request), context);
}

RegisterWorkflowTypeOutcome SWFClient::RegisterWorkflowType(const RegisterWorkflowTypeRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
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
  return std::async(std::launch::async, &SWFClient::RegisterWorkflowType, this, request);
}

void SWFClient::RegisterWorkflowTypeAsync(const RegisterWorkflowTypeRequest& request, const RegisterWorkflowTypeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&SWFClient::RegisterWorkflowTypeAsyncHelper, this, request, handler, context);
}

void SWFClient::RegisterWorkflowTypeAsyncHelper(const RegisterWorkflowTypeRequest& request, const RegisterWorkflowTypeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, RegisterWorkflowType(request), context);
}

RequestCancelWorkflowExecutionOutcome SWFClient::RequestCancelWorkflowExecution(const RequestCancelWorkflowExecutionRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
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
  return std::async(std::launch::async, &SWFClient::RequestCancelWorkflowExecution, this, request);
}

void SWFClient::RequestCancelWorkflowExecutionAsync(const RequestCancelWorkflowExecutionRequest& request, const RequestCancelWorkflowExecutionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&SWFClient::RequestCancelWorkflowExecutionAsyncHelper, this, request, handler, context);
}

void SWFClient::RequestCancelWorkflowExecutionAsyncHelper(const RequestCancelWorkflowExecutionRequest& request, const RequestCancelWorkflowExecutionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, RequestCancelWorkflowExecution(request), context);
}

RespondActivityTaskCanceledOutcome SWFClient::RespondActivityTaskCanceled(const RespondActivityTaskCanceledRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
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
  return std::async(std::launch::async, &SWFClient::RespondActivityTaskCanceled, this, request);
}

void SWFClient::RespondActivityTaskCanceledAsync(const RespondActivityTaskCanceledRequest& request, const RespondActivityTaskCanceledResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&SWFClient::RespondActivityTaskCanceledAsyncHelper, this, request, handler, context);
}

void SWFClient::RespondActivityTaskCanceledAsyncHelper(const RespondActivityTaskCanceledRequest& request, const RespondActivityTaskCanceledResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, RespondActivityTaskCanceled(request), context);
}

RespondActivityTaskCompletedOutcome SWFClient::RespondActivityTaskCompleted(const RespondActivityTaskCompletedRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
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
  return std::async(std::launch::async, &SWFClient::RespondActivityTaskCompleted, this, request);
}

void SWFClient::RespondActivityTaskCompletedAsync(const RespondActivityTaskCompletedRequest& request, const RespondActivityTaskCompletedResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&SWFClient::RespondActivityTaskCompletedAsyncHelper, this, request, handler, context);
}

void SWFClient::RespondActivityTaskCompletedAsyncHelper(const RespondActivityTaskCompletedRequest& request, const RespondActivityTaskCompletedResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, RespondActivityTaskCompleted(request), context);
}

RespondActivityTaskFailedOutcome SWFClient::RespondActivityTaskFailed(const RespondActivityTaskFailedRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
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
  return std::async(std::launch::async, &SWFClient::RespondActivityTaskFailed, this, request);
}

void SWFClient::RespondActivityTaskFailedAsync(const RespondActivityTaskFailedRequest& request, const RespondActivityTaskFailedResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&SWFClient::RespondActivityTaskFailedAsyncHelper, this, request, handler, context);
}

void SWFClient::RespondActivityTaskFailedAsyncHelper(const RespondActivityTaskFailedRequest& request, const RespondActivityTaskFailedResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, RespondActivityTaskFailed(request), context);
}

RespondDecisionTaskCompletedOutcome SWFClient::RespondDecisionTaskCompleted(const RespondDecisionTaskCompletedRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
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
  return std::async(std::launch::async, &SWFClient::RespondDecisionTaskCompleted, this, request);
}

void SWFClient::RespondDecisionTaskCompletedAsync(const RespondDecisionTaskCompletedRequest& request, const RespondDecisionTaskCompletedResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&SWFClient::RespondDecisionTaskCompletedAsyncHelper, this, request, handler, context);
}

void SWFClient::RespondDecisionTaskCompletedAsyncHelper(const RespondDecisionTaskCompletedRequest& request, const RespondDecisionTaskCompletedResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, RespondDecisionTaskCompleted(request), context);
}

SignalWorkflowExecutionOutcome SWFClient::SignalWorkflowExecution(const SignalWorkflowExecutionRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
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
  return std::async(std::launch::async, &SWFClient::SignalWorkflowExecution, this, request);
}

void SWFClient::SignalWorkflowExecutionAsync(const SignalWorkflowExecutionRequest& request, const SignalWorkflowExecutionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&SWFClient::SignalWorkflowExecutionAsyncHelper, this, request, handler, context);
}

void SWFClient::SignalWorkflowExecutionAsyncHelper(const SignalWorkflowExecutionRequest& request, const SignalWorkflowExecutionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, SignalWorkflowExecution(request), context);
}

StartWorkflowExecutionOutcome SWFClient::StartWorkflowExecution(const StartWorkflowExecutionRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
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
  return std::async(std::launch::async, &SWFClient::StartWorkflowExecution, this, request);
}

void SWFClient::StartWorkflowExecutionAsync(const StartWorkflowExecutionRequest& request, const StartWorkflowExecutionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&SWFClient::StartWorkflowExecutionAsyncHelper, this, request, handler, context);
}

void SWFClient::StartWorkflowExecutionAsyncHelper(const StartWorkflowExecutionRequest& request, const StartWorkflowExecutionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, StartWorkflowExecution(request), context);
}

TerminateWorkflowExecutionOutcome SWFClient::TerminateWorkflowExecution(const TerminateWorkflowExecutionRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
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
  return std::async(std::launch::async, &SWFClient::TerminateWorkflowExecution, this, request);
}

void SWFClient::TerminateWorkflowExecutionAsync(const TerminateWorkflowExecutionRequest& request, const TerminateWorkflowExecutionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&SWFClient::TerminateWorkflowExecutionAsyncHelper, this, request, handler, context);
}

void SWFClient::TerminateWorkflowExecutionAsyncHelper(const TerminateWorkflowExecutionRequest& request, const TerminateWorkflowExecutionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, TerminateWorkflowExecution(request), context);
}

