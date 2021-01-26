/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/application-autoscaling/ApplicationAutoScaling_EXPORTS.h>
#include <aws/application-autoscaling/ApplicationAutoScalingErrors.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/application-autoscaling/model/DeleteScalingPolicyResult.h>
#include <aws/application-autoscaling/model/DeleteScheduledActionResult.h>
#include <aws/application-autoscaling/model/DeregisterScalableTargetResult.h>
#include <aws/application-autoscaling/model/DescribeScalableTargetsResult.h>
#include <aws/application-autoscaling/model/DescribeScalingActivitiesResult.h>
#include <aws/application-autoscaling/model/DescribeScalingPoliciesResult.h>
#include <aws/application-autoscaling/model/DescribeScheduledActionsResult.h>
#include <aws/application-autoscaling/model/PutScalingPolicyResult.h>
#include <aws/application-autoscaling/model/PutScheduledActionResult.h>
#include <aws/application-autoscaling/model/RegisterScalableTargetResult.h>
#include <aws/core/client/AsyncCallerContext.h>
#include <aws/core/http/HttpTypes.h>
#include <future>
#include <functional>

namespace Aws
{

namespace Http
{
  class HttpClient;
  class HttpClientFactory;
} // namespace Http

namespace Utils
{
  template< typename R, typename E> class Outcome;
namespace Threading
{
  class Executor;
} // namespace Threading
} // namespace Utils

namespace Auth
{
  class AWSCredentials;
  class AWSCredentialsProvider;
} // namespace Auth

namespace Client
{
  class RetryStrategy;
} // namespace Client

namespace ApplicationAutoScaling
{

namespace Model
{
        class DeleteScalingPolicyRequest;
        class DeleteScheduledActionRequest;
        class DeregisterScalableTargetRequest;
        class DescribeScalableTargetsRequest;
        class DescribeScalingActivitiesRequest;
        class DescribeScalingPoliciesRequest;
        class DescribeScheduledActionsRequest;
        class PutScalingPolicyRequest;
        class PutScheduledActionRequest;
        class RegisterScalableTargetRequest;

        typedef Aws::Utils::Outcome<DeleteScalingPolicyResult, ApplicationAutoScalingError> DeleteScalingPolicyOutcome;
        typedef Aws::Utils::Outcome<DeleteScheduledActionResult, ApplicationAutoScalingError> DeleteScheduledActionOutcome;
        typedef Aws::Utils::Outcome<DeregisterScalableTargetResult, ApplicationAutoScalingError> DeregisterScalableTargetOutcome;
        typedef Aws::Utils::Outcome<DescribeScalableTargetsResult, ApplicationAutoScalingError> DescribeScalableTargetsOutcome;
        typedef Aws::Utils::Outcome<DescribeScalingActivitiesResult, ApplicationAutoScalingError> DescribeScalingActivitiesOutcome;
        typedef Aws::Utils::Outcome<DescribeScalingPoliciesResult, ApplicationAutoScalingError> DescribeScalingPoliciesOutcome;
        typedef Aws::Utils::Outcome<DescribeScheduledActionsResult, ApplicationAutoScalingError> DescribeScheduledActionsOutcome;
        typedef Aws::Utils::Outcome<PutScalingPolicyResult, ApplicationAutoScalingError> PutScalingPolicyOutcome;
        typedef Aws::Utils::Outcome<PutScheduledActionResult, ApplicationAutoScalingError> PutScheduledActionOutcome;
        typedef Aws::Utils::Outcome<RegisterScalableTargetResult, ApplicationAutoScalingError> RegisterScalableTargetOutcome;

        typedef std::future<DeleteScalingPolicyOutcome> DeleteScalingPolicyOutcomeCallable;
        typedef std::future<DeleteScheduledActionOutcome> DeleteScheduledActionOutcomeCallable;
        typedef std::future<DeregisterScalableTargetOutcome> DeregisterScalableTargetOutcomeCallable;
        typedef std::future<DescribeScalableTargetsOutcome> DescribeScalableTargetsOutcomeCallable;
        typedef std::future<DescribeScalingActivitiesOutcome> DescribeScalingActivitiesOutcomeCallable;
        typedef std::future<DescribeScalingPoliciesOutcome> DescribeScalingPoliciesOutcomeCallable;
        typedef std::future<DescribeScheduledActionsOutcome> DescribeScheduledActionsOutcomeCallable;
        typedef std::future<PutScalingPolicyOutcome> PutScalingPolicyOutcomeCallable;
        typedef std::future<PutScheduledActionOutcome> PutScheduledActionOutcomeCallable;
        typedef std::future<RegisterScalableTargetOutcome> RegisterScalableTargetOutcomeCallable;
} // namespace Model

  class ApplicationAutoScalingClient;

    typedef std::function<void(const ApplicationAutoScalingClient*, const Model::DeleteScalingPolicyRequest&, const Model::DeleteScalingPolicyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteScalingPolicyResponseReceivedHandler;
    typedef std::function<void(const ApplicationAutoScalingClient*, const Model::DeleteScheduledActionRequest&, const Model::DeleteScheduledActionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteScheduledActionResponseReceivedHandler;
    typedef std::function<void(const ApplicationAutoScalingClient*, const Model::DeregisterScalableTargetRequest&, const Model::DeregisterScalableTargetOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeregisterScalableTargetResponseReceivedHandler;
    typedef std::function<void(const ApplicationAutoScalingClient*, const Model::DescribeScalableTargetsRequest&, const Model::DescribeScalableTargetsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeScalableTargetsResponseReceivedHandler;
    typedef std::function<void(const ApplicationAutoScalingClient*, const Model::DescribeScalingActivitiesRequest&, const Model::DescribeScalingActivitiesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeScalingActivitiesResponseReceivedHandler;
    typedef std::function<void(const ApplicationAutoScalingClient*, const Model::DescribeScalingPoliciesRequest&, const Model::DescribeScalingPoliciesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeScalingPoliciesResponseReceivedHandler;
    typedef std::function<void(const ApplicationAutoScalingClient*, const Model::DescribeScheduledActionsRequest&, const Model::DescribeScheduledActionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeScheduledActionsResponseReceivedHandler;
    typedef std::function<void(const ApplicationAutoScalingClient*, const Model::PutScalingPolicyRequest&, const Model::PutScalingPolicyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutScalingPolicyResponseReceivedHandler;
    typedef std::function<void(const ApplicationAutoScalingClient*, const Model::PutScheduledActionRequest&, const Model::PutScheduledActionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutScheduledActionResponseReceivedHandler;
    typedef std::function<void(const ApplicationAutoScalingClient*, const Model::RegisterScalableTargetRequest&, const Model::RegisterScalableTargetOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > RegisterScalableTargetResponseReceivedHandler;

  /**
   * <p>With Application Auto Scaling, you can configure automatic scaling for the
   * following resources:</p> <ul> <li> <p>Amazon ECS services</p> </li> <li>
   * <p>Amazon EC2 Spot Fleet requests</p> </li> <li> <p>Amazon EMR clusters</p>
   * </li> <li> <p>Amazon AppStream 2.0 fleets</p> </li> <li> <p>Amazon DynamoDB
   * tables and global secondary indexes throughput capacity</p> </li> <li> <p>Amazon
   * Aurora Replicas</p> </li> <li> <p>Amazon SageMaker endpoint variants</p> </li>
   * <li> <p>Custom resources provided by your own applications or services</p> </li>
   * <li> <p>Amazon Comprehend document classification and entity recognizer
   * endpoints</p> </li> <li> <p>AWS Lambda function provisioned concurrency</p>
   * </li> <li> <p>Amazon Keyspaces (for Apache Cassandra) tables</p> </li> <li>
   * <p>Amazon Managed Streaming for Apache Kafka cluster storage</p> </li> </ul> <p>
   * <b>API Summary</b> </p> <p>The Application Auto Scaling service API includes
   * three key sets of actions: </p> <ul> <li> <p>Register and manage scalable
   * targets - Register AWS or custom resources as scalable targets (a resource that
   * Application Auto Scaling can scale), set minimum and maximum capacity limits,
   * and retrieve information on existing scalable targets.</p> </li> <li>
   * <p>Configure and manage automatic scaling - Define scaling policies to
   * dynamically scale your resources in response to CloudWatch alarms, schedule
   * one-time or recurring scaling actions, and retrieve your recent scaling activity
   * history.</p> </li> <li> <p>Suspend and resume scaling - Temporarily suspend and
   * later resume automatic scaling by calling the <a
   * href="https://docs.aws.amazon.com/autoscaling/application/APIReference/API_RegisterScalableTarget.html">RegisterScalableTarget</a>
   * API action for any Application Auto Scaling scalable target. You can suspend and
   * resume (individually or in combination) scale-out activities that are triggered
   * by a scaling policy, scale-in activities that are triggered by a scaling policy,
   * and scheduled scaling.</p> </li> </ul> <p>To learn more about Application Auto
   * Scaling, including information about granting IAM users required permissions for
   * Application Auto Scaling actions, see the <a
   * href="https://docs.aws.amazon.com/autoscaling/application/userguide/what-is-application-auto-scaling.html">Application
   * Auto Scaling User Guide</a>.</p>
   */
  class AWS_APPLICATIONAUTOSCALING_API ApplicationAutoScalingClient : public Aws::Client::AWSJsonClient
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        ApplicationAutoScalingClient(const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        ApplicationAutoScalingClient(const Aws::Auth::AWSCredentials& credentials, const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        ApplicationAutoScalingClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
            const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

        virtual ~ApplicationAutoScalingClient();


        /**
         * <p>Deletes the specified scaling policy for an Application Auto Scaling scalable
         * target.</p> <p>Deleting a step scaling policy deletes the underlying alarm
         * action, but does not delete the CloudWatch alarm associated with the scaling
         * policy, even if it no longer has an associated action.</p> <p>For more
         * information, see <a
         * href="https://docs.aws.amazon.com/autoscaling/application/userguide/application-auto-scaling-step-scaling-policies.html#delete-step-scaling-policy">Delete
         * a Step Scaling Policy</a> and <a
         * href="https://docs.aws.amazon.com/autoscaling/application/userguide/application-auto-scaling-target-tracking.html#delete-target-tracking-policy">Delete
         * a Target Tracking Scaling Policy</a> in the <i>Application Auto Scaling User
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/application-autoscaling-2016-02-06/DeleteScalingPolicy">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteScalingPolicyOutcome DeleteScalingPolicy(const Model::DeleteScalingPolicyRequest& request) const;

        /**
         * <p>Deletes the specified scaling policy for an Application Auto Scaling scalable
         * target.</p> <p>Deleting a step scaling policy deletes the underlying alarm
         * action, but does not delete the CloudWatch alarm associated with the scaling
         * policy, even if it no longer has an associated action.</p> <p>For more
         * information, see <a
         * href="https://docs.aws.amazon.com/autoscaling/application/userguide/application-auto-scaling-step-scaling-policies.html#delete-step-scaling-policy">Delete
         * a Step Scaling Policy</a> and <a
         * href="https://docs.aws.amazon.com/autoscaling/application/userguide/application-auto-scaling-target-tracking.html#delete-target-tracking-policy">Delete
         * a Target Tracking Scaling Policy</a> in the <i>Application Auto Scaling User
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/application-autoscaling-2016-02-06/DeleteScalingPolicy">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteScalingPolicyOutcomeCallable DeleteScalingPolicyCallable(const Model::DeleteScalingPolicyRequest& request) const;

        /**
         * <p>Deletes the specified scaling policy for an Application Auto Scaling scalable
         * target.</p> <p>Deleting a step scaling policy deletes the underlying alarm
         * action, but does not delete the CloudWatch alarm associated with the scaling
         * policy, even if it no longer has an associated action.</p> <p>For more
         * information, see <a
         * href="https://docs.aws.amazon.com/autoscaling/application/userguide/application-auto-scaling-step-scaling-policies.html#delete-step-scaling-policy">Delete
         * a Step Scaling Policy</a> and <a
         * href="https://docs.aws.amazon.com/autoscaling/application/userguide/application-auto-scaling-target-tracking.html#delete-target-tracking-policy">Delete
         * a Target Tracking Scaling Policy</a> in the <i>Application Auto Scaling User
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/application-autoscaling-2016-02-06/DeleteScalingPolicy">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteScalingPolicyAsync(const Model::DeleteScalingPolicyRequest& request, const DeleteScalingPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes the specified scheduled action for an Application Auto Scaling
         * scalable target.</p> <p>For more information, see <a
         * href="https://docs.aws.amazon.com/autoscaling/application/userguide/application-auto-scaling-scheduled-scaling.html#delete-scheduled-action">Delete
         * a Scheduled Action</a> in the <i>Application Auto Scaling User
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/application-autoscaling-2016-02-06/DeleteScheduledAction">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteScheduledActionOutcome DeleteScheduledAction(const Model::DeleteScheduledActionRequest& request) const;

        /**
         * <p>Deletes the specified scheduled action for an Application Auto Scaling
         * scalable target.</p> <p>For more information, see <a
         * href="https://docs.aws.amazon.com/autoscaling/application/userguide/application-auto-scaling-scheduled-scaling.html#delete-scheduled-action">Delete
         * a Scheduled Action</a> in the <i>Application Auto Scaling User
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/application-autoscaling-2016-02-06/DeleteScheduledAction">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteScheduledActionOutcomeCallable DeleteScheduledActionCallable(const Model::DeleteScheduledActionRequest& request) const;

        /**
         * <p>Deletes the specified scheduled action for an Application Auto Scaling
         * scalable target.</p> <p>For more information, see <a
         * href="https://docs.aws.amazon.com/autoscaling/application/userguide/application-auto-scaling-scheduled-scaling.html#delete-scheduled-action">Delete
         * a Scheduled Action</a> in the <i>Application Auto Scaling User
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/application-autoscaling-2016-02-06/DeleteScheduledAction">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteScheduledActionAsync(const Model::DeleteScheduledActionRequest& request, const DeleteScheduledActionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deregisters an Application Auto Scaling scalable target when you have
         * finished using it. To see which resources have been registered, use <a
         * href="https://docs.aws.amazon.com/autoscaling/application/APIReference/API_DescribeScalableTargets.html">DescribeScalableTargets</a>.
         * </p>  <p>Deregistering a scalable target deletes the scaling policies and
         * the scheduled actions that are associated with it.</p> <p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/application-autoscaling-2016-02-06/DeregisterScalableTarget">AWS
         * API Reference</a></p>
         */
        virtual Model::DeregisterScalableTargetOutcome DeregisterScalableTarget(const Model::DeregisterScalableTargetRequest& request) const;

        /**
         * <p>Deregisters an Application Auto Scaling scalable target when you have
         * finished using it. To see which resources have been registered, use <a
         * href="https://docs.aws.amazon.com/autoscaling/application/APIReference/API_DescribeScalableTargets.html">DescribeScalableTargets</a>.
         * </p>  <p>Deregistering a scalable target deletes the scaling policies and
         * the scheduled actions that are associated with it.</p> <p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/application-autoscaling-2016-02-06/DeregisterScalableTarget">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeregisterScalableTargetOutcomeCallable DeregisterScalableTargetCallable(const Model::DeregisterScalableTargetRequest& request) const;

        /**
         * <p>Deregisters an Application Auto Scaling scalable target when you have
         * finished using it. To see which resources have been registered, use <a
         * href="https://docs.aws.amazon.com/autoscaling/application/APIReference/API_DescribeScalableTargets.html">DescribeScalableTargets</a>.
         * </p>  <p>Deregistering a scalable target deletes the scaling policies and
         * the scheduled actions that are associated with it.</p> <p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/application-autoscaling-2016-02-06/DeregisterScalableTarget">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeregisterScalableTargetAsync(const Model::DeregisterScalableTargetRequest& request, const DeregisterScalableTargetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets information about the scalable targets in the specified namespace.</p>
         * <p>You can filter the results using <code>ResourceIds</code> and
         * <code>ScalableDimension</code>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/application-autoscaling-2016-02-06/DescribeScalableTargets">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeScalableTargetsOutcome DescribeScalableTargets(const Model::DescribeScalableTargetsRequest& request) const;

        /**
         * <p>Gets information about the scalable targets in the specified namespace.</p>
         * <p>You can filter the results using <code>ResourceIds</code> and
         * <code>ScalableDimension</code>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/application-autoscaling-2016-02-06/DescribeScalableTargets">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeScalableTargetsOutcomeCallable DescribeScalableTargetsCallable(const Model::DescribeScalableTargetsRequest& request) const;

        /**
         * <p>Gets information about the scalable targets in the specified namespace.</p>
         * <p>You can filter the results using <code>ResourceIds</code> and
         * <code>ScalableDimension</code>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/application-autoscaling-2016-02-06/DescribeScalableTargets">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeScalableTargetsAsync(const Model::DescribeScalableTargetsRequest& request, const DescribeScalableTargetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Provides descriptive information about the scaling activities in the
         * specified namespace from the previous six weeks.</p> <p>You can filter the
         * results using <code>ResourceId</code> and
         * <code>ScalableDimension</code>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/application-autoscaling-2016-02-06/DescribeScalingActivities">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeScalingActivitiesOutcome DescribeScalingActivities(const Model::DescribeScalingActivitiesRequest& request) const;

        /**
         * <p>Provides descriptive information about the scaling activities in the
         * specified namespace from the previous six weeks.</p> <p>You can filter the
         * results using <code>ResourceId</code> and
         * <code>ScalableDimension</code>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/application-autoscaling-2016-02-06/DescribeScalingActivities">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeScalingActivitiesOutcomeCallable DescribeScalingActivitiesCallable(const Model::DescribeScalingActivitiesRequest& request) const;

        /**
         * <p>Provides descriptive information about the scaling activities in the
         * specified namespace from the previous six weeks.</p> <p>You can filter the
         * results using <code>ResourceId</code> and
         * <code>ScalableDimension</code>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/application-autoscaling-2016-02-06/DescribeScalingActivities">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeScalingActivitiesAsync(const Model::DescribeScalingActivitiesRequest& request, const DescribeScalingActivitiesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes the Application Auto Scaling scaling policies for the specified
         * service namespace.</p> <p>You can filter the results using
         * <code>ResourceId</code>, <code>ScalableDimension</code>, and
         * <code>PolicyNames</code>.</p> <p>For more information, see <a
         * href="https://docs.aws.amazon.com/autoscaling/application/userguide/application-auto-scaling-target-tracking.html">Target
         * Tracking Scaling Policies</a> and <a
         * href="https://docs.aws.amazon.com/autoscaling/application/userguide/application-auto-scaling-step-scaling-policies.html">Step
         * Scaling Policies</a> in the <i>Application Auto Scaling User
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/application-autoscaling-2016-02-06/DescribeScalingPolicies">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeScalingPoliciesOutcome DescribeScalingPolicies(const Model::DescribeScalingPoliciesRequest& request) const;

        /**
         * <p>Describes the Application Auto Scaling scaling policies for the specified
         * service namespace.</p> <p>You can filter the results using
         * <code>ResourceId</code>, <code>ScalableDimension</code>, and
         * <code>PolicyNames</code>.</p> <p>For more information, see <a
         * href="https://docs.aws.amazon.com/autoscaling/application/userguide/application-auto-scaling-target-tracking.html">Target
         * Tracking Scaling Policies</a> and <a
         * href="https://docs.aws.amazon.com/autoscaling/application/userguide/application-auto-scaling-step-scaling-policies.html">Step
         * Scaling Policies</a> in the <i>Application Auto Scaling User
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/application-autoscaling-2016-02-06/DescribeScalingPolicies">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeScalingPoliciesOutcomeCallable DescribeScalingPoliciesCallable(const Model::DescribeScalingPoliciesRequest& request) const;

        /**
         * <p>Describes the Application Auto Scaling scaling policies for the specified
         * service namespace.</p> <p>You can filter the results using
         * <code>ResourceId</code>, <code>ScalableDimension</code>, and
         * <code>PolicyNames</code>.</p> <p>For more information, see <a
         * href="https://docs.aws.amazon.com/autoscaling/application/userguide/application-auto-scaling-target-tracking.html">Target
         * Tracking Scaling Policies</a> and <a
         * href="https://docs.aws.amazon.com/autoscaling/application/userguide/application-auto-scaling-step-scaling-policies.html">Step
         * Scaling Policies</a> in the <i>Application Auto Scaling User
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/application-autoscaling-2016-02-06/DescribeScalingPolicies">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeScalingPoliciesAsync(const Model::DescribeScalingPoliciesRequest& request, const DescribeScalingPoliciesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes the Application Auto Scaling scheduled actions for the specified
         * service namespace.</p> <p>You can filter the results using the
         * <code>ResourceId</code>, <code>ScalableDimension</code>, and
         * <code>ScheduledActionNames</code> parameters.</p> <p>For more information, see
         * <a
         * href="https://docs.aws.amazon.com/autoscaling/application/userguide/application-auto-scaling-scheduled-scaling.html">Scheduled
         * Scaling</a> in the <i>Application Auto Scaling User Guide</i>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/application-autoscaling-2016-02-06/DescribeScheduledActions">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeScheduledActionsOutcome DescribeScheduledActions(const Model::DescribeScheduledActionsRequest& request) const;

        /**
         * <p>Describes the Application Auto Scaling scheduled actions for the specified
         * service namespace.</p> <p>You can filter the results using the
         * <code>ResourceId</code>, <code>ScalableDimension</code>, and
         * <code>ScheduledActionNames</code> parameters.</p> <p>For more information, see
         * <a
         * href="https://docs.aws.amazon.com/autoscaling/application/userguide/application-auto-scaling-scheduled-scaling.html">Scheduled
         * Scaling</a> in the <i>Application Auto Scaling User Guide</i>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/application-autoscaling-2016-02-06/DescribeScheduledActions">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeScheduledActionsOutcomeCallable DescribeScheduledActionsCallable(const Model::DescribeScheduledActionsRequest& request) const;

        /**
         * <p>Describes the Application Auto Scaling scheduled actions for the specified
         * service namespace.</p> <p>You can filter the results using the
         * <code>ResourceId</code>, <code>ScalableDimension</code>, and
         * <code>ScheduledActionNames</code> parameters.</p> <p>For more information, see
         * <a
         * href="https://docs.aws.amazon.com/autoscaling/application/userguide/application-auto-scaling-scheduled-scaling.html">Scheduled
         * Scaling</a> in the <i>Application Auto Scaling User Guide</i>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/application-autoscaling-2016-02-06/DescribeScheduledActions">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeScheduledActionsAsync(const Model::DescribeScheduledActionsRequest& request, const DescribeScheduledActionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates or updates a scaling policy for an Application Auto Scaling scalable
         * target.</p> <p>Each scalable target is identified by a service namespace,
         * resource ID, and scalable dimension. A scaling policy applies to the scalable
         * target identified by those three attributes. You cannot create a scaling policy
         * until you have registered the resource as a scalable target.</p> <p>Multiple
         * scaling policies can be in force at the same time for the same scalable target.
         * You can have one or more target tracking scaling policies, one or more step
         * scaling policies, or both. However, there is a chance that multiple policies
         * could conflict, instructing the scalable target to scale out or in at the same
         * time. Application Auto Scaling gives precedence to the policy that provides the
         * largest capacity for both scale out and scale in. For example, if one policy
         * increases capacity by 3, another policy increases capacity by 200 percent, and
         * the current capacity is 10, Application Auto Scaling uses the policy with the
         * highest calculated capacity (200% of 10 = 20) and scales out to 30. </p> <p>We
         * recommend caution, however, when using target tracking scaling policies with
         * step scaling policies because conflicts between these policies can cause
         * undesirable behavior. For example, if the step scaling policy initiates a
         * scale-in activity before the target tracking policy is ready to scale in, the
         * scale-in activity will not be blocked. After the scale-in activity completes,
         * the target tracking policy could instruct the scalable target to scale out
         * again. </p> <p>For more information, see <a
         * href="https://docs.aws.amazon.com/autoscaling/application/userguide/application-auto-scaling-target-tracking.html">Target
         * Tracking Scaling Policies</a> and <a
         * href="https://docs.aws.amazon.com/autoscaling/application/userguide/application-auto-scaling-step-scaling-policies.html">Step
         * Scaling Policies</a> in the <i>Application Auto Scaling User Guide</i>.</p>
         *  <p>If a scalable target is deregistered, the scalable target is no longer
         * available to execute scaling policies. Any scaling policies that were specified
         * for the scalable target are deleted.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/application-autoscaling-2016-02-06/PutScalingPolicy">AWS
         * API Reference</a></p>
         */
        virtual Model::PutScalingPolicyOutcome PutScalingPolicy(const Model::PutScalingPolicyRequest& request) const;

        /**
         * <p>Creates or updates a scaling policy for an Application Auto Scaling scalable
         * target.</p> <p>Each scalable target is identified by a service namespace,
         * resource ID, and scalable dimension. A scaling policy applies to the scalable
         * target identified by those three attributes. You cannot create a scaling policy
         * until you have registered the resource as a scalable target.</p> <p>Multiple
         * scaling policies can be in force at the same time for the same scalable target.
         * You can have one or more target tracking scaling policies, one or more step
         * scaling policies, or both. However, there is a chance that multiple policies
         * could conflict, instructing the scalable target to scale out or in at the same
         * time. Application Auto Scaling gives precedence to the policy that provides the
         * largest capacity for both scale out and scale in. For example, if one policy
         * increases capacity by 3, another policy increases capacity by 200 percent, and
         * the current capacity is 10, Application Auto Scaling uses the policy with the
         * highest calculated capacity (200% of 10 = 20) and scales out to 30. </p> <p>We
         * recommend caution, however, when using target tracking scaling policies with
         * step scaling policies because conflicts between these policies can cause
         * undesirable behavior. For example, if the step scaling policy initiates a
         * scale-in activity before the target tracking policy is ready to scale in, the
         * scale-in activity will not be blocked. After the scale-in activity completes,
         * the target tracking policy could instruct the scalable target to scale out
         * again. </p> <p>For more information, see <a
         * href="https://docs.aws.amazon.com/autoscaling/application/userguide/application-auto-scaling-target-tracking.html">Target
         * Tracking Scaling Policies</a> and <a
         * href="https://docs.aws.amazon.com/autoscaling/application/userguide/application-auto-scaling-step-scaling-policies.html">Step
         * Scaling Policies</a> in the <i>Application Auto Scaling User Guide</i>.</p>
         *  <p>If a scalable target is deregistered, the scalable target is no longer
         * available to execute scaling policies. Any scaling policies that were specified
         * for the scalable target are deleted.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/application-autoscaling-2016-02-06/PutScalingPolicy">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::PutScalingPolicyOutcomeCallable PutScalingPolicyCallable(const Model::PutScalingPolicyRequest& request) const;

        /**
         * <p>Creates or updates a scaling policy for an Application Auto Scaling scalable
         * target.</p> <p>Each scalable target is identified by a service namespace,
         * resource ID, and scalable dimension. A scaling policy applies to the scalable
         * target identified by those three attributes. You cannot create a scaling policy
         * until you have registered the resource as a scalable target.</p> <p>Multiple
         * scaling policies can be in force at the same time for the same scalable target.
         * You can have one or more target tracking scaling policies, one or more step
         * scaling policies, or both. However, there is a chance that multiple policies
         * could conflict, instructing the scalable target to scale out or in at the same
         * time. Application Auto Scaling gives precedence to the policy that provides the
         * largest capacity for both scale out and scale in. For example, if one policy
         * increases capacity by 3, another policy increases capacity by 200 percent, and
         * the current capacity is 10, Application Auto Scaling uses the policy with the
         * highest calculated capacity (200% of 10 = 20) and scales out to 30. </p> <p>We
         * recommend caution, however, when using target tracking scaling policies with
         * step scaling policies because conflicts between these policies can cause
         * undesirable behavior. For example, if the step scaling policy initiates a
         * scale-in activity before the target tracking policy is ready to scale in, the
         * scale-in activity will not be blocked. After the scale-in activity completes,
         * the target tracking policy could instruct the scalable target to scale out
         * again. </p> <p>For more information, see <a
         * href="https://docs.aws.amazon.com/autoscaling/application/userguide/application-auto-scaling-target-tracking.html">Target
         * Tracking Scaling Policies</a> and <a
         * href="https://docs.aws.amazon.com/autoscaling/application/userguide/application-auto-scaling-step-scaling-policies.html">Step
         * Scaling Policies</a> in the <i>Application Auto Scaling User Guide</i>.</p>
         *  <p>If a scalable target is deregistered, the scalable target is no longer
         * available to execute scaling policies. Any scaling policies that were specified
         * for the scalable target are deleted.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/application-autoscaling-2016-02-06/PutScalingPolicy">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void PutScalingPolicyAsync(const Model::PutScalingPolicyRequest& request, const PutScalingPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates or updates a scheduled action for an Application Auto Scaling
         * scalable target.</p> <p>Each scalable target is identified by a service
         * namespace, resource ID, and scalable dimension. A scheduled action applies to
         * the scalable target identified by those three attributes. You cannot create a
         * scheduled action until you have registered the resource as a scalable
         * target.</p> <p>When start and end times are specified with a recurring schedule
         * using a cron expression or rates, they form the boundaries of when the recurring
         * action starts and stops.</p> <p>To update a scheduled action, specify the
         * parameters that you want to change. If you don't specify start and end times,
         * the old values are deleted.</p> <p>For more information, see <a
         * href="https://docs.aws.amazon.com/autoscaling/application/userguide/application-auto-scaling-scheduled-scaling.html">Scheduled
         * Scaling</a> in the <i>Application Auto Scaling User Guide</i>.</p>  <p>If
         * a scalable target is deregistered, the scalable target is no longer available to
         * run scheduled actions. Any scheduled actions that were specified for the
         * scalable target are deleted.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/application-autoscaling-2016-02-06/PutScheduledAction">AWS
         * API Reference</a></p>
         */
        virtual Model::PutScheduledActionOutcome PutScheduledAction(const Model::PutScheduledActionRequest& request) const;

        /**
         * <p>Creates or updates a scheduled action for an Application Auto Scaling
         * scalable target.</p> <p>Each scalable target is identified by a service
         * namespace, resource ID, and scalable dimension. A scheduled action applies to
         * the scalable target identified by those three attributes. You cannot create a
         * scheduled action until you have registered the resource as a scalable
         * target.</p> <p>When start and end times are specified with a recurring schedule
         * using a cron expression or rates, they form the boundaries of when the recurring
         * action starts and stops.</p> <p>To update a scheduled action, specify the
         * parameters that you want to change. If you don't specify start and end times,
         * the old values are deleted.</p> <p>For more information, see <a
         * href="https://docs.aws.amazon.com/autoscaling/application/userguide/application-auto-scaling-scheduled-scaling.html">Scheduled
         * Scaling</a> in the <i>Application Auto Scaling User Guide</i>.</p>  <p>If
         * a scalable target is deregistered, the scalable target is no longer available to
         * run scheduled actions. Any scheduled actions that were specified for the
         * scalable target are deleted.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/application-autoscaling-2016-02-06/PutScheduledAction">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::PutScheduledActionOutcomeCallable PutScheduledActionCallable(const Model::PutScheduledActionRequest& request) const;

        /**
         * <p>Creates or updates a scheduled action for an Application Auto Scaling
         * scalable target.</p> <p>Each scalable target is identified by a service
         * namespace, resource ID, and scalable dimension. A scheduled action applies to
         * the scalable target identified by those three attributes. You cannot create a
         * scheduled action until you have registered the resource as a scalable
         * target.</p> <p>When start and end times are specified with a recurring schedule
         * using a cron expression or rates, they form the boundaries of when the recurring
         * action starts and stops.</p> <p>To update a scheduled action, specify the
         * parameters that you want to change. If you don't specify start and end times,
         * the old values are deleted.</p> <p>For more information, see <a
         * href="https://docs.aws.amazon.com/autoscaling/application/userguide/application-auto-scaling-scheduled-scaling.html">Scheduled
         * Scaling</a> in the <i>Application Auto Scaling User Guide</i>.</p>  <p>If
         * a scalable target is deregistered, the scalable target is no longer available to
         * run scheduled actions. Any scheduled actions that were specified for the
         * scalable target are deleted.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/application-autoscaling-2016-02-06/PutScheduledAction">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void PutScheduledActionAsync(const Model::PutScheduledActionRequest& request, const PutScheduledActionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Registers or updates a scalable target. </p> <p>A scalable target is a
         * resource that Application Auto Scaling can scale out and scale in. Scalable
         * targets are uniquely identified by the combination of resource ID, scalable
         * dimension, and namespace. </p> <p>When you register a new scalable target, you
         * must specify values for minimum and maximum capacity. Current capacity will be
         * adjusted within the specified range when scaling starts. Application Auto
         * Scaling scaling policies will not scale capacity to values that are outside of
         * this range.</p> <p>After you register a scalable target, you do not need to
         * register it again to use other Application Auto Scaling operations. To see which
         * resources have been registered, use <a
         * href="https://docs.aws.amazon.com/autoscaling/application/APIReference/API_DescribeScalableTargets.html">DescribeScalableTargets</a>.
         * You can also view the scaling policies for a service namespace by using <a
         * href="https://docs.aws.amazon.com/autoscaling/application/APIReference/API_DescribeScalableTargets.html">DescribeScalableTargets</a>.
         * If you no longer need a scalable target, you can deregister it by using <a
         * href="https://docs.aws.amazon.com/autoscaling/application/APIReference/API_DeregisterScalableTarget.html">DeregisterScalableTarget</a>.</p>
         * <p>To update a scalable target, specify the parameters that you want to change.
         * Include the parameters that identify the scalable target: resource ID, scalable
         * dimension, and namespace. Any parameters that you don't specify are not changed
         * by this update request. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/application-autoscaling-2016-02-06/RegisterScalableTarget">AWS
         * API Reference</a></p>
         */
        virtual Model::RegisterScalableTargetOutcome RegisterScalableTarget(const Model::RegisterScalableTargetRequest& request) const;

        /**
         * <p>Registers or updates a scalable target. </p> <p>A scalable target is a
         * resource that Application Auto Scaling can scale out and scale in. Scalable
         * targets are uniquely identified by the combination of resource ID, scalable
         * dimension, and namespace. </p> <p>When you register a new scalable target, you
         * must specify values for minimum and maximum capacity. Current capacity will be
         * adjusted within the specified range when scaling starts. Application Auto
         * Scaling scaling policies will not scale capacity to values that are outside of
         * this range.</p> <p>After you register a scalable target, you do not need to
         * register it again to use other Application Auto Scaling operations. To see which
         * resources have been registered, use <a
         * href="https://docs.aws.amazon.com/autoscaling/application/APIReference/API_DescribeScalableTargets.html">DescribeScalableTargets</a>.
         * You can also view the scaling policies for a service namespace by using <a
         * href="https://docs.aws.amazon.com/autoscaling/application/APIReference/API_DescribeScalableTargets.html">DescribeScalableTargets</a>.
         * If you no longer need a scalable target, you can deregister it by using <a
         * href="https://docs.aws.amazon.com/autoscaling/application/APIReference/API_DeregisterScalableTarget.html">DeregisterScalableTarget</a>.</p>
         * <p>To update a scalable target, specify the parameters that you want to change.
         * Include the parameters that identify the scalable target: resource ID, scalable
         * dimension, and namespace. Any parameters that you don't specify are not changed
         * by this update request. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/application-autoscaling-2016-02-06/RegisterScalableTarget">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::RegisterScalableTargetOutcomeCallable RegisterScalableTargetCallable(const Model::RegisterScalableTargetRequest& request) const;

        /**
         * <p>Registers or updates a scalable target. </p> <p>A scalable target is a
         * resource that Application Auto Scaling can scale out and scale in. Scalable
         * targets are uniquely identified by the combination of resource ID, scalable
         * dimension, and namespace. </p> <p>When you register a new scalable target, you
         * must specify values for minimum and maximum capacity. Current capacity will be
         * adjusted within the specified range when scaling starts. Application Auto
         * Scaling scaling policies will not scale capacity to values that are outside of
         * this range.</p> <p>After you register a scalable target, you do not need to
         * register it again to use other Application Auto Scaling operations. To see which
         * resources have been registered, use <a
         * href="https://docs.aws.amazon.com/autoscaling/application/APIReference/API_DescribeScalableTargets.html">DescribeScalableTargets</a>.
         * You can also view the scaling policies for a service namespace by using <a
         * href="https://docs.aws.amazon.com/autoscaling/application/APIReference/API_DescribeScalableTargets.html">DescribeScalableTargets</a>.
         * If you no longer need a scalable target, you can deregister it by using <a
         * href="https://docs.aws.amazon.com/autoscaling/application/APIReference/API_DeregisterScalableTarget.html">DeregisterScalableTarget</a>.</p>
         * <p>To update a scalable target, specify the parameters that you want to change.
         * Include the parameters that identify the scalable target: resource ID, scalable
         * dimension, and namespace. Any parameters that you don't specify are not changed
         * by this update request. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/application-autoscaling-2016-02-06/RegisterScalableTarget">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void RegisterScalableTargetAsync(const Model::RegisterScalableTargetRequest& request, const RegisterScalableTargetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;


      void OverrideEndpoint(const Aws::String& endpoint);
    private:
      void init(const Aws::Client::ClientConfiguration& clientConfiguration);
        void DeleteScalingPolicyAsyncHelper(const Model::DeleteScalingPolicyRequest& request, const DeleteScalingPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteScheduledActionAsyncHelper(const Model::DeleteScheduledActionRequest& request, const DeleteScheduledActionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeregisterScalableTargetAsyncHelper(const Model::DeregisterScalableTargetRequest& request, const DeregisterScalableTargetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeScalableTargetsAsyncHelper(const Model::DescribeScalableTargetsRequest& request, const DescribeScalableTargetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeScalingActivitiesAsyncHelper(const Model::DescribeScalingActivitiesRequest& request, const DescribeScalingActivitiesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeScalingPoliciesAsyncHelper(const Model::DescribeScalingPoliciesRequest& request, const DescribeScalingPoliciesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeScheduledActionsAsyncHelper(const Model::DescribeScheduledActionsRequest& request, const DescribeScheduledActionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void PutScalingPolicyAsyncHelper(const Model::PutScalingPolicyRequest& request, const PutScalingPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void PutScheduledActionAsyncHelper(const Model::PutScheduledActionRequest& request, const PutScheduledActionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void RegisterScalableTargetAsyncHelper(const Model::RegisterScalableTargetRequest& request, const RegisterScalableTargetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;

      Aws::String m_uri;
      Aws::String m_configScheme;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
  };

} // namespace ApplicationAutoScaling
} // namespace Aws
