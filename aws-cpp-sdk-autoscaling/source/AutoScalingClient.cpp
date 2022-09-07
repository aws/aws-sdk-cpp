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

#include <aws/autoscaling/AutoScalingClient.h>
#include <aws/autoscaling/AutoScalingEndpoint.h>
#include <aws/autoscaling/AutoScalingErrorMarshaller.h>
#include <aws/autoscaling/model/AttachInstancesRequest.h>
#include <aws/autoscaling/model/AttachLoadBalancerTargetGroupsRequest.h>
#include <aws/autoscaling/model/AttachLoadBalancersRequest.h>
#include <aws/autoscaling/model/BatchDeleteScheduledActionRequest.h>
#include <aws/autoscaling/model/BatchPutScheduledUpdateGroupActionRequest.h>
#include <aws/autoscaling/model/CancelInstanceRefreshRequest.h>
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
#include <aws/autoscaling/model/DeleteWarmPoolRequest.h>
#include <aws/autoscaling/model/DescribeAccountLimitsRequest.h>
#include <aws/autoscaling/model/DescribeAdjustmentTypesRequest.h>
#include <aws/autoscaling/model/DescribeAutoScalingGroupsRequest.h>
#include <aws/autoscaling/model/DescribeAutoScalingInstancesRequest.h>
#include <aws/autoscaling/model/DescribeAutoScalingNotificationTypesRequest.h>
#include <aws/autoscaling/model/DescribeInstanceRefreshesRequest.h>
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
#include <aws/autoscaling/model/DescribeWarmPoolRequest.h>
#include <aws/autoscaling/model/DetachInstancesRequest.h>
#include <aws/autoscaling/model/DetachLoadBalancerTargetGroupsRequest.h>
#include <aws/autoscaling/model/DetachLoadBalancersRequest.h>
#include <aws/autoscaling/model/DisableMetricsCollectionRequest.h>
#include <aws/autoscaling/model/EnableMetricsCollectionRequest.h>
#include <aws/autoscaling/model/EnterStandbyRequest.h>
#include <aws/autoscaling/model/ExecutePolicyRequest.h>
#include <aws/autoscaling/model/ExitStandbyRequest.h>
#include <aws/autoscaling/model/GetPredictiveScalingForecastRequest.h>
#include <aws/autoscaling/model/PutLifecycleHookRequest.h>
#include <aws/autoscaling/model/PutNotificationConfigurationRequest.h>
#include <aws/autoscaling/model/PutScalingPolicyRequest.h>
#include <aws/autoscaling/model/PutScheduledUpdateGroupActionRequest.h>
#include <aws/autoscaling/model/PutWarmPoolRequest.h>
#include <aws/autoscaling/model/RecordLifecycleActionHeartbeatRequest.h>
#include <aws/autoscaling/model/ResumeProcessesRequest.h>
#include <aws/autoscaling/model/SetDesiredCapacityRequest.h>
#include <aws/autoscaling/model/SetInstanceHealthRequest.h>
#include <aws/autoscaling/model/SetInstanceProtectionRequest.h>
#include <aws/autoscaling/model/StartInstanceRefreshRequest.h>
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
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<AutoScalingErrorMarshaller>(ALLOCATION_TAG)),
  m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

AutoScalingClient::AutoScalingClient(const AWSCredentials& credentials,
                                     const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<AutoScalingErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

AutoScalingClient::AutoScalingClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                     const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             credentialsProvider,
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<AutoScalingErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

AutoScalingClient::~AutoScalingClient()
{
}

void AutoScalingClient::init(const Client::ClientConfiguration& config)
{
  AWSClient::SetServiceClientName("Auto Scaling");
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
  return GeneratePresignedUrl(uri, Aws::Http::HttpMethod::HTTP_GET, region, 3600);
}

AttachInstancesOutcome AutoScalingClient::AttachInstances(const AttachInstancesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return AttachInstancesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

AttachInstancesOutcomeCallable AutoScalingClient::AttachInstancesCallable(const AttachInstancesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< AttachInstancesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->AttachInstances(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AutoScalingClientAttachInstancesAsyncHelper(AutoScalingClient const * const clientThis, const AttachInstancesRequest& request, const AttachInstancesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->AttachInstances(request), context);
}

void AutoScalingClient::AttachInstancesAsync(const AttachInstancesRequest& request, const AttachInstancesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ AutoScalingClientAttachInstancesAsyncHelper( this, request, handler, context ); } );
}

AttachLoadBalancerTargetGroupsOutcome AutoScalingClient::AttachLoadBalancerTargetGroups(const AttachLoadBalancerTargetGroupsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return AttachLoadBalancerTargetGroupsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

AttachLoadBalancerTargetGroupsOutcomeCallable AutoScalingClient::AttachLoadBalancerTargetGroupsCallable(const AttachLoadBalancerTargetGroupsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< AttachLoadBalancerTargetGroupsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->AttachLoadBalancerTargetGroups(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AutoScalingClientAttachLoadBalancerTargetGroupsAsyncHelper(AutoScalingClient const * const clientThis, const AttachLoadBalancerTargetGroupsRequest& request, const AttachLoadBalancerTargetGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->AttachLoadBalancerTargetGroups(request), context);
}

void AutoScalingClient::AttachLoadBalancerTargetGroupsAsync(const AttachLoadBalancerTargetGroupsRequest& request, const AttachLoadBalancerTargetGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ AutoScalingClientAttachLoadBalancerTargetGroupsAsyncHelper( this, request, handler, context ); } );
}

AttachLoadBalancersOutcome AutoScalingClient::AttachLoadBalancers(const AttachLoadBalancersRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return AttachLoadBalancersOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

AttachLoadBalancersOutcomeCallable AutoScalingClient::AttachLoadBalancersCallable(const AttachLoadBalancersRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< AttachLoadBalancersOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->AttachLoadBalancers(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AutoScalingClientAttachLoadBalancersAsyncHelper(AutoScalingClient const * const clientThis, const AttachLoadBalancersRequest& request, const AttachLoadBalancersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->AttachLoadBalancers(request), context);
}

void AutoScalingClient::AttachLoadBalancersAsync(const AttachLoadBalancersRequest& request, const AttachLoadBalancersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ AutoScalingClientAttachLoadBalancersAsyncHelper( this, request, handler, context ); } );
}

BatchDeleteScheduledActionOutcome AutoScalingClient::BatchDeleteScheduledAction(const BatchDeleteScheduledActionRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return BatchDeleteScheduledActionOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

BatchDeleteScheduledActionOutcomeCallable AutoScalingClient::BatchDeleteScheduledActionCallable(const BatchDeleteScheduledActionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< BatchDeleteScheduledActionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->BatchDeleteScheduledAction(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AutoScalingClientBatchDeleteScheduledActionAsyncHelper(AutoScalingClient const * const clientThis, const BatchDeleteScheduledActionRequest& request, const BatchDeleteScheduledActionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->BatchDeleteScheduledAction(request), context);
}

void AutoScalingClient::BatchDeleteScheduledActionAsync(const BatchDeleteScheduledActionRequest& request, const BatchDeleteScheduledActionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ AutoScalingClientBatchDeleteScheduledActionAsyncHelper( this, request, handler, context ); } );
}

BatchPutScheduledUpdateGroupActionOutcome AutoScalingClient::BatchPutScheduledUpdateGroupAction(const BatchPutScheduledUpdateGroupActionRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return BatchPutScheduledUpdateGroupActionOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

BatchPutScheduledUpdateGroupActionOutcomeCallable AutoScalingClient::BatchPutScheduledUpdateGroupActionCallable(const BatchPutScheduledUpdateGroupActionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< BatchPutScheduledUpdateGroupActionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->BatchPutScheduledUpdateGroupAction(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AutoScalingClientBatchPutScheduledUpdateGroupActionAsyncHelper(AutoScalingClient const * const clientThis, const BatchPutScheduledUpdateGroupActionRequest& request, const BatchPutScheduledUpdateGroupActionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->BatchPutScheduledUpdateGroupAction(request), context);
}

void AutoScalingClient::BatchPutScheduledUpdateGroupActionAsync(const BatchPutScheduledUpdateGroupActionRequest& request, const BatchPutScheduledUpdateGroupActionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ AutoScalingClientBatchPutScheduledUpdateGroupActionAsyncHelper( this, request, handler, context ); } );
}

CancelInstanceRefreshOutcome AutoScalingClient::CancelInstanceRefresh(const CancelInstanceRefreshRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return CancelInstanceRefreshOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

CancelInstanceRefreshOutcomeCallable AutoScalingClient::CancelInstanceRefreshCallable(const CancelInstanceRefreshRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CancelInstanceRefreshOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CancelInstanceRefresh(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AutoScalingClientCancelInstanceRefreshAsyncHelper(AutoScalingClient const * const clientThis, const CancelInstanceRefreshRequest& request, const CancelInstanceRefreshResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CancelInstanceRefresh(request), context);
}

void AutoScalingClient::CancelInstanceRefreshAsync(const CancelInstanceRefreshRequest& request, const CancelInstanceRefreshResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ AutoScalingClientCancelInstanceRefreshAsyncHelper( this, request, handler, context ); } );
}

CompleteLifecycleActionOutcome AutoScalingClient::CompleteLifecycleAction(const CompleteLifecycleActionRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return CompleteLifecycleActionOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

CompleteLifecycleActionOutcomeCallable AutoScalingClient::CompleteLifecycleActionCallable(const CompleteLifecycleActionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CompleteLifecycleActionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CompleteLifecycleAction(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AutoScalingClientCompleteLifecycleActionAsyncHelper(AutoScalingClient const * const clientThis, const CompleteLifecycleActionRequest& request, const CompleteLifecycleActionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CompleteLifecycleAction(request), context);
}

void AutoScalingClient::CompleteLifecycleActionAsync(const CompleteLifecycleActionRequest& request, const CompleteLifecycleActionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ AutoScalingClientCompleteLifecycleActionAsyncHelper( this, request, handler, context ); } );
}

CreateAutoScalingGroupOutcome AutoScalingClient::CreateAutoScalingGroup(const CreateAutoScalingGroupRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return CreateAutoScalingGroupOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

CreateAutoScalingGroupOutcomeCallable AutoScalingClient::CreateAutoScalingGroupCallable(const CreateAutoScalingGroupRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateAutoScalingGroupOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateAutoScalingGroup(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AutoScalingClientCreateAutoScalingGroupAsyncHelper(AutoScalingClient const * const clientThis, const CreateAutoScalingGroupRequest& request, const CreateAutoScalingGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateAutoScalingGroup(request), context);
}

void AutoScalingClient::CreateAutoScalingGroupAsync(const CreateAutoScalingGroupRequest& request, const CreateAutoScalingGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ AutoScalingClientCreateAutoScalingGroupAsyncHelper( this, request, handler, context ); } );
}

CreateLaunchConfigurationOutcome AutoScalingClient::CreateLaunchConfiguration(const CreateLaunchConfigurationRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return CreateLaunchConfigurationOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

CreateLaunchConfigurationOutcomeCallable AutoScalingClient::CreateLaunchConfigurationCallable(const CreateLaunchConfigurationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateLaunchConfigurationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateLaunchConfiguration(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AutoScalingClientCreateLaunchConfigurationAsyncHelper(AutoScalingClient const * const clientThis, const CreateLaunchConfigurationRequest& request, const CreateLaunchConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateLaunchConfiguration(request), context);
}

void AutoScalingClient::CreateLaunchConfigurationAsync(const CreateLaunchConfigurationRequest& request, const CreateLaunchConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ AutoScalingClientCreateLaunchConfigurationAsyncHelper( this, request, handler, context ); } );
}

CreateOrUpdateTagsOutcome AutoScalingClient::CreateOrUpdateTags(const CreateOrUpdateTagsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return CreateOrUpdateTagsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

CreateOrUpdateTagsOutcomeCallable AutoScalingClient::CreateOrUpdateTagsCallable(const CreateOrUpdateTagsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateOrUpdateTagsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateOrUpdateTags(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AutoScalingClientCreateOrUpdateTagsAsyncHelper(AutoScalingClient const * const clientThis, const CreateOrUpdateTagsRequest& request, const CreateOrUpdateTagsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateOrUpdateTags(request), context);
}

void AutoScalingClient::CreateOrUpdateTagsAsync(const CreateOrUpdateTagsRequest& request, const CreateOrUpdateTagsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ AutoScalingClientCreateOrUpdateTagsAsyncHelper( this, request, handler, context ); } );
}

DeleteAutoScalingGroupOutcome AutoScalingClient::DeleteAutoScalingGroup(const DeleteAutoScalingGroupRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeleteAutoScalingGroupOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

DeleteAutoScalingGroupOutcomeCallable AutoScalingClient::DeleteAutoScalingGroupCallable(const DeleteAutoScalingGroupRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteAutoScalingGroupOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteAutoScalingGroup(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AutoScalingClientDeleteAutoScalingGroupAsyncHelper(AutoScalingClient const * const clientThis, const DeleteAutoScalingGroupRequest& request, const DeleteAutoScalingGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteAutoScalingGroup(request), context);
}

void AutoScalingClient::DeleteAutoScalingGroupAsync(const DeleteAutoScalingGroupRequest& request, const DeleteAutoScalingGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ AutoScalingClientDeleteAutoScalingGroupAsyncHelper( this, request, handler, context ); } );
}

DeleteLaunchConfigurationOutcome AutoScalingClient::DeleteLaunchConfiguration(const DeleteLaunchConfigurationRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeleteLaunchConfigurationOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

DeleteLaunchConfigurationOutcomeCallable AutoScalingClient::DeleteLaunchConfigurationCallable(const DeleteLaunchConfigurationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteLaunchConfigurationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteLaunchConfiguration(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AutoScalingClientDeleteLaunchConfigurationAsyncHelper(AutoScalingClient const * const clientThis, const DeleteLaunchConfigurationRequest& request, const DeleteLaunchConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteLaunchConfiguration(request), context);
}

void AutoScalingClient::DeleteLaunchConfigurationAsync(const DeleteLaunchConfigurationRequest& request, const DeleteLaunchConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ AutoScalingClientDeleteLaunchConfigurationAsyncHelper( this, request, handler, context ); } );
}

DeleteLifecycleHookOutcome AutoScalingClient::DeleteLifecycleHook(const DeleteLifecycleHookRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeleteLifecycleHookOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

DeleteLifecycleHookOutcomeCallable AutoScalingClient::DeleteLifecycleHookCallable(const DeleteLifecycleHookRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteLifecycleHookOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteLifecycleHook(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AutoScalingClientDeleteLifecycleHookAsyncHelper(AutoScalingClient const * const clientThis, const DeleteLifecycleHookRequest& request, const DeleteLifecycleHookResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteLifecycleHook(request), context);
}

void AutoScalingClient::DeleteLifecycleHookAsync(const DeleteLifecycleHookRequest& request, const DeleteLifecycleHookResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ AutoScalingClientDeleteLifecycleHookAsyncHelper( this, request, handler, context ); } );
}

DeleteNotificationConfigurationOutcome AutoScalingClient::DeleteNotificationConfiguration(const DeleteNotificationConfigurationRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeleteNotificationConfigurationOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

DeleteNotificationConfigurationOutcomeCallable AutoScalingClient::DeleteNotificationConfigurationCallable(const DeleteNotificationConfigurationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteNotificationConfigurationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteNotificationConfiguration(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AutoScalingClientDeleteNotificationConfigurationAsyncHelper(AutoScalingClient const * const clientThis, const DeleteNotificationConfigurationRequest& request, const DeleteNotificationConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteNotificationConfiguration(request), context);
}

void AutoScalingClient::DeleteNotificationConfigurationAsync(const DeleteNotificationConfigurationRequest& request, const DeleteNotificationConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ AutoScalingClientDeleteNotificationConfigurationAsyncHelper( this, request, handler, context ); } );
}

DeletePolicyOutcome AutoScalingClient::DeletePolicy(const DeletePolicyRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeletePolicyOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

DeletePolicyOutcomeCallable AutoScalingClient::DeletePolicyCallable(const DeletePolicyRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeletePolicyOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeletePolicy(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AutoScalingClientDeletePolicyAsyncHelper(AutoScalingClient const * const clientThis, const DeletePolicyRequest& request, const DeletePolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeletePolicy(request), context);
}

void AutoScalingClient::DeletePolicyAsync(const DeletePolicyRequest& request, const DeletePolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ AutoScalingClientDeletePolicyAsyncHelper( this, request, handler, context ); } );
}

DeleteScheduledActionOutcome AutoScalingClient::DeleteScheduledAction(const DeleteScheduledActionRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeleteScheduledActionOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

DeleteScheduledActionOutcomeCallable AutoScalingClient::DeleteScheduledActionCallable(const DeleteScheduledActionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteScheduledActionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteScheduledAction(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AutoScalingClientDeleteScheduledActionAsyncHelper(AutoScalingClient const * const clientThis, const DeleteScheduledActionRequest& request, const DeleteScheduledActionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteScheduledAction(request), context);
}

void AutoScalingClient::DeleteScheduledActionAsync(const DeleteScheduledActionRequest& request, const DeleteScheduledActionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ AutoScalingClientDeleteScheduledActionAsyncHelper( this, request, handler, context ); } );
}

DeleteTagsOutcome AutoScalingClient::DeleteTags(const DeleteTagsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeleteTagsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

DeleteTagsOutcomeCallable AutoScalingClient::DeleteTagsCallable(const DeleteTagsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteTagsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteTags(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AutoScalingClientDeleteTagsAsyncHelper(AutoScalingClient const * const clientThis, const DeleteTagsRequest& request, const DeleteTagsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteTags(request), context);
}

void AutoScalingClient::DeleteTagsAsync(const DeleteTagsRequest& request, const DeleteTagsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ AutoScalingClientDeleteTagsAsyncHelper( this, request, handler, context ); } );
}

DeleteWarmPoolOutcome AutoScalingClient::DeleteWarmPool(const DeleteWarmPoolRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeleteWarmPoolOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

DeleteWarmPoolOutcomeCallable AutoScalingClient::DeleteWarmPoolCallable(const DeleteWarmPoolRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteWarmPoolOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteWarmPool(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AutoScalingClientDeleteWarmPoolAsyncHelper(AutoScalingClient const * const clientThis, const DeleteWarmPoolRequest& request, const DeleteWarmPoolResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteWarmPool(request), context);
}

void AutoScalingClient::DeleteWarmPoolAsync(const DeleteWarmPoolRequest& request, const DeleteWarmPoolResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ AutoScalingClientDeleteWarmPoolAsyncHelper( this, request, handler, context ); } );
}

DescribeAccountLimitsOutcome AutoScalingClient::DescribeAccountLimits(const DescribeAccountLimitsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeAccountLimitsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

DescribeAccountLimitsOutcomeCallable AutoScalingClient::DescribeAccountLimitsCallable(const DescribeAccountLimitsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeAccountLimitsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeAccountLimits(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AutoScalingClientDescribeAccountLimitsAsyncHelper(AutoScalingClient const * const clientThis, const DescribeAccountLimitsRequest& request, const DescribeAccountLimitsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeAccountLimits(request), context);
}

void AutoScalingClient::DescribeAccountLimitsAsync(const DescribeAccountLimitsRequest& request, const DescribeAccountLimitsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ AutoScalingClientDescribeAccountLimitsAsyncHelper( this, request, handler, context ); } );
}

DescribeAdjustmentTypesOutcome AutoScalingClient::DescribeAdjustmentTypes(const DescribeAdjustmentTypesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeAdjustmentTypesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

DescribeAdjustmentTypesOutcomeCallable AutoScalingClient::DescribeAdjustmentTypesCallable(const DescribeAdjustmentTypesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeAdjustmentTypesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeAdjustmentTypes(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AutoScalingClientDescribeAdjustmentTypesAsyncHelper(AutoScalingClient const * const clientThis, const DescribeAdjustmentTypesRequest& request, const DescribeAdjustmentTypesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeAdjustmentTypes(request), context);
}

void AutoScalingClient::DescribeAdjustmentTypesAsync(const DescribeAdjustmentTypesRequest& request, const DescribeAdjustmentTypesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ AutoScalingClientDescribeAdjustmentTypesAsyncHelper( this, request, handler, context ); } );
}

DescribeAutoScalingGroupsOutcome AutoScalingClient::DescribeAutoScalingGroups(const DescribeAutoScalingGroupsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeAutoScalingGroupsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

DescribeAutoScalingGroupsOutcomeCallable AutoScalingClient::DescribeAutoScalingGroupsCallable(const DescribeAutoScalingGroupsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeAutoScalingGroupsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeAutoScalingGroups(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AutoScalingClientDescribeAutoScalingGroupsAsyncHelper(AutoScalingClient const * const clientThis, const DescribeAutoScalingGroupsRequest& request, const DescribeAutoScalingGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeAutoScalingGroups(request), context);
}

void AutoScalingClient::DescribeAutoScalingGroupsAsync(const DescribeAutoScalingGroupsRequest& request, const DescribeAutoScalingGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ AutoScalingClientDescribeAutoScalingGroupsAsyncHelper( this, request, handler, context ); } );
}

DescribeAutoScalingInstancesOutcome AutoScalingClient::DescribeAutoScalingInstances(const DescribeAutoScalingInstancesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeAutoScalingInstancesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

DescribeAutoScalingInstancesOutcomeCallable AutoScalingClient::DescribeAutoScalingInstancesCallable(const DescribeAutoScalingInstancesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeAutoScalingInstancesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeAutoScalingInstances(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AutoScalingClientDescribeAutoScalingInstancesAsyncHelper(AutoScalingClient const * const clientThis, const DescribeAutoScalingInstancesRequest& request, const DescribeAutoScalingInstancesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeAutoScalingInstances(request), context);
}

void AutoScalingClient::DescribeAutoScalingInstancesAsync(const DescribeAutoScalingInstancesRequest& request, const DescribeAutoScalingInstancesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ AutoScalingClientDescribeAutoScalingInstancesAsyncHelper( this, request, handler, context ); } );
}

DescribeAutoScalingNotificationTypesOutcome AutoScalingClient::DescribeAutoScalingNotificationTypes(const DescribeAutoScalingNotificationTypesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeAutoScalingNotificationTypesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

DescribeAutoScalingNotificationTypesOutcomeCallable AutoScalingClient::DescribeAutoScalingNotificationTypesCallable(const DescribeAutoScalingNotificationTypesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeAutoScalingNotificationTypesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeAutoScalingNotificationTypes(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AutoScalingClientDescribeAutoScalingNotificationTypesAsyncHelper(AutoScalingClient const * const clientThis, const DescribeAutoScalingNotificationTypesRequest& request, const DescribeAutoScalingNotificationTypesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeAutoScalingNotificationTypes(request), context);
}

void AutoScalingClient::DescribeAutoScalingNotificationTypesAsync(const DescribeAutoScalingNotificationTypesRequest& request, const DescribeAutoScalingNotificationTypesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ AutoScalingClientDescribeAutoScalingNotificationTypesAsyncHelper( this, request, handler, context ); } );
}

DescribeInstanceRefreshesOutcome AutoScalingClient::DescribeInstanceRefreshes(const DescribeInstanceRefreshesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeInstanceRefreshesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

DescribeInstanceRefreshesOutcomeCallable AutoScalingClient::DescribeInstanceRefreshesCallable(const DescribeInstanceRefreshesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeInstanceRefreshesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeInstanceRefreshes(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AutoScalingClientDescribeInstanceRefreshesAsyncHelper(AutoScalingClient const * const clientThis, const DescribeInstanceRefreshesRequest& request, const DescribeInstanceRefreshesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeInstanceRefreshes(request), context);
}

void AutoScalingClient::DescribeInstanceRefreshesAsync(const DescribeInstanceRefreshesRequest& request, const DescribeInstanceRefreshesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ AutoScalingClientDescribeInstanceRefreshesAsyncHelper( this, request, handler, context ); } );
}

DescribeLaunchConfigurationsOutcome AutoScalingClient::DescribeLaunchConfigurations(const DescribeLaunchConfigurationsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeLaunchConfigurationsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

DescribeLaunchConfigurationsOutcomeCallable AutoScalingClient::DescribeLaunchConfigurationsCallable(const DescribeLaunchConfigurationsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeLaunchConfigurationsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeLaunchConfigurations(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AutoScalingClientDescribeLaunchConfigurationsAsyncHelper(AutoScalingClient const * const clientThis, const DescribeLaunchConfigurationsRequest& request, const DescribeLaunchConfigurationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeLaunchConfigurations(request), context);
}

void AutoScalingClient::DescribeLaunchConfigurationsAsync(const DescribeLaunchConfigurationsRequest& request, const DescribeLaunchConfigurationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ AutoScalingClientDescribeLaunchConfigurationsAsyncHelper( this, request, handler, context ); } );
}

DescribeLifecycleHookTypesOutcome AutoScalingClient::DescribeLifecycleHookTypes(const DescribeLifecycleHookTypesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeLifecycleHookTypesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

DescribeLifecycleHookTypesOutcomeCallable AutoScalingClient::DescribeLifecycleHookTypesCallable(const DescribeLifecycleHookTypesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeLifecycleHookTypesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeLifecycleHookTypes(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AutoScalingClientDescribeLifecycleHookTypesAsyncHelper(AutoScalingClient const * const clientThis, const DescribeLifecycleHookTypesRequest& request, const DescribeLifecycleHookTypesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeLifecycleHookTypes(request), context);
}

void AutoScalingClient::DescribeLifecycleHookTypesAsync(const DescribeLifecycleHookTypesRequest& request, const DescribeLifecycleHookTypesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ AutoScalingClientDescribeLifecycleHookTypesAsyncHelper( this, request, handler, context ); } );
}

DescribeLifecycleHooksOutcome AutoScalingClient::DescribeLifecycleHooks(const DescribeLifecycleHooksRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeLifecycleHooksOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

DescribeLifecycleHooksOutcomeCallable AutoScalingClient::DescribeLifecycleHooksCallable(const DescribeLifecycleHooksRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeLifecycleHooksOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeLifecycleHooks(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AutoScalingClientDescribeLifecycleHooksAsyncHelper(AutoScalingClient const * const clientThis, const DescribeLifecycleHooksRequest& request, const DescribeLifecycleHooksResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeLifecycleHooks(request), context);
}

void AutoScalingClient::DescribeLifecycleHooksAsync(const DescribeLifecycleHooksRequest& request, const DescribeLifecycleHooksResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ AutoScalingClientDescribeLifecycleHooksAsyncHelper( this, request, handler, context ); } );
}

DescribeLoadBalancerTargetGroupsOutcome AutoScalingClient::DescribeLoadBalancerTargetGroups(const DescribeLoadBalancerTargetGroupsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeLoadBalancerTargetGroupsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

DescribeLoadBalancerTargetGroupsOutcomeCallable AutoScalingClient::DescribeLoadBalancerTargetGroupsCallable(const DescribeLoadBalancerTargetGroupsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeLoadBalancerTargetGroupsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeLoadBalancerTargetGroups(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AutoScalingClientDescribeLoadBalancerTargetGroupsAsyncHelper(AutoScalingClient const * const clientThis, const DescribeLoadBalancerTargetGroupsRequest& request, const DescribeLoadBalancerTargetGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeLoadBalancerTargetGroups(request), context);
}

void AutoScalingClient::DescribeLoadBalancerTargetGroupsAsync(const DescribeLoadBalancerTargetGroupsRequest& request, const DescribeLoadBalancerTargetGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ AutoScalingClientDescribeLoadBalancerTargetGroupsAsyncHelper( this, request, handler, context ); } );
}

DescribeLoadBalancersOutcome AutoScalingClient::DescribeLoadBalancers(const DescribeLoadBalancersRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeLoadBalancersOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

DescribeLoadBalancersOutcomeCallable AutoScalingClient::DescribeLoadBalancersCallable(const DescribeLoadBalancersRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeLoadBalancersOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeLoadBalancers(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AutoScalingClientDescribeLoadBalancersAsyncHelper(AutoScalingClient const * const clientThis, const DescribeLoadBalancersRequest& request, const DescribeLoadBalancersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeLoadBalancers(request), context);
}

void AutoScalingClient::DescribeLoadBalancersAsync(const DescribeLoadBalancersRequest& request, const DescribeLoadBalancersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ AutoScalingClientDescribeLoadBalancersAsyncHelper( this, request, handler, context ); } );
}

DescribeMetricCollectionTypesOutcome AutoScalingClient::DescribeMetricCollectionTypes(const DescribeMetricCollectionTypesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeMetricCollectionTypesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

DescribeMetricCollectionTypesOutcomeCallable AutoScalingClient::DescribeMetricCollectionTypesCallable(const DescribeMetricCollectionTypesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeMetricCollectionTypesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeMetricCollectionTypes(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AutoScalingClientDescribeMetricCollectionTypesAsyncHelper(AutoScalingClient const * const clientThis, const DescribeMetricCollectionTypesRequest& request, const DescribeMetricCollectionTypesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeMetricCollectionTypes(request), context);
}

void AutoScalingClient::DescribeMetricCollectionTypesAsync(const DescribeMetricCollectionTypesRequest& request, const DescribeMetricCollectionTypesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ AutoScalingClientDescribeMetricCollectionTypesAsyncHelper( this, request, handler, context ); } );
}

DescribeNotificationConfigurationsOutcome AutoScalingClient::DescribeNotificationConfigurations(const DescribeNotificationConfigurationsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeNotificationConfigurationsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

DescribeNotificationConfigurationsOutcomeCallable AutoScalingClient::DescribeNotificationConfigurationsCallable(const DescribeNotificationConfigurationsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeNotificationConfigurationsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeNotificationConfigurations(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AutoScalingClientDescribeNotificationConfigurationsAsyncHelper(AutoScalingClient const * const clientThis, const DescribeNotificationConfigurationsRequest& request, const DescribeNotificationConfigurationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeNotificationConfigurations(request), context);
}

void AutoScalingClient::DescribeNotificationConfigurationsAsync(const DescribeNotificationConfigurationsRequest& request, const DescribeNotificationConfigurationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ AutoScalingClientDescribeNotificationConfigurationsAsyncHelper( this, request, handler, context ); } );
}

DescribePoliciesOutcome AutoScalingClient::DescribePolicies(const DescribePoliciesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribePoliciesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

DescribePoliciesOutcomeCallable AutoScalingClient::DescribePoliciesCallable(const DescribePoliciesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribePoliciesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribePolicies(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AutoScalingClientDescribePoliciesAsyncHelper(AutoScalingClient const * const clientThis, const DescribePoliciesRequest& request, const DescribePoliciesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribePolicies(request), context);
}

void AutoScalingClient::DescribePoliciesAsync(const DescribePoliciesRequest& request, const DescribePoliciesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ AutoScalingClientDescribePoliciesAsyncHelper( this, request, handler, context ); } );
}

DescribeScalingActivitiesOutcome AutoScalingClient::DescribeScalingActivities(const DescribeScalingActivitiesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeScalingActivitiesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

DescribeScalingActivitiesOutcomeCallable AutoScalingClient::DescribeScalingActivitiesCallable(const DescribeScalingActivitiesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeScalingActivitiesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeScalingActivities(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AutoScalingClientDescribeScalingActivitiesAsyncHelper(AutoScalingClient const * const clientThis, const DescribeScalingActivitiesRequest& request, const DescribeScalingActivitiesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeScalingActivities(request), context);
}

void AutoScalingClient::DescribeScalingActivitiesAsync(const DescribeScalingActivitiesRequest& request, const DescribeScalingActivitiesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ AutoScalingClientDescribeScalingActivitiesAsyncHelper( this, request, handler, context ); } );
}

DescribeScalingProcessTypesOutcome AutoScalingClient::DescribeScalingProcessTypes(const DescribeScalingProcessTypesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeScalingProcessTypesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

DescribeScalingProcessTypesOutcomeCallable AutoScalingClient::DescribeScalingProcessTypesCallable(const DescribeScalingProcessTypesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeScalingProcessTypesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeScalingProcessTypes(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AutoScalingClientDescribeScalingProcessTypesAsyncHelper(AutoScalingClient const * const clientThis, const DescribeScalingProcessTypesRequest& request, const DescribeScalingProcessTypesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeScalingProcessTypes(request), context);
}

void AutoScalingClient::DescribeScalingProcessTypesAsync(const DescribeScalingProcessTypesRequest& request, const DescribeScalingProcessTypesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ AutoScalingClientDescribeScalingProcessTypesAsyncHelper( this, request, handler, context ); } );
}

DescribeScheduledActionsOutcome AutoScalingClient::DescribeScheduledActions(const DescribeScheduledActionsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeScheduledActionsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

DescribeScheduledActionsOutcomeCallable AutoScalingClient::DescribeScheduledActionsCallable(const DescribeScheduledActionsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeScheduledActionsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeScheduledActions(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AutoScalingClientDescribeScheduledActionsAsyncHelper(AutoScalingClient const * const clientThis, const DescribeScheduledActionsRequest& request, const DescribeScheduledActionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeScheduledActions(request), context);
}

void AutoScalingClient::DescribeScheduledActionsAsync(const DescribeScheduledActionsRequest& request, const DescribeScheduledActionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ AutoScalingClientDescribeScheduledActionsAsyncHelper( this, request, handler, context ); } );
}

DescribeTagsOutcome AutoScalingClient::DescribeTags(const DescribeTagsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeTagsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

DescribeTagsOutcomeCallable AutoScalingClient::DescribeTagsCallable(const DescribeTagsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeTagsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeTags(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AutoScalingClientDescribeTagsAsyncHelper(AutoScalingClient const * const clientThis, const DescribeTagsRequest& request, const DescribeTagsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeTags(request), context);
}

void AutoScalingClient::DescribeTagsAsync(const DescribeTagsRequest& request, const DescribeTagsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ AutoScalingClientDescribeTagsAsyncHelper( this, request, handler, context ); } );
}

DescribeTerminationPolicyTypesOutcome AutoScalingClient::DescribeTerminationPolicyTypes(const DescribeTerminationPolicyTypesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeTerminationPolicyTypesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

DescribeTerminationPolicyTypesOutcomeCallable AutoScalingClient::DescribeTerminationPolicyTypesCallable(const DescribeTerminationPolicyTypesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeTerminationPolicyTypesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeTerminationPolicyTypes(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AutoScalingClientDescribeTerminationPolicyTypesAsyncHelper(AutoScalingClient const * const clientThis, const DescribeTerminationPolicyTypesRequest& request, const DescribeTerminationPolicyTypesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeTerminationPolicyTypes(request), context);
}

void AutoScalingClient::DescribeTerminationPolicyTypesAsync(const DescribeTerminationPolicyTypesRequest& request, const DescribeTerminationPolicyTypesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ AutoScalingClientDescribeTerminationPolicyTypesAsyncHelper( this, request, handler, context ); } );
}

DescribeWarmPoolOutcome AutoScalingClient::DescribeWarmPool(const DescribeWarmPoolRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeWarmPoolOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

DescribeWarmPoolOutcomeCallable AutoScalingClient::DescribeWarmPoolCallable(const DescribeWarmPoolRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeWarmPoolOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeWarmPool(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AutoScalingClientDescribeWarmPoolAsyncHelper(AutoScalingClient const * const clientThis, const DescribeWarmPoolRequest& request, const DescribeWarmPoolResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeWarmPool(request), context);
}

void AutoScalingClient::DescribeWarmPoolAsync(const DescribeWarmPoolRequest& request, const DescribeWarmPoolResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ AutoScalingClientDescribeWarmPoolAsyncHelper( this, request, handler, context ); } );
}

DetachInstancesOutcome AutoScalingClient::DetachInstances(const DetachInstancesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DetachInstancesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

DetachInstancesOutcomeCallable AutoScalingClient::DetachInstancesCallable(const DetachInstancesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DetachInstancesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DetachInstances(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AutoScalingClientDetachInstancesAsyncHelper(AutoScalingClient const * const clientThis, const DetachInstancesRequest& request, const DetachInstancesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DetachInstances(request), context);
}

void AutoScalingClient::DetachInstancesAsync(const DetachInstancesRequest& request, const DetachInstancesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ AutoScalingClientDetachInstancesAsyncHelper( this, request, handler, context ); } );
}

DetachLoadBalancerTargetGroupsOutcome AutoScalingClient::DetachLoadBalancerTargetGroups(const DetachLoadBalancerTargetGroupsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DetachLoadBalancerTargetGroupsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

DetachLoadBalancerTargetGroupsOutcomeCallable AutoScalingClient::DetachLoadBalancerTargetGroupsCallable(const DetachLoadBalancerTargetGroupsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DetachLoadBalancerTargetGroupsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DetachLoadBalancerTargetGroups(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AutoScalingClientDetachLoadBalancerTargetGroupsAsyncHelper(AutoScalingClient const * const clientThis, const DetachLoadBalancerTargetGroupsRequest& request, const DetachLoadBalancerTargetGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DetachLoadBalancerTargetGroups(request), context);
}

void AutoScalingClient::DetachLoadBalancerTargetGroupsAsync(const DetachLoadBalancerTargetGroupsRequest& request, const DetachLoadBalancerTargetGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ AutoScalingClientDetachLoadBalancerTargetGroupsAsyncHelper( this, request, handler, context ); } );
}

DetachLoadBalancersOutcome AutoScalingClient::DetachLoadBalancers(const DetachLoadBalancersRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DetachLoadBalancersOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

DetachLoadBalancersOutcomeCallable AutoScalingClient::DetachLoadBalancersCallable(const DetachLoadBalancersRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DetachLoadBalancersOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DetachLoadBalancers(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AutoScalingClientDetachLoadBalancersAsyncHelper(AutoScalingClient const * const clientThis, const DetachLoadBalancersRequest& request, const DetachLoadBalancersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DetachLoadBalancers(request), context);
}

void AutoScalingClient::DetachLoadBalancersAsync(const DetachLoadBalancersRequest& request, const DetachLoadBalancersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ AutoScalingClientDetachLoadBalancersAsyncHelper( this, request, handler, context ); } );
}

DisableMetricsCollectionOutcome AutoScalingClient::DisableMetricsCollection(const DisableMetricsCollectionRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DisableMetricsCollectionOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

DisableMetricsCollectionOutcomeCallable AutoScalingClient::DisableMetricsCollectionCallable(const DisableMetricsCollectionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DisableMetricsCollectionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DisableMetricsCollection(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AutoScalingClientDisableMetricsCollectionAsyncHelper(AutoScalingClient const * const clientThis, const DisableMetricsCollectionRequest& request, const DisableMetricsCollectionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DisableMetricsCollection(request), context);
}

void AutoScalingClient::DisableMetricsCollectionAsync(const DisableMetricsCollectionRequest& request, const DisableMetricsCollectionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ AutoScalingClientDisableMetricsCollectionAsyncHelper( this, request, handler, context ); } );
}

EnableMetricsCollectionOutcome AutoScalingClient::EnableMetricsCollection(const EnableMetricsCollectionRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return EnableMetricsCollectionOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

EnableMetricsCollectionOutcomeCallable AutoScalingClient::EnableMetricsCollectionCallable(const EnableMetricsCollectionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< EnableMetricsCollectionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->EnableMetricsCollection(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AutoScalingClientEnableMetricsCollectionAsyncHelper(AutoScalingClient const * const clientThis, const EnableMetricsCollectionRequest& request, const EnableMetricsCollectionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->EnableMetricsCollection(request), context);
}

void AutoScalingClient::EnableMetricsCollectionAsync(const EnableMetricsCollectionRequest& request, const EnableMetricsCollectionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ AutoScalingClientEnableMetricsCollectionAsyncHelper( this, request, handler, context ); } );
}

EnterStandbyOutcome AutoScalingClient::EnterStandby(const EnterStandbyRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return EnterStandbyOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

EnterStandbyOutcomeCallable AutoScalingClient::EnterStandbyCallable(const EnterStandbyRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< EnterStandbyOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->EnterStandby(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AutoScalingClientEnterStandbyAsyncHelper(AutoScalingClient const * const clientThis, const EnterStandbyRequest& request, const EnterStandbyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->EnterStandby(request), context);
}

void AutoScalingClient::EnterStandbyAsync(const EnterStandbyRequest& request, const EnterStandbyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ AutoScalingClientEnterStandbyAsyncHelper( this, request, handler, context ); } );
}

ExecutePolicyOutcome AutoScalingClient::ExecutePolicy(const ExecutePolicyRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ExecutePolicyOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

ExecutePolicyOutcomeCallable AutoScalingClient::ExecutePolicyCallable(const ExecutePolicyRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ExecutePolicyOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ExecutePolicy(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AutoScalingClientExecutePolicyAsyncHelper(AutoScalingClient const * const clientThis, const ExecutePolicyRequest& request, const ExecutePolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ExecutePolicy(request), context);
}

void AutoScalingClient::ExecutePolicyAsync(const ExecutePolicyRequest& request, const ExecutePolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ AutoScalingClientExecutePolicyAsyncHelper( this, request, handler, context ); } );
}

ExitStandbyOutcome AutoScalingClient::ExitStandby(const ExitStandbyRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ExitStandbyOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

ExitStandbyOutcomeCallable AutoScalingClient::ExitStandbyCallable(const ExitStandbyRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ExitStandbyOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ExitStandby(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AutoScalingClientExitStandbyAsyncHelper(AutoScalingClient const * const clientThis, const ExitStandbyRequest& request, const ExitStandbyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ExitStandby(request), context);
}

void AutoScalingClient::ExitStandbyAsync(const ExitStandbyRequest& request, const ExitStandbyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ AutoScalingClientExitStandbyAsyncHelper( this, request, handler, context ); } );
}

GetPredictiveScalingForecastOutcome AutoScalingClient::GetPredictiveScalingForecast(const GetPredictiveScalingForecastRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return GetPredictiveScalingForecastOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

GetPredictiveScalingForecastOutcomeCallable AutoScalingClient::GetPredictiveScalingForecastCallable(const GetPredictiveScalingForecastRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetPredictiveScalingForecastOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetPredictiveScalingForecast(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AutoScalingClientGetPredictiveScalingForecastAsyncHelper(AutoScalingClient const * const clientThis, const GetPredictiveScalingForecastRequest& request, const GetPredictiveScalingForecastResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetPredictiveScalingForecast(request), context);
}

void AutoScalingClient::GetPredictiveScalingForecastAsync(const GetPredictiveScalingForecastRequest& request, const GetPredictiveScalingForecastResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ AutoScalingClientGetPredictiveScalingForecastAsyncHelper( this, request, handler, context ); } );
}

PutLifecycleHookOutcome AutoScalingClient::PutLifecycleHook(const PutLifecycleHookRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return PutLifecycleHookOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

PutLifecycleHookOutcomeCallable AutoScalingClient::PutLifecycleHookCallable(const PutLifecycleHookRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< PutLifecycleHookOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->PutLifecycleHook(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AutoScalingClientPutLifecycleHookAsyncHelper(AutoScalingClient const * const clientThis, const PutLifecycleHookRequest& request, const PutLifecycleHookResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->PutLifecycleHook(request), context);
}

void AutoScalingClient::PutLifecycleHookAsync(const PutLifecycleHookRequest& request, const PutLifecycleHookResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ AutoScalingClientPutLifecycleHookAsyncHelper( this, request, handler, context ); } );
}

PutNotificationConfigurationOutcome AutoScalingClient::PutNotificationConfiguration(const PutNotificationConfigurationRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return PutNotificationConfigurationOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

PutNotificationConfigurationOutcomeCallable AutoScalingClient::PutNotificationConfigurationCallable(const PutNotificationConfigurationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< PutNotificationConfigurationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->PutNotificationConfiguration(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AutoScalingClientPutNotificationConfigurationAsyncHelper(AutoScalingClient const * const clientThis, const PutNotificationConfigurationRequest& request, const PutNotificationConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->PutNotificationConfiguration(request), context);
}

void AutoScalingClient::PutNotificationConfigurationAsync(const PutNotificationConfigurationRequest& request, const PutNotificationConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ AutoScalingClientPutNotificationConfigurationAsyncHelper( this, request, handler, context ); } );
}

PutScalingPolicyOutcome AutoScalingClient::PutScalingPolicy(const PutScalingPolicyRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return PutScalingPolicyOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

PutScalingPolicyOutcomeCallable AutoScalingClient::PutScalingPolicyCallable(const PutScalingPolicyRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< PutScalingPolicyOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->PutScalingPolicy(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AutoScalingClientPutScalingPolicyAsyncHelper(AutoScalingClient const * const clientThis, const PutScalingPolicyRequest& request, const PutScalingPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->PutScalingPolicy(request), context);
}

void AutoScalingClient::PutScalingPolicyAsync(const PutScalingPolicyRequest& request, const PutScalingPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ AutoScalingClientPutScalingPolicyAsyncHelper( this, request, handler, context ); } );
}

PutScheduledUpdateGroupActionOutcome AutoScalingClient::PutScheduledUpdateGroupAction(const PutScheduledUpdateGroupActionRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return PutScheduledUpdateGroupActionOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

PutScheduledUpdateGroupActionOutcomeCallable AutoScalingClient::PutScheduledUpdateGroupActionCallable(const PutScheduledUpdateGroupActionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< PutScheduledUpdateGroupActionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->PutScheduledUpdateGroupAction(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AutoScalingClientPutScheduledUpdateGroupActionAsyncHelper(AutoScalingClient const * const clientThis, const PutScheduledUpdateGroupActionRequest& request, const PutScheduledUpdateGroupActionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->PutScheduledUpdateGroupAction(request), context);
}

void AutoScalingClient::PutScheduledUpdateGroupActionAsync(const PutScheduledUpdateGroupActionRequest& request, const PutScheduledUpdateGroupActionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ AutoScalingClientPutScheduledUpdateGroupActionAsyncHelper( this, request, handler, context ); } );
}

PutWarmPoolOutcome AutoScalingClient::PutWarmPool(const PutWarmPoolRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return PutWarmPoolOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

PutWarmPoolOutcomeCallable AutoScalingClient::PutWarmPoolCallable(const PutWarmPoolRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< PutWarmPoolOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->PutWarmPool(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AutoScalingClientPutWarmPoolAsyncHelper(AutoScalingClient const * const clientThis, const PutWarmPoolRequest& request, const PutWarmPoolResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->PutWarmPool(request), context);
}

void AutoScalingClient::PutWarmPoolAsync(const PutWarmPoolRequest& request, const PutWarmPoolResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ AutoScalingClientPutWarmPoolAsyncHelper( this, request, handler, context ); } );
}

RecordLifecycleActionHeartbeatOutcome AutoScalingClient::RecordLifecycleActionHeartbeat(const RecordLifecycleActionHeartbeatRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return RecordLifecycleActionHeartbeatOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

RecordLifecycleActionHeartbeatOutcomeCallable AutoScalingClient::RecordLifecycleActionHeartbeatCallable(const RecordLifecycleActionHeartbeatRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< RecordLifecycleActionHeartbeatOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->RecordLifecycleActionHeartbeat(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AutoScalingClientRecordLifecycleActionHeartbeatAsyncHelper(AutoScalingClient const * const clientThis, const RecordLifecycleActionHeartbeatRequest& request, const RecordLifecycleActionHeartbeatResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->RecordLifecycleActionHeartbeat(request), context);
}

void AutoScalingClient::RecordLifecycleActionHeartbeatAsync(const RecordLifecycleActionHeartbeatRequest& request, const RecordLifecycleActionHeartbeatResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ AutoScalingClientRecordLifecycleActionHeartbeatAsyncHelper( this, request, handler, context ); } );
}

ResumeProcessesOutcome AutoScalingClient::ResumeProcesses(const ResumeProcessesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ResumeProcessesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

ResumeProcessesOutcomeCallable AutoScalingClient::ResumeProcessesCallable(const ResumeProcessesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ResumeProcessesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ResumeProcesses(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AutoScalingClientResumeProcessesAsyncHelper(AutoScalingClient const * const clientThis, const ResumeProcessesRequest& request, const ResumeProcessesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ResumeProcesses(request), context);
}

void AutoScalingClient::ResumeProcessesAsync(const ResumeProcessesRequest& request, const ResumeProcessesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ AutoScalingClientResumeProcessesAsyncHelper( this, request, handler, context ); } );
}

SetDesiredCapacityOutcome AutoScalingClient::SetDesiredCapacity(const SetDesiredCapacityRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return SetDesiredCapacityOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

SetDesiredCapacityOutcomeCallable AutoScalingClient::SetDesiredCapacityCallable(const SetDesiredCapacityRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< SetDesiredCapacityOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->SetDesiredCapacity(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AutoScalingClientSetDesiredCapacityAsyncHelper(AutoScalingClient const * const clientThis, const SetDesiredCapacityRequest& request, const SetDesiredCapacityResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->SetDesiredCapacity(request), context);
}

void AutoScalingClient::SetDesiredCapacityAsync(const SetDesiredCapacityRequest& request, const SetDesiredCapacityResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ AutoScalingClientSetDesiredCapacityAsyncHelper( this, request, handler, context ); } );
}

SetInstanceHealthOutcome AutoScalingClient::SetInstanceHealth(const SetInstanceHealthRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return SetInstanceHealthOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

SetInstanceHealthOutcomeCallable AutoScalingClient::SetInstanceHealthCallable(const SetInstanceHealthRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< SetInstanceHealthOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->SetInstanceHealth(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AutoScalingClientSetInstanceHealthAsyncHelper(AutoScalingClient const * const clientThis, const SetInstanceHealthRequest& request, const SetInstanceHealthResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->SetInstanceHealth(request), context);
}

void AutoScalingClient::SetInstanceHealthAsync(const SetInstanceHealthRequest& request, const SetInstanceHealthResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ AutoScalingClientSetInstanceHealthAsyncHelper( this, request, handler, context ); } );
}

SetInstanceProtectionOutcome AutoScalingClient::SetInstanceProtection(const SetInstanceProtectionRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return SetInstanceProtectionOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

SetInstanceProtectionOutcomeCallable AutoScalingClient::SetInstanceProtectionCallable(const SetInstanceProtectionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< SetInstanceProtectionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->SetInstanceProtection(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AutoScalingClientSetInstanceProtectionAsyncHelper(AutoScalingClient const * const clientThis, const SetInstanceProtectionRequest& request, const SetInstanceProtectionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->SetInstanceProtection(request), context);
}

void AutoScalingClient::SetInstanceProtectionAsync(const SetInstanceProtectionRequest& request, const SetInstanceProtectionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ AutoScalingClientSetInstanceProtectionAsyncHelper( this, request, handler, context ); } );
}

StartInstanceRefreshOutcome AutoScalingClient::StartInstanceRefresh(const StartInstanceRefreshRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return StartInstanceRefreshOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

StartInstanceRefreshOutcomeCallable AutoScalingClient::StartInstanceRefreshCallable(const StartInstanceRefreshRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< StartInstanceRefreshOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->StartInstanceRefresh(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AutoScalingClientStartInstanceRefreshAsyncHelper(AutoScalingClient const * const clientThis, const StartInstanceRefreshRequest& request, const StartInstanceRefreshResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->StartInstanceRefresh(request), context);
}

void AutoScalingClient::StartInstanceRefreshAsync(const StartInstanceRefreshRequest& request, const StartInstanceRefreshResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ AutoScalingClientStartInstanceRefreshAsyncHelper( this, request, handler, context ); } );
}

SuspendProcessesOutcome AutoScalingClient::SuspendProcesses(const SuspendProcessesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return SuspendProcessesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

SuspendProcessesOutcomeCallable AutoScalingClient::SuspendProcessesCallable(const SuspendProcessesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< SuspendProcessesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->SuspendProcesses(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AutoScalingClientSuspendProcessesAsyncHelper(AutoScalingClient const * const clientThis, const SuspendProcessesRequest& request, const SuspendProcessesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->SuspendProcesses(request), context);
}

void AutoScalingClient::SuspendProcessesAsync(const SuspendProcessesRequest& request, const SuspendProcessesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ AutoScalingClientSuspendProcessesAsyncHelper( this, request, handler, context ); } );
}

TerminateInstanceInAutoScalingGroupOutcome AutoScalingClient::TerminateInstanceInAutoScalingGroup(const TerminateInstanceInAutoScalingGroupRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return TerminateInstanceInAutoScalingGroupOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

TerminateInstanceInAutoScalingGroupOutcomeCallable AutoScalingClient::TerminateInstanceInAutoScalingGroupCallable(const TerminateInstanceInAutoScalingGroupRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< TerminateInstanceInAutoScalingGroupOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->TerminateInstanceInAutoScalingGroup(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AutoScalingClientTerminateInstanceInAutoScalingGroupAsyncHelper(AutoScalingClient const * const clientThis, const TerminateInstanceInAutoScalingGroupRequest& request, const TerminateInstanceInAutoScalingGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->TerminateInstanceInAutoScalingGroup(request), context);
}

void AutoScalingClient::TerminateInstanceInAutoScalingGroupAsync(const TerminateInstanceInAutoScalingGroupRequest& request, const TerminateInstanceInAutoScalingGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ AutoScalingClientTerminateInstanceInAutoScalingGroupAsyncHelper( this, request, handler, context ); } );
}

UpdateAutoScalingGroupOutcome AutoScalingClient::UpdateAutoScalingGroup(const UpdateAutoScalingGroupRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return UpdateAutoScalingGroupOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

UpdateAutoScalingGroupOutcomeCallable AutoScalingClient::UpdateAutoScalingGroupCallable(const UpdateAutoScalingGroupRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateAutoScalingGroupOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateAutoScalingGroup(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AutoScalingClientUpdateAutoScalingGroupAsyncHelper(AutoScalingClient const * const clientThis, const UpdateAutoScalingGroupRequest& request, const UpdateAutoScalingGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdateAutoScalingGroup(request), context);
}

void AutoScalingClient::UpdateAutoScalingGroupAsync(const UpdateAutoScalingGroupRequest& request, const UpdateAutoScalingGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ AutoScalingClientUpdateAutoScalingGroupAsyncHelper( this, request, handler, context ); } );
}

