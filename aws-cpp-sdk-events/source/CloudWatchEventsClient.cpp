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
#include <aws/events/CloudWatchEventsClient.h>
#include <aws/events/CloudWatchEventsEndpoint.h>
#include <aws/events/CloudWatchEventsErrorMarshaller.h>
#include <aws/events/model/DeleteRuleRequest.h>
#include <aws/events/model/DescribeRuleRequest.h>
#include <aws/events/model/DisableRuleRequest.h>
#include <aws/events/model/EnableRuleRequest.h>
#include <aws/events/model/ListRuleNamesByTargetRequest.h>
#include <aws/events/model/ListRulesRequest.h>
#include <aws/events/model/ListTargetsByRuleRequest.h>
#include <aws/events/model/PutEventsRequest.h>
#include <aws/events/model/PutRuleRequest.h>
#include <aws/events/model/PutTargetsRequest.h>
#include <aws/events/model/RemoveTargetsRequest.h>
#include <aws/events/model/TestEventPatternRequest.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::CloudWatchEvents;
using namespace Aws::CloudWatchEvents::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;

static const char* SERVICE_NAME = "events";
static const char* ALLOCATION_TAG = "CloudWatchEventsClient";

CloudWatchEventsClient::CloudWatchEventsClient(const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(Aws::MakeShared<HttpClientFactory>(ALLOCATION_TAG), clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
        SERVICE_NAME, clientConfiguration.authenticationRegion.empty() ? RegionMapper::GetRegionName(clientConfiguration.region) : clientConfiguration.authenticationRegion),
    Aws::MakeShared<CloudWatchEventsErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

CloudWatchEventsClient::CloudWatchEventsClient(const AWSCredentials& credentials, const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(Aws::MakeShared<HttpClientFactory>(ALLOCATION_TAG), clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
         SERVICE_NAME, clientConfiguration.authenticationRegion.empty() ? RegionMapper::GetRegionName(clientConfiguration.region) : clientConfiguration.authenticationRegion),
    Aws::MakeShared<CloudWatchEventsErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

CloudWatchEventsClient::CloudWatchEventsClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
  const Client::ClientConfiguration& clientConfiguration, const std::shared_ptr<HttpClientFactory const>& httpClientFactory) :
  BASECLASS(httpClientFactory != nullptr ? httpClientFactory : Aws::MakeShared<HttpClientFactory>(ALLOCATION_TAG), clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider,
         SERVICE_NAME, clientConfiguration.authenticationRegion.empty() ? RegionMapper::GetRegionName(clientConfiguration.region) : clientConfiguration.authenticationRegion),
    Aws::MakeShared<CloudWatchEventsErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

CloudWatchEventsClient::~CloudWatchEventsClient()
{
}

void CloudWatchEventsClient::init(const ClientConfiguration& config)
{
  Aws::StringStream ss;
  ss << SchemeMapper::ToString(config.scheme) << "://";

  if(config.endpointOverride.empty() && config.authenticationRegion.empty())
  {
    ss << CloudWatchEventsEndpoint::ForRegion(config.region);
  }
  else
  {
    ss << config.endpointOverride;
  }

  m_uri = ss.str();
}
DeleteRuleOutcome CloudWatchEventsClient::DeleteRule(const DeleteRuleRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return DeleteRuleOutcome(NoResult());
  }
  else
  {
    return DeleteRuleOutcome(outcome.GetError());
  }
}

DeleteRuleOutcomeCallable CloudWatchEventsClient::DeleteRuleCallable(const DeleteRuleRequest& request) const
{
  return std::async(std::launch::async, &CloudWatchEventsClient::DeleteRule, this, request);
}

void CloudWatchEventsClient::DeleteRuleAsync(const DeleteRuleRequest& request, const DeleteRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&CloudWatchEventsClient::DeleteRuleAsyncHelper, this, request, handler, context);
}

void CloudWatchEventsClient::DeleteRuleAsyncHelper(const DeleteRuleRequest& request, const DeleteRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteRule(request), context);
}

DescribeRuleOutcome CloudWatchEventsClient::DescribeRule(const DescribeRuleRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return DescribeRuleOutcome(DescribeRuleResult(outcome.GetResult()));
  }
  else
  {
    return DescribeRuleOutcome(outcome.GetError());
  }
}

DescribeRuleOutcomeCallable CloudWatchEventsClient::DescribeRuleCallable(const DescribeRuleRequest& request) const
{
  return std::async(std::launch::async, &CloudWatchEventsClient::DescribeRule, this, request);
}

void CloudWatchEventsClient::DescribeRuleAsync(const DescribeRuleRequest& request, const DescribeRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&CloudWatchEventsClient::DescribeRuleAsyncHelper, this, request, handler, context);
}

void CloudWatchEventsClient::DescribeRuleAsyncHelper(const DescribeRuleRequest& request, const DescribeRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeRule(request), context);
}

DisableRuleOutcome CloudWatchEventsClient::DisableRule(const DisableRuleRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return DisableRuleOutcome(NoResult());
  }
  else
  {
    return DisableRuleOutcome(outcome.GetError());
  }
}

DisableRuleOutcomeCallable CloudWatchEventsClient::DisableRuleCallable(const DisableRuleRequest& request) const
{
  return std::async(std::launch::async, &CloudWatchEventsClient::DisableRule, this, request);
}

void CloudWatchEventsClient::DisableRuleAsync(const DisableRuleRequest& request, const DisableRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&CloudWatchEventsClient::DisableRuleAsyncHelper, this, request, handler, context);
}

void CloudWatchEventsClient::DisableRuleAsyncHelper(const DisableRuleRequest& request, const DisableRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DisableRule(request), context);
}

EnableRuleOutcome CloudWatchEventsClient::EnableRule(const EnableRuleRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return EnableRuleOutcome(NoResult());
  }
  else
  {
    return EnableRuleOutcome(outcome.GetError());
  }
}

EnableRuleOutcomeCallable CloudWatchEventsClient::EnableRuleCallable(const EnableRuleRequest& request) const
{
  return std::async(std::launch::async, &CloudWatchEventsClient::EnableRule, this, request);
}

void CloudWatchEventsClient::EnableRuleAsync(const EnableRuleRequest& request, const EnableRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&CloudWatchEventsClient::EnableRuleAsyncHelper, this, request, handler, context);
}

void CloudWatchEventsClient::EnableRuleAsyncHelper(const EnableRuleRequest& request, const EnableRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, EnableRule(request), context);
}

ListRuleNamesByTargetOutcome CloudWatchEventsClient::ListRuleNamesByTarget(const ListRuleNamesByTargetRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return ListRuleNamesByTargetOutcome(ListRuleNamesByTargetResult(outcome.GetResult()));
  }
  else
  {
    return ListRuleNamesByTargetOutcome(outcome.GetError());
  }
}

ListRuleNamesByTargetOutcomeCallable CloudWatchEventsClient::ListRuleNamesByTargetCallable(const ListRuleNamesByTargetRequest& request) const
{
  return std::async(std::launch::async, &CloudWatchEventsClient::ListRuleNamesByTarget, this, request);
}

void CloudWatchEventsClient::ListRuleNamesByTargetAsync(const ListRuleNamesByTargetRequest& request, const ListRuleNamesByTargetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&CloudWatchEventsClient::ListRuleNamesByTargetAsyncHelper, this, request, handler, context);
}

void CloudWatchEventsClient::ListRuleNamesByTargetAsyncHelper(const ListRuleNamesByTargetRequest& request, const ListRuleNamesByTargetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListRuleNamesByTarget(request), context);
}

ListRulesOutcome CloudWatchEventsClient::ListRules(const ListRulesRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return ListRulesOutcome(ListRulesResult(outcome.GetResult()));
  }
  else
  {
    return ListRulesOutcome(outcome.GetError());
  }
}

ListRulesOutcomeCallable CloudWatchEventsClient::ListRulesCallable(const ListRulesRequest& request) const
{
  return std::async(std::launch::async, &CloudWatchEventsClient::ListRules, this, request);
}

void CloudWatchEventsClient::ListRulesAsync(const ListRulesRequest& request, const ListRulesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&CloudWatchEventsClient::ListRulesAsyncHelper, this, request, handler, context);
}

void CloudWatchEventsClient::ListRulesAsyncHelper(const ListRulesRequest& request, const ListRulesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListRules(request), context);
}

ListTargetsByRuleOutcome CloudWatchEventsClient::ListTargetsByRule(const ListTargetsByRuleRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return ListTargetsByRuleOutcome(ListTargetsByRuleResult(outcome.GetResult()));
  }
  else
  {
    return ListTargetsByRuleOutcome(outcome.GetError());
  }
}

ListTargetsByRuleOutcomeCallable CloudWatchEventsClient::ListTargetsByRuleCallable(const ListTargetsByRuleRequest& request) const
{
  return std::async(std::launch::async, &CloudWatchEventsClient::ListTargetsByRule, this, request);
}

void CloudWatchEventsClient::ListTargetsByRuleAsync(const ListTargetsByRuleRequest& request, const ListTargetsByRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&CloudWatchEventsClient::ListTargetsByRuleAsyncHelper, this, request, handler, context);
}

void CloudWatchEventsClient::ListTargetsByRuleAsyncHelper(const ListTargetsByRuleRequest& request, const ListTargetsByRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListTargetsByRule(request), context);
}

PutEventsOutcome CloudWatchEventsClient::PutEvents(const PutEventsRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return PutEventsOutcome(PutEventsResult(outcome.GetResult()));
  }
  else
  {
    return PutEventsOutcome(outcome.GetError());
  }
}

PutEventsOutcomeCallable CloudWatchEventsClient::PutEventsCallable(const PutEventsRequest& request) const
{
  return std::async(std::launch::async, &CloudWatchEventsClient::PutEvents, this, request);
}

void CloudWatchEventsClient::PutEventsAsync(const PutEventsRequest& request, const PutEventsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&CloudWatchEventsClient::PutEventsAsyncHelper, this, request, handler, context);
}

void CloudWatchEventsClient::PutEventsAsyncHelper(const PutEventsRequest& request, const PutEventsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, PutEvents(request), context);
}

PutRuleOutcome CloudWatchEventsClient::PutRule(const PutRuleRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return PutRuleOutcome(PutRuleResult(outcome.GetResult()));
  }
  else
  {
    return PutRuleOutcome(outcome.GetError());
  }
}

PutRuleOutcomeCallable CloudWatchEventsClient::PutRuleCallable(const PutRuleRequest& request) const
{
  return std::async(std::launch::async, &CloudWatchEventsClient::PutRule, this, request);
}

void CloudWatchEventsClient::PutRuleAsync(const PutRuleRequest& request, const PutRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&CloudWatchEventsClient::PutRuleAsyncHelper, this, request, handler, context);
}

void CloudWatchEventsClient::PutRuleAsyncHelper(const PutRuleRequest& request, const PutRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, PutRule(request), context);
}

PutTargetsOutcome CloudWatchEventsClient::PutTargets(const PutTargetsRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return PutTargetsOutcome(PutTargetsResult(outcome.GetResult()));
  }
  else
  {
    return PutTargetsOutcome(outcome.GetError());
  }
}

PutTargetsOutcomeCallable CloudWatchEventsClient::PutTargetsCallable(const PutTargetsRequest& request) const
{
  return std::async(std::launch::async, &CloudWatchEventsClient::PutTargets, this, request);
}

void CloudWatchEventsClient::PutTargetsAsync(const PutTargetsRequest& request, const PutTargetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&CloudWatchEventsClient::PutTargetsAsyncHelper, this, request, handler, context);
}

void CloudWatchEventsClient::PutTargetsAsyncHelper(const PutTargetsRequest& request, const PutTargetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, PutTargets(request), context);
}

RemoveTargetsOutcome CloudWatchEventsClient::RemoveTargets(const RemoveTargetsRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return RemoveTargetsOutcome(RemoveTargetsResult(outcome.GetResult()));
  }
  else
  {
    return RemoveTargetsOutcome(outcome.GetError());
  }
}

RemoveTargetsOutcomeCallable CloudWatchEventsClient::RemoveTargetsCallable(const RemoveTargetsRequest& request) const
{
  return std::async(std::launch::async, &CloudWatchEventsClient::RemoveTargets, this, request);
}

void CloudWatchEventsClient::RemoveTargetsAsync(const RemoveTargetsRequest& request, const RemoveTargetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&CloudWatchEventsClient::RemoveTargetsAsyncHelper, this, request, handler, context);
}

void CloudWatchEventsClient::RemoveTargetsAsyncHelper(const RemoveTargetsRequest& request, const RemoveTargetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, RemoveTargets(request), context);
}

TestEventPatternOutcome CloudWatchEventsClient::TestEventPattern(const TestEventPatternRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return TestEventPatternOutcome(TestEventPatternResult(outcome.GetResult()));
  }
  else
  {
    return TestEventPatternOutcome(outcome.GetError());
  }
}

TestEventPatternOutcomeCallable CloudWatchEventsClient::TestEventPatternCallable(const TestEventPatternRequest& request) const
{
  return std::async(std::launch::async, &CloudWatchEventsClient::TestEventPattern, this, request);
}

void CloudWatchEventsClient::TestEventPatternAsync(const TestEventPatternRequest& request, const TestEventPatternResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&CloudWatchEventsClient::TestEventPatternAsyncHelper, this, request, handler, context);
}

void CloudWatchEventsClient::TestEventPatternAsyncHelper(const TestEventPatternRequest& request, const TestEventPatternResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, TestEventPattern(request), context);
}

