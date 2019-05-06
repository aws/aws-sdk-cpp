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

#include <aws/autoscaling/AutoScalingClient.h>
#include <aws/autoscaling/AutoScalingEndpoint.h>
#include <aws/autoscaling/AutoScalingErrorMarshaller.h>
#include <aws/autoscaling/model/AttachInstancesRequest.h>
#include <aws/autoscaling/model/AttachLoadBalancerTargetGroupsRequest.h>
#include <aws/autoscaling/model/AttachLoadBalancersRequest.h>
#include <aws/autoscaling/model/BatchDeleteScheduledActionRequest.h>
#include <aws/autoscaling/model/BatchPutScheduledUpdateGroupActionRequest.h>
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
#include <aws/autoscaling/model/DescribeLoadBalancerTargetGroupsRequest.h>
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
#include <aws/autoscaling/model/DetachLoadBalancerTargetGroupsRequest.h>
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
  BASECLASS(clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
        SERVICE_NAME, clientConfiguration.region),
    Aws::MakeShared<AutoScalingErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

AutoScalingClient::AutoScalingClient(const AWSCredentials& credentials, const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
         SERVICE_NAME, clientConfiguration.region),
    Aws::MakeShared<AutoScalingErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

AutoScalingClient::AutoScalingClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
  const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider,
         SERVICE_NAME, clientConfiguration.region),
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
  m_configScheme = SchemeMapper::ToString(config.scheme);
  if (config.endpointOverride.empty())
  {
      m_uri = m_configScheme + "://" + AutoScalingEndpoint::ForRegion(config.region, config.useDualStack);
  }
  else
  {
      OverrideEndpoint(config.endpointOverride);
  }
}

void AutoScalingClient::OverrideEndpoint(const Aws::String& endpoint)
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

Aws::String AutoScalingClient::ConvertRequestToPresignedUrl(const AmazonSerializableWebServiceRequest& requestToConvert, const char* region) const
{
  Aws::StringStream ss;
  ss << "https://" << AutoScalingEndpoint::ForRegion(region);
  ss << "?" << requestToConvert.SerializePayload();

  URI uri(ss.str());
  return GeneratePresignedUrl(uri, HttpMethod::HTTP_GET, region, 3600);
}

AttachInstancesOutcome AutoScalingClient::AttachInstances(const AttachInstancesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
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
  auto task = Aws::MakeShared< std::packaged_task< AttachInstancesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->AttachInstances(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AutoScalingClient::AttachInstancesAsync(const AttachInstancesRequest& request, const AttachInstancesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->AttachInstancesAsyncHelper( request, handler, context ); } );
}

void AutoScalingClient::AttachInstancesAsyncHelper(const AttachInstancesRequest& request, const AttachInstancesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, AttachInstances(request), context);
}

AttachLoadBalancerTargetGroupsOutcome AutoScalingClient::AttachLoadBalancerTargetGroups(const AttachLoadBalancerTargetGroupsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return AttachLoadBalancerTargetGroupsOutcome(AttachLoadBalancerTargetGroupsResult(outcome.GetResult()));
  }
  else
  {
    return AttachLoadBalancerTargetGroupsOutcome(outcome.GetError());
  }
}

AttachLoadBalancerTargetGroupsOutcomeCallable AutoScalingClient::AttachLoadBalancerTargetGroupsCallable(const AttachLoadBalancerTargetGroupsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< AttachLoadBalancerTargetGroupsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->AttachLoadBalancerTargetGroups(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AutoScalingClient::AttachLoadBalancerTargetGroupsAsync(const AttachLoadBalancerTargetGroupsRequest& request, const AttachLoadBalancerTargetGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->AttachLoadBalancerTargetGroupsAsyncHelper( request, handler, context ); } );
}

void AutoScalingClient::AttachLoadBalancerTargetGroupsAsyncHelper(const AttachLoadBalancerTargetGroupsRequest& request, const AttachLoadBalancerTargetGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, AttachLoadBalancerTargetGroups(request), context);
}

AttachLoadBalancersOutcome AutoScalingClient::AttachLoadBalancers(const AttachLoadBalancersRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
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
  auto task = Aws::MakeShared< std::packaged_task< AttachLoadBalancersOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->AttachLoadBalancers(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AutoScalingClient::AttachLoadBalancersAsync(const AttachLoadBalancersRequest& request, const AttachLoadBalancersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->AttachLoadBalancersAsyncHelper( request, handler, context ); } );
}

void AutoScalingClient::AttachLoadBalancersAsyncHelper(const AttachLoadBalancersRequest& request, const AttachLoadBalancersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, AttachLoadBalancers(request), context);
}

BatchDeleteScheduledActionOutcome AutoScalingClient::BatchDeleteScheduledAction(const BatchDeleteScheduledActionRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return BatchDeleteScheduledActionOutcome(BatchDeleteScheduledActionResult(outcome.GetResult()));
  }
  else
  {
    return BatchDeleteScheduledActionOutcome(outcome.GetError());
  }
}

BatchDeleteScheduledActionOutcomeCallable AutoScalingClient::BatchDeleteScheduledActionCallable(const BatchDeleteScheduledActionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< BatchDeleteScheduledActionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->BatchDeleteScheduledAction(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AutoScalingClient::BatchDeleteScheduledActionAsync(const BatchDeleteScheduledActionRequest& request, const BatchDeleteScheduledActionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->BatchDeleteScheduledActionAsyncHelper( request, handler, context ); } );
}

void AutoScalingClient::BatchDeleteScheduledActionAsyncHelper(const BatchDeleteScheduledActionRequest& request, const BatchDeleteScheduledActionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, BatchDeleteScheduledAction(request), context);
}

BatchPutScheduledUpdateGroupActionOutcome AutoScalingClient::BatchPutScheduledUpdateGroupAction(const BatchPutScheduledUpdateGroupActionRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return BatchPutScheduledUpdateGroupActionOutcome(BatchPutScheduledUpdateGroupActionResult(outcome.GetResult()));
  }
  else
  {
    return BatchPutScheduledUpdateGroupActionOutcome(outcome.GetError());
  }
}

BatchPutScheduledUpdateGroupActionOutcomeCallable AutoScalingClient::BatchPutScheduledUpdateGroupActionCallable(const BatchPutScheduledUpdateGroupActionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< BatchPutScheduledUpdateGroupActionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->BatchPutScheduledUpdateGroupAction(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AutoScalingClient::BatchPutScheduledUpdateGroupActionAsync(const BatchPutScheduledUpdateGroupActionRequest& request, const BatchPutScheduledUpdateGroupActionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->BatchPutScheduledUpdateGroupActionAsyncHelper( request, handler, context ); } );
}

void AutoScalingClient::BatchPutScheduledUpdateGroupActionAsyncHelper(const BatchPutScheduledUpdateGroupActionRequest& request, const BatchPutScheduledUpdateGroupActionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, BatchPutScheduledUpdateGroupAction(request), context);
}

CompleteLifecycleActionOutcome AutoScalingClient::CompleteLifecycleAction(const CompleteLifecycleActionRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
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
  auto task = Aws::MakeShared< std::packaged_task< CompleteLifecycleActionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CompleteLifecycleAction(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AutoScalingClient::CompleteLifecycleActionAsync(const CompleteLifecycleActionRequest& request, const CompleteLifecycleActionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CompleteLifecycleActionAsyncHelper( request, handler, context ); } );
}

void AutoScalingClient::CompleteLifecycleActionAsyncHelper(const CompleteLifecycleActionRequest& request, const CompleteLifecycleActionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CompleteLifecycleAction(request), context);
}

CreateAutoScalingGroupOutcome AutoScalingClient::CreateAutoScalingGroup(const CreateAutoScalingGroupRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
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
  auto task = Aws::MakeShared< std::packaged_task< CreateAutoScalingGroupOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateAutoScalingGroup(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AutoScalingClient::CreateAutoScalingGroupAsync(const CreateAutoScalingGroupRequest& request, const CreateAutoScalingGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateAutoScalingGroupAsyncHelper( request, handler, context ); } );
}

void AutoScalingClient::CreateAutoScalingGroupAsyncHelper(const CreateAutoScalingGroupRequest& request, const CreateAutoScalingGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateAutoScalingGroup(request), context);
}

CreateLaunchConfigurationOutcome AutoScalingClient::CreateLaunchConfiguration(const CreateLaunchConfigurationRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
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
  auto task = Aws::MakeShared< std::packaged_task< CreateLaunchConfigurationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateLaunchConfiguration(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AutoScalingClient::CreateLaunchConfigurationAsync(const CreateLaunchConfigurationRequest& request, const CreateLaunchConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateLaunchConfigurationAsyncHelper( request, handler, context ); } );
}

void AutoScalingClient::CreateLaunchConfigurationAsyncHelper(const CreateLaunchConfigurationRequest& request, const CreateLaunchConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateLaunchConfiguration(request), context);
}

CreateOrUpdateTagsOutcome AutoScalingClient::CreateOrUpdateTags(const CreateOrUpdateTagsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
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
  auto task = Aws::MakeShared< std::packaged_task< CreateOrUpdateTagsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateOrUpdateTags(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AutoScalingClient::CreateOrUpdateTagsAsync(const CreateOrUpdateTagsRequest& request, const CreateOrUpdateTagsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateOrUpdateTagsAsyncHelper( request, handler, context ); } );
}

void AutoScalingClient::CreateOrUpdateTagsAsyncHelper(const CreateOrUpdateTagsRequest& request, const CreateOrUpdateTagsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateOrUpdateTags(request), context);
}

DeleteAutoScalingGroupOutcome AutoScalingClient::DeleteAutoScalingGroup(const DeleteAutoScalingGroupRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
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
  auto task = Aws::MakeShared< std::packaged_task< DeleteAutoScalingGroupOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteAutoScalingGroup(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AutoScalingClient::DeleteAutoScalingGroupAsync(const DeleteAutoScalingGroupRequest& request, const DeleteAutoScalingGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteAutoScalingGroupAsyncHelper( request, handler, context ); } );
}

void AutoScalingClient::DeleteAutoScalingGroupAsyncHelper(const DeleteAutoScalingGroupRequest& request, const DeleteAutoScalingGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteAutoScalingGroup(request), context);
}

DeleteLaunchConfigurationOutcome AutoScalingClient::DeleteLaunchConfiguration(const DeleteLaunchConfigurationRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
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
  auto task = Aws::MakeShared< std::packaged_task< DeleteLaunchConfigurationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteLaunchConfiguration(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AutoScalingClient::DeleteLaunchConfigurationAsync(const DeleteLaunchConfigurationRequest& request, const DeleteLaunchConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteLaunchConfigurationAsyncHelper( request, handler, context ); } );
}

void AutoScalingClient::DeleteLaunchConfigurationAsyncHelper(const DeleteLaunchConfigurationRequest& request, const DeleteLaunchConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteLaunchConfiguration(request), context);
}

DeleteLifecycleHookOutcome AutoScalingClient::DeleteLifecycleHook(const DeleteLifecycleHookRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
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
  auto task = Aws::MakeShared< std::packaged_task< DeleteLifecycleHookOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteLifecycleHook(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AutoScalingClient::DeleteLifecycleHookAsync(const DeleteLifecycleHookRequest& request, const DeleteLifecycleHookResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteLifecycleHookAsyncHelper( request, handler, context ); } );
}

void AutoScalingClient::DeleteLifecycleHookAsyncHelper(const DeleteLifecycleHookRequest& request, const DeleteLifecycleHookResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteLifecycleHook(request), context);
}

DeleteNotificationConfigurationOutcome AutoScalingClient::DeleteNotificationConfiguration(const DeleteNotificationConfigurationRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
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
  auto task = Aws::MakeShared< std::packaged_task< DeleteNotificationConfigurationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteNotificationConfiguration(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AutoScalingClient::DeleteNotificationConfigurationAsync(const DeleteNotificationConfigurationRequest& request, const DeleteNotificationConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteNotificationConfigurationAsyncHelper( request, handler, context ); } );
}

void AutoScalingClient::DeleteNotificationConfigurationAsyncHelper(const DeleteNotificationConfigurationRequest& request, const DeleteNotificationConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteNotificationConfiguration(request), context);
}

DeletePolicyOutcome AutoScalingClient::DeletePolicy(const DeletePolicyRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
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
  auto task = Aws::MakeShared< std::packaged_task< DeletePolicyOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeletePolicy(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AutoScalingClient::DeletePolicyAsync(const DeletePolicyRequest& request, const DeletePolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeletePolicyAsyncHelper( request, handler, context ); } );
}

void AutoScalingClient::DeletePolicyAsyncHelper(const DeletePolicyRequest& request, const DeletePolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeletePolicy(request), context);
}

DeleteScheduledActionOutcome AutoScalingClient::DeleteScheduledAction(const DeleteScheduledActionRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
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
  auto task = Aws::MakeShared< std::packaged_task< DeleteScheduledActionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteScheduledAction(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AutoScalingClient::DeleteScheduledActionAsync(const DeleteScheduledActionRequest& request, const DeleteScheduledActionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteScheduledActionAsyncHelper( request, handler, context ); } );
}

void AutoScalingClient::DeleteScheduledActionAsyncHelper(const DeleteScheduledActionRequest& request, const DeleteScheduledActionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteScheduledAction(request), context);
}

DeleteTagsOutcome AutoScalingClient::DeleteTags(const DeleteTagsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
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
  auto task = Aws::MakeShared< std::packaged_task< DeleteTagsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteTags(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AutoScalingClient::DeleteTagsAsync(const DeleteTagsRequest& request, const DeleteTagsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteTagsAsyncHelper( request, handler, context ); } );
}

void AutoScalingClient::DeleteTagsAsyncHelper(const DeleteTagsRequest& request, const DeleteTagsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteTags(request), context);
}

DescribeAccountLimitsOutcome AutoScalingClient::DescribeAccountLimits(const DescribeAccountLimitsRequest& request) const
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

DescribeAccountLimitsOutcomeCallable AutoScalingClient::DescribeAccountLimitsCallable(const DescribeAccountLimitsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeAccountLimitsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeAccountLimits(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AutoScalingClient::DescribeAccountLimitsAsync(const DescribeAccountLimitsRequest& request, const DescribeAccountLimitsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeAccountLimitsAsyncHelper( request, handler, context ); } );
}

void AutoScalingClient::DescribeAccountLimitsAsyncHelper(const DescribeAccountLimitsRequest& request, const DescribeAccountLimitsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeAccountLimits(request), context);
}

DescribeAdjustmentTypesOutcome AutoScalingClient::DescribeAdjustmentTypes(const DescribeAdjustmentTypesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
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
  auto task = Aws::MakeShared< std::packaged_task< DescribeAdjustmentTypesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeAdjustmentTypes(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AutoScalingClient::DescribeAdjustmentTypesAsync(const DescribeAdjustmentTypesRequest& request, const DescribeAdjustmentTypesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeAdjustmentTypesAsyncHelper( request, handler, context ); } );
}

void AutoScalingClient::DescribeAdjustmentTypesAsyncHelper(const DescribeAdjustmentTypesRequest& request, const DescribeAdjustmentTypesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeAdjustmentTypes(request), context);
}

DescribeAutoScalingGroupsOutcome AutoScalingClient::DescribeAutoScalingGroups(const DescribeAutoScalingGroupsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
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
  auto task = Aws::MakeShared< std::packaged_task< DescribeAutoScalingGroupsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeAutoScalingGroups(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AutoScalingClient::DescribeAutoScalingGroupsAsync(const DescribeAutoScalingGroupsRequest& request, const DescribeAutoScalingGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeAutoScalingGroupsAsyncHelper( request, handler, context ); } );
}

void AutoScalingClient::DescribeAutoScalingGroupsAsyncHelper(const DescribeAutoScalingGroupsRequest& request, const DescribeAutoScalingGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeAutoScalingGroups(request), context);
}

DescribeAutoScalingInstancesOutcome AutoScalingClient::DescribeAutoScalingInstances(const DescribeAutoScalingInstancesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
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
  auto task = Aws::MakeShared< std::packaged_task< DescribeAutoScalingInstancesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeAutoScalingInstances(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AutoScalingClient::DescribeAutoScalingInstancesAsync(const DescribeAutoScalingInstancesRequest& request, const DescribeAutoScalingInstancesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeAutoScalingInstancesAsyncHelper( request, handler, context ); } );
}

void AutoScalingClient::DescribeAutoScalingInstancesAsyncHelper(const DescribeAutoScalingInstancesRequest& request, const DescribeAutoScalingInstancesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeAutoScalingInstances(request), context);
}

DescribeAutoScalingNotificationTypesOutcome AutoScalingClient::DescribeAutoScalingNotificationTypes(const DescribeAutoScalingNotificationTypesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
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
  auto task = Aws::MakeShared< std::packaged_task< DescribeAutoScalingNotificationTypesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeAutoScalingNotificationTypes(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AutoScalingClient::DescribeAutoScalingNotificationTypesAsync(const DescribeAutoScalingNotificationTypesRequest& request, const DescribeAutoScalingNotificationTypesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeAutoScalingNotificationTypesAsyncHelper( request, handler, context ); } );
}

void AutoScalingClient::DescribeAutoScalingNotificationTypesAsyncHelper(const DescribeAutoScalingNotificationTypesRequest& request, const DescribeAutoScalingNotificationTypesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeAutoScalingNotificationTypes(request), context);
}

DescribeLaunchConfigurationsOutcome AutoScalingClient::DescribeLaunchConfigurations(const DescribeLaunchConfigurationsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
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
  auto task = Aws::MakeShared< std::packaged_task< DescribeLaunchConfigurationsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeLaunchConfigurations(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AutoScalingClient::DescribeLaunchConfigurationsAsync(const DescribeLaunchConfigurationsRequest& request, const DescribeLaunchConfigurationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeLaunchConfigurationsAsyncHelper( request, handler, context ); } );
}

void AutoScalingClient::DescribeLaunchConfigurationsAsyncHelper(const DescribeLaunchConfigurationsRequest& request, const DescribeLaunchConfigurationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeLaunchConfigurations(request), context);
}

DescribeLifecycleHookTypesOutcome AutoScalingClient::DescribeLifecycleHookTypes(const DescribeLifecycleHookTypesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
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
  auto task = Aws::MakeShared< std::packaged_task< DescribeLifecycleHookTypesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeLifecycleHookTypes(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AutoScalingClient::DescribeLifecycleHookTypesAsync(const DescribeLifecycleHookTypesRequest& request, const DescribeLifecycleHookTypesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeLifecycleHookTypesAsyncHelper( request, handler, context ); } );
}

void AutoScalingClient::DescribeLifecycleHookTypesAsyncHelper(const DescribeLifecycleHookTypesRequest& request, const DescribeLifecycleHookTypesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeLifecycleHookTypes(request), context);
}

DescribeLifecycleHooksOutcome AutoScalingClient::DescribeLifecycleHooks(const DescribeLifecycleHooksRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
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
  auto task = Aws::MakeShared< std::packaged_task< DescribeLifecycleHooksOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeLifecycleHooks(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AutoScalingClient::DescribeLifecycleHooksAsync(const DescribeLifecycleHooksRequest& request, const DescribeLifecycleHooksResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeLifecycleHooksAsyncHelper( request, handler, context ); } );
}

void AutoScalingClient::DescribeLifecycleHooksAsyncHelper(const DescribeLifecycleHooksRequest& request, const DescribeLifecycleHooksResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeLifecycleHooks(request), context);
}

DescribeLoadBalancerTargetGroupsOutcome AutoScalingClient::DescribeLoadBalancerTargetGroups(const DescribeLoadBalancerTargetGroupsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return DescribeLoadBalancerTargetGroupsOutcome(DescribeLoadBalancerTargetGroupsResult(outcome.GetResult()));
  }
  else
  {
    return DescribeLoadBalancerTargetGroupsOutcome(outcome.GetError());
  }
}

DescribeLoadBalancerTargetGroupsOutcomeCallable AutoScalingClient::DescribeLoadBalancerTargetGroupsCallable(const DescribeLoadBalancerTargetGroupsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeLoadBalancerTargetGroupsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeLoadBalancerTargetGroups(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AutoScalingClient::DescribeLoadBalancerTargetGroupsAsync(const DescribeLoadBalancerTargetGroupsRequest& request, const DescribeLoadBalancerTargetGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeLoadBalancerTargetGroupsAsyncHelper( request, handler, context ); } );
}

void AutoScalingClient::DescribeLoadBalancerTargetGroupsAsyncHelper(const DescribeLoadBalancerTargetGroupsRequest& request, const DescribeLoadBalancerTargetGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeLoadBalancerTargetGroups(request), context);
}

DescribeLoadBalancersOutcome AutoScalingClient::DescribeLoadBalancers(const DescribeLoadBalancersRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
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
  auto task = Aws::MakeShared< std::packaged_task< DescribeLoadBalancersOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeLoadBalancers(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AutoScalingClient::DescribeLoadBalancersAsync(const DescribeLoadBalancersRequest& request, const DescribeLoadBalancersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeLoadBalancersAsyncHelper( request, handler, context ); } );
}

void AutoScalingClient::DescribeLoadBalancersAsyncHelper(const DescribeLoadBalancersRequest& request, const DescribeLoadBalancersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeLoadBalancers(request), context);
}

DescribeMetricCollectionTypesOutcome AutoScalingClient::DescribeMetricCollectionTypes(const DescribeMetricCollectionTypesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
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
  auto task = Aws::MakeShared< std::packaged_task< DescribeMetricCollectionTypesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeMetricCollectionTypes(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AutoScalingClient::DescribeMetricCollectionTypesAsync(const DescribeMetricCollectionTypesRequest& request, const DescribeMetricCollectionTypesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeMetricCollectionTypesAsyncHelper( request, handler, context ); } );
}

void AutoScalingClient::DescribeMetricCollectionTypesAsyncHelper(const DescribeMetricCollectionTypesRequest& request, const DescribeMetricCollectionTypesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeMetricCollectionTypes(request), context);
}

DescribeNotificationConfigurationsOutcome AutoScalingClient::DescribeNotificationConfigurations(const DescribeNotificationConfigurationsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
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
  auto task = Aws::MakeShared< std::packaged_task< DescribeNotificationConfigurationsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeNotificationConfigurations(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AutoScalingClient::DescribeNotificationConfigurationsAsync(const DescribeNotificationConfigurationsRequest& request, const DescribeNotificationConfigurationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeNotificationConfigurationsAsyncHelper( request, handler, context ); } );
}

void AutoScalingClient::DescribeNotificationConfigurationsAsyncHelper(const DescribeNotificationConfigurationsRequest& request, const DescribeNotificationConfigurationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeNotificationConfigurations(request), context);
}

DescribePoliciesOutcome AutoScalingClient::DescribePolicies(const DescribePoliciesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
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
  auto task = Aws::MakeShared< std::packaged_task< DescribePoliciesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribePolicies(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AutoScalingClient::DescribePoliciesAsync(const DescribePoliciesRequest& request, const DescribePoliciesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribePoliciesAsyncHelper( request, handler, context ); } );
}

void AutoScalingClient::DescribePoliciesAsyncHelper(const DescribePoliciesRequest& request, const DescribePoliciesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribePolicies(request), context);
}

DescribeScalingActivitiesOutcome AutoScalingClient::DescribeScalingActivities(const DescribeScalingActivitiesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
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
  auto task = Aws::MakeShared< std::packaged_task< DescribeScalingActivitiesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeScalingActivities(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AutoScalingClient::DescribeScalingActivitiesAsync(const DescribeScalingActivitiesRequest& request, const DescribeScalingActivitiesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeScalingActivitiesAsyncHelper( request, handler, context ); } );
}

void AutoScalingClient::DescribeScalingActivitiesAsyncHelper(const DescribeScalingActivitiesRequest& request, const DescribeScalingActivitiesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeScalingActivities(request), context);
}

DescribeScalingProcessTypesOutcome AutoScalingClient::DescribeScalingProcessTypes(const DescribeScalingProcessTypesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
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
  auto task = Aws::MakeShared< std::packaged_task< DescribeScalingProcessTypesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeScalingProcessTypes(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AutoScalingClient::DescribeScalingProcessTypesAsync(const DescribeScalingProcessTypesRequest& request, const DescribeScalingProcessTypesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeScalingProcessTypesAsyncHelper( request, handler, context ); } );
}

void AutoScalingClient::DescribeScalingProcessTypesAsyncHelper(const DescribeScalingProcessTypesRequest& request, const DescribeScalingProcessTypesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeScalingProcessTypes(request), context);
}

DescribeScheduledActionsOutcome AutoScalingClient::DescribeScheduledActions(const DescribeScheduledActionsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
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
  auto task = Aws::MakeShared< std::packaged_task< DescribeScheduledActionsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeScheduledActions(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AutoScalingClient::DescribeScheduledActionsAsync(const DescribeScheduledActionsRequest& request, const DescribeScheduledActionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeScheduledActionsAsyncHelper( request, handler, context ); } );
}

void AutoScalingClient::DescribeScheduledActionsAsyncHelper(const DescribeScheduledActionsRequest& request, const DescribeScheduledActionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeScheduledActions(request), context);
}

DescribeTagsOutcome AutoScalingClient::DescribeTags(const DescribeTagsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
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
  auto task = Aws::MakeShared< std::packaged_task< DescribeTagsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeTags(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AutoScalingClient::DescribeTagsAsync(const DescribeTagsRequest& request, const DescribeTagsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeTagsAsyncHelper( request, handler, context ); } );
}

void AutoScalingClient::DescribeTagsAsyncHelper(const DescribeTagsRequest& request, const DescribeTagsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeTags(request), context);
}

DescribeTerminationPolicyTypesOutcome AutoScalingClient::DescribeTerminationPolicyTypes(const DescribeTerminationPolicyTypesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
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
  auto task = Aws::MakeShared< std::packaged_task< DescribeTerminationPolicyTypesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeTerminationPolicyTypes(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AutoScalingClient::DescribeTerminationPolicyTypesAsync(const DescribeTerminationPolicyTypesRequest& request, const DescribeTerminationPolicyTypesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeTerminationPolicyTypesAsyncHelper( request, handler, context ); } );
}

void AutoScalingClient::DescribeTerminationPolicyTypesAsyncHelper(const DescribeTerminationPolicyTypesRequest& request, const DescribeTerminationPolicyTypesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeTerminationPolicyTypes(request), context);
}

DetachInstancesOutcome AutoScalingClient::DetachInstances(const DetachInstancesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
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
  auto task = Aws::MakeShared< std::packaged_task< DetachInstancesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DetachInstances(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AutoScalingClient::DetachInstancesAsync(const DetachInstancesRequest& request, const DetachInstancesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DetachInstancesAsyncHelper( request, handler, context ); } );
}

void AutoScalingClient::DetachInstancesAsyncHelper(const DetachInstancesRequest& request, const DetachInstancesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DetachInstances(request), context);
}

DetachLoadBalancerTargetGroupsOutcome AutoScalingClient::DetachLoadBalancerTargetGroups(const DetachLoadBalancerTargetGroupsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return DetachLoadBalancerTargetGroupsOutcome(DetachLoadBalancerTargetGroupsResult(outcome.GetResult()));
  }
  else
  {
    return DetachLoadBalancerTargetGroupsOutcome(outcome.GetError());
  }
}

DetachLoadBalancerTargetGroupsOutcomeCallable AutoScalingClient::DetachLoadBalancerTargetGroupsCallable(const DetachLoadBalancerTargetGroupsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DetachLoadBalancerTargetGroupsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DetachLoadBalancerTargetGroups(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AutoScalingClient::DetachLoadBalancerTargetGroupsAsync(const DetachLoadBalancerTargetGroupsRequest& request, const DetachLoadBalancerTargetGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DetachLoadBalancerTargetGroupsAsyncHelper( request, handler, context ); } );
}

void AutoScalingClient::DetachLoadBalancerTargetGroupsAsyncHelper(const DetachLoadBalancerTargetGroupsRequest& request, const DetachLoadBalancerTargetGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DetachLoadBalancerTargetGroups(request), context);
}

DetachLoadBalancersOutcome AutoScalingClient::DetachLoadBalancers(const DetachLoadBalancersRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
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
  auto task = Aws::MakeShared< std::packaged_task< DetachLoadBalancersOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DetachLoadBalancers(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AutoScalingClient::DetachLoadBalancersAsync(const DetachLoadBalancersRequest& request, const DetachLoadBalancersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DetachLoadBalancersAsyncHelper( request, handler, context ); } );
}

void AutoScalingClient::DetachLoadBalancersAsyncHelper(const DetachLoadBalancersRequest& request, const DetachLoadBalancersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DetachLoadBalancers(request), context);
}

DisableMetricsCollectionOutcome AutoScalingClient::DisableMetricsCollection(const DisableMetricsCollectionRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
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
  auto task = Aws::MakeShared< std::packaged_task< DisableMetricsCollectionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DisableMetricsCollection(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AutoScalingClient::DisableMetricsCollectionAsync(const DisableMetricsCollectionRequest& request, const DisableMetricsCollectionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DisableMetricsCollectionAsyncHelper( request, handler, context ); } );
}

void AutoScalingClient::DisableMetricsCollectionAsyncHelper(const DisableMetricsCollectionRequest& request, const DisableMetricsCollectionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DisableMetricsCollection(request), context);
}

EnableMetricsCollectionOutcome AutoScalingClient::EnableMetricsCollection(const EnableMetricsCollectionRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
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
  auto task = Aws::MakeShared< std::packaged_task< EnableMetricsCollectionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->EnableMetricsCollection(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AutoScalingClient::EnableMetricsCollectionAsync(const EnableMetricsCollectionRequest& request, const EnableMetricsCollectionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->EnableMetricsCollectionAsyncHelper( request, handler, context ); } );
}

void AutoScalingClient::EnableMetricsCollectionAsyncHelper(const EnableMetricsCollectionRequest& request, const EnableMetricsCollectionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, EnableMetricsCollection(request), context);
}

EnterStandbyOutcome AutoScalingClient::EnterStandby(const EnterStandbyRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
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
  auto task = Aws::MakeShared< std::packaged_task< EnterStandbyOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->EnterStandby(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AutoScalingClient::EnterStandbyAsync(const EnterStandbyRequest& request, const EnterStandbyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->EnterStandbyAsyncHelper( request, handler, context ); } );
}

void AutoScalingClient::EnterStandbyAsyncHelper(const EnterStandbyRequest& request, const EnterStandbyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, EnterStandby(request), context);
}

ExecutePolicyOutcome AutoScalingClient::ExecutePolicy(const ExecutePolicyRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
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
  auto task = Aws::MakeShared< std::packaged_task< ExecutePolicyOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ExecutePolicy(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AutoScalingClient::ExecutePolicyAsync(const ExecutePolicyRequest& request, const ExecutePolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ExecutePolicyAsyncHelper( request, handler, context ); } );
}

void AutoScalingClient::ExecutePolicyAsyncHelper(const ExecutePolicyRequest& request, const ExecutePolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ExecutePolicy(request), context);
}

ExitStandbyOutcome AutoScalingClient::ExitStandby(const ExitStandbyRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
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
  auto task = Aws::MakeShared< std::packaged_task< ExitStandbyOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ExitStandby(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AutoScalingClient::ExitStandbyAsync(const ExitStandbyRequest& request, const ExitStandbyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ExitStandbyAsyncHelper( request, handler, context ); } );
}

void AutoScalingClient::ExitStandbyAsyncHelper(const ExitStandbyRequest& request, const ExitStandbyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ExitStandby(request), context);
}

PutLifecycleHookOutcome AutoScalingClient::PutLifecycleHook(const PutLifecycleHookRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
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
  auto task = Aws::MakeShared< std::packaged_task< PutLifecycleHookOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->PutLifecycleHook(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AutoScalingClient::PutLifecycleHookAsync(const PutLifecycleHookRequest& request, const PutLifecycleHookResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->PutLifecycleHookAsyncHelper( request, handler, context ); } );
}

void AutoScalingClient::PutLifecycleHookAsyncHelper(const PutLifecycleHookRequest& request, const PutLifecycleHookResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, PutLifecycleHook(request), context);
}

PutNotificationConfigurationOutcome AutoScalingClient::PutNotificationConfiguration(const PutNotificationConfigurationRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
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
  auto task = Aws::MakeShared< std::packaged_task< PutNotificationConfigurationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->PutNotificationConfiguration(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AutoScalingClient::PutNotificationConfigurationAsync(const PutNotificationConfigurationRequest& request, const PutNotificationConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->PutNotificationConfigurationAsyncHelper( request, handler, context ); } );
}

void AutoScalingClient::PutNotificationConfigurationAsyncHelper(const PutNotificationConfigurationRequest& request, const PutNotificationConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, PutNotificationConfiguration(request), context);
}

PutScalingPolicyOutcome AutoScalingClient::PutScalingPolicy(const PutScalingPolicyRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
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
  auto task = Aws::MakeShared< std::packaged_task< PutScalingPolicyOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->PutScalingPolicy(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AutoScalingClient::PutScalingPolicyAsync(const PutScalingPolicyRequest& request, const PutScalingPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->PutScalingPolicyAsyncHelper( request, handler, context ); } );
}

void AutoScalingClient::PutScalingPolicyAsyncHelper(const PutScalingPolicyRequest& request, const PutScalingPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, PutScalingPolicy(request), context);
}

PutScheduledUpdateGroupActionOutcome AutoScalingClient::PutScheduledUpdateGroupAction(const PutScheduledUpdateGroupActionRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
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
  auto task = Aws::MakeShared< std::packaged_task< PutScheduledUpdateGroupActionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->PutScheduledUpdateGroupAction(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AutoScalingClient::PutScheduledUpdateGroupActionAsync(const PutScheduledUpdateGroupActionRequest& request, const PutScheduledUpdateGroupActionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->PutScheduledUpdateGroupActionAsyncHelper( request, handler, context ); } );
}

void AutoScalingClient::PutScheduledUpdateGroupActionAsyncHelper(const PutScheduledUpdateGroupActionRequest& request, const PutScheduledUpdateGroupActionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, PutScheduledUpdateGroupAction(request), context);
}

RecordLifecycleActionHeartbeatOutcome AutoScalingClient::RecordLifecycleActionHeartbeat(const RecordLifecycleActionHeartbeatRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
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
  auto task = Aws::MakeShared< std::packaged_task< RecordLifecycleActionHeartbeatOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->RecordLifecycleActionHeartbeat(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AutoScalingClient::RecordLifecycleActionHeartbeatAsync(const RecordLifecycleActionHeartbeatRequest& request, const RecordLifecycleActionHeartbeatResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->RecordLifecycleActionHeartbeatAsyncHelper( request, handler, context ); } );
}

void AutoScalingClient::RecordLifecycleActionHeartbeatAsyncHelper(const RecordLifecycleActionHeartbeatRequest& request, const RecordLifecycleActionHeartbeatResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, RecordLifecycleActionHeartbeat(request), context);
}

ResumeProcessesOutcome AutoScalingClient::ResumeProcesses(const ResumeProcessesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
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
  auto task = Aws::MakeShared< std::packaged_task< ResumeProcessesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ResumeProcesses(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AutoScalingClient::ResumeProcessesAsync(const ResumeProcessesRequest& request, const ResumeProcessesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ResumeProcessesAsyncHelper( request, handler, context ); } );
}

void AutoScalingClient::ResumeProcessesAsyncHelper(const ResumeProcessesRequest& request, const ResumeProcessesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ResumeProcesses(request), context);
}

SetDesiredCapacityOutcome AutoScalingClient::SetDesiredCapacity(const SetDesiredCapacityRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
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
  auto task = Aws::MakeShared< std::packaged_task< SetDesiredCapacityOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->SetDesiredCapacity(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AutoScalingClient::SetDesiredCapacityAsync(const SetDesiredCapacityRequest& request, const SetDesiredCapacityResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->SetDesiredCapacityAsyncHelper( request, handler, context ); } );
}

void AutoScalingClient::SetDesiredCapacityAsyncHelper(const SetDesiredCapacityRequest& request, const SetDesiredCapacityResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, SetDesiredCapacity(request), context);
}

SetInstanceHealthOutcome AutoScalingClient::SetInstanceHealth(const SetInstanceHealthRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
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
  auto task = Aws::MakeShared< std::packaged_task< SetInstanceHealthOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->SetInstanceHealth(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AutoScalingClient::SetInstanceHealthAsync(const SetInstanceHealthRequest& request, const SetInstanceHealthResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->SetInstanceHealthAsyncHelper( request, handler, context ); } );
}

void AutoScalingClient::SetInstanceHealthAsyncHelper(const SetInstanceHealthRequest& request, const SetInstanceHealthResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, SetInstanceHealth(request), context);
}

SetInstanceProtectionOutcome AutoScalingClient::SetInstanceProtection(const SetInstanceProtectionRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
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
  auto task = Aws::MakeShared< std::packaged_task< SetInstanceProtectionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->SetInstanceProtection(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AutoScalingClient::SetInstanceProtectionAsync(const SetInstanceProtectionRequest& request, const SetInstanceProtectionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->SetInstanceProtectionAsyncHelper( request, handler, context ); } );
}

void AutoScalingClient::SetInstanceProtectionAsyncHelper(const SetInstanceProtectionRequest& request, const SetInstanceProtectionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, SetInstanceProtection(request), context);
}

SuspendProcessesOutcome AutoScalingClient::SuspendProcesses(const SuspendProcessesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
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
  auto task = Aws::MakeShared< std::packaged_task< SuspendProcessesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->SuspendProcesses(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AutoScalingClient::SuspendProcessesAsync(const SuspendProcessesRequest& request, const SuspendProcessesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->SuspendProcessesAsyncHelper( request, handler, context ); } );
}

void AutoScalingClient::SuspendProcessesAsyncHelper(const SuspendProcessesRequest& request, const SuspendProcessesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, SuspendProcesses(request), context);
}

TerminateInstanceInAutoScalingGroupOutcome AutoScalingClient::TerminateInstanceInAutoScalingGroup(const TerminateInstanceInAutoScalingGroupRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
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
  auto task = Aws::MakeShared< std::packaged_task< TerminateInstanceInAutoScalingGroupOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->TerminateInstanceInAutoScalingGroup(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AutoScalingClient::TerminateInstanceInAutoScalingGroupAsync(const TerminateInstanceInAutoScalingGroupRequest& request, const TerminateInstanceInAutoScalingGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->TerminateInstanceInAutoScalingGroupAsyncHelper( request, handler, context ); } );
}

void AutoScalingClient::TerminateInstanceInAutoScalingGroupAsyncHelper(const TerminateInstanceInAutoScalingGroupRequest& request, const TerminateInstanceInAutoScalingGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, TerminateInstanceInAutoScalingGroup(request), context);
}

UpdateAutoScalingGroupOutcome AutoScalingClient::UpdateAutoScalingGroup(const UpdateAutoScalingGroupRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
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
  auto task = Aws::MakeShared< std::packaged_task< UpdateAutoScalingGroupOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateAutoScalingGroup(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AutoScalingClient::UpdateAutoScalingGroupAsync(const UpdateAutoScalingGroupRequest& request, const UpdateAutoScalingGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UpdateAutoScalingGroupAsyncHelper( request, handler, context ); } );
}

void AutoScalingClient::UpdateAutoScalingGroupAsyncHelper(const UpdateAutoScalingGroupRequest& request, const UpdateAutoScalingGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateAutoScalingGroup(request), context);
}



