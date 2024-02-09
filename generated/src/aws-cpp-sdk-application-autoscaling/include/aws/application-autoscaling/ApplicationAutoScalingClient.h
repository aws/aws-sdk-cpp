/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/application-autoscaling/ApplicationAutoScaling_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSClientAsyncCRTP.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/application-autoscaling/ApplicationAutoScalingServiceClientModel.h>

namespace Aws
{
namespace ApplicationAutoScaling
{
  /**
   * <p>With Application Auto Scaling, you can configure automatic scaling for the
   * following resources:</p> <ul> <li> <p>Amazon AppStream 2.0 fleets</p> </li> <li>
   * <p>Amazon Aurora Replicas</p> </li> <li> <p>Amazon Comprehend document
   * classification and entity recognizer endpoints</p> </li> <li> <p>Amazon DynamoDB
   * tables and global secondary indexes throughput capacity</p> </li> <li> <p>Amazon
   * ECS services</p> </li> <li> <p>Amazon ElastiCache for Redis clusters
   * (replication groups)</p> </li> <li> <p>Amazon EMR clusters</p> </li> <li>
   * <p>Amazon Keyspaces (for Apache Cassandra) tables</p> </li> <li> <p>Lambda
   * function provisioned concurrency</p> </li> <li> <p>Amazon Managed Streaming for
   * Apache Kafka broker storage</p> </li> <li> <p>Amazon Neptune clusters</p> </li>
   * <li> <p>Amazon SageMaker endpoint variants</p> </li> <li> <p>Amazon SageMaker
   * Serverless endpoint provisioned concurrency</p> </li> <li> <p>Amazon SageMaker
   * inference components</p> </li> <li> <p>Spot Fleets (Amazon EC2)</p> </li> <li>
   * <p>Custom resources provided by your own applications or services</p> </li>
   * </ul> <p>To learn more about Application Auto Scaling, see the <a
   * href="https://docs.aws.amazon.com/autoscaling/application/userguide/what-is-application-auto-scaling.html">Application
   * Auto Scaling User Guide</a>.</p> <p> <b>API Summary</b> </p> <p>The Application
   * Auto Scaling service API includes three key sets of actions: </p> <ul> <li>
   * <p>Register and manage scalable targets - Register Amazon Web Services or custom
   * resources as scalable targets (a resource that Application Auto Scaling can
   * scale), set minimum and maximum capacity limits, and retrieve information on
   * existing scalable targets.</p> </li> <li> <p>Configure and manage automatic
   * scaling - Define scaling policies to dynamically scale your resources in
   * response to CloudWatch alarms, schedule one-time or recurring scaling actions,
   * and retrieve your recent scaling activity history.</p> </li> <li> <p>Suspend and
   * resume scaling - Temporarily suspend and later resume automatic scaling by
   * calling the <a
   * href="https://docs.aws.amazon.com/autoscaling/application/APIReference/API_RegisterScalableTarget.html">RegisterScalableTarget</a>
   * API action for any Application Auto Scaling scalable target. You can suspend and
   * resume (individually or in combination) scale-out activities that are triggered
   * by a scaling policy, scale-in activities that are triggered by a scaling policy,
   * and scheduled scaling.</p> </li> </ul>
   */
  class AWS_APPLICATIONAUTOSCALING_API ApplicationAutoScalingClient : public Aws::Client::AWSJsonClient, public Aws::Client::ClientWithAsyncTemplateMethods<ApplicationAutoScalingClient>
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;
      static const char* GetServiceName();
      static const char* GetAllocationTag();

      typedef ApplicationAutoScalingClientConfiguration ClientConfigurationType;
      typedef ApplicationAutoScalingEndpointProvider EndpointProviderType;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        ApplicationAutoScalingClient(const Aws::ApplicationAutoScaling::ApplicationAutoScalingClientConfiguration& clientConfiguration = Aws::ApplicationAutoScaling::ApplicationAutoScalingClientConfiguration(),
                                     std::shared_ptr<ApplicationAutoScalingEndpointProviderBase> endpointProvider = nullptr);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        ApplicationAutoScalingClient(const Aws::Auth::AWSCredentials& credentials,
                                     std::shared_ptr<ApplicationAutoScalingEndpointProviderBase> endpointProvider = nullptr,
                                     const Aws::ApplicationAutoScaling::ApplicationAutoScalingClientConfiguration& clientConfiguration = Aws::ApplicationAutoScaling::ApplicationAutoScalingClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        ApplicationAutoScalingClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                                     std::shared_ptr<ApplicationAutoScalingEndpointProviderBase> endpointProvider = nullptr,
                                     const Aws::ApplicationAutoScaling::ApplicationAutoScalingClientConfiguration& clientConfiguration = Aws::ApplicationAutoScaling::ApplicationAutoScalingClientConfiguration());


        /* Legacy constructors due deprecation */
       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        ApplicationAutoScalingClient(const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        ApplicationAutoScalingClient(const Aws::Auth::AWSCredentials& credentials,
                                     const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        ApplicationAutoScalingClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                                     const Aws::Client::ClientConfiguration& clientConfiguration);

        /* End of legacy constructors due deprecation */
        virtual ~ApplicationAutoScalingClient();

        /**
         * <p>Deletes the specified scaling policy for an Application Auto Scaling scalable
         * target.</p> <p>Deleting a step scaling policy deletes the underlying alarm
         * action, but does not delete the CloudWatch alarm associated with the scaling
         * policy, even if it no longer has an associated action.</p> <p>For more
         * information, see <a
         * href="https://docs.aws.amazon.com/autoscaling/application/userguide/create-step-scaling-policy-cli.html#delete-step-scaling-policy">Delete
         * a step scaling policy</a> and <a
         * href="https://docs.aws.amazon.com/autoscaling/application/userguide/create-target-tracking-policy-cli.html#delete-target-tracking-policy">Delete
         * a target tracking scaling policy</a> in the <i>Application Auto Scaling User
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/application-autoscaling-2016-02-06/DeleteScalingPolicy">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteScalingPolicyOutcome DeleteScalingPolicy(const Model::DeleteScalingPolicyRequest& request) const;

        /**
         * A Callable wrapper for DeleteScalingPolicy that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteScalingPolicyRequestT = Model::DeleteScalingPolicyRequest>
        Model::DeleteScalingPolicyOutcomeCallable DeleteScalingPolicyCallable(const DeleteScalingPolicyRequestT& request) const
        {
            return SubmitCallable(&ApplicationAutoScalingClient::DeleteScalingPolicy, request);
        }

        /**
         * An Async wrapper for DeleteScalingPolicy that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteScalingPolicyRequestT = Model::DeleteScalingPolicyRequest>
        void DeleteScalingPolicyAsync(const DeleteScalingPolicyRequestT& request, const DeleteScalingPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ApplicationAutoScalingClient::DeleteScalingPolicy, request, handler, context);
        }

        /**
         * <p>Deletes the specified scheduled action for an Application Auto Scaling
         * scalable target.</p> <p>For more information, see <a
         * href="https://docs.aws.amazon.com/autoscaling/application/userguide/scheduled-scaling-additional-cli-commands.html#delete-scheduled-action">Delete
         * a scheduled action</a> in the <i>Application Auto Scaling User
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/application-autoscaling-2016-02-06/DeleteScheduledAction">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteScheduledActionOutcome DeleteScheduledAction(const Model::DeleteScheduledActionRequest& request) const;

        /**
         * A Callable wrapper for DeleteScheduledAction that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteScheduledActionRequestT = Model::DeleteScheduledActionRequest>
        Model::DeleteScheduledActionOutcomeCallable DeleteScheduledActionCallable(const DeleteScheduledActionRequestT& request) const
        {
            return SubmitCallable(&ApplicationAutoScalingClient::DeleteScheduledAction, request);
        }

        /**
         * An Async wrapper for DeleteScheduledAction that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteScheduledActionRequestT = Model::DeleteScheduledActionRequest>
        void DeleteScheduledActionAsync(const DeleteScheduledActionRequestT& request, const DeleteScheduledActionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ApplicationAutoScalingClient::DeleteScheduledAction, request, handler, context);
        }

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
         * A Callable wrapper for DeregisterScalableTarget that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeregisterScalableTargetRequestT = Model::DeregisterScalableTargetRequest>
        Model::DeregisterScalableTargetOutcomeCallable DeregisterScalableTargetCallable(const DeregisterScalableTargetRequestT& request) const
        {
            return SubmitCallable(&ApplicationAutoScalingClient::DeregisterScalableTarget, request);
        }

        /**
         * An Async wrapper for DeregisterScalableTarget that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeregisterScalableTargetRequestT = Model::DeregisterScalableTargetRequest>
        void DeregisterScalableTargetAsync(const DeregisterScalableTargetRequestT& request, const DeregisterScalableTargetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ApplicationAutoScalingClient::DeregisterScalableTarget, request, handler, context);
        }

        /**
         * <p>Gets information about the scalable targets in the specified namespace.</p>
         * <p>You can filter the results using <code>ResourceIds</code> and
         * <code>ScalableDimension</code>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/application-autoscaling-2016-02-06/DescribeScalableTargets">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeScalableTargetsOutcome DescribeScalableTargets(const Model::DescribeScalableTargetsRequest& request) const;

        /**
         * A Callable wrapper for DescribeScalableTargets that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeScalableTargetsRequestT = Model::DescribeScalableTargetsRequest>
        Model::DescribeScalableTargetsOutcomeCallable DescribeScalableTargetsCallable(const DescribeScalableTargetsRequestT& request) const
        {
            return SubmitCallable(&ApplicationAutoScalingClient::DescribeScalableTargets, request);
        }

        /**
         * An Async wrapper for DescribeScalableTargets that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeScalableTargetsRequestT = Model::DescribeScalableTargetsRequest>
        void DescribeScalableTargetsAsync(const DescribeScalableTargetsRequestT& request, const DescribeScalableTargetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ApplicationAutoScalingClient::DescribeScalableTargets, request, handler, context);
        }

        /**
         * <p>Provides descriptive information about the scaling activities in the
         * specified namespace from the previous six weeks.</p> <p>You can filter the
         * results using <code>ResourceId</code> and <code>ScalableDimension</code>.</p>
         * <p>For information about viewing scaling activities using the Amazon Web
         * Services CLI, see <a
         * href="https://docs.aws.amazon.com/autoscaling/application/userguide/application-auto-scaling-scaling-activities.html">Scaling
         * activities for Application Auto Scaling</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/application-autoscaling-2016-02-06/DescribeScalingActivities">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeScalingActivitiesOutcome DescribeScalingActivities(const Model::DescribeScalingActivitiesRequest& request) const;

        /**
         * A Callable wrapper for DescribeScalingActivities that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeScalingActivitiesRequestT = Model::DescribeScalingActivitiesRequest>
        Model::DescribeScalingActivitiesOutcomeCallable DescribeScalingActivitiesCallable(const DescribeScalingActivitiesRequestT& request) const
        {
            return SubmitCallable(&ApplicationAutoScalingClient::DescribeScalingActivities, request);
        }

        /**
         * An Async wrapper for DescribeScalingActivities that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeScalingActivitiesRequestT = Model::DescribeScalingActivitiesRequest>
        void DescribeScalingActivitiesAsync(const DescribeScalingActivitiesRequestT& request, const DescribeScalingActivitiesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ApplicationAutoScalingClient::DescribeScalingActivities, request, handler, context);
        }

        /**
         * <p>Describes the Application Auto Scaling scaling policies for the specified
         * service namespace.</p> <p>You can filter the results using
         * <code>ResourceId</code>, <code>ScalableDimension</code>, and
         * <code>PolicyNames</code>.</p> <p>For more information, see <a
         * href="https://docs.aws.amazon.com/autoscaling/application/userguide/application-auto-scaling-target-tracking.html">Target
         * tracking scaling policies</a> and <a
         * href="https://docs.aws.amazon.com/autoscaling/application/userguide/application-auto-scaling-step-scaling-policies.html">Step
         * scaling policies</a> in the <i>Application Auto Scaling User
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/application-autoscaling-2016-02-06/DescribeScalingPolicies">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeScalingPoliciesOutcome DescribeScalingPolicies(const Model::DescribeScalingPoliciesRequest& request) const;

        /**
         * A Callable wrapper for DescribeScalingPolicies that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeScalingPoliciesRequestT = Model::DescribeScalingPoliciesRequest>
        Model::DescribeScalingPoliciesOutcomeCallable DescribeScalingPoliciesCallable(const DescribeScalingPoliciesRequestT& request) const
        {
            return SubmitCallable(&ApplicationAutoScalingClient::DescribeScalingPolicies, request);
        }

        /**
         * An Async wrapper for DescribeScalingPolicies that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeScalingPoliciesRequestT = Model::DescribeScalingPoliciesRequest>
        void DescribeScalingPoliciesAsync(const DescribeScalingPoliciesRequestT& request, const DescribeScalingPoliciesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ApplicationAutoScalingClient::DescribeScalingPolicies, request, handler, context);
        }

        /**
         * <p>Describes the Application Auto Scaling scheduled actions for the specified
         * service namespace.</p> <p>You can filter the results using the
         * <code>ResourceId</code>, <code>ScalableDimension</code>, and
         * <code>ScheduledActionNames</code> parameters.</p> <p>For more information, see
         * <a
         * href="https://docs.aws.amazon.com/autoscaling/application/userguide/application-auto-scaling-scheduled-scaling.html">Scheduled
         * scaling</a> and <a
         * href="https://docs.aws.amazon.com/autoscaling/application/userguide/scheduled-scaling-additional-cli-commands.html">Managing
         * scheduled scaling</a> in the <i>Application Auto Scaling User
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/application-autoscaling-2016-02-06/DescribeScheduledActions">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeScheduledActionsOutcome DescribeScheduledActions(const Model::DescribeScheduledActionsRequest& request) const;

        /**
         * A Callable wrapper for DescribeScheduledActions that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeScheduledActionsRequestT = Model::DescribeScheduledActionsRequest>
        Model::DescribeScheduledActionsOutcomeCallable DescribeScheduledActionsCallable(const DescribeScheduledActionsRequestT& request) const
        {
            return SubmitCallable(&ApplicationAutoScalingClient::DescribeScheduledActions, request);
        }

        /**
         * An Async wrapper for DescribeScheduledActions that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeScheduledActionsRequestT = Model::DescribeScheduledActionsRequest>
        void DescribeScheduledActionsAsync(const DescribeScheduledActionsRequestT& request, const DescribeScheduledActionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ApplicationAutoScalingClient::DescribeScheduledActions, request, handler, context);
        }

        /**
         * <p>Returns all the tags on the specified Application Auto Scaling scalable
         * target.</p> <p>For general information about tags, including the format and
         * syntax, see <a
         * href="https://docs.aws.amazon.com/general/latest/gr/aws_tagging.html">Tagging
         * Amazon Web Services resources</a> in the <i>Amazon Web Services General
         * Reference</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/application-autoscaling-2016-02-06/ListTagsForResource">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTagsForResourceOutcome ListTagsForResource(const Model::ListTagsForResourceRequest& request) const;

        /**
         * A Callable wrapper for ListTagsForResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListTagsForResourceRequestT = Model::ListTagsForResourceRequest>
        Model::ListTagsForResourceOutcomeCallable ListTagsForResourceCallable(const ListTagsForResourceRequestT& request) const
        {
            return SubmitCallable(&ApplicationAutoScalingClient::ListTagsForResource, request);
        }

        /**
         * An Async wrapper for ListTagsForResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListTagsForResourceRequestT = Model::ListTagsForResourceRequest>
        void ListTagsForResourceAsync(const ListTagsForResourceRequestT& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ApplicationAutoScalingClient::ListTagsForResource, request, handler, context);
        }

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
         * tracking scaling policies</a> and <a
         * href="https://docs.aws.amazon.com/autoscaling/application/userguide/application-auto-scaling-step-scaling-policies.html">Step
         * scaling policies</a> in the <i>Application Auto Scaling User Guide</i>.</p>
         *  <p>If a scalable target is deregistered, the scalable target is no longer
         * available to use scaling policies. Any scaling policies that were specified for
         * the scalable target are deleted.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/application-autoscaling-2016-02-06/PutScalingPolicy">AWS
         * API Reference</a></p>
         */
        virtual Model::PutScalingPolicyOutcome PutScalingPolicy(const Model::PutScalingPolicyRequest& request) const;

        /**
         * A Callable wrapper for PutScalingPolicy that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename PutScalingPolicyRequestT = Model::PutScalingPolicyRequest>
        Model::PutScalingPolicyOutcomeCallable PutScalingPolicyCallable(const PutScalingPolicyRequestT& request) const
        {
            return SubmitCallable(&ApplicationAutoScalingClient::PutScalingPolicy, request);
        }

        /**
         * An Async wrapper for PutScalingPolicy that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename PutScalingPolicyRequestT = Model::PutScalingPolicyRequest>
        void PutScalingPolicyAsync(const PutScalingPolicyRequestT& request, const PutScalingPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ApplicationAutoScalingClient::PutScalingPolicy, request, handler, context);
        }

        /**
         * <p>Creates or updates a scheduled action for an Application Auto Scaling
         * scalable target. </p> <p>Each scalable target is identified by a service
         * namespace, resource ID, and scalable dimension. A scheduled action applies to
         * the scalable target identified by those three attributes. You cannot create a
         * scheduled action until you have registered the resource as a scalable
         * target.</p> <p>When you specify start and end times with a recurring schedule
         * using a cron expression or rates, they form the boundaries for when the
         * recurring action starts and stops.</p> <p>To update a scheduled action, specify
         * the parameters that you want to change. If you don't specify start and end
         * times, the old values are deleted.</p> <p>For more information, see <a
         * href="https://docs.aws.amazon.com/autoscaling/application/userguide/application-auto-scaling-scheduled-scaling.html">Scheduled
         * scaling</a> in the <i>Application Auto Scaling User Guide</i>.</p>  <p>If
         * a scalable target is deregistered, the scalable target is no longer available to
         * run scheduled actions. Any scheduled actions that were specified for the
         * scalable target are deleted.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/application-autoscaling-2016-02-06/PutScheduledAction">AWS
         * API Reference</a></p>
         */
        virtual Model::PutScheduledActionOutcome PutScheduledAction(const Model::PutScheduledActionRequest& request) const;

        /**
         * A Callable wrapper for PutScheduledAction that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename PutScheduledActionRequestT = Model::PutScheduledActionRequest>
        Model::PutScheduledActionOutcomeCallable PutScheduledActionCallable(const PutScheduledActionRequestT& request) const
        {
            return SubmitCallable(&ApplicationAutoScalingClient::PutScheduledAction, request);
        }

        /**
         * An Async wrapper for PutScheduledAction that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename PutScheduledActionRequestT = Model::PutScheduledActionRequest>
        void PutScheduledActionAsync(const PutScheduledActionRequestT& request, const PutScheduledActionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ApplicationAutoScalingClient::PutScheduledAction, request, handler, context);
        }

        /**
         * <p>Registers or updates a scalable target, which is the resource that you want
         * to scale.</p> <p>Scalable targets are uniquely identified by the combination of
         * resource ID, scalable dimension, and namespace, which represents some capacity
         * dimension of the underlying service.</p> <p>When you register a new scalable
         * target, you must specify values for the minimum and maximum capacity. If the
         * specified resource is not active in the target service, this operation does not
         * change the resource's current capacity. Otherwise, it changes the resource's
         * current capacity to a value that is inside of this range.</p> <p>If you add a
         * scaling policy, current capacity is adjustable within the specified range when
         * scaling starts. Application Auto Scaling scaling policies will not scale
         * capacity to values that are outside of the minimum and maximum range.</p>
         * <p>After you register a scalable target, you do not need to register it again to
         * use other Application Auto Scaling operations. To see which resources have been
         * registered, use <a
         * href="https://docs.aws.amazon.com/autoscaling/application/APIReference/API_DescribeScalableTargets.html">DescribeScalableTargets</a>.
         * You can also view the scaling policies for a service namespace by using <a
         * href="https://docs.aws.amazon.com/autoscaling/application/APIReference/API_DescribeScalableTargets.html">DescribeScalableTargets</a>.
         * If you no longer need a scalable target, you can deregister it by using <a
         * href="https://docs.aws.amazon.com/autoscaling/application/APIReference/API_DeregisterScalableTarget.html">DeregisterScalableTarget</a>.</p>
         * <p>To update a scalable target, specify the parameters that you want to change.
         * Include the parameters that identify the scalable target: resource ID, scalable
         * dimension, and namespace. Any parameters that you don't specify are not changed
         * by this update request. </p>  <p>If you call the
         * <code>RegisterScalableTarget</code> API operation to create a scalable target,
         * there might be a brief delay until the operation achieves <a
         * href="https://en.wikipedia.org/wiki/Eventual_consistency">eventual
         * consistency</a>. You might become aware of this brief delay if you get
         * unexpected errors when performing sequential operations. The typical strategy is
         * to retry the request, and some Amazon Web Services SDKs include automatic
         * backoff and retry logic.</p> <p>If you call the
         * <code>RegisterScalableTarget</code> API operation to update an existing scalable
         * target, Application Auto Scaling retrieves the current capacity of the resource.
         * If it's below the minimum capacity or above the maximum capacity, Application
         * Auto Scaling adjusts the capacity of the scalable target to place it within
         * these bounds, even if you don't include the <code>MinCapacity</code> or
         * <code>MaxCapacity</code> request parameters.</p> <p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/application-autoscaling-2016-02-06/RegisterScalableTarget">AWS
         * API Reference</a></p>
         */
        virtual Model::RegisterScalableTargetOutcome RegisterScalableTarget(const Model::RegisterScalableTargetRequest& request) const;

        /**
         * A Callable wrapper for RegisterScalableTarget that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename RegisterScalableTargetRequestT = Model::RegisterScalableTargetRequest>
        Model::RegisterScalableTargetOutcomeCallable RegisterScalableTargetCallable(const RegisterScalableTargetRequestT& request) const
        {
            return SubmitCallable(&ApplicationAutoScalingClient::RegisterScalableTarget, request);
        }

        /**
         * An Async wrapper for RegisterScalableTarget that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename RegisterScalableTargetRequestT = Model::RegisterScalableTargetRequest>
        void RegisterScalableTargetAsync(const RegisterScalableTargetRequestT& request, const RegisterScalableTargetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ApplicationAutoScalingClient::RegisterScalableTarget, request, handler, context);
        }

        /**
         * <p>Adds or edits tags on an Application Auto Scaling scalable target.</p>
         * <p>Each tag consists of a tag key and a tag value, which are both case-sensitive
         * strings. To add a tag, specify a new tag key and a tag value. To edit a tag,
         * specify an existing tag key and a new tag value.</p> <p>You can use this
         * operation to tag an Application Auto Scaling scalable target, but you cannot tag
         * a scaling policy or scheduled action.</p> <p>You can also add tags to an
         * Application Auto Scaling scalable target while creating it
         * (<code>RegisterScalableTarget</code>).</p> <p>For general information about
         * tags, including the format and syntax, see <a
         * href="https://docs.aws.amazon.com/general/latest/gr/aws_tagging.html">Tagging
         * Amazon Web Services resources</a> in the <i>Amazon Web Services General
         * Reference</i>.</p> <p>Use tags to control access to a scalable target. For more
         * information, see <a
         * href="https://docs.aws.amazon.com/autoscaling/application/userguide/resource-tagging-support.html">Tagging
         * support for Application Auto Scaling</a> in the <i>Application Auto Scaling User
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/application-autoscaling-2016-02-06/TagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::TagResourceOutcome TagResource(const Model::TagResourceRequest& request) const;

        /**
         * A Callable wrapper for TagResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename TagResourceRequestT = Model::TagResourceRequest>
        Model::TagResourceOutcomeCallable TagResourceCallable(const TagResourceRequestT& request) const
        {
            return SubmitCallable(&ApplicationAutoScalingClient::TagResource, request);
        }

        /**
         * An Async wrapper for TagResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename TagResourceRequestT = Model::TagResourceRequest>
        void TagResourceAsync(const TagResourceRequestT& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ApplicationAutoScalingClient::TagResource, request, handler, context);
        }

        /**
         * <p>Deletes tags from an Application Auto Scaling scalable target. To delete a
         * tag, specify the tag key and the Application Auto Scaling scalable
         * target.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/application-autoscaling-2016-02-06/UntagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::UntagResourceOutcome UntagResource(const Model::UntagResourceRequest& request) const;

        /**
         * A Callable wrapper for UntagResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UntagResourceRequestT = Model::UntagResourceRequest>
        Model::UntagResourceOutcomeCallable UntagResourceCallable(const UntagResourceRequestT& request) const
        {
            return SubmitCallable(&ApplicationAutoScalingClient::UntagResource, request);
        }

        /**
         * An Async wrapper for UntagResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UntagResourceRequestT = Model::UntagResourceRequest>
        void UntagResourceAsync(const UntagResourceRequestT& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ApplicationAutoScalingClient::UntagResource, request, handler, context);
        }


      void OverrideEndpoint(const Aws::String& endpoint);
      std::shared_ptr<ApplicationAutoScalingEndpointProviderBase>& accessEndpointProvider();
    private:
      friend class Aws::Client::ClientWithAsyncTemplateMethods<ApplicationAutoScalingClient>;
      void init(const ApplicationAutoScalingClientConfiguration& clientConfiguration);

      ApplicationAutoScalingClientConfiguration m_clientConfiguration;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
      std::shared_ptr<ApplicationAutoScalingEndpointProviderBase> m_endpointProvider;
  };

} // namespace ApplicationAutoScaling
} // namespace Aws
