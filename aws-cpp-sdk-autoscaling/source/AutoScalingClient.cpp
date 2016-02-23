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
#include <aws/autoscaling/AutoScalingClient.h>
#include <aws/autoscaling/AutoScalingEndpoint.h>
#include <aws/autoscaling/AutoScalingErrorMarshaller.h>
#include <aws/autoscaling/model/AttachInstancesRequest.h>
#include <aws/autoscaling/model/AttachLoadBalancersRequest.h>
#include <aws/autoscaling/model/CompleteLifecycleActionRequest.h>
#include <aws/autoscaling/model/CreateAutoScalingGroupRequest.h>
#include <aws/autoscaling/model/CreateLaunchConfigurationRequest.h>
#include <aws/autoscaling/model/CreateOrUpdateTagsRequest.h>
#include <aws/autoscaling/model/DeleteAutoScalingGroupRequest.h>
#include <aws/autoscaling/model/DeleteLaunchConfigurationRequest.h>
#include <aws/autoscaling/model/DeleteLifecycleHookRequest.h>
#include <aws/autoscaling/model/DeleteNotificationConfigurationRequest.h>
#include <aws/autoscaling/model/DeletePolicyRequest.h>
#include <aws/autoscaling/model/DeleteScheduledActionRequest.h>
#include <aws/autoscaling/model/DeleteTagsRequest.h>
#include <aws/autoscaling/model/DescribeAccountLimitsRequest.h>
#include <aws/autoscaling/model/DescribeAdjustmentTypesRequest.h>
#include <aws/autoscaling/model/DescribeAutoScalingGroupsRequest.h>
#include <aws/autoscaling/model/DescribeAutoScalingInstancesRequest.h>
#include <aws/autoscaling/model/DescribeAutoScalingNotificationTypesRequest.h>
#include <aws/autoscaling/model/DescribeLaunchConfigurationsRequest.h>
#include <aws/autoscaling/model/DescribeLifecycleHookTypesRequest.h>
#include <aws/autoscaling/model/DescribeLifecycleHooksRequest.h>
#include <aws/autoscaling/model/DescribeLoadBalancersRequest.h>
#include <aws/autoscaling/model/DescribeMetricCollectionTypesRequest.h>
#include <aws/autoscaling/model/DescribeNotificationConfigurationsRequest.h>
#include <aws/autoscaling/model/DescribePoliciesRequest.h>
#include <aws/autoscaling/model/DescribeScalingActivitiesRequest.h>
#include <aws/autoscaling/model/DescribeScalingProcessTypesRequest.h>
#include <aws/autoscaling/model/DescribeScheduledActionsRequest.h>
#include <aws/autoscaling/model/DescribeTagsRequest.h>
#include <aws/autoscaling/model/DescribeTerminationPolicyTypesRequest.h>
#include <aws/autoscaling/model/DetachInstancesRequest.h>
#include <aws/autoscaling/model/DetachLoadBalancersRequest.h>
#include <aws/autoscaling/model/DisableMetricsCollectionRequest.h>
#include <aws/autoscaling/model/EnableMetricsCollectionRequest.h>
#include <aws/autoscaling/model/EnterStandbyRequest.h>
#include <aws/autoscaling/model/ExecutePolicyRequest.h>
#include <aws/autoscaling/model/ExitStandbyRequest.h>
#include <aws/autoscaling/model/PutLifecycleHookRequest.h>
#include <aws/autoscaling/model/PutNotificationConfigurationRequest.h>
#include <aws/autoscaling/model/PutScalingPolicyRequest.h>
#include <aws/autoscaling/model/PutScheduledUpdateGroupActionRequest.h>
#include <aws/autoscaling/model/RecordLifecycleActionHeartbeatRequest.h>
#include <aws/autoscaling/model/ResumeProcessesRequest.h>
#include <aws/autoscaling/model/SetDesiredCapacityRequest.h>
#include <aws/autoscaling/model/SetInstanceHealthRequest.h>
#include <aws/autoscaling/model/SetInstanceProtectionRequest.h>
#include <aws/autoscaling/model/SuspendProcessesRequest.h>
#include <aws/autoscaling/model/TerminateInstanceInAutoScalingGroupRequest.h>
#include <aws/autoscaling/model/UpdateAutoScalingGroupRequest.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::AutoScaling;
using namespace Aws::AutoScaling::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Xml;


static const char* SERVICE_NAME = "autoscaling";
static const char* ALLOCATION_TAG = "AutoScalingClient";

AutoScalingClient::AutoScalingClient(const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(Aws::MakeShared<HttpClientFactory>(ALLOCATION_TAG), clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
        SERVICE_NAME, clientConfiguration.authenticationRegion.empty() ? RegionMapper::GetRegionName(clientConfiguration.region) : clientConfiguration.authenticationRegion),
    Aws::MakeShared<AutoScalingErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

AutoScalingClient::AutoScalingClient(const AWSCredentials& credentials, const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(Aws::MakeShared<HttpClientFactory>(ALLOCATION_TAG), clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
         SERVICE_NAME, clientConfiguration.authenticationRegion.empty() ? RegionMapper::GetRegionName(clientConfiguration.region) : clientConfiguration.authenticationRegion),
    Aws::MakeShared<AutoScalingErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

AutoScalingClient::AutoScalingClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
  const Client::ClientConfiguration& clientConfiguration, const std::shared_ptr<HttpClientFactory const>& httpClientFactory) :
  BASECLASS(httpClientFactory != nullptr ? httpClientFactory : Aws::MakeShared<HttpClientFactory>(ALLOCATION_TAG), clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider,
         SERVICE_NAME, clientConfiguration.authenticationRegion.empty() ? RegionMapper::GetRegionName(clientConfiguration.region) : clientConfiguration.authenticationRegion),
    Aws::MakeShared<AutoScalingErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

AutoScalingClient::~AutoScalingClient()
{
}

void AutoScalingClient::init(const ClientConfiguration& config)
{
  Aws::StringStream ss;
  ss << SchemeMapper::ToString(config.scheme) << "://";

  if(config.endpointOverride.empty() && config.authenticationRegion.empty())
  {
    ss << AutoScalingEndpoint::ForRegion(config.region);
  }
  else
  {
    ss << config.endpointOverride;
  }

  m_uri = ss.str();
}
AttachInstancesOutcome AutoScalingClient::AttachInstances(const AttachInstancesRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";
  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return AttachInstancesOutcome(NoResult());
  }
  else
  {
    return AttachInstancesOutcome(outcome.GetError());
  }
}

AttachInstancesOutcomeCallable AutoScalingClient::AttachInstancesCallable(const AttachInstancesRequest& request) const
{
  return std::async(std::launch::async, &AutoScalingClient::AttachInstances, this, request);
}

void AutoScalingClient::AttachInstancesAsync(const AttachInstancesRequest& request, const AttachInstancesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&AutoScalingClient::AttachInstancesAsyncHelper, this, request, handler, context);
}

void AutoScalingClient::AttachInstancesAsyncHelper(const AttachInstancesRequest& request, const AttachInstancesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, AttachInstances(request), context);
}

AttachLoadBalancersOutcome AutoScalingClient::AttachLoadBalancers(const AttachLoadBalancersRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";
  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return AttachLoadBalancersOutcome(AttachLoadBalancersResult(outcome.GetResult()));
  }
  else
  {
    return AttachLoadBalancersOutcome(outcome.GetError());
  }
}

AttachLoadBalancersOutcomeCallable AutoScalingClient::AttachLoadBalancersCallable(const AttachLoadBalancersRequest& request) const
{
  return std::async(std::launch::async, &AutoScalingClient::AttachLoadBalancers, this, request);
}

void AutoScalingClient::AttachLoadBalancersAsync(const AttachLoadBalancersRequest& request, const AttachLoadBalancersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&AutoScalingClient::AttachLoadBalancersAsyncHelper, this, request, handler, context);
}

void AutoScalingClient::AttachLoadBalancersAsyncHelper(const AttachLoadBalancersRequest& request, const AttachLoadBalancersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, AttachLoadBalancers(request), context);
}

CompleteLifecycleActionOutcome AutoScalingClient::CompleteLifecycleAction(const CompleteLifecycleActionRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";
  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return CompleteLifecycleActionOutcome(CompleteLifecycleActionResult(outcome.GetResult()));
  }
  else
  {
    return CompleteLifecycleActionOutcome(outcome.GetError());
  }
}

CompleteLifecycleActionOutcomeCallable AutoScalingClient::CompleteLifecycleActionCallable(const CompleteLifecycleActionRequest& request) const
{
  return std::async(std::launch::async, &AutoScalingClient::CompleteLifecycleAction, this, request);
}

void AutoScalingClient::CompleteLifecycleActionAsync(const CompleteLifecycleActionRequest& request, const CompleteLifecycleActionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&AutoScalingClient::CompleteLifecycleActionAsyncHelper, this, request, handler, context);
}

void AutoScalingClient::CompleteLifecycleActionAsyncHelper(const CompleteLifecycleActionRequest& request, const CompleteLifecycleActionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CompleteLifecycleAction(request), context);
}

CreateAutoScalingGroupOutcome AutoScalingClient::CreateAutoScalingGroup(const CreateAutoScalingGroupRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";
  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return CreateAutoScalingGroupOutcome(NoResult());
  }
  else
  {
    return CreateAutoScalingGroupOutcome(outcome.GetError());
  }
}

CreateAutoScalingGroupOutcomeCallable AutoScalingClient::CreateAutoScalingGroupCallable(const CreateAutoScalingGroupRequest& request) const
{
  return std::async(std::launch::async, &AutoScalingClient::CreateAutoScalingGroup, this, request);
}

void AutoScalingClient::CreateAutoScalingGroupAsync(const CreateAutoScalingGroupRequest& request, const CreateAutoScalingGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&AutoScalingClient::CreateAutoScalingGroupAsyncHelper, this, request, handler, context);
}

void AutoScalingClient::CreateAutoScalingGroupAsyncHelper(const CreateAutoScalingGroupRequest& request, const CreateAutoScalingGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateAutoScalingGroup(request), context);
}

CreateLaunchConfigurationOutcome AutoScalingClient::CreateLaunchConfiguration(const CreateLaunchConfigurationRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";
  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return CreateLaunchConfigurationOutcome(NoResult());
  }
  else
  {
    return CreateLaunchConfigurationOutcome(outcome.GetError());
  }
}

CreateLaunchConfigurationOutcomeCallable AutoScalingClient::CreateLaunchConfigurationCallable(const CreateLaunchConfigurationRequest& request) const
{
  return std::async(std::launch::async, &AutoScalingClient::CreateLaunchConfiguration, this, request);
}

void AutoScalingClient::CreateLaunchConfigurationAsync(const CreateLaunchConfigurationRequest& request, const CreateLaunchConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&AutoScalingClient::CreateLaunchConfigurationAsyncHelper, this, request, handler, context);
}

void AutoScalingClient::CreateLaunchConfigurationAsyncHelper(const CreateLaunchConfigurationRequest& request, const CreateLaunchConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateLaunchConfiguration(request), context);
}

CreateOrUpdateTagsOutcome AutoScalingClient::CreateOrUpdateTags(const CreateOrUpdateTagsRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";
  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return CreateOrUpdateTagsOutcome(NoResult());
  }
  else
  {
    return CreateOrUpdateTagsOutcome(outcome.GetError());
  }
}

CreateOrUpdateTagsOutcomeCallable AutoScalingClient::CreateOrUpdateTagsCallable(const CreateOrUpdateTagsRequest& request) const
{
  return std::async(std::launch::async, &AutoScalingClient::CreateOrUpdateTags, this, request);
}

void AutoScalingClient::CreateOrUpdateTagsAsync(const CreateOrUpdateTagsRequest& request, const CreateOrUpdateTagsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&AutoScalingClient::CreateOrUpdateTagsAsyncHelper, this, request, handler, context);
}

void AutoScalingClient::CreateOrUpdateTagsAsyncHelper(const CreateOrUpdateTagsRequest& request, const CreateOrUpdateTagsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateOrUpdateTags(request), context);
}

DeleteAutoScalingGroupOutcome AutoScalingClient::DeleteAutoScalingGroup(const DeleteAutoScalingGroupRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";
  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return DeleteAutoScalingGroupOutcome(NoResult());
  }
  else
  {
    return DeleteAutoScalingGroupOutcome(outcome.GetError());
  }
}

DeleteAutoScalingGroupOutcomeCallable AutoScalingClient::DeleteAutoScalingGroupCallable(const DeleteAutoScalingGroupRequest& request) const
{
  return std::async(std::launch::async, &AutoScalingClient::DeleteAutoScalingGroup, this, request);
}

void AutoScalingClient::DeleteAutoScalingGroupAsync(const DeleteAutoScalingGroupRequest& request, const DeleteAutoScalingGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&AutoScalingClient::DeleteAutoScalingGroupAsyncHelper, this, request, handler, context);
}

void AutoScalingClient::DeleteAutoScalingGroupAsyncHelper(const DeleteAutoScalingGroupRequest& request, const DeleteAutoScalingGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteAutoScalingGroup(request), context);
}

DeleteLaunchConfigurationOutcome AutoScalingClient::DeleteLaunchConfiguration(const DeleteLaunchConfigurationRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";
  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return DeleteLaunchConfigurationOutcome(NoResult());
  }
  else
  {
    return DeleteLaunchConfigurationOutcome(outcome.GetError());
  }
}

DeleteLaunchConfigurationOutcomeCallable AutoScalingClient::DeleteLaunchConfigurationCallable(const DeleteLaunchConfigurationRequest& request) const
{
  return std::async(std::launch::async, &AutoScalingClient::DeleteLaunchConfiguration, this, request);
}

void AutoScalingClient::DeleteLaunchConfigurationAsync(const DeleteLaunchConfigurationRequest& request, const DeleteLaunchConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&AutoScalingClient::DeleteLaunchConfigurationAsyncHelper, this, request, handler, context);
}

void AutoScalingClient::DeleteLaunchConfigurationAsyncHelper(const DeleteLaunchConfigurationRequest& request, const DeleteLaunchConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteLaunchConfiguration(request), context);
}

DeleteLifecycleHookOutcome AutoScalingClient::DeleteLifecycleHook(const DeleteLifecycleHookRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";
  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return DeleteLifecycleHookOutcome(DeleteLifecycleHookResult(outcome.GetResult()));
  }
  else
  {
    return DeleteLifecycleHookOutcome(outcome.GetError());
  }
}

DeleteLifecycleHookOutcomeCallable AutoScalingClient::DeleteLifecycleHookCallable(const DeleteLifecycleHookRequest& request) const
{
  return std::async(std::launch::async, &AutoScalingClient::DeleteLifecycleHook, this, request);
}

void AutoScalingClient::DeleteLifecycleHookAsync(const DeleteLifecycleHookRequest& request, const DeleteLifecycleHookResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&AutoScalingClient::DeleteLifecycleHookAsyncHelper, this, request, handler, context);
}

void AutoScalingClient::DeleteLifecycleHookAsyncHelper(const DeleteLifecycleHookRequest& request, const DeleteLifecycleHookResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteLifecycleHook(request), context);
}

DeleteNotificationConfigurationOutcome AutoScalingClient::DeleteNotificationConfiguration(const DeleteNotificationConfigurationRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";
  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return DeleteNotificationConfigurationOutcome(NoResult());
  }
  else
  {
    return DeleteNotificationConfigurationOutcome(outcome.GetError());
  }
}

DeleteNotificationConfigurationOutcomeCallable AutoScalingClient::DeleteNotificationConfigurationCallable(const DeleteNotificationConfigurationRequest& request) const
{
  return std::async(std::launch::async, &AutoScalingClient::DeleteNotificationConfiguration, this, request);
}

void AutoScalingClient::DeleteNotificationConfigurationAsync(const DeleteNotificationConfigurationRequest& request, const DeleteNotificationConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&AutoScalingClient::DeleteNotificationConfigurationAsyncHelper, this, request, handler, context);
}

void AutoScalingClient::DeleteNotificationConfigurationAsyncHelper(const DeleteNotificationConfigurationRequest& request, const DeleteNotificationConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteNotificationConfiguration(request), context);
}

DeletePolicyOutcome AutoScalingClient::DeletePolicy(const DeletePolicyRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";
  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return DeletePolicyOutcome(NoResult());
  }
  else
  {
    return DeletePolicyOutcome(outcome.GetError());
  }
}

DeletePolicyOutcomeCallable AutoScalingClient::DeletePolicyCallable(const DeletePolicyRequest& request) const
{
  return std::async(std::launch::async, &AutoScalingClient::DeletePolicy, this, request);
}

void AutoScalingClient::DeletePolicyAsync(const DeletePolicyRequest& request, const DeletePolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&AutoScalingClient::DeletePolicyAsyncHelper, this, request, handler, context);
}

void AutoScalingClient::DeletePolicyAsyncHelper(const DeletePolicyRequest& request, const DeletePolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeletePolicy(request), context);
}

DeleteScheduledActionOutcome AutoScalingClient::DeleteScheduledAction(const DeleteScheduledActionRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";
  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return DeleteScheduledActionOutcome(NoResult());
  }
  else
  {
    return DeleteScheduledActionOutcome(outcome.GetError());
  }
}

DeleteScheduledActionOutcomeCallable AutoScalingClient::DeleteScheduledActionCallable(const DeleteScheduledActionRequest& request) const
{
  return std::async(std::launch::async, &AutoScalingClient::DeleteScheduledAction, this, request);
}

void AutoScalingClient::DeleteScheduledActionAsync(const DeleteScheduledActionRequest& request, const DeleteScheduledActionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&AutoScalingClient::DeleteScheduledActionAsyncHelper, this, request, handler, context);
}

void AutoScalingClient::DeleteScheduledActionAsyncHelper(const DeleteScheduledActionRequest& request, const DeleteScheduledActionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteScheduledAction(request), context);
}

DeleteTagsOutcome AutoScalingClient::DeleteTags(const DeleteTagsRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";
  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return DeleteTagsOutcome(NoResult());
  }
  else
  {
    return DeleteTagsOutcome(outcome.GetError());
  }
}

DeleteTagsOutcomeCallable AutoScalingClient::DeleteTagsCallable(const DeleteTagsRequest& request) const
{
  return std::async(std::launch::async, &AutoScalingClient::DeleteTags, this, request);
}

void AutoScalingClient::DeleteTagsAsync(const DeleteTagsRequest& request, const DeleteTagsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&AutoScalingClient::DeleteTagsAsyncHelper, this, request, handler, context);
}

void AutoScalingClient::DeleteTagsAsyncHelper(const DeleteTagsRequest& request, const DeleteTagsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteTags(request), context);
}

DescribeAccountLimitsOutcome AutoScalingClient::DescribeAccountLimits(const DescribeAccountLimitsRequest& request) const
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

DescribeAccountLimitsOutcomeCallable AutoScalingClient::DescribeAccountLimitsCallable(const DescribeAccountLimitsRequest& request) const
{
  return std::async(std::launch::async, &AutoScalingClient::DescribeAccountLimits, this, request);
}

void AutoScalingClient::DescribeAccountLimitsAsync(const DescribeAccountLimitsRequest& request, const DescribeAccountLimitsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&AutoScalingClient::DescribeAccountLimitsAsyncHelper, this, request, handler, context);
}

void AutoScalingClient::DescribeAccountLimitsAsyncHelper(const DescribeAccountLimitsRequest& request, const DescribeAccountLimitsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeAccountLimits(request), context);
}

DescribeAdjustmentTypesOutcome AutoScalingClient::DescribeAdjustmentTypes(const DescribeAdjustmentTypesRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";
  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return DescribeAdjustmentTypesOutcome(DescribeAdjustmentTypesResult(outcome.GetResult()));
  }
  else
  {
    return DescribeAdjustmentTypesOutcome(outcome.GetError());
  }
}

DescribeAdjustmentTypesOutcomeCallable AutoScalingClient::DescribeAdjustmentTypesCallable(const DescribeAdjustmentTypesRequest& request) const
{
  return std::async(std::launch::async, &AutoScalingClient::DescribeAdjustmentTypes, this, request);
}

void AutoScalingClient::DescribeAdjustmentTypesAsync(const DescribeAdjustmentTypesRequest& request, const DescribeAdjustmentTypesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&AutoScalingClient::DescribeAdjustmentTypesAsyncHelper, this, request, handler, context);
}

void AutoScalingClient::DescribeAdjustmentTypesAsyncHelper(const DescribeAdjustmentTypesRequest& request, const DescribeAdjustmentTypesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeAdjustmentTypes(request), context);
}

DescribeAutoScalingGroupsOutcome AutoScalingClient::DescribeAutoScalingGroups(const DescribeAutoScalingGroupsRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";
  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return DescribeAutoScalingGroupsOutcome(DescribeAutoScalingGroupsResult(outcome.GetResult()));
  }
  else
  {
    return DescribeAutoScalingGroupsOutcome(outcome.GetError());
  }
}

DescribeAutoScalingGroupsOutcomeCallable AutoScalingClient::DescribeAutoScalingGroupsCallable(const DescribeAutoScalingGroupsRequest& request) const
{
  return std::async(std::launch::async, &AutoScalingClient::DescribeAutoScalingGroups, this, request);
}

void AutoScalingClient::DescribeAutoScalingGroupsAsync(const DescribeAutoScalingGroupsRequest& request, const DescribeAutoScalingGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&AutoScalingClient::DescribeAutoScalingGroupsAsyncHelper, this, request, handler, context);
}

void AutoScalingClient::DescribeAutoScalingGroupsAsyncHelper(const DescribeAutoScalingGroupsRequest& request, const DescribeAutoScalingGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeAutoScalingGroups(request), context);
}

DescribeAutoScalingInstancesOutcome AutoScalingClient::DescribeAutoScalingInstances(const DescribeAutoScalingInstancesRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";
  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return DescribeAutoScalingInstancesOutcome(DescribeAutoScalingInstancesResult(outcome.GetResult()));
  }
  else
  {
    return DescribeAutoScalingInstancesOutcome(outcome.GetError());
  }
}

DescribeAutoScalingInstancesOutcomeCallable AutoScalingClient::DescribeAutoScalingInstancesCallable(const DescribeAutoScalingInstancesRequest& request) const
{
  return std::async(std::launch::async, &AutoScalingClient::DescribeAutoScalingInstances, this, request);
}

void AutoScalingClient::DescribeAutoScalingInstancesAsync(const DescribeAutoScalingInstancesRequest& request, const DescribeAutoScalingInstancesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&AutoScalingClient::DescribeAutoScalingInstancesAsyncHelper, this, request, handler, context);
}

void AutoScalingClient::DescribeAutoScalingInstancesAsyncHelper(const DescribeAutoScalingInstancesRequest& request, const DescribeAutoScalingInstancesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeAutoScalingInstances(request), context);
}

DescribeAutoScalingNotificationTypesOutcome AutoScalingClient::DescribeAutoScalingNotificationTypes(const DescribeAutoScalingNotificationTypesRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";
  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return DescribeAutoScalingNotificationTypesOutcome(DescribeAutoScalingNotificationTypesResult(outcome.GetResult()));
  }
  else
  {
    return DescribeAutoScalingNotificationTypesOutcome(outcome.GetError());
  }
}

DescribeAutoScalingNotificationTypesOutcomeCallable AutoScalingClient::DescribeAutoScalingNotificationTypesCallable(const DescribeAutoScalingNotificationTypesRequest& request) const
{
  return std::async(std::launch::async, &AutoScalingClient::DescribeAutoScalingNotificationTypes, this, request);
}

void AutoScalingClient::DescribeAutoScalingNotificationTypesAsync(const DescribeAutoScalingNotificationTypesRequest& request, const DescribeAutoScalingNotificationTypesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&AutoScalingClient::DescribeAutoScalingNotificationTypesAsyncHelper, this, request, handler, context);
}

void AutoScalingClient::DescribeAutoScalingNotificationTypesAsyncHelper(const DescribeAutoScalingNotificationTypesRequest& request, const DescribeAutoScalingNotificationTypesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeAutoScalingNotificationTypes(request), context);
}

DescribeLaunchConfigurationsOutcome AutoScalingClient::DescribeLaunchConfigurations(const DescribeLaunchConfigurationsRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";
  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return DescribeLaunchConfigurationsOutcome(DescribeLaunchConfigurationsResult(outcome.GetResult()));
  }
  else
  {
    return DescribeLaunchConfigurationsOutcome(outcome.GetError());
  }
}

DescribeLaunchConfigurationsOutcomeCallable AutoScalingClient::DescribeLaunchConfigurationsCallable(const DescribeLaunchConfigurationsRequest& request) const
{
  return std::async(std::launch::async, &AutoScalingClient::DescribeLaunchConfigurations, this, request);
}

void AutoScalingClient::DescribeLaunchConfigurationsAsync(const DescribeLaunchConfigurationsRequest& request, const DescribeLaunchConfigurationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&AutoScalingClient::DescribeLaunchConfigurationsAsyncHelper, this, request, handler, context);
}

void AutoScalingClient::DescribeLaunchConfigurationsAsyncHelper(const DescribeLaunchConfigurationsRequest& request, const DescribeLaunchConfigurationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeLaunchConfigurations(request), context);
}

DescribeLifecycleHookTypesOutcome AutoScalingClient::DescribeLifecycleHookTypes(const DescribeLifecycleHookTypesRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";
  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return DescribeLifecycleHookTypesOutcome(DescribeLifecycleHookTypesResult(outcome.GetResult()));
  }
  else
  {
    return DescribeLifecycleHookTypesOutcome(outcome.GetError());
  }
}

DescribeLifecycleHookTypesOutcomeCallable AutoScalingClient::DescribeLifecycleHookTypesCallable(const DescribeLifecycleHookTypesRequest& request) const
{
  return std::async(std::launch::async, &AutoScalingClient::DescribeLifecycleHookTypes, this, request);
}

void AutoScalingClient::DescribeLifecycleHookTypesAsync(const DescribeLifecycleHookTypesRequest& request, const DescribeLifecycleHookTypesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&AutoScalingClient::DescribeLifecycleHookTypesAsyncHelper, this, request, handler, context);
}

void AutoScalingClient::DescribeLifecycleHookTypesAsyncHelper(const DescribeLifecycleHookTypesRequest& request, const DescribeLifecycleHookTypesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeLifecycleHookTypes(request), context);
}

DescribeLifecycleHooksOutcome AutoScalingClient::DescribeLifecycleHooks(const DescribeLifecycleHooksRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";
  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return DescribeLifecycleHooksOutcome(DescribeLifecycleHooksResult(outcome.GetResult()));
  }
  else
  {
    return DescribeLifecycleHooksOutcome(outcome.GetError());
  }
}

DescribeLifecycleHooksOutcomeCallable AutoScalingClient::DescribeLifecycleHooksCallable(const DescribeLifecycleHooksRequest& request) const
{
  return std::async(std::launch::async, &AutoScalingClient::DescribeLifecycleHooks, this, request);
}

void AutoScalingClient::DescribeLifecycleHooksAsync(const DescribeLifecycleHooksRequest& request, const DescribeLifecycleHooksResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&AutoScalingClient::DescribeLifecycleHooksAsyncHelper, this, request, handler, context);
}

void AutoScalingClient::DescribeLifecycleHooksAsyncHelper(const DescribeLifecycleHooksRequest& request, const DescribeLifecycleHooksResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeLifecycleHooks(request), context);
}

DescribeLoadBalancersOutcome AutoScalingClient::DescribeLoadBalancers(const DescribeLoadBalancersRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";
  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return DescribeLoadBalancersOutcome(DescribeLoadBalancersResult(outcome.GetResult()));
  }
  else
  {
    return DescribeLoadBalancersOutcome(outcome.GetError());
  }
}

DescribeLoadBalancersOutcomeCallable AutoScalingClient::DescribeLoadBalancersCallable(const DescribeLoadBalancersRequest& request) const
{
  return std::async(std::launch::async, &AutoScalingClient::DescribeLoadBalancers, this, request);
}

void AutoScalingClient::DescribeLoadBalancersAsync(const DescribeLoadBalancersRequest& request, const DescribeLoadBalancersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&AutoScalingClient::DescribeLoadBalancersAsyncHelper, this, request, handler, context);
}

void AutoScalingClient::DescribeLoadBalancersAsyncHelper(const DescribeLoadBalancersRequest& request, const DescribeLoadBalancersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeLoadBalancers(request), context);
}

DescribeMetricCollectionTypesOutcome AutoScalingClient::DescribeMetricCollectionTypes(const DescribeMetricCollectionTypesRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";
  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return DescribeMetricCollectionTypesOutcome(DescribeMetricCollectionTypesResult(outcome.GetResult()));
  }
  else
  {
    return DescribeMetricCollectionTypesOutcome(outcome.GetError());
  }
}

DescribeMetricCollectionTypesOutcomeCallable AutoScalingClient::DescribeMetricCollectionTypesCallable(const DescribeMetricCollectionTypesRequest& request) const
{
  return std::async(std::launch::async, &AutoScalingClient::DescribeMetricCollectionTypes, this, request);
}

void AutoScalingClient::DescribeMetricCollectionTypesAsync(const DescribeMetricCollectionTypesRequest& request, const DescribeMetricCollectionTypesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&AutoScalingClient::DescribeMetricCollectionTypesAsyncHelper, this, request, handler, context);
}

void AutoScalingClient::DescribeMetricCollectionTypesAsyncHelper(const DescribeMetricCollectionTypesRequest& request, const DescribeMetricCollectionTypesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeMetricCollectionTypes(request), context);
}

DescribeNotificationConfigurationsOutcome AutoScalingClient::DescribeNotificationConfigurations(const DescribeNotificationConfigurationsRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";
  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return DescribeNotificationConfigurationsOutcome(DescribeNotificationConfigurationsResult(outcome.GetResult()));
  }
  else
  {
    return DescribeNotificationConfigurationsOutcome(outcome.GetError());
  }
}

DescribeNotificationConfigurationsOutcomeCallable AutoScalingClient::DescribeNotificationConfigurationsCallable(const DescribeNotificationConfigurationsRequest& request) const
{
  return std::async(std::launch::async, &AutoScalingClient::DescribeNotificationConfigurations, this, request);
}

void AutoScalingClient::DescribeNotificationConfigurationsAsync(const DescribeNotificationConfigurationsRequest& request, const DescribeNotificationConfigurationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&AutoScalingClient::DescribeNotificationConfigurationsAsyncHelper, this, request, handler, context);
}

void AutoScalingClient::DescribeNotificationConfigurationsAsyncHelper(const DescribeNotificationConfigurationsRequest& request, const DescribeNotificationConfigurationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeNotificationConfigurations(request), context);
}

DescribePoliciesOutcome AutoScalingClient::DescribePolicies(const DescribePoliciesRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";
  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return DescribePoliciesOutcome(DescribePoliciesResult(outcome.GetResult()));
  }
  else
  {
    return DescribePoliciesOutcome(outcome.GetError());
  }
}

DescribePoliciesOutcomeCallable AutoScalingClient::DescribePoliciesCallable(const DescribePoliciesRequest& request) const
{
  return std::async(std::launch::async, &AutoScalingClient::DescribePolicies, this, request);
}

void AutoScalingClient::DescribePoliciesAsync(const DescribePoliciesRequest& request, const DescribePoliciesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&AutoScalingClient::DescribePoliciesAsyncHelper, this, request, handler, context);
}

void AutoScalingClient::DescribePoliciesAsyncHelper(const DescribePoliciesRequest& request, const DescribePoliciesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribePolicies(request), context);
}

DescribeScalingActivitiesOutcome AutoScalingClient::DescribeScalingActivities(const DescribeScalingActivitiesRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";
  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return DescribeScalingActivitiesOutcome(DescribeScalingActivitiesResult(outcome.GetResult()));
  }
  else
  {
    return DescribeScalingActivitiesOutcome(outcome.GetError());
  }
}

DescribeScalingActivitiesOutcomeCallable AutoScalingClient::DescribeScalingActivitiesCallable(const DescribeScalingActivitiesRequest& request) const
{
  return std::async(std::launch::async, &AutoScalingClient::DescribeScalingActivities, this, request);
}

void AutoScalingClient::DescribeScalingActivitiesAsync(const DescribeScalingActivitiesRequest& request, const DescribeScalingActivitiesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&AutoScalingClient::DescribeScalingActivitiesAsyncHelper, this, request, handler, context);
}

void AutoScalingClient::DescribeScalingActivitiesAsyncHelper(const DescribeScalingActivitiesRequest& request, const DescribeScalingActivitiesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeScalingActivities(request), context);
}

DescribeScalingProcessTypesOutcome AutoScalingClient::DescribeScalingProcessTypes(const DescribeScalingProcessTypesRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";
  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return DescribeScalingProcessTypesOutcome(DescribeScalingProcessTypesResult(outcome.GetResult()));
  }
  else
  {
    return DescribeScalingProcessTypesOutcome(outcome.GetError());
  }
}

DescribeScalingProcessTypesOutcomeCallable AutoScalingClient::DescribeScalingProcessTypesCallable(const DescribeScalingProcessTypesRequest& request) const
{
  return std::async(std::launch::async, &AutoScalingClient::DescribeScalingProcessTypes, this, request);
}

void AutoScalingClient::DescribeScalingProcessTypesAsync(const DescribeScalingProcessTypesRequest& request, const DescribeScalingProcessTypesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&AutoScalingClient::DescribeScalingProcessTypesAsyncHelper, this, request, handler, context);
}

void AutoScalingClient::DescribeScalingProcessTypesAsyncHelper(const DescribeScalingProcessTypesRequest& request, const DescribeScalingProcessTypesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeScalingProcessTypes(request), context);
}

DescribeScheduledActionsOutcome AutoScalingClient::DescribeScheduledActions(const DescribeScheduledActionsRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";
  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return DescribeScheduledActionsOutcome(DescribeScheduledActionsResult(outcome.GetResult()));
  }
  else
  {
    return DescribeScheduledActionsOutcome(outcome.GetError());
  }
}

DescribeScheduledActionsOutcomeCallable AutoScalingClient::DescribeScheduledActionsCallable(const DescribeScheduledActionsRequest& request) const
{
  return std::async(std::launch::async, &AutoScalingClient::DescribeScheduledActions, this, request);
}

void AutoScalingClient::DescribeScheduledActionsAsync(const DescribeScheduledActionsRequest& request, const DescribeScheduledActionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&AutoScalingClient::DescribeScheduledActionsAsyncHelper, this, request, handler, context);
}

void AutoScalingClient::DescribeScheduledActionsAsyncHelper(const DescribeScheduledActionsRequest& request, const DescribeScheduledActionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeScheduledActions(request), context);
}

DescribeTagsOutcome AutoScalingClient::DescribeTags(const DescribeTagsRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";
  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return DescribeTagsOutcome(DescribeTagsResult(outcome.GetResult()));
  }
  else
  {
    return DescribeTagsOutcome(outcome.GetError());
  }
}

DescribeTagsOutcomeCallable AutoScalingClient::DescribeTagsCallable(const DescribeTagsRequest& request) const
{
  return std::async(std::launch::async, &AutoScalingClient::DescribeTags, this, request);
}

void AutoScalingClient::DescribeTagsAsync(const DescribeTagsRequest& request, const DescribeTagsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&AutoScalingClient::DescribeTagsAsyncHelper, this, request, handler, context);
}

void AutoScalingClient::DescribeTagsAsyncHelper(const DescribeTagsRequest& request, const DescribeTagsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeTags(request), context);
}

DescribeTerminationPolicyTypesOutcome AutoScalingClient::DescribeTerminationPolicyTypes(const DescribeTerminationPolicyTypesRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";
  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return DescribeTerminationPolicyTypesOutcome(DescribeTerminationPolicyTypesResult(outcome.GetResult()));
  }
  else
  {
    return DescribeTerminationPolicyTypesOutcome(outcome.GetError());
  }
}

DescribeTerminationPolicyTypesOutcomeCallable AutoScalingClient::DescribeTerminationPolicyTypesCallable(const DescribeTerminationPolicyTypesRequest& request) const
{
  return std::async(std::launch::async, &AutoScalingClient::DescribeTerminationPolicyTypes, this, request);
}

void AutoScalingClient::DescribeTerminationPolicyTypesAsync(const DescribeTerminationPolicyTypesRequest& request, const DescribeTerminationPolicyTypesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&AutoScalingClient::DescribeTerminationPolicyTypesAsyncHelper, this, request, handler, context);
}

void AutoScalingClient::DescribeTerminationPolicyTypesAsyncHelper(const DescribeTerminationPolicyTypesRequest& request, const DescribeTerminationPolicyTypesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeTerminationPolicyTypes(request), context);
}

DetachInstancesOutcome AutoScalingClient::DetachInstances(const DetachInstancesRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";
  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return DetachInstancesOutcome(DetachInstancesResult(outcome.GetResult()));
  }
  else
  {
    return DetachInstancesOutcome(outcome.GetError());
  }
}

DetachInstancesOutcomeCallable AutoScalingClient::DetachInstancesCallable(const DetachInstancesRequest& request) const
{
  return std::async(std::launch::async, &AutoScalingClient::DetachInstances, this, request);
}

void AutoScalingClient::DetachInstancesAsync(const DetachInstancesRequest& request, const DetachInstancesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&AutoScalingClient::DetachInstancesAsyncHelper, this, request, handler, context);
}

void AutoScalingClient::DetachInstancesAsyncHelper(const DetachInstancesRequest& request, const DetachInstancesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DetachInstances(request), context);
}

DetachLoadBalancersOutcome AutoScalingClient::DetachLoadBalancers(const DetachLoadBalancersRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";
  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return DetachLoadBalancersOutcome(DetachLoadBalancersResult(outcome.GetResult()));
  }
  else
  {
    return DetachLoadBalancersOutcome(outcome.GetError());
  }
}

DetachLoadBalancersOutcomeCallable AutoScalingClient::DetachLoadBalancersCallable(const DetachLoadBalancersRequest& request) const
{
  return std::async(std::launch::async, &AutoScalingClient::DetachLoadBalancers, this, request);
}

void AutoScalingClient::DetachLoadBalancersAsync(const DetachLoadBalancersRequest& request, const DetachLoadBalancersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&AutoScalingClient::DetachLoadBalancersAsyncHelper, this, request, handler, context);
}

void AutoScalingClient::DetachLoadBalancersAsyncHelper(const DetachLoadBalancersRequest& request, const DetachLoadBalancersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DetachLoadBalancers(request), context);
}

DisableMetricsCollectionOutcome AutoScalingClient::DisableMetricsCollection(const DisableMetricsCollectionRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";
  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return DisableMetricsCollectionOutcome(NoResult());
  }
  else
  {
    return DisableMetricsCollectionOutcome(outcome.GetError());
  }
}

DisableMetricsCollectionOutcomeCallable AutoScalingClient::DisableMetricsCollectionCallable(const DisableMetricsCollectionRequest& request) const
{
  return std::async(std::launch::async, &AutoScalingClient::DisableMetricsCollection, this, request);
}

void AutoScalingClient::DisableMetricsCollectionAsync(const DisableMetricsCollectionRequest& request, const DisableMetricsCollectionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&AutoScalingClient::DisableMetricsCollectionAsyncHelper, this, request, handler, context);
}

void AutoScalingClient::DisableMetricsCollectionAsyncHelper(const DisableMetricsCollectionRequest& request, const DisableMetricsCollectionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DisableMetricsCollection(request), context);
}

EnableMetricsCollectionOutcome AutoScalingClient::EnableMetricsCollection(const EnableMetricsCollectionRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";
  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return EnableMetricsCollectionOutcome(NoResult());
  }
  else
  {
    return EnableMetricsCollectionOutcome(outcome.GetError());
  }
}

EnableMetricsCollectionOutcomeCallable AutoScalingClient::EnableMetricsCollectionCallable(const EnableMetricsCollectionRequest& request) const
{
  return std::async(std::launch::async, &AutoScalingClient::EnableMetricsCollection, this, request);
}

void AutoScalingClient::EnableMetricsCollectionAsync(const EnableMetricsCollectionRequest& request, const EnableMetricsCollectionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&AutoScalingClient::EnableMetricsCollectionAsyncHelper, this, request, handler, context);
}

void AutoScalingClient::EnableMetricsCollectionAsyncHelper(const EnableMetricsCollectionRequest& request, const EnableMetricsCollectionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, EnableMetricsCollection(request), context);
}

EnterStandbyOutcome AutoScalingClient::EnterStandby(const EnterStandbyRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";
  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return EnterStandbyOutcome(EnterStandbyResult(outcome.GetResult()));
  }
  else
  {
    return EnterStandbyOutcome(outcome.GetError());
  }
}

EnterStandbyOutcomeCallable AutoScalingClient::EnterStandbyCallable(const EnterStandbyRequest& request) const
{
  return std::async(std::launch::async, &AutoScalingClient::EnterStandby, this, request);
}

void AutoScalingClient::EnterStandbyAsync(const EnterStandbyRequest& request, const EnterStandbyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&AutoScalingClient::EnterStandbyAsyncHelper, this, request, handler, context);
}

void AutoScalingClient::EnterStandbyAsyncHelper(const EnterStandbyRequest& request, const EnterStandbyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, EnterStandby(request), context);
}

ExecutePolicyOutcome AutoScalingClient::ExecutePolicy(const ExecutePolicyRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";
  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return ExecutePolicyOutcome(NoResult());
  }
  else
  {
    return ExecutePolicyOutcome(outcome.GetError());
  }
}

ExecutePolicyOutcomeCallable AutoScalingClient::ExecutePolicyCallable(const ExecutePolicyRequest& request) const
{
  return std::async(std::launch::async, &AutoScalingClient::ExecutePolicy, this, request);
}

void AutoScalingClient::ExecutePolicyAsync(const ExecutePolicyRequest& request, const ExecutePolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&AutoScalingClient::ExecutePolicyAsyncHelper, this, request, handler, context);
}

void AutoScalingClient::ExecutePolicyAsyncHelper(const ExecutePolicyRequest& request, const ExecutePolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ExecutePolicy(request), context);
}

ExitStandbyOutcome AutoScalingClient::ExitStandby(const ExitStandbyRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";
  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return ExitStandbyOutcome(ExitStandbyResult(outcome.GetResult()));
  }
  else
  {
    return ExitStandbyOutcome(outcome.GetError());
  }
}

ExitStandbyOutcomeCallable AutoScalingClient::ExitStandbyCallable(const ExitStandbyRequest& request) const
{
  return std::async(std::launch::async, &AutoScalingClient::ExitStandby, this, request);
}

void AutoScalingClient::ExitStandbyAsync(const ExitStandbyRequest& request, const ExitStandbyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&AutoScalingClient::ExitStandbyAsyncHelper, this, request, handler, context);
}

void AutoScalingClient::ExitStandbyAsyncHelper(const ExitStandbyRequest& request, const ExitStandbyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ExitStandby(request), context);
}

PutLifecycleHookOutcome AutoScalingClient::PutLifecycleHook(const PutLifecycleHookRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";
  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return PutLifecycleHookOutcome(PutLifecycleHookResult(outcome.GetResult()));
  }
  else
  {
    return PutLifecycleHookOutcome(outcome.GetError());
  }
}

PutLifecycleHookOutcomeCallable AutoScalingClient::PutLifecycleHookCallable(const PutLifecycleHookRequest& request) const
{
  return std::async(std::launch::async, &AutoScalingClient::PutLifecycleHook, this, request);
}

void AutoScalingClient::PutLifecycleHookAsync(const PutLifecycleHookRequest& request, const PutLifecycleHookResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&AutoScalingClient::PutLifecycleHookAsyncHelper, this, request, handler, context);
}

void AutoScalingClient::PutLifecycleHookAsyncHelper(const PutLifecycleHookRequest& request, const PutLifecycleHookResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, PutLifecycleHook(request), context);
}

PutNotificationConfigurationOutcome AutoScalingClient::PutNotificationConfiguration(const PutNotificationConfigurationRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";
  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return PutNotificationConfigurationOutcome(NoResult());
  }
  else
  {
    return PutNotificationConfigurationOutcome(outcome.GetError());
  }
}

PutNotificationConfigurationOutcomeCallable AutoScalingClient::PutNotificationConfigurationCallable(const PutNotificationConfigurationRequest& request) const
{
  return std::async(std::launch::async, &AutoScalingClient::PutNotificationConfiguration, this, request);
}

void AutoScalingClient::PutNotificationConfigurationAsync(const PutNotificationConfigurationRequest& request, const PutNotificationConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&AutoScalingClient::PutNotificationConfigurationAsyncHelper, this, request, handler, context);
}

void AutoScalingClient::PutNotificationConfigurationAsyncHelper(const PutNotificationConfigurationRequest& request, const PutNotificationConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, PutNotificationConfiguration(request), context);
}

PutScalingPolicyOutcome AutoScalingClient::PutScalingPolicy(const PutScalingPolicyRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";
  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return PutScalingPolicyOutcome(PutScalingPolicyResult(outcome.GetResult()));
  }
  else
  {
    return PutScalingPolicyOutcome(outcome.GetError());
  }
}

PutScalingPolicyOutcomeCallable AutoScalingClient::PutScalingPolicyCallable(const PutScalingPolicyRequest& request) const
{
  return std::async(std::launch::async, &AutoScalingClient::PutScalingPolicy, this, request);
}

void AutoScalingClient::PutScalingPolicyAsync(const PutScalingPolicyRequest& request, const PutScalingPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&AutoScalingClient::PutScalingPolicyAsyncHelper, this, request, handler, context);
}

void AutoScalingClient::PutScalingPolicyAsyncHelper(const PutScalingPolicyRequest& request, const PutScalingPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, PutScalingPolicy(request), context);
}

PutScheduledUpdateGroupActionOutcome AutoScalingClient::PutScheduledUpdateGroupAction(const PutScheduledUpdateGroupActionRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";
  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return PutScheduledUpdateGroupActionOutcome(NoResult());
  }
  else
  {
    return PutScheduledUpdateGroupActionOutcome(outcome.GetError());
  }
}

PutScheduledUpdateGroupActionOutcomeCallable AutoScalingClient::PutScheduledUpdateGroupActionCallable(const PutScheduledUpdateGroupActionRequest& request) const
{
  return std::async(std::launch::async, &AutoScalingClient::PutScheduledUpdateGroupAction, this, request);
}

void AutoScalingClient::PutScheduledUpdateGroupActionAsync(const PutScheduledUpdateGroupActionRequest& request, const PutScheduledUpdateGroupActionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&AutoScalingClient::PutScheduledUpdateGroupActionAsyncHelper, this, request, handler, context);
}

void AutoScalingClient::PutScheduledUpdateGroupActionAsyncHelper(const PutScheduledUpdateGroupActionRequest& request, const PutScheduledUpdateGroupActionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, PutScheduledUpdateGroupAction(request), context);
}

RecordLifecycleActionHeartbeatOutcome AutoScalingClient::RecordLifecycleActionHeartbeat(const RecordLifecycleActionHeartbeatRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";
  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return RecordLifecycleActionHeartbeatOutcome(RecordLifecycleActionHeartbeatResult(outcome.GetResult()));
  }
  else
  {
    return RecordLifecycleActionHeartbeatOutcome(outcome.GetError());
  }
}

RecordLifecycleActionHeartbeatOutcomeCallable AutoScalingClient::RecordLifecycleActionHeartbeatCallable(const RecordLifecycleActionHeartbeatRequest& request) const
{
  return std::async(std::launch::async, &AutoScalingClient::RecordLifecycleActionHeartbeat, this, request);
}

void AutoScalingClient::RecordLifecycleActionHeartbeatAsync(const RecordLifecycleActionHeartbeatRequest& request, const RecordLifecycleActionHeartbeatResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&AutoScalingClient::RecordLifecycleActionHeartbeatAsyncHelper, this, request, handler, context);
}

void AutoScalingClient::RecordLifecycleActionHeartbeatAsyncHelper(const RecordLifecycleActionHeartbeatRequest& request, const RecordLifecycleActionHeartbeatResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, RecordLifecycleActionHeartbeat(request), context);
}

ResumeProcessesOutcome AutoScalingClient::ResumeProcesses(const ResumeProcessesRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";
  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return ResumeProcessesOutcome(NoResult());
  }
  else
  {
    return ResumeProcessesOutcome(outcome.GetError());
  }
}

ResumeProcessesOutcomeCallable AutoScalingClient::ResumeProcessesCallable(const ResumeProcessesRequest& request) const
{
  return std::async(std::launch::async, &AutoScalingClient::ResumeProcesses, this, request);
}

void AutoScalingClient::ResumeProcessesAsync(const ResumeProcessesRequest& request, const ResumeProcessesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&AutoScalingClient::ResumeProcessesAsyncHelper, this, request, handler, context);
}

void AutoScalingClient::ResumeProcessesAsyncHelper(const ResumeProcessesRequest& request, const ResumeProcessesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ResumeProcesses(request), context);
}

SetDesiredCapacityOutcome AutoScalingClient::SetDesiredCapacity(const SetDesiredCapacityRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";
  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return SetDesiredCapacityOutcome(NoResult());
  }
  else
  {
    return SetDesiredCapacityOutcome(outcome.GetError());
  }
}

SetDesiredCapacityOutcomeCallable AutoScalingClient::SetDesiredCapacityCallable(const SetDesiredCapacityRequest& request) const
{
  return std::async(std::launch::async, &AutoScalingClient::SetDesiredCapacity, this, request);
}

void AutoScalingClient::SetDesiredCapacityAsync(const SetDesiredCapacityRequest& request, const SetDesiredCapacityResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&AutoScalingClient::SetDesiredCapacityAsyncHelper, this, request, handler, context);
}

void AutoScalingClient::SetDesiredCapacityAsyncHelper(const SetDesiredCapacityRequest& request, const SetDesiredCapacityResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, SetDesiredCapacity(request), context);
}

SetInstanceHealthOutcome AutoScalingClient::SetInstanceHealth(const SetInstanceHealthRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";
  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return SetInstanceHealthOutcome(NoResult());
  }
  else
  {
    return SetInstanceHealthOutcome(outcome.GetError());
  }
}

SetInstanceHealthOutcomeCallable AutoScalingClient::SetInstanceHealthCallable(const SetInstanceHealthRequest& request) const
{
  return std::async(std::launch::async, &AutoScalingClient::SetInstanceHealth, this, request);
}

void AutoScalingClient::SetInstanceHealthAsync(const SetInstanceHealthRequest& request, const SetInstanceHealthResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&AutoScalingClient::SetInstanceHealthAsyncHelper, this, request, handler, context);
}

void AutoScalingClient::SetInstanceHealthAsyncHelper(const SetInstanceHealthRequest& request, const SetInstanceHealthResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, SetInstanceHealth(request), context);
}

SetInstanceProtectionOutcome AutoScalingClient::SetInstanceProtection(const SetInstanceProtectionRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";
  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return SetInstanceProtectionOutcome(SetInstanceProtectionResult(outcome.GetResult()));
  }
  else
  {
    return SetInstanceProtectionOutcome(outcome.GetError());
  }
}

SetInstanceProtectionOutcomeCallable AutoScalingClient::SetInstanceProtectionCallable(const SetInstanceProtectionRequest& request) const
{
  return std::async(std::launch::async, &AutoScalingClient::SetInstanceProtection, this, request);
}

void AutoScalingClient::SetInstanceProtectionAsync(const SetInstanceProtectionRequest& request, const SetInstanceProtectionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&AutoScalingClient::SetInstanceProtectionAsyncHelper, this, request, handler, context);
}

void AutoScalingClient::SetInstanceProtectionAsyncHelper(const SetInstanceProtectionRequest& request, const SetInstanceProtectionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, SetInstanceProtection(request), context);
}

SuspendProcessesOutcome AutoScalingClient::SuspendProcesses(const SuspendProcessesRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";
  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return SuspendProcessesOutcome(NoResult());
  }
  else
  {
    return SuspendProcessesOutcome(outcome.GetError());
  }
}

SuspendProcessesOutcomeCallable AutoScalingClient::SuspendProcessesCallable(const SuspendProcessesRequest& request) const
{
  return std::async(std::launch::async, &AutoScalingClient::SuspendProcesses, this, request);
}

void AutoScalingClient::SuspendProcessesAsync(const SuspendProcessesRequest& request, const SuspendProcessesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&AutoScalingClient::SuspendProcessesAsyncHelper, this, request, handler, context);
}

void AutoScalingClient::SuspendProcessesAsyncHelper(const SuspendProcessesRequest& request, const SuspendProcessesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, SuspendProcesses(request), context);
}

TerminateInstanceInAutoScalingGroupOutcome AutoScalingClient::TerminateInstanceInAutoScalingGroup(const TerminateInstanceInAutoScalingGroupRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";
  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return TerminateInstanceInAutoScalingGroupOutcome(TerminateInstanceInAutoScalingGroupResult(outcome.GetResult()));
  }
  else
  {
    return TerminateInstanceInAutoScalingGroupOutcome(outcome.GetError());
  }
}

TerminateInstanceInAutoScalingGroupOutcomeCallable AutoScalingClient::TerminateInstanceInAutoScalingGroupCallable(const TerminateInstanceInAutoScalingGroupRequest& request) const
{
  return std::async(std::launch::async, &AutoScalingClient::TerminateInstanceInAutoScalingGroup, this, request);
}

void AutoScalingClient::TerminateInstanceInAutoScalingGroupAsync(const TerminateInstanceInAutoScalingGroupRequest& request, const TerminateInstanceInAutoScalingGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&AutoScalingClient::TerminateInstanceInAutoScalingGroupAsyncHelper, this, request, handler, context);
}

void AutoScalingClient::TerminateInstanceInAutoScalingGroupAsyncHelper(const TerminateInstanceInAutoScalingGroupRequest& request, const TerminateInstanceInAutoScalingGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, TerminateInstanceInAutoScalingGroup(request), context);
}

UpdateAutoScalingGroupOutcome AutoScalingClient::UpdateAutoScalingGroup(const UpdateAutoScalingGroupRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";
  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return UpdateAutoScalingGroupOutcome(NoResult());
  }
  else
  {
    return UpdateAutoScalingGroupOutcome(outcome.GetError());
  }
}

UpdateAutoScalingGroupOutcomeCallable AutoScalingClient::UpdateAutoScalingGroupCallable(const UpdateAutoScalingGroupRequest& request) const
{
  return std::async(std::launch::async, &AutoScalingClient::UpdateAutoScalingGroup, this, request);
}

void AutoScalingClient::UpdateAutoScalingGroupAsync(const UpdateAutoScalingGroupRequest& request, const UpdateAutoScalingGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&AutoScalingClient::UpdateAutoScalingGroupAsyncHelper, this, request, handler, context);
}

void AutoScalingClient::UpdateAutoScalingGroupAsyncHelper(const UpdateAutoScalingGroupRequest& request, const UpdateAutoScalingGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateAutoScalingGroup(request), context);
}

