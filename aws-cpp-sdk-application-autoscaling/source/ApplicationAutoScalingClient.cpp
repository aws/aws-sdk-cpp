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
#include <aws/application-autoscaling/ApplicationAutoScalingClient.h>
#include <aws/application-autoscaling/ApplicationAutoScalingEndpoint.h>
#include <aws/application-autoscaling/ApplicationAutoScalingErrorMarshaller.h>
#include <aws/application-autoscaling/model/DeleteScalingPolicyRequest.h>
#include <aws/application-autoscaling/model/DeregisterScalableTargetRequest.h>
#include <aws/application-autoscaling/model/DescribeScalableTargetsRequest.h>
#include <aws/application-autoscaling/model/DescribeScalingActivitiesRequest.h>
#include <aws/application-autoscaling/model/DescribeScalingPoliciesRequest.h>
#include <aws/application-autoscaling/model/PutScalingPolicyRequest.h>
#include <aws/application-autoscaling/model/RegisterScalableTargetRequest.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::ApplicationAutoScaling;
using namespace Aws::ApplicationAutoScaling::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;

static const char* SERVICE_NAME = "application-autoscaling";
static const char* ALLOCATION_TAG = "ApplicationAutoScalingClient";

ApplicationAutoScalingClient::ApplicationAutoScalingClient(const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(Aws::MakeShared<HttpClientFactory>(ALLOCATION_TAG), clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
        SERVICE_NAME, clientConfiguration.authenticationRegion.empty() ? RegionMapper::GetRegionName(clientConfiguration.region)
                                                                        : clientConfiguration.authenticationRegion),
    Aws::MakeShared<ApplicationAutoScalingErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

ApplicationAutoScalingClient::ApplicationAutoScalingClient(const AWSCredentials& credentials, const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(Aws::MakeShared<HttpClientFactory>(ALLOCATION_TAG), clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
         SERVICE_NAME, clientConfiguration.authenticationRegion.empty() ? RegionMapper::GetRegionName(clientConfiguration.region)
                                                                        : clientConfiguration.authenticationRegion),
    Aws::MakeShared<ApplicationAutoScalingErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

ApplicationAutoScalingClient::ApplicationAutoScalingClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
  const Client::ClientConfiguration& clientConfiguration, const std::shared_ptr<HttpClientFactory const>& httpClientFactory) :
  BASECLASS(httpClientFactory != nullptr ? httpClientFactory : Aws::MakeShared<HttpClientFactory>(ALLOCATION_TAG), clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider,
         SERVICE_NAME, clientConfiguration.authenticationRegion.empty() ? RegionMapper::GetRegionName(clientConfiguration.region)
                                                                        : clientConfiguration.authenticationRegion),
    Aws::MakeShared<ApplicationAutoScalingErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

ApplicationAutoScalingClient::~ApplicationAutoScalingClient()
{
}

void ApplicationAutoScalingClient::init(const ClientConfiguration& config)
{
  Aws::StringStream ss;
  ss << SchemeMapper::ToString(config.scheme) << "://";

  if(config.endpointOverride.empty() && config.authenticationRegion.empty())
  {
    ss << ApplicationAutoScalingEndpoint::ForRegion(config.region);
  }
  else
  {
    ss << config.endpointOverride;
  }

  m_uri = ss.str();
}
DeleteScalingPolicyOutcome ApplicationAutoScalingClient::DeleteScalingPolicy(const DeleteScalingPolicyRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return DeleteScalingPolicyOutcome(DeleteScalingPolicyResult(outcome.GetResult()));
  }
  else
  {
    return DeleteScalingPolicyOutcome(outcome.GetError());
  }
}

DeleteScalingPolicyOutcomeCallable ApplicationAutoScalingClient::DeleteScalingPolicyCallable(const DeleteScalingPolicyRequest& request) const
{
  return std::async(std::launch::async, &ApplicationAutoScalingClient::DeleteScalingPolicy, this, request);
}

void ApplicationAutoScalingClient::DeleteScalingPolicyAsync(const DeleteScalingPolicyRequest& request, const DeleteScalingPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&ApplicationAutoScalingClient::DeleteScalingPolicyAsyncHelper, this, request, handler, context);
}

void ApplicationAutoScalingClient::DeleteScalingPolicyAsyncHelper(const DeleteScalingPolicyRequest& request, const DeleteScalingPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteScalingPolicy(request), context);
}

DeregisterScalableTargetOutcome ApplicationAutoScalingClient::DeregisterScalableTarget(const DeregisterScalableTargetRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return DeregisterScalableTargetOutcome(DeregisterScalableTargetResult(outcome.GetResult()));
  }
  else
  {
    return DeregisterScalableTargetOutcome(outcome.GetError());
  }
}

DeregisterScalableTargetOutcomeCallable ApplicationAutoScalingClient::DeregisterScalableTargetCallable(const DeregisterScalableTargetRequest& request) const
{
  return std::async(std::launch::async, &ApplicationAutoScalingClient::DeregisterScalableTarget, this, request);
}

void ApplicationAutoScalingClient::DeregisterScalableTargetAsync(const DeregisterScalableTargetRequest& request, const DeregisterScalableTargetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&ApplicationAutoScalingClient::DeregisterScalableTargetAsyncHelper, this, request, handler, context);
}

void ApplicationAutoScalingClient::DeregisterScalableTargetAsyncHelper(const DeregisterScalableTargetRequest& request, const DeregisterScalableTargetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeregisterScalableTarget(request), context);
}

DescribeScalableTargetsOutcome ApplicationAutoScalingClient::DescribeScalableTargets(const DescribeScalableTargetsRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return DescribeScalableTargetsOutcome(DescribeScalableTargetsResult(outcome.GetResult()));
  }
  else
  {
    return DescribeScalableTargetsOutcome(outcome.GetError());
  }
}

DescribeScalableTargetsOutcomeCallable ApplicationAutoScalingClient::DescribeScalableTargetsCallable(const DescribeScalableTargetsRequest& request) const
{
  return std::async(std::launch::async, &ApplicationAutoScalingClient::DescribeScalableTargets, this, request);
}

void ApplicationAutoScalingClient::DescribeScalableTargetsAsync(const DescribeScalableTargetsRequest& request, const DescribeScalableTargetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&ApplicationAutoScalingClient::DescribeScalableTargetsAsyncHelper, this, request, handler, context);
}

void ApplicationAutoScalingClient::DescribeScalableTargetsAsyncHelper(const DescribeScalableTargetsRequest& request, const DescribeScalableTargetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeScalableTargets(request), context);
}

DescribeScalingActivitiesOutcome ApplicationAutoScalingClient::DescribeScalingActivities(const DescribeScalingActivitiesRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return DescribeScalingActivitiesOutcome(DescribeScalingActivitiesResult(outcome.GetResult()));
  }
  else
  {
    return DescribeScalingActivitiesOutcome(outcome.GetError());
  }
}

DescribeScalingActivitiesOutcomeCallable ApplicationAutoScalingClient::DescribeScalingActivitiesCallable(const DescribeScalingActivitiesRequest& request) const
{
  return std::async(std::launch::async, &ApplicationAutoScalingClient::DescribeScalingActivities, this, request);
}

void ApplicationAutoScalingClient::DescribeScalingActivitiesAsync(const DescribeScalingActivitiesRequest& request, const DescribeScalingActivitiesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&ApplicationAutoScalingClient::DescribeScalingActivitiesAsyncHelper, this, request, handler, context);
}

void ApplicationAutoScalingClient::DescribeScalingActivitiesAsyncHelper(const DescribeScalingActivitiesRequest& request, const DescribeScalingActivitiesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeScalingActivities(request), context);
}

DescribeScalingPoliciesOutcome ApplicationAutoScalingClient::DescribeScalingPolicies(const DescribeScalingPoliciesRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return DescribeScalingPoliciesOutcome(DescribeScalingPoliciesResult(outcome.GetResult()));
  }
  else
  {
    return DescribeScalingPoliciesOutcome(outcome.GetError());
  }
}

DescribeScalingPoliciesOutcomeCallable ApplicationAutoScalingClient::DescribeScalingPoliciesCallable(const DescribeScalingPoliciesRequest& request) const
{
  return std::async(std::launch::async, &ApplicationAutoScalingClient::DescribeScalingPolicies, this, request);
}

void ApplicationAutoScalingClient::DescribeScalingPoliciesAsync(const DescribeScalingPoliciesRequest& request, const DescribeScalingPoliciesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&ApplicationAutoScalingClient::DescribeScalingPoliciesAsyncHelper, this, request, handler, context);
}

void ApplicationAutoScalingClient::DescribeScalingPoliciesAsyncHelper(const DescribeScalingPoliciesRequest& request, const DescribeScalingPoliciesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeScalingPolicies(request), context);
}

PutScalingPolicyOutcome ApplicationAutoScalingClient::PutScalingPolicy(const PutScalingPolicyRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return PutScalingPolicyOutcome(PutScalingPolicyResult(outcome.GetResult()));
  }
  else
  {
    return PutScalingPolicyOutcome(outcome.GetError());
  }
}

PutScalingPolicyOutcomeCallable ApplicationAutoScalingClient::PutScalingPolicyCallable(const PutScalingPolicyRequest& request) const
{
  return std::async(std::launch::async, &ApplicationAutoScalingClient::PutScalingPolicy, this, request);
}

void ApplicationAutoScalingClient::PutScalingPolicyAsync(const PutScalingPolicyRequest& request, const PutScalingPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&ApplicationAutoScalingClient::PutScalingPolicyAsyncHelper, this, request, handler, context);
}

void ApplicationAutoScalingClient::PutScalingPolicyAsyncHelper(const PutScalingPolicyRequest& request, const PutScalingPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, PutScalingPolicy(request), context);
}

RegisterScalableTargetOutcome ApplicationAutoScalingClient::RegisterScalableTarget(const RegisterScalableTargetRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return RegisterScalableTargetOutcome(RegisterScalableTargetResult(outcome.GetResult()));
  }
  else
  {
    return RegisterScalableTargetOutcome(outcome.GetError());
  }
}

RegisterScalableTargetOutcomeCallable ApplicationAutoScalingClient::RegisterScalableTargetCallable(const RegisterScalableTargetRequest& request) const
{
  return std::async(std::launch::async, &ApplicationAutoScalingClient::RegisterScalableTarget, this, request);
}

void ApplicationAutoScalingClient::RegisterScalableTargetAsync(const RegisterScalableTargetRequest& request, const RegisterScalableTargetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&ApplicationAutoScalingClient::RegisterScalableTargetAsyncHelper, this, request, handler, context);
}

void ApplicationAutoScalingClient::RegisterScalableTargetAsyncHelper(const RegisterScalableTargetRequest& request, const RegisterScalableTargetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, RegisterScalableTarget(request), context);
}

