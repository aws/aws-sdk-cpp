/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/autoscaling/AutoScaling_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/AmazonSerializableWebServiceRequest.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSClientAsyncCRTP.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/autoscaling/AutoScalingServiceClientModel.h>

namespace Aws
{
namespace AutoScaling
{
  /**
   * <fullname>Amazon EC2 Auto Scaling</fullname> <p>Amazon EC2 Auto Scaling is
   * designed to automatically launch and terminate EC2 instances based on
   * user-defined scaling policies, scheduled actions, and health checks.</p> <p>For
   * more information, see the <a
   * href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/">Amazon EC2 Auto
   * Scaling User Guide</a> and the <a
   * href="https://docs.aws.amazon.com/autoscaling/ec2/APIReference/Welcome.html">Amazon
   * EC2 Auto Scaling API Reference</a>.</p>
   */
  class AWS_AUTOSCALING_API AutoScalingClient : public Aws::Client::AWSXMLClient, public Aws::Client::ClientWithAsyncTemplateMethods<AutoScalingClient>
  {
    public:
      typedef Aws::Client::AWSXMLClient BASECLASS;
      static const char* GetServiceName();
      static const char* GetAllocationTag();

      typedef AutoScalingClientConfiguration ClientConfigurationType;
      typedef AutoScalingEndpointProvider EndpointProviderType;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        AutoScalingClient(const Aws::AutoScaling::AutoScalingClientConfiguration& clientConfiguration = Aws::AutoScaling::AutoScalingClientConfiguration(),
                          std::shared_ptr<AutoScalingEndpointProviderBase> endpointProvider = nullptr);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        AutoScalingClient(const Aws::Auth::AWSCredentials& credentials,
                          std::shared_ptr<AutoScalingEndpointProviderBase> endpointProvider = nullptr,
                          const Aws::AutoScaling::AutoScalingClientConfiguration& clientConfiguration = Aws::AutoScaling::AutoScalingClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        AutoScalingClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                          std::shared_ptr<AutoScalingEndpointProviderBase> endpointProvider = nullptr,
                          const Aws::AutoScaling::AutoScalingClientConfiguration& clientConfiguration = Aws::AutoScaling::AutoScalingClientConfiguration());


        /* Legacy constructors due deprecation */
       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        AutoScalingClient(const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        AutoScalingClient(const Aws::Auth::AWSCredentials& credentials,
                          const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        AutoScalingClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                          const Aws::Client::ClientConfiguration& clientConfiguration);

        /* End of legacy constructors due deprecation */
        virtual ~AutoScalingClient();


       /**
        * Converts any request object to a presigned URL with the GET method, using region for the signer and a timeout of 15 minutes.
        */
        Aws::String ConvertRequestToPresignedUrl(const Aws::AmazonSerializableWebServiceRequest& requestToConvert, const char* region) const;


        /**
         * <p>Attaches one or more EC2 instances to the specified Auto Scaling group.</p>
         * <p>When you attach instances, Amazon EC2 Auto Scaling increases the desired
         * capacity of the group by the number of instances being attached. If the number
         * of instances being attached plus the desired capacity of the group exceeds the
         * maximum size of the group, the operation fails.</p> <p>If there is a Classic
         * Load Balancer attached to your Auto Scaling group, the instances are also
         * registered with the load balancer. If there are target groups attached to your
         * Auto Scaling group, the instances are also registered with the target
         * groups.</p> <p>For more information, see <a
         * href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/attach-instance-asg.html">Attach
         * EC2 instances to your Auto Scaling group</a> in the <i>Amazon EC2 Auto Scaling
         * User Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/autoscaling-2011-01-01/AttachInstances">AWS
         * API Reference</a></p>
         */
        virtual Model::AttachInstancesOutcome AttachInstances(const Model::AttachInstancesRequest& request) const;

        /**
         * A Callable wrapper for AttachInstances that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename AttachInstancesRequestT = Model::AttachInstancesRequest>
        Model::AttachInstancesOutcomeCallable AttachInstancesCallable(const AttachInstancesRequestT& request) const
        {
            return SubmitCallable(&AutoScalingClient::AttachInstances, request);
        }

        /**
         * An Async wrapper for AttachInstances that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename AttachInstancesRequestT = Model::AttachInstancesRequest>
        void AttachInstancesAsync(const AttachInstancesRequestT& request, const AttachInstancesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AutoScalingClient::AttachInstances, request, handler, context);
        }

        /**
         *  <p>This API operation is superseded by <a>AttachTrafficSources</a>, which
         * can attach multiple traffic sources types. We recommend using
         * <code>AttachTrafficSources</code> to simplify how you manage traffic sources.
         * However, we continue to support <code>AttachLoadBalancerTargetGroups</code>. You
         * can use both the original <code>AttachLoadBalancerTargetGroups</code> API
         * operation and <code>AttachTrafficSources</code> on the same Auto Scaling
         * group.</p>  <p>Attaches one or more target groups to the specified Auto
         * Scaling group.</p> <p>This operation is used with the following load balancer
         * types: </p> <ul> <li> <p>Application Load Balancer - Operates at the application
         * layer (layer 7) and supports HTTP and HTTPS. </p> </li> <li> <p>Network Load
         * Balancer - Operates at the transport layer (layer 4) and supports TCP, TLS, and
         * UDP. </p> </li> <li> <p>Gateway Load Balancer - Operates at the network layer
         * (layer 3).</p> </li> </ul> <p>To describe the target groups for an Auto Scaling
         * group, call the <a>DescribeLoadBalancerTargetGroups</a> API. To detach the
         * target group from the Auto Scaling group, call the
         * <a>DetachLoadBalancerTargetGroups</a> API.</p> <p>This operation is additive and
         * does not detach existing target groups or Classic Load Balancers from the Auto
         * Scaling group.</p> <p>For more information, see <a
         * href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/autoscaling-load-balancer.html">Use
         * Elastic Load Balancing to distribute traffic across the instances in your Auto
         * Scaling group</a> in the <i>Amazon EC2 Auto Scaling User Guide</i>.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/autoscaling-2011-01-01/AttachLoadBalancerTargetGroups">AWS
         * API Reference</a></p>
         */
        virtual Model::AttachLoadBalancerTargetGroupsOutcome AttachLoadBalancerTargetGroups(const Model::AttachLoadBalancerTargetGroupsRequest& request) const;

        /**
         * A Callable wrapper for AttachLoadBalancerTargetGroups that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename AttachLoadBalancerTargetGroupsRequestT = Model::AttachLoadBalancerTargetGroupsRequest>
        Model::AttachLoadBalancerTargetGroupsOutcomeCallable AttachLoadBalancerTargetGroupsCallable(const AttachLoadBalancerTargetGroupsRequestT& request) const
        {
            return SubmitCallable(&AutoScalingClient::AttachLoadBalancerTargetGroups, request);
        }

        /**
         * An Async wrapper for AttachLoadBalancerTargetGroups that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename AttachLoadBalancerTargetGroupsRequestT = Model::AttachLoadBalancerTargetGroupsRequest>
        void AttachLoadBalancerTargetGroupsAsync(const AttachLoadBalancerTargetGroupsRequestT& request, const AttachLoadBalancerTargetGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AutoScalingClient::AttachLoadBalancerTargetGroups, request, handler, context);
        }

        /**
         *  <p>This API operation is superseded by <a>AttachTrafficSources</a>, which
         * can attach multiple traffic sources types. We recommend using
         * <code>AttachTrafficSources</code> to simplify how you manage traffic sources.
         * However, we continue to support <code>AttachLoadBalancers</code>. You can use
         * both the original <code>AttachLoadBalancers</code> API operation and
         * <code>AttachTrafficSources</code> on the same Auto Scaling group.</p> 
         * <p>Attaches one or more Classic Load Balancers to the specified Auto Scaling
         * group. Amazon EC2 Auto Scaling registers the running instances with these
         * Classic Load Balancers.</p> <p>To describe the load balancers for an Auto
         * Scaling group, call the <a>DescribeLoadBalancers</a> API. To detach a load
         * balancer from the Auto Scaling group, call the <a>DetachLoadBalancers</a>
         * API.</p> <p>This operation is additive and does not detach existing Classic Load
         * Balancers or target groups from the Auto Scaling group.</p> <p>For more
         * information, see <a
         * href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/autoscaling-load-balancer.html">Use
         * Elastic Load Balancing to distribute traffic across the instances in your Auto
         * Scaling group</a> in the <i>Amazon EC2 Auto Scaling User
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/autoscaling-2011-01-01/AttachLoadBalancers">AWS
         * API Reference</a></p>
         */
        virtual Model::AttachLoadBalancersOutcome AttachLoadBalancers(const Model::AttachLoadBalancersRequest& request) const;

        /**
         * A Callable wrapper for AttachLoadBalancers that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename AttachLoadBalancersRequestT = Model::AttachLoadBalancersRequest>
        Model::AttachLoadBalancersOutcomeCallable AttachLoadBalancersCallable(const AttachLoadBalancersRequestT& request) const
        {
            return SubmitCallable(&AutoScalingClient::AttachLoadBalancers, request);
        }

        /**
         * An Async wrapper for AttachLoadBalancers that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename AttachLoadBalancersRequestT = Model::AttachLoadBalancersRequest>
        void AttachLoadBalancersAsync(const AttachLoadBalancersRequestT& request, const AttachLoadBalancersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AutoScalingClient::AttachLoadBalancers, request, handler, context);
        }

        /**
         * <p>Attaches one or more traffic sources to the specified Auto Scaling group.</p>
         * <p>You can use any of the following as traffic sources for an Auto Scaling
         * group:</p> <ul> <li> <p>Application Load Balancer</p> </li> <li> <p>Classic Load
         * Balancer</p> </li> <li> <p>Gateway Load Balancer</p> </li> <li> <p>Network Load
         * Balancer</p> </li> <li> <p>VPC Lattice</p> </li> </ul> <p>This operation is
         * additive and does not detach existing traffic sources from the Auto Scaling
         * group. </p> <p>After the operation completes, use the
         * <a>DescribeTrafficSources</a> API to return details about the state of the
         * attachments between traffic sources and your Auto Scaling group. To detach a
         * traffic source from the Auto Scaling group, call the <a>DetachTrafficSources</a>
         * API.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/autoscaling-2011-01-01/AttachTrafficSources">AWS
         * API Reference</a></p>
         */
        virtual Model::AttachTrafficSourcesOutcome AttachTrafficSources(const Model::AttachTrafficSourcesRequest& request) const;

        /**
         * A Callable wrapper for AttachTrafficSources that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename AttachTrafficSourcesRequestT = Model::AttachTrafficSourcesRequest>
        Model::AttachTrafficSourcesOutcomeCallable AttachTrafficSourcesCallable(const AttachTrafficSourcesRequestT& request) const
        {
            return SubmitCallable(&AutoScalingClient::AttachTrafficSources, request);
        }

        /**
         * An Async wrapper for AttachTrafficSources that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename AttachTrafficSourcesRequestT = Model::AttachTrafficSourcesRequest>
        void AttachTrafficSourcesAsync(const AttachTrafficSourcesRequestT& request, const AttachTrafficSourcesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AutoScalingClient::AttachTrafficSources, request, handler, context);
        }

        /**
         * <p>Deletes one or more scheduled actions for the specified Auto Scaling
         * group.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/autoscaling-2011-01-01/BatchDeleteScheduledAction">AWS
         * API Reference</a></p>
         */
        virtual Model::BatchDeleteScheduledActionOutcome BatchDeleteScheduledAction(const Model::BatchDeleteScheduledActionRequest& request) const;

        /**
         * A Callable wrapper for BatchDeleteScheduledAction that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename BatchDeleteScheduledActionRequestT = Model::BatchDeleteScheduledActionRequest>
        Model::BatchDeleteScheduledActionOutcomeCallable BatchDeleteScheduledActionCallable(const BatchDeleteScheduledActionRequestT& request) const
        {
            return SubmitCallable(&AutoScalingClient::BatchDeleteScheduledAction, request);
        }

        /**
         * An Async wrapper for BatchDeleteScheduledAction that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename BatchDeleteScheduledActionRequestT = Model::BatchDeleteScheduledActionRequest>
        void BatchDeleteScheduledActionAsync(const BatchDeleteScheduledActionRequestT& request, const BatchDeleteScheduledActionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AutoScalingClient::BatchDeleteScheduledAction, request, handler, context);
        }

        /**
         * <p>Creates or updates one or more scheduled scaling actions for an Auto Scaling
         * group.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/autoscaling-2011-01-01/BatchPutScheduledUpdateGroupAction">AWS
         * API Reference</a></p>
         */
        virtual Model::BatchPutScheduledUpdateGroupActionOutcome BatchPutScheduledUpdateGroupAction(const Model::BatchPutScheduledUpdateGroupActionRequest& request) const;

        /**
         * A Callable wrapper for BatchPutScheduledUpdateGroupAction that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename BatchPutScheduledUpdateGroupActionRequestT = Model::BatchPutScheduledUpdateGroupActionRequest>
        Model::BatchPutScheduledUpdateGroupActionOutcomeCallable BatchPutScheduledUpdateGroupActionCallable(const BatchPutScheduledUpdateGroupActionRequestT& request) const
        {
            return SubmitCallable(&AutoScalingClient::BatchPutScheduledUpdateGroupAction, request);
        }

        /**
         * An Async wrapper for BatchPutScheduledUpdateGroupAction that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename BatchPutScheduledUpdateGroupActionRequestT = Model::BatchPutScheduledUpdateGroupActionRequest>
        void BatchPutScheduledUpdateGroupActionAsync(const BatchPutScheduledUpdateGroupActionRequestT& request, const BatchPutScheduledUpdateGroupActionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AutoScalingClient::BatchPutScheduledUpdateGroupAction, request, handler, context);
        }

        /**
         * <p>Cancels an instance refresh or rollback that is in progress. If an instance
         * refresh or rollback is not in progress, an
         * <code>ActiveInstanceRefreshNotFound</code> error occurs.</p> <p>This operation
         * is part of the <a
         * href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/asg-instance-refresh.html">instance
         * refresh feature</a> in Amazon EC2 Auto Scaling, which helps you update instances
         * in your Auto Scaling group after you make configuration changes.</p> <p>When you
         * cancel an instance refresh, this does not roll back any changes that it made.
         * Use the <a>RollbackInstanceRefresh</a> API to roll back instead.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/autoscaling-2011-01-01/CancelInstanceRefresh">AWS
         * API Reference</a></p>
         */
        virtual Model::CancelInstanceRefreshOutcome CancelInstanceRefresh(const Model::CancelInstanceRefreshRequest& request) const;

        /**
         * A Callable wrapper for CancelInstanceRefresh that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CancelInstanceRefreshRequestT = Model::CancelInstanceRefreshRequest>
        Model::CancelInstanceRefreshOutcomeCallable CancelInstanceRefreshCallable(const CancelInstanceRefreshRequestT& request) const
        {
            return SubmitCallable(&AutoScalingClient::CancelInstanceRefresh, request);
        }

        /**
         * An Async wrapper for CancelInstanceRefresh that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CancelInstanceRefreshRequestT = Model::CancelInstanceRefreshRequest>
        void CancelInstanceRefreshAsync(const CancelInstanceRefreshRequestT& request, const CancelInstanceRefreshResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AutoScalingClient::CancelInstanceRefresh, request, handler, context);
        }

        /**
         * <p>Completes the lifecycle action for the specified token or instance with the
         * specified result.</p> <p>This step is a part of the procedure for adding a
         * lifecycle hook to an Auto Scaling group:</p> <ol> <li> <p>(Optional) Create a
         * launch template or launch configuration with a user data script that runs while
         * an instance is in a wait state due to a lifecycle hook.</p> </li> <li>
         * <p>(Optional) Create a Lambda function and a rule that allows Amazon EventBridge
         * to invoke your Lambda function when an instance is put into a wait state due to
         * a lifecycle hook.</p> </li> <li> <p>(Optional) Create a notification target and
         * an IAM role. The target can be either an Amazon SQS queue or an Amazon SNS
         * topic. The role allows Amazon EC2 Auto Scaling to publish lifecycle
         * notifications to the target.</p> </li> <li> <p>Create the lifecycle hook.
         * Specify whether the hook is used when the instances launch or terminate.</p>
         * </li> <li> <p>If you need more time, record the lifecycle action heartbeat to
         * keep the instance in a wait state.</p> </li> <li> <p> <b>If you finish before
         * the timeout period ends, send a callback by using the
         * <a>CompleteLifecycleAction</a> API call.</b> </p> </li> </ol> <p>For more
         * information, see <a
         * href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/completing-lifecycle-hooks.html">Complete
         * a lifecycle action</a> in the <i>Amazon EC2 Auto Scaling User
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/autoscaling-2011-01-01/CompleteLifecycleAction">AWS
         * API Reference</a></p>
         */
        virtual Model::CompleteLifecycleActionOutcome CompleteLifecycleAction(const Model::CompleteLifecycleActionRequest& request) const;

        /**
         * A Callable wrapper for CompleteLifecycleAction that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CompleteLifecycleActionRequestT = Model::CompleteLifecycleActionRequest>
        Model::CompleteLifecycleActionOutcomeCallable CompleteLifecycleActionCallable(const CompleteLifecycleActionRequestT& request) const
        {
            return SubmitCallable(&AutoScalingClient::CompleteLifecycleAction, request);
        }

        /**
         * An Async wrapper for CompleteLifecycleAction that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CompleteLifecycleActionRequestT = Model::CompleteLifecycleActionRequest>
        void CompleteLifecycleActionAsync(const CompleteLifecycleActionRequestT& request, const CompleteLifecycleActionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AutoScalingClient::CompleteLifecycleAction, request, handler, context);
        }

        /**
         * <p> <b>We strongly recommend using a launch template when calling this operation
         * to ensure full functionality for Amazon EC2 Auto Scaling and Amazon EC2.</b>
         * </p> <p>Creates an Auto Scaling group with the specified name and attributes.
         * </p> <p>If you exceed your maximum limit of Auto Scaling groups, the call fails.
         * To query this limit, call the <a>DescribeAccountLimits</a> API. For information
         * about updating this limit, see <a
         * href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/ec2-auto-scaling-quotas.html">Quotas
         * for Amazon EC2 Auto Scaling</a> in the <i>Amazon EC2 Auto Scaling User
         * Guide</i>.</p> <p>If you're new to Amazon EC2 Auto Scaling, see the introductory
         * tutorials in <a
         * href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/get-started-with-ec2-auto-scaling.html">Get
         * started with Amazon EC2 Auto Scaling</a> in the <i>Amazon EC2 Auto Scaling User
         * Guide</i>.</p> <p>Every Auto Scaling group has three size properties
         * (<code>DesiredCapacity</code>, <code>MaxSize</code>, and <code>MinSize</code>).
         * Usually, you set these sizes based on a specific number of instances. However,
         * if you configure a mixed instances policy that defines weights for the instance
         * types, you must specify these sizes with the same units that you use for
         * weighting instances.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/autoscaling-2011-01-01/CreateAutoScalingGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateAutoScalingGroupOutcome CreateAutoScalingGroup(const Model::CreateAutoScalingGroupRequest& request) const;

        /**
         * A Callable wrapper for CreateAutoScalingGroup that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateAutoScalingGroupRequestT = Model::CreateAutoScalingGroupRequest>
        Model::CreateAutoScalingGroupOutcomeCallable CreateAutoScalingGroupCallable(const CreateAutoScalingGroupRequestT& request) const
        {
            return SubmitCallable(&AutoScalingClient::CreateAutoScalingGroup, request);
        }

        /**
         * An Async wrapper for CreateAutoScalingGroup that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateAutoScalingGroupRequestT = Model::CreateAutoScalingGroupRequest>
        void CreateAutoScalingGroupAsync(const CreateAutoScalingGroupRequestT& request, const CreateAutoScalingGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AutoScalingClient::CreateAutoScalingGroup, request, handler, context);
        }

        /**
         * <p>Creates a launch configuration.</p> <p>If you exceed your maximum limit of
         * launch configurations, the call fails. To query this limit, call the
         * <a>DescribeAccountLimits</a> API. For information about updating this limit, see
         * <a
         * href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/ec2-auto-scaling-quotas.html">Quotas
         * for Amazon EC2 Auto Scaling</a> in the <i>Amazon EC2 Auto Scaling User
         * Guide</i>.</p> <p>For more information, see <a
         * href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/LaunchConfiguration.html">Launch
         * configurations</a> in the <i>Amazon EC2 Auto Scaling User Guide</i>.</p> 
         * <p>Amazon EC2 Auto Scaling configures instances launched as part of an Auto
         * Scaling group using either a launch template or a launch configuration. We
         * strongly recommend that you do not use launch configurations. They do not
         * provide full functionality for Amazon EC2 Auto Scaling or Amazon EC2. For
         * information about using launch templates, see <a
         * href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/launch-templates.html">Launch
         * templates</a> in the <i>Amazon EC2 Auto Scaling User Guide</i>.</p>
         * <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/autoscaling-2011-01-01/CreateLaunchConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateLaunchConfigurationOutcome CreateLaunchConfiguration(const Model::CreateLaunchConfigurationRequest& request) const;

        /**
         * A Callable wrapper for CreateLaunchConfiguration that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateLaunchConfigurationRequestT = Model::CreateLaunchConfigurationRequest>
        Model::CreateLaunchConfigurationOutcomeCallable CreateLaunchConfigurationCallable(const CreateLaunchConfigurationRequestT& request) const
        {
            return SubmitCallable(&AutoScalingClient::CreateLaunchConfiguration, request);
        }

        /**
         * An Async wrapper for CreateLaunchConfiguration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateLaunchConfigurationRequestT = Model::CreateLaunchConfigurationRequest>
        void CreateLaunchConfigurationAsync(const CreateLaunchConfigurationRequestT& request, const CreateLaunchConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AutoScalingClient::CreateLaunchConfiguration, request, handler, context);
        }

        /**
         * <p>Creates or updates tags for the specified Auto Scaling group.</p> <p>When you
         * specify a tag with a key that already exists, the operation overwrites the
         * previous tag definition, and you do not get an error message.</p> <p>For more
         * information, see <a
         * href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/ec2-auto-scaling-tagging.html">Tag
         * Auto Scaling groups and instances</a> in the <i>Amazon EC2 Auto Scaling User
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/autoscaling-2011-01-01/CreateOrUpdateTags">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateOrUpdateTagsOutcome CreateOrUpdateTags(const Model::CreateOrUpdateTagsRequest& request) const;

        /**
         * A Callable wrapper for CreateOrUpdateTags that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateOrUpdateTagsRequestT = Model::CreateOrUpdateTagsRequest>
        Model::CreateOrUpdateTagsOutcomeCallable CreateOrUpdateTagsCallable(const CreateOrUpdateTagsRequestT& request) const
        {
            return SubmitCallable(&AutoScalingClient::CreateOrUpdateTags, request);
        }

        /**
         * An Async wrapper for CreateOrUpdateTags that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateOrUpdateTagsRequestT = Model::CreateOrUpdateTagsRequest>
        void CreateOrUpdateTagsAsync(const CreateOrUpdateTagsRequestT& request, const CreateOrUpdateTagsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AutoScalingClient::CreateOrUpdateTags, request, handler, context);
        }

        /**
         * <p>Deletes the specified Auto Scaling group.</p> <p>If the group has instances
         * or scaling activities in progress, you must specify the option to force the
         * deletion in order for it to succeed. The force delete operation will also
         * terminate the EC2 instances. If the group has a warm pool, the force delete
         * option also deletes the warm pool.</p> <p>To remove instances from the Auto
         * Scaling group before deleting it, call the <a>DetachInstances</a> API with the
         * list of instances and the option to decrement the desired capacity. This ensures
         * that Amazon EC2 Auto Scaling does not launch replacement instances.</p> <p>To
         * terminate all instances before deleting the Auto Scaling group, call the
         * <a>UpdateAutoScalingGroup</a> API and set the minimum size and desired capacity
         * of the Auto Scaling group to zero.</p> <p>If the group has scaling policies,
         * deleting the group deletes the policies, the underlying alarm actions, and any
         * alarm that no longer has an associated action.</p> <p>For more information, see
         * <a
         * href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/as-process-shutdown.html">Delete
         * your Auto Scaling infrastructure</a> in the <i>Amazon EC2 Auto Scaling User
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/autoscaling-2011-01-01/DeleteAutoScalingGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteAutoScalingGroupOutcome DeleteAutoScalingGroup(const Model::DeleteAutoScalingGroupRequest& request) const;

        /**
         * A Callable wrapper for DeleteAutoScalingGroup that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteAutoScalingGroupRequestT = Model::DeleteAutoScalingGroupRequest>
        Model::DeleteAutoScalingGroupOutcomeCallable DeleteAutoScalingGroupCallable(const DeleteAutoScalingGroupRequestT& request) const
        {
            return SubmitCallable(&AutoScalingClient::DeleteAutoScalingGroup, request);
        }

        /**
         * An Async wrapper for DeleteAutoScalingGroup that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteAutoScalingGroupRequestT = Model::DeleteAutoScalingGroupRequest>
        void DeleteAutoScalingGroupAsync(const DeleteAutoScalingGroupRequestT& request, const DeleteAutoScalingGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AutoScalingClient::DeleteAutoScalingGroup, request, handler, context);
        }

        /**
         * <p>Deletes the specified launch configuration.</p> <p>The launch configuration
         * must not be attached to an Auto Scaling group. When this call completes, the
         * launch configuration is no longer available for use.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/autoscaling-2011-01-01/DeleteLaunchConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteLaunchConfigurationOutcome DeleteLaunchConfiguration(const Model::DeleteLaunchConfigurationRequest& request) const;

        /**
         * A Callable wrapper for DeleteLaunchConfiguration that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteLaunchConfigurationRequestT = Model::DeleteLaunchConfigurationRequest>
        Model::DeleteLaunchConfigurationOutcomeCallable DeleteLaunchConfigurationCallable(const DeleteLaunchConfigurationRequestT& request) const
        {
            return SubmitCallable(&AutoScalingClient::DeleteLaunchConfiguration, request);
        }

        /**
         * An Async wrapper for DeleteLaunchConfiguration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteLaunchConfigurationRequestT = Model::DeleteLaunchConfigurationRequest>
        void DeleteLaunchConfigurationAsync(const DeleteLaunchConfigurationRequestT& request, const DeleteLaunchConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AutoScalingClient::DeleteLaunchConfiguration, request, handler, context);
        }

        /**
         * <p>Deletes the specified lifecycle hook.</p> <p>If there are any outstanding
         * lifecycle actions, they are completed first (<code>ABANDON</code> for launching
         * instances, <code>CONTINUE</code> for terminating instances).</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/autoscaling-2011-01-01/DeleteLifecycleHook">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteLifecycleHookOutcome DeleteLifecycleHook(const Model::DeleteLifecycleHookRequest& request) const;

        /**
         * A Callable wrapper for DeleteLifecycleHook that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteLifecycleHookRequestT = Model::DeleteLifecycleHookRequest>
        Model::DeleteLifecycleHookOutcomeCallable DeleteLifecycleHookCallable(const DeleteLifecycleHookRequestT& request) const
        {
            return SubmitCallable(&AutoScalingClient::DeleteLifecycleHook, request);
        }

        /**
         * An Async wrapper for DeleteLifecycleHook that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteLifecycleHookRequestT = Model::DeleteLifecycleHookRequest>
        void DeleteLifecycleHookAsync(const DeleteLifecycleHookRequestT& request, const DeleteLifecycleHookResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AutoScalingClient::DeleteLifecycleHook, request, handler, context);
        }

        /**
         * <p>Deletes the specified notification.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/autoscaling-2011-01-01/DeleteNotificationConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteNotificationConfigurationOutcome DeleteNotificationConfiguration(const Model::DeleteNotificationConfigurationRequest& request) const;

        /**
         * A Callable wrapper for DeleteNotificationConfiguration that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteNotificationConfigurationRequestT = Model::DeleteNotificationConfigurationRequest>
        Model::DeleteNotificationConfigurationOutcomeCallable DeleteNotificationConfigurationCallable(const DeleteNotificationConfigurationRequestT& request) const
        {
            return SubmitCallable(&AutoScalingClient::DeleteNotificationConfiguration, request);
        }

        /**
         * An Async wrapper for DeleteNotificationConfiguration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteNotificationConfigurationRequestT = Model::DeleteNotificationConfigurationRequest>
        void DeleteNotificationConfigurationAsync(const DeleteNotificationConfigurationRequestT& request, const DeleteNotificationConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AutoScalingClient::DeleteNotificationConfiguration, request, handler, context);
        }

        /**
         * <p>Deletes the specified scaling policy.</p> <p>Deleting either a step scaling
         * policy or a simple scaling policy deletes the underlying alarm action, but does
         * not delete the alarm, even if it no longer has an associated action.</p> <p>For
         * more information, see <a
         * href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/deleting-scaling-policy.html">Deleting
         * a scaling policy</a> in the <i>Amazon EC2 Auto Scaling User
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/autoscaling-2011-01-01/DeletePolicy">AWS
         * API Reference</a></p>
         */
        virtual Model::DeletePolicyOutcome DeletePolicy(const Model::DeletePolicyRequest& request) const;

        /**
         * A Callable wrapper for DeletePolicy that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeletePolicyRequestT = Model::DeletePolicyRequest>
        Model::DeletePolicyOutcomeCallable DeletePolicyCallable(const DeletePolicyRequestT& request) const
        {
            return SubmitCallable(&AutoScalingClient::DeletePolicy, request);
        }

        /**
         * An Async wrapper for DeletePolicy that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeletePolicyRequestT = Model::DeletePolicyRequest>
        void DeletePolicyAsync(const DeletePolicyRequestT& request, const DeletePolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AutoScalingClient::DeletePolicy, request, handler, context);
        }

        /**
         * <p>Deletes the specified scheduled action.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/autoscaling-2011-01-01/DeleteScheduledAction">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteScheduledActionOutcome DeleteScheduledAction(const Model::DeleteScheduledActionRequest& request) const;

        /**
         * A Callable wrapper for DeleteScheduledAction that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteScheduledActionRequestT = Model::DeleteScheduledActionRequest>
        Model::DeleteScheduledActionOutcomeCallable DeleteScheduledActionCallable(const DeleteScheduledActionRequestT& request) const
        {
            return SubmitCallable(&AutoScalingClient::DeleteScheduledAction, request);
        }

        /**
         * An Async wrapper for DeleteScheduledAction that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteScheduledActionRequestT = Model::DeleteScheduledActionRequest>
        void DeleteScheduledActionAsync(const DeleteScheduledActionRequestT& request, const DeleteScheduledActionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AutoScalingClient::DeleteScheduledAction, request, handler, context);
        }

        /**
         * <p>Deletes the specified tags.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/autoscaling-2011-01-01/DeleteTags">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteTagsOutcome DeleteTags(const Model::DeleteTagsRequest& request) const;

        /**
         * A Callable wrapper for DeleteTags that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteTagsRequestT = Model::DeleteTagsRequest>
        Model::DeleteTagsOutcomeCallable DeleteTagsCallable(const DeleteTagsRequestT& request) const
        {
            return SubmitCallable(&AutoScalingClient::DeleteTags, request);
        }

        /**
         * An Async wrapper for DeleteTags that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteTagsRequestT = Model::DeleteTagsRequest>
        void DeleteTagsAsync(const DeleteTagsRequestT& request, const DeleteTagsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AutoScalingClient::DeleteTags, request, handler, context);
        }

        /**
         * <p>Deletes the warm pool for the specified Auto Scaling group.</p> <p>For more
         * information, see <a
         * href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/ec2-auto-scaling-warm-pools.html">Warm
         * pools for Amazon EC2 Auto Scaling</a> in the <i>Amazon EC2 Auto Scaling User
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/autoscaling-2011-01-01/DeleteWarmPool">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteWarmPoolOutcome DeleteWarmPool(const Model::DeleteWarmPoolRequest& request) const;

        /**
         * A Callable wrapper for DeleteWarmPool that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteWarmPoolRequestT = Model::DeleteWarmPoolRequest>
        Model::DeleteWarmPoolOutcomeCallable DeleteWarmPoolCallable(const DeleteWarmPoolRequestT& request) const
        {
            return SubmitCallable(&AutoScalingClient::DeleteWarmPool, request);
        }

        /**
         * An Async wrapper for DeleteWarmPool that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteWarmPoolRequestT = Model::DeleteWarmPoolRequest>
        void DeleteWarmPoolAsync(const DeleteWarmPoolRequestT& request, const DeleteWarmPoolResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AutoScalingClient::DeleteWarmPool, request, handler, context);
        }

        /**
         * <p>Describes the current Amazon EC2 Auto Scaling resource quotas for your
         * account.</p> <p>When you establish an Amazon Web Services account, the account
         * has initial quotas on the maximum number of Auto Scaling groups and launch
         * configurations that you can create in a given Region. For more information, see
         * <a
         * href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/ec2-auto-scaling-quotas.html">Quotas
         * for Amazon EC2 Auto Scaling</a> in the <i>Amazon EC2 Auto Scaling User
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/autoscaling-2011-01-01/DescribeAccountLimits">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeAccountLimitsOutcome DescribeAccountLimits(const Model::DescribeAccountLimitsRequest& request) const;

        /**
         * A Callable wrapper for DescribeAccountLimits that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeAccountLimitsRequestT = Model::DescribeAccountLimitsRequest>
        Model::DescribeAccountLimitsOutcomeCallable DescribeAccountLimitsCallable(const DescribeAccountLimitsRequestT& request) const
        {
            return SubmitCallable(&AutoScalingClient::DescribeAccountLimits, request);
        }

        /**
         * An Async wrapper for DescribeAccountLimits that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeAccountLimitsRequestT = Model::DescribeAccountLimitsRequest>
        void DescribeAccountLimitsAsync(const DescribeAccountLimitsRequestT& request, const DescribeAccountLimitsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AutoScalingClient::DescribeAccountLimits, request, handler, context);
        }

        /**
         * <p>Describes the available adjustment types for step scaling and simple scaling
         * policies.</p> <p>The following adjustment types are supported:</p> <ul> <li> <p>
         * <code>ChangeInCapacity</code> </p> </li> <li> <p> <code>ExactCapacity</code>
         * </p> </li> <li> <p> <code>PercentChangeInCapacity</code> </p> </li>
         * </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/autoscaling-2011-01-01/DescribeAdjustmentTypes">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeAdjustmentTypesOutcome DescribeAdjustmentTypes(const Model::DescribeAdjustmentTypesRequest& request) const;

        /**
         * A Callable wrapper for DescribeAdjustmentTypes that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeAdjustmentTypesRequestT = Model::DescribeAdjustmentTypesRequest>
        Model::DescribeAdjustmentTypesOutcomeCallable DescribeAdjustmentTypesCallable(const DescribeAdjustmentTypesRequestT& request) const
        {
            return SubmitCallable(&AutoScalingClient::DescribeAdjustmentTypes, request);
        }

        /**
         * An Async wrapper for DescribeAdjustmentTypes that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeAdjustmentTypesRequestT = Model::DescribeAdjustmentTypesRequest>
        void DescribeAdjustmentTypesAsync(const DescribeAdjustmentTypesRequestT& request, const DescribeAdjustmentTypesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AutoScalingClient::DescribeAdjustmentTypes, request, handler, context);
        }

        /**
         * <p>Gets information about the Auto Scaling groups in the account and Region.</p>
         * <p>If you specify Auto Scaling group names, the output includes information for
         * only the specified Auto Scaling groups. If you specify filters, the output
         * includes information for only those Auto Scaling groups that meet the filter
         * criteria. If you do not specify group names or filters, the output includes
         * information for all Auto Scaling groups. </p> <p>This operation also returns
         * information about instances in Auto Scaling groups. To retrieve information
         * about the instances in a warm pool, you must call the <a>DescribeWarmPool</a>
         * API. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/autoscaling-2011-01-01/DescribeAutoScalingGroups">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeAutoScalingGroupsOutcome DescribeAutoScalingGroups(const Model::DescribeAutoScalingGroupsRequest& request) const;

        /**
         * A Callable wrapper for DescribeAutoScalingGroups that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeAutoScalingGroupsRequestT = Model::DescribeAutoScalingGroupsRequest>
        Model::DescribeAutoScalingGroupsOutcomeCallable DescribeAutoScalingGroupsCallable(const DescribeAutoScalingGroupsRequestT& request) const
        {
            return SubmitCallable(&AutoScalingClient::DescribeAutoScalingGroups, request);
        }

        /**
         * An Async wrapper for DescribeAutoScalingGroups that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeAutoScalingGroupsRequestT = Model::DescribeAutoScalingGroupsRequest>
        void DescribeAutoScalingGroupsAsync(const DescribeAutoScalingGroupsRequestT& request, const DescribeAutoScalingGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AutoScalingClient::DescribeAutoScalingGroups, request, handler, context);
        }

        /**
         * <p>Gets information about the Auto Scaling instances in the account and
         * Region.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/autoscaling-2011-01-01/DescribeAutoScalingInstances">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeAutoScalingInstancesOutcome DescribeAutoScalingInstances(const Model::DescribeAutoScalingInstancesRequest& request) const;

        /**
         * A Callable wrapper for DescribeAutoScalingInstances that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeAutoScalingInstancesRequestT = Model::DescribeAutoScalingInstancesRequest>
        Model::DescribeAutoScalingInstancesOutcomeCallable DescribeAutoScalingInstancesCallable(const DescribeAutoScalingInstancesRequestT& request) const
        {
            return SubmitCallable(&AutoScalingClient::DescribeAutoScalingInstances, request);
        }

        /**
         * An Async wrapper for DescribeAutoScalingInstances that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeAutoScalingInstancesRequestT = Model::DescribeAutoScalingInstancesRequest>
        void DescribeAutoScalingInstancesAsync(const DescribeAutoScalingInstancesRequestT& request, const DescribeAutoScalingInstancesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AutoScalingClient::DescribeAutoScalingInstances, request, handler, context);
        }

        /**
         * <p>Describes the notification types that are supported by Amazon EC2 Auto
         * Scaling.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/autoscaling-2011-01-01/DescribeAutoScalingNotificationTypes">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeAutoScalingNotificationTypesOutcome DescribeAutoScalingNotificationTypes(const Model::DescribeAutoScalingNotificationTypesRequest& request) const;

        /**
         * A Callable wrapper for DescribeAutoScalingNotificationTypes that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeAutoScalingNotificationTypesRequestT = Model::DescribeAutoScalingNotificationTypesRequest>
        Model::DescribeAutoScalingNotificationTypesOutcomeCallable DescribeAutoScalingNotificationTypesCallable(const DescribeAutoScalingNotificationTypesRequestT& request) const
        {
            return SubmitCallable(&AutoScalingClient::DescribeAutoScalingNotificationTypes, request);
        }

        /**
         * An Async wrapper for DescribeAutoScalingNotificationTypes that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeAutoScalingNotificationTypesRequestT = Model::DescribeAutoScalingNotificationTypesRequest>
        void DescribeAutoScalingNotificationTypesAsync(const DescribeAutoScalingNotificationTypesRequestT& request, const DescribeAutoScalingNotificationTypesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AutoScalingClient::DescribeAutoScalingNotificationTypes, request, handler, context);
        }

        /**
         * <p>Gets information about the instance refreshes for the specified Auto Scaling
         * group from the previous six weeks.</p> <p>This operation is part of the <a
         * href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/asg-instance-refresh.html">instance
         * refresh feature</a> in Amazon EC2 Auto Scaling, which helps you update instances
         * in your Auto Scaling group after you make configuration changes.</p> <p>To help
         * you determine the status of an instance refresh, Amazon EC2 Auto Scaling returns
         * information about the instance refreshes you previously initiated, including
         * their status, start time, end time, the percentage of the instance refresh that
         * is complete, and the number of instances remaining to update before the instance
         * refresh is complete. If a rollback is initiated while an instance refresh is in
         * progress, Amazon EC2 Auto Scaling also returns information about the rollback of
         * the instance refresh.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/autoscaling-2011-01-01/DescribeInstanceRefreshes">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeInstanceRefreshesOutcome DescribeInstanceRefreshes(const Model::DescribeInstanceRefreshesRequest& request) const;

        /**
         * A Callable wrapper for DescribeInstanceRefreshes that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeInstanceRefreshesRequestT = Model::DescribeInstanceRefreshesRequest>
        Model::DescribeInstanceRefreshesOutcomeCallable DescribeInstanceRefreshesCallable(const DescribeInstanceRefreshesRequestT& request) const
        {
            return SubmitCallable(&AutoScalingClient::DescribeInstanceRefreshes, request);
        }

        /**
         * An Async wrapper for DescribeInstanceRefreshes that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeInstanceRefreshesRequestT = Model::DescribeInstanceRefreshesRequest>
        void DescribeInstanceRefreshesAsync(const DescribeInstanceRefreshesRequestT& request, const DescribeInstanceRefreshesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AutoScalingClient::DescribeInstanceRefreshes, request, handler, context);
        }

        /**
         * <p>Gets information about the launch configurations in the account and
         * Region.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/autoscaling-2011-01-01/DescribeLaunchConfigurations">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeLaunchConfigurationsOutcome DescribeLaunchConfigurations(const Model::DescribeLaunchConfigurationsRequest& request) const;

        /**
         * A Callable wrapper for DescribeLaunchConfigurations that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeLaunchConfigurationsRequestT = Model::DescribeLaunchConfigurationsRequest>
        Model::DescribeLaunchConfigurationsOutcomeCallable DescribeLaunchConfigurationsCallable(const DescribeLaunchConfigurationsRequestT& request) const
        {
            return SubmitCallable(&AutoScalingClient::DescribeLaunchConfigurations, request);
        }

        /**
         * An Async wrapper for DescribeLaunchConfigurations that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeLaunchConfigurationsRequestT = Model::DescribeLaunchConfigurationsRequest>
        void DescribeLaunchConfigurationsAsync(const DescribeLaunchConfigurationsRequestT& request, const DescribeLaunchConfigurationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AutoScalingClient::DescribeLaunchConfigurations, request, handler, context);
        }

        /**
         * <p>Describes the available types of lifecycle hooks.</p> <p>The following hook
         * types are supported:</p> <ul> <li> <p>
         * <code>autoscaling:EC2_INSTANCE_LAUNCHING</code> </p> </li> <li> <p>
         * <code>autoscaling:EC2_INSTANCE_TERMINATING</code> </p> </li> </ul><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/autoscaling-2011-01-01/DescribeLifecycleHookTypes">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeLifecycleHookTypesOutcome DescribeLifecycleHookTypes(const Model::DescribeLifecycleHookTypesRequest& request) const;

        /**
         * A Callable wrapper for DescribeLifecycleHookTypes that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeLifecycleHookTypesRequestT = Model::DescribeLifecycleHookTypesRequest>
        Model::DescribeLifecycleHookTypesOutcomeCallable DescribeLifecycleHookTypesCallable(const DescribeLifecycleHookTypesRequestT& request) const
        {
            return SubmitCallable(&AutoScalingClient::DescribeLifecycleHookTypes, request);
        }

        /**
         * An Async wrapper for DescribeLifecycleHookTypes that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeLifecycleHookTypesRequestT = Model::DescribeLifecycleHookTypesRequest>
        void DescribeLifecycleHookTypesAsync(const DescribeLifecycleHookTypesRequestT& request, const DescribeLifecycleHookTypesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AutoScalingClient::DescribeLifecycleHookTypes, request, handler, context);
        }

        /**
         * <p>Gets information about the lifecycle hooks for the specified Auto Scaling
         * group.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/autoscaling-2011-01-01/DescribeLifecycleHooks">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeLifecycleHooksOutcome DescribeLifecycleHooks(const Model::DescribeLifecycleHooksRequest& request) const;

        /**
         * A Callable wrapper for DescribeLifecycleHooks that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeLifecycleHooksRequestT = Model::DescribeLifecycleHooksRequest>
        Model::DescribeLifecycleHooksOutcomeCallable DescribeLifecycleHooksCallable(const DescribeLifecycleHooksRequestT& request) const
        {
            return SubmitCallable(&AutoScalingClient::DescribeLifecycleHooks, request);
        }

        /**
         * An Async wrapper for DescribeLifecycleHooks that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeLifecycleHooksRequestT = Model::DescribeLifecycleHooksRequest>
        void DescribeLifecycleHooksAsync(const DescribeLifecycleHooksRequestT& request, const DescribeLifecycleHooksResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AutoScalingClient::DescribeLifecycleHooks, request, handler, context);
        }

        /**
         *  <p>This API operation is superseded by <a>DescribeTrafficSources</a>,
         * which can describe multiple traffic sources types. We recommend using
         * <code>DetachTrafficSources</code> to simplify how you manage traffic sources.
         * However, we continue to support <code>DescribeLoadBalancerTargetGroups</code>.
         * You can use both the original <code>DescribeLoadBalancerTargetGroups</code> API
         * operation and <code>DescribeTrafficSources</code> on the same Auto Scaling
         * group.</p>  <p>Gets information about the Elastic Load Balancing target
         * groups for the specified Auto Scaling group.</p> <p>To determine the attachment
         * status of the target group, use the <code>State</code> element in the response.
         * When you attach a target group to an Auto Scaling group, the initial
         * <code>State</code> value is <code>Adding</code>. The state transitions to
         * <code>Added</code> after all Auto Scaling instances are registered with the
         * target group. If Elastic Load Balancing health checks are enabled for the Auto
         * Scaling group, the state transitions to <code>InService</code> after at least
         * one Auto Scaling instance passes the health check. When the target group is in
         * the <code>InService</code> state, Amazon EC2 Auto Scaling can terminate and
         * replace any instances that are reported as unhealthy. If no registered instances
         * pass the health checks, the target group doesn't enter the
         * <code>InService</code> state. </p> <p>Target groups also have an
         * <code>InService</code> state if you attach them in the
         * <a>CreateAutoScalingGroup</a> API call. If your target group state is
         * <code>InService</code>, but it is not working properly, check the scaling
         * activities by calling <a>DescribeScalingActivities</a> and take any corrective
         * actions necessary.</p> <p>For help with failed health checks, see <a
         * href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/ts-as-healthchecks.html">Troubleshooting
         * Amazon EC2 Auto Scaling: Health checks</a> in the <i>Amazon EC2 Auto Scaling
         * User Guide</i>. For more information, see <a
         * href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/autoscaling-load-balancer.html">Use
         * Elastic Load Balancing to distribute traffic across the instances in your Auto
         * Scaling group</a> in the <i>Amazon EC2 Auto Scaling User Guide</i>. </p> 
         * <p>You can use this operation to describe target groups that were attached by
         * using <a>AttachLoadBalancerTargetGroups</a>, but not for target groups that were
         * attached by using <a>AttachTrafficSources</a>.</p> <p><h3>See Also:</h3> 
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/autoscaling-2011-01-01/DescribeLoadBalancerTargetGroups">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeLoadBalancerTargetGroupsOutcome DescribeLoadBalancerTargetGroups(const Model::DescribeLoadBalancerTargetGroupsRequest& request) const;

        /**
         * A Callable wrapper for DescribeLoadBalancerTargetGroups that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeLoadBalancerTargetGroupsRequestT = Model::DescribeLoadBalancerTargetGroupsRequest>
        Model::DescribeLoadBalancerTargetGroupsOutcomeCallable DescribeLoadBalancerTargetGroupsCallable(const DescribeLoadBalancerTargetGroupsRequestT& request) const
        {
            return SubmitCallable(&AutoScalingClient::DescribeLoadBalancerTargetGroups, request);
        }

        /**
         * An Async wrapper for DescribeLoadBalancerTargetGroups that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeLoadBalancerTargetGroupsRequestT = Model::DescribeLoadBalancerTargetGroupsRequest>
        void DescribeLoadBalancerTargetGroupsAsync(const DescribeLoadBalancerTargetGroupsRequestT& request, const DescribeLoadBalancerTargetGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AutoScalingClient::DescribeLoadBalancerTargetGroups, request, handler, context);
        }

        /**
         *  <p>This API operation is superseded by <a>DescribeTrafficSources</a>,
         * which can describe multiple traffic sources types. We recommend using
         * <code>DescribeTrafficSources</code> to simplify how you manage traffic sources.
         * However, we continue to support <code>DescribeLoadBalancers</code>. You can use
         * both the original <code>DescribeLoadBalancers</code> API operation and
         * <code>DescribeTrafficSources</code> on the same Auto Scaling group.</p> 
         * <p>Gets information about the load balancers for the specified Auto Scaling
         * group.</p> <p>This operation describes only Classic Load Balancers. If you have
         * Application Load Balancers, Network Load Balancers, or Gateway Load Balancers,
         * use the <a>DescribeLoadBalancerTargetGroups</a> API instead.</p> <p>To determine
         * the attachment status of the load balancer, use the <code>State</code> element
         * in the response. When you attach a load balancer to an Auto Scaling group, the
         * initial <code>State</code> value is <code>Adding</code>. The state transitions
         * to <code>Added</code> after all Auto Scaling instances are registered with the
         * load balancer. If Elastic Load Balancing health checks are enabled for the Auto
         * Scaling group, the state transitions to <code>InService</code> after at least
         * one Auto Scaling instance passes the health check. When the load balancer is in
         * the <code>InService</code> state, Amazon EC2 Auto Scaling can terminate and
         * replace any instances that are reported as unhealthy. If no registered instances
         * pass the health checks, the load balancer doesn't enter the
         * <code>InService</code> state. </p> <p>Load balancers also have an
         * <code>InService</code> state if you attach them in the
         * <a>CreateAutoScalingGroup</a> API call. If your load balancer state is
         * <code>InService</code>, but it is not working properly, check the scaling
         * activities by calling <a>DescribeScalingActivities</a> and take any corrective
         * actions necessary.</p> <p>For help with failed health checks, see <a
         * href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/ts-as-healthchecks.html">Troubleshooting
         * Amazon EC2 Auto Scaling: Health checks</a> in the <i>Amazon EC2 Auto Scaling
         * User Guide</i>. For more information, see <a
         * href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/autoscaling-load-balancer.html">Use
         * Elastic Load Balancing to distribute traffic across the instances in your Auto
         * Scaling group</a> in the <i>Amazon EC2 Auto Scaling User Guide</i>.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/autoscaling-2011-01-01/DescribeLoadBalancers">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeLoadBalancersOutcome DescribeLoadBalancers(const Model::DescribeLoadBalancersRequest& request) const;

        /**
         * A Callable wrapper for DescribeLoadBalancers that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeLoadBalancersRequestT = Model::DescribeLoadBalancersRequest>
        Model::DescribeLoadBalancersOutcomeCallable DescribeLoadBalancersCallable(const DescribeLoadBalancersRequestT& request) const
        {
            return SubmitCallable(&AutoScalingClient::DescribeLoadBalancers, request);
        }

        /**
         * An Async wrapper for DescribeLoadBalancers that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeLoadBalancersRequestT = Model::DescribeLoadBalancersRequest>
        void DescribeLoadBalancersAsync(const DescribeLoadBalancersRequestT& request, const DescribeLoadBalancersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AutoScalingClient::DescribeLoadBalancers, request, handler, context);
        }

        /**
         * <p>Describes the available CloudWatch metrics for Amazon EC2 Auto
         * Scaling.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/autoscaling-2011-01-01/DescribeMetricCollectionTypes">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeMetricCollectionTypesOutcome DescribeMetricCollectionTypes(const Model::DescribeMetricCollectionTypesRequest& request) const;

        /**
         * A Callable wrapper for DescribeMetricCollectionTypes that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeMetricCollectionTypesRequestT = Model::DescribeMetricCollectionTypesRequest>
        Model::DescribeMetricCollectionTypesOutcomeCallable DescribeMetricCollectionTypesCallable(const DescribeMetricCollectionTypesRequestT& request) const
        {
            return SubmitCallable(&AutoScalingClient::DescribeMetricCollectionTypes, request);
        }

        /**
         * An Async wrapper for DescribeMetricCollectionTypes that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeMetricCollectionTypesRequestT = Model::DescribeMetricCollectionTypesRequest>
        void DescribeMetricCollectionTypesAsync(const DescribeMetricCollectionTypesRequestT& request, const DescribeMetricCollectionTypesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AutoScalingClient::DescribeMetricCollectionTypes, request, handler, context);
        }

        /**
         * <p>Gets information about the Amazon SNS notifications that are configured for
         * one or more Auto Scaling groups.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/autoscaling-2011-01-01/DescribeNotificationConfigurations">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeNotificationConfigurationsOutcome DescribeNotificationConfigurations(const Model::DescribeNotificationConfigurationsRequest& request) const;

        /**
         * A Callable wrapper for DescribeNotificationConfigurations that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeNotificationConfigurationsRequestT = Model::DescribeNotificationConfigurationsRequest>
        Model::DescribeNotificationConfigurationsOutcomeCallable DescribeNotificationConfigurationsCallable(const DescribeNotificationConfigurationsRequestT& request) const
        {
            return SubmitCallable(&AutoScalingClient::DescribeNotificationConfigurations, request);
        }

        /**
         * An Async wrapper for DescribeNotificationConfigurations that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeNotificationConfigurationsRequestT = Model::DescribeNotificationConfigurationsRequest>
        void DescribeNotificationConfigurationsAsync(const DescribeNotificationConfigurationsRequestT& request, const DescribeNotificationConfigurationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AutoScalingClient::DescribeNotificationConfigurations, request, handler, context);
        }

        /**
         * <p>Gets information about the scaling policies in the account and
         * Region.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/autoscaling-2011-01-01/DescribePolicies">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribePoliciesOutcome DescribePolicies(const Model::DescribePoliciesRequest& request) const;

        /**
         * A Callable wrapper for DescribePolicies that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribePoliciesRequestT = Model::DescribePoliciesRequest>
        Model::DescribePoliciesOutcomeCallable DescribePoliciesCallable(const DescribePoliciesRequestT& request) const
        {
            return SubmitCallable(&AutoScalingClient::DescribePolicies, request);
        }

        /**
         * An Async wrapper for DescribePolicies that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribePoliciesRequestT = Model::DescribePoliciesRequest>
        void DescribePoliciesAsync(const DescribePoliciesRequestT& request, const DescribePoliciesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AutoScalingClient::DescribePolicies, request, handler, context);
        }

        /**
         * <p>Gets information about the scaling activities in the account and Region.</p>
         * <p>When scaling events occur, you see a record of the scaling activity in the
         * scaling activities. For more information, see <a
         * href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/as-verify-scaling-activity.html">Verifying
         * a scaling activity for an Auto Scaling group</a> in the <i>Amazon EC2 Auto
         * Scaling User Guide</i>.</p> <p>If the scaling event succeeds, the value of the
         * <code>StatusCode</code> element in the response is <code>Successful</code>. If
         * an attempt to launch instances failed, the <code>StatusCode</code> value is
         * <code>Failed</code> or <code>Cancelled</code> and the <code>StatusMessage</code>
         * element in the response indicates the cause of the failure. For help
         * interpreting the <code>StatusMessage</code>, see <a
         * href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/CHAP_Troubleshooting.html">Troubleshooting
         * Amazon EC2 Auto Scaling</a> in the <i>Amazon EC2 Auto Scaling User Guide</i>.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/autoscaling-2011-01-01/DescribeScalingActivities">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeScalingActivitiesOutcome DescribeScalingActivities(const Model::DescribeScalingActivitiesRequest& request) const;

        /**
         * A Callable wrapper for DescribeScalingActivities that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeScalingActivitiesRequestT = Model::DescribeScalingActivitiesRequest>
        Model::DescribeScalingActivitiesOutcomeCallable DescribeScalingActivitiesCallable(const DescribeScalingActivitiesRequestT& request) const
        {
            return SubmitCallable(&AutoScalingClient::DescribeScalingActivities, request);
        }

        /**
         * An Async wrapper for DescribeScalingActivities that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeScalingActivitiesRequestT = Model::DescribeScalingActivitiesRequest>
        void DescribeScalingActivitiesAsync(const DescribeScalingActivitiesRequestT& request, const DescribeScalingActivitiesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AutoScalingClient::DescribeScalingActivities, request, handler, context);
        }

        /**
         * <p>Describes the scaling process types for use with the <a>ResumeProcesses</a>
         * and <a>SuspendProcesses</a> APIs.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/autoscaling-2011-01-01/DescribeScalingProcessTypes">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeScalingProcessTypesOutcome DescribeScalingProcessTypes(const Model::DescribeScalingProcessTypesRequest& request) const;

        /**
         * A Callable wrapper for DescribeScalingProcessTypes that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeScalingProcessTypesRequestT = Model::DescribeScalingProcessTypesRequest>
        Model::DescribeScalingProcessTypesOutcomeCallable DescribeScalingProcessTypesCallable(const DescribeScalingProcessTypesRequestT& request) const
        {
            return SubmitCallable(&AutoScalingClient::DescribeScalingProcessTypes, request);
        }

        /**
         * An Async wrapper for DescribeScalingProcessTypes that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeScalingProcessTypesRequestT = Model::DescribeScalingProcessTypesRequest>
        void DescribeScalingProcessTypesAsync(const DescribeScalingProcessTypesRequestT& request, const DescribeScalingProcessTypesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AutoScalingClient::DescribeScalingProcessTypes, request, handler, context);
        }

        /**
         * <p>Gets information about the scheduled actions that haven't run or that have
         * not reached their end time.</p> <p>To describe the scaling activities for
         * scheduled actions that have already run, call the
         * <a>DescribeScalingActivities</a> API.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/autoscaling-2011-01-01/DescribeScheduledActions">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeScheduledActionsOutcome DescribeScheduledActions(const Model::DescribeScheduledActionsRequest& request) const;

        /**
         * A Callable wrapper for DescribeScheduledActions that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeScheduledActionsRequestT = Model::DescribeScheduledActionsRequest>
        Model::DescribeScheduledActionsOutcomeCallable DescribeScheduledActionsCallable(const DescribeScheduledActionsRequestT& request) const
        {
            return SubmitCallable(&AutoScalingClient::DescribeScheduledActions, request);
        }

        /**
         * An Async wrapper for DescribeScheduledActions that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeScheduledActionsRequestT = Model::DescribeScheduledActionsRequest>
        void DescribeScheduledActionsAsync(const DescribeScheduledActionsRequestT& request, const DescribeScheduledActionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AutoScalingClient::DescribeScheduledActions, request, handler, context);
        }

        /**
         * <p>Describes the specified tags.</p> <p>You can use filters to limit the
         * results. For example, you can query for the tags for a specific Auto Scaling
         * group. You can specify multiple values for a filter. A tag must match at least
         * one of the specified values for it to be included in the results.</p> <p>You can
         * also specify multiple filters. The result includes information for a particular
         * tag only if it matches all the filters. If there's no match, no special message
         * is returned.</p> <p>For more information, see <a
         * href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/ec2-auto-scaling-tagging.html">Tag
         * Auto Scaling groups and instances</a> in the <i>Amazon EC2 Auto Scaling User
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/autoscaling-2011-01-01/DescribeTags">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeTagsOutcome DescribeTags(const Model::DescribeTagsRequest& request) const;

        /**
         * A Callable wrapper for DescribeTags that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeTagsRequestT = Model::DescribeTagsRequest>
        Model::DescribeTagsOutcomeCallable DescribeTagsCallable(const DescribeTagsRequestT& request) const
        {
            return SubmitCallable(&AutoScalingClient::DescribeTags, request);
        }

        /**
         * An Async wrapper for DescribeTags that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeTagsRequestT = Model::DescribeTagsRequest>
        void DescribeTagsAsync(const DescribeTagsRequestT& request, const DescribeTagsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AutoScalingClient::DescribeTags, request, handler, context);
        }

        /**
         * <p>Describes the termination policies supported by Amazon EC2 Auto Scaling.</p>
         * <p>For more information, see <a
         * href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/ec2-auto-scaling-termination-policies.html">Work
         * with Amazon EC2 Auto Scaling termination policies</a> in the <i>Amazon EC2 Auto
         * Scaling User Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/autoscaling-2011-01-01/DescribeTerminationPolicyTypes">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeTerminationPolicyTypesOutcome DescribeTerminationPolicyTypes(const Model::DescribeTerminationPolicyTypesRequest& request) const;

        /**
         * A Callable wrapper for DescribeTerminationPolicyTypes that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeTerminationPolicyTypesRequestT = Model::DescribeTerminationPolicyTypesRequest>
        Model::DescribeTerminationPolicyTypesOutcomeCallable DescribeTerminationPolicyTypesCallable(const DescribeTerminationPolicyTypesRequestT& request) const
        {
            return SubmitCallable(&AutoScalingClient::DescribeTerminationPolicyTypes, request);
        }

        /**
         * An Async wrapper for DescribeTerminationPolicyTypes that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeTerminationPolicyTypesRequestT = Model::DescribeTerminationPolicyTypesRequest>
        void DescribeTerminationPolicyTypesAsync(const DescribeTerminationPolicyTypesRequestT& request, const DescribeTerminationPolicyTypesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AutoScalingClient::DescribeTerminationPolicyTypes, request, handler, context);
        }

        /**
         * <p>Gets information about the traffic sources for the specified Auto Scaling
         * group.</p> <p>You can optionally provide a traffic source type. If you provide a
         * traffic source type, then the results only include that traffic source type.</p>
         * <p>If you do not provide a traffic source type, then the results include all the
         * traffic sources for the specified Auto Scaling group. </p><p><h3>See Also:</h3> 
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/autoscaling-2011-01-01/DescribeTrafficSources">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeTrafficSourcesOutcome DescribeTrafficSources(const Model::DescribeTrafficSourcesRequest& request) const;

        /**
         * A Callable wrapper for DescribeTrafficSources that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeTrafficSourcesRequestT = Model::DescribeTrafficSourcesRequest>
        Model::DescribeTrafficSourcesOutcomeCallable DescribeTrafficSourcesCallable(const DescribeTrafficSourcesRequestT& request) const
        {
            return SubmitCallable(&AutoScalingClient::DescribeTrafficSources, request);
        }

        /**
         * An Async wrapper for DescribeTrafficSources that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeTrafficSourcesRequestT = Model::DescribeTrafficSourcesRequest>
        void DescribeTrafficSourcesAsync(const DescribeTrafficSourcesRequestT& request, const DescribeTrafficSourcesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AutoScalingClient::DescribeTrafficSources, request, handler, context);
        }

        /**
         * <p>Gets information about a warm pool and its instances.</p> <p>For more
         * information, see <a
         * href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/ec2-auto-scaling-warm-pools.html">Warm
         * pools for Amazon EC2 Auto Scaling</a> in the <i>Amazon EC2 Auto Scaling User
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/autoscaling-2011-01-01/DescribeWarmPool">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeWarmPoolOutcome DescribeWarmPool(const Model::DescribeWarmPoolRequest& request) const;

        /**
         * A Callable wrapper for DescribeWarmPool that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeWarmPoolRequestT = Model::DescribeWarmPoolRequest>
        Model::DescribeWarmPoolOutcomeCallable DescribeWarmPoolCallable(const DescribeWarmPoolRequestT& request) const
        {
            return SubmitCallable(&AutoScalingClient::DescribeWarmPool, request);
        }

        /**
         * An Async wrapper for DescribeWarmPool that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeWarmPoolRequestT = Model::DescribeWarmPoolRequest>
        void DescribeWarmPoolAsync(const DescribeWarmPoolRequestT& request, const DescribeWarmPoolResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AutoScalingClient::DescribeWarmPool, request, handler, context);
        }

        /**
         * <p>Removes one or more instances from the specified Auto Scaling group.</p>
         * <p>After the instances are detached, you can manage them independent of the Auto
         * Scaling group.</p> <p>If you do not specify the option to decrement the desired
         * capacity, Amazon EC2 Auto Scaling launches instances to replace the ones that
         * are detached.</p> <p>If there is a Classic Load Balancer attached to the Auto
         * Scaling group, the instances are deregistered from the load balancer. If there
         * are target groups attached to the Auto Scaling group, the instances are
         * deregistered from the target groups.</p> <p>For more information, see <a
         * href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/detach-instance-asg.html">Detach
         * EC2 instances from your Auto Scaling group</a> in the <i>Amazon EC2 Auto Scaling
         * User Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/autoscaling-2011-01-01/DetachInstances">AWS
         * API Reference</a></p>
         */
        virtual Model::DetachInstancesOutcome DetachInstances(const Model::DetachInstancesRequest& request) const;

        /**
         * A Callable wrapper for DetachInstances that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DetachInstancesRequestT = Model::DetachInstancesRequest>
        Model::DetachInstancesOutcomeCallable DetachInstancesCallable(const DetachInstancesRequestT& request) const
        {
            return SubmitCallable(&AutoScalingClient::DetachInstances, request);
        }

        /**
         * An Async wrapper for DetachInstances that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DetachInstancesRequestT = Model::DetachInstancesRequest>
        void DetachInstancesAsync(const DetachInstancesRequestT& request, const DetachInstancesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AutoScalingClient::DetachInstances, request, handler, context);
        }

        /**
         *  <p>This API operation is superseded by <a>DetachTrafficSources</a>, which
         * can detach multiple traffic sources types. We recommend using
         * <code>DetachTrafficSources</code> to simplify how you manage traffic sources.
         * However, we continue to support <code>DetachLoadBalancerTargetGroups</code>. You
         * can use both the original <code>DetachLoadBalancerTargetGroups</code> API
         * operation and <code>DetachTrafficSources</code> on the same Auto Scaling
         * group.</p>  <p>Detaches one or more target groups from the specified Auto
         * Scaling group.</p> <p>When you detach a target group, it enters the
         * <code>Removing</code> state while deregistering the instances in the group. When
         * all instances are deregistered, then you can no longer describe the target group
         * using the <a>DescribeLoadBalancerTargetGroups</a> API call. The instances remain
         * running.</p>  <p>You can use this operation to detach target groups that
         * were attached by using <a>AttachLoadBalancerTargetGroups</a>, but not for target
         * groups that were attached by using <a>AttachTrafficSources</a>.</p>
         * <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/autoscaling-2011-01-01/DetachLoadBalancerTargetGroups">AWS
         * API Reference</a></p>
         */
        virtual Model::DetachLoadBalancerTargetGroupsOutcome DetachLoadBalancerTargetGroups(const Model::DetachLoadBalancerTargetGroupsRequest& request) const;

        /**
         * A Callable wrapper for DetachLoadBalancerTargetGroups that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DetachLoadBalancerTargetGroupsRequestT = Model::DetachLoadBalancerTargetGroupsRequest>
        Model::DetachLoadBalancerTargetGroupsOutcomeCallable DetachLoadBalancerTargetGroupsCallable(const DetachLoadBalancerTargetGroupsRequestT& request) const
        {
            return SubmitCallable(&AutoScalingClient::DetachLoadBalancerTargetGroups, request);
        }

        /**
         * An Async wrapper for DetachLoadBalancerTargetGroups that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DetachLoadBalancerTargetGroupsRequestT = Model::DetachLoadBalancerTargetGroupsRequest>
        void DetachLoadBalancerTargetGroupsAsync(const DetachLoadBalancerTargetGroupsRequestT& request, const DetachLoadBalancerTargetGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AutoScalingClient::DetachLoadBalancerTargetGroups, request, handler, context);
        }

        /**
         *  <p>This API operation is superseded by <a>DetachTrafficSources</a>, which
         * can detach multiple traffic sources types. We recommend using
         * <code>DetachTrafficSources</code> to simplify how you manage traffic sources.
         * However, we continue to support <code>DetachLoadBalancers</code>. You can use
         * both the original <code>DetachLoadBalancers</code> API operation and
         * <code>DetachTrafficSources</code> on the same Auto Scaling group.</p> 
         * <p>Detaches one or more Classic Load Balancers from the specified Auto Scaling
         * group.</p> <p>This operation detaches only Classic Load Balancers. If you have
         * Application Load Balancers, Network Load Balancers, or Gateway Load Balancers,
         * use the <a>DetachLoadBalancerTargetGroups</a> API instead.</p> <p>When you
         * detach a load balancer, it enters the <code>Removing</code> state while
         * deregistering the instances in the group. When all instances are deregistered,
         * then you can no longer describe the load balancer using the
         * <a>DescribeLoadBalancers</a> API call. The instances remain
         * running.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/autoscaling-2011-01-01/DetachLoadBalancers">AWS
         * API Reference</a></p>
         */
        virtual Model::DetachLoadBalancersOutcome DetachLoadBalancers(const Model::DetachLoadBalancersRequest& request) const;

        /**
         * A Callable wrapper for DetachLoadBalancers that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DetachLoadBalancersRequestT = Model::DetachLoadBalancersRequest>
        Model::DetachLoadBalancersOutcomeCallable DetachLoadBalancersCallable(const DetachLoadBalancersRequestT& request) const
        {
            return SubmitCallable(&AutoScalingClient::DetachLoadBalancers, request);
        }

        /**
         * An Async wrapper for DetachLoadBalancers that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DetachLoadBalancersRequestT = Model::DetachLoadBalancersRequest>
        void DetachLoadBalancersAsync(const DetachLoadBalancersRequestT& request, const DetachLoadBalancersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AutoScalingClient::DetachLoadBalancers, request, handler, context);
        }

        /**
         * <p>Detaches one or more traffic sources from the specified Auto Scaling
         * group.</p> <p>When you detach a traffic source, it enters the
         * <code>Removing</code> state while deregistering the instances in the group. When
         * all instances are deregistered, then you can no longer describe the traffic
         * source using the <a>DescribeTrafficSources</a> API call. The instances continue
         * to run.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/autoscaling-2011-01-01/DetachTrafficSources">AWS
         * API Reference</a></p>
         */
        virtual Model::DetachTrafficSourcesOutcome DetachTrafficSources(const Model::DetachTrafficSourcesRequest& request) const;

        /**
         * A Callable wrapper for DetachTrafficSources that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DetachTrafficSourcesRequestT = Model::DetachTrafficSourcesRequest>
        Model::DetachTrafficSourcesOutcomeCallable DetachTrafficSourcesCallable(const DetachTrafficSourcesRequestT& request) const
        {
            return SubmitCallable(&AutoScalingClient::DetachTrafficSources, request);
        }

        /**
         * An Async wrapper for DetachTrafficSources that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DetachTrafficSourcesRequestT = Model::DetachTrafficSourcesRequest>
        void DetachTrafficSourcesAsync(const DetachTrafficSourcesRequestT& request, const DetachTrafficSourcesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AutoScalingClient::DetachTrafficSources, request, handler, context);
        }

        /**
         * <p>Disables group metrics collection for the specified Auto Scaling
         * group.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/autoscaling-2011-01-01/DisableMetricsCollection">AWS
         * API Reference</a></p>
         */
        virtual Model::DisableMetricsCollectionOutcome DisableMetricsCollection(const Model::DisableMetricsCollectionRequest& request) const;

        /**
         * A Callable wrapper for DisableMetricsCollection that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DisableMetricsCollectionRequestT = Model::DisableMetricsCollectionRequest>
        Model::DisableMetricsCollectionOutcomeCallable DisableMetricsCollectionCallable(const DisableMetricsCollectionRequestT& request) const
        {
            return SubmitCallable(&AutoScalingClient::DisableMetricsCollection, request);
        }

        /**
         * An Async wrapper for DisableMetricsCollection that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DisableMetricsCollectionRequestT = Model::DisableMetricsCollectionRequest>
        void DisableMetricsCollectionAsync(const DisableMetricsCollectionRequestT& request, const DisableMetricsCollectionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AutoScalingClient::DisableMetricsCollection, request, handler, context);
        }

        /**
         * <p>Enables group metrics collection for the specified Auto Scaling group.</p>
         * <p>You can use these metrics to track changes in an Auto Scaling group and to
         * set alarms on threshold values. You can view group metrics using the Amazon EC2
         * Auto Scaling console or the CloudWatch console. For more information, see <a
         * href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/ec2-auto-scaling-cloudwatch-monitoring.html">Monitor
         * CloudWatch metrics for your Auto Scaling groups and instances</a> in the
         * <i>Amazon EC2 Auto Scaling User Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/autoscaling-2011-01-01/EnableMetricsCollection">AWS
         * API Reference</a></p>
         */
        virtual Model::EnableMetricsCollectionOutcome EnableMetricsCollection(const Model::EnableMetricsCollectionRequest& request) const;

        /**
         * A Callable wrapper for EnableMetricsCollection that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename EnableMetricsCollectionRequestT = Model::EnableMetricsCollectionRequest>
        Model::EnableMetricsCollectionOutcomeCallable EnableMetricsCollectionCallable(const EnableMetricsCollectionRequestT& request) const
        {
            return SubmitCallable(&AutoScalingClient::EnableMetricsCollection, request);
        }

        /**
         * An Async wrapper for EnableMetricsCollection that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename EnableMetricsCollectionRequestT = Model::EnableMetricsCollectionRequest>
        void EnableMetricsCollectionAsync(const EnableMetricsCollectionRequestT& request, const EnableMetricsCollectionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AutoScalingClient::EnableMetricsCollection, request, handler, context);
        }

        /**
         * <p>Moves the specified instances into the standby state.</p> <p>If you choose to
         * decrement the desired capacity of the Auto Scaling group, the instances can
         * enter standby as long as the desired capacity of the Auto Scaling group after
         * the instances are placed into standby is equal to or greater than the minimum
         * capacity of the group.</p> <p>If you choose not to decrement the desired
         * capacity of the Auto Scaling group, the Auto Scaling group launches new
         * instances to replace the instances on standby.</p> <p>For more information, see
         * <a
         * href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/as-enter-exit-standby.html">Temporarily
         * removing instances from your Auto Scaling group</a> in the <i>Amazon EC2 Auto
         * Scaling User Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/autoscaling-2011-01-01/EnterStandby">AWS
         * API Reference</a></p>
         */
        virtual Model::EnterStandbyOutcome EnterStandby(const Model::EnterStandbyRequest& request) const;

        /**
         * A Callable wrapper for EnterStandby that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename EnterStandbyRequestT = Model::EnterStandbyRequest>
        Model::EnterStandbyOutcomeCallable EnterStandbyCallable(const EnterStandbyRequestT& request) const
        {
            return SubmitCallable(&AutoScalingClient::EnterStandby, request);
        }

        /**
         * An Async wrapper for EnterStandby that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename EnterStandbyRequestT = Model::EnterStandbyRequest>
        void EnterStandbyAsync(const EnterStandbyRequestT& request, const EnterStandbyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AutoScalingClient::EnterStandby, request, handler, context);
        }

        /**
         * <p>Executes the specified policy. This can be useful for testing the design of
         * your scaling policy.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/autoscaling-2011-01-01/ExecutePolicy">AWS
         * API Reference</a></p>
         */
        virtual Model::ExecutePolicyOutcome ExecutePolicy(const Model::ExecutePolicyRequest& request) const;

        /**
         * A Callable wrapper for ExecutePolicy that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ExecutePolicyRequestT = Model::ExecutePolicyRequest>
        Model::ExecutePolicyOutcomeCallable ExecutePolicyCallable(const ExecutePolicyRequestT& request) const
        {
            return SubmitCallable(&AutoScalingClient::ExecutePolicy, request);
        }

        /**
         * An Async wrapper for ExecutePolicy that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ExecutePolicyRequestT = Model::ExecutePolicyRequest>
        void ExecutePolicyAsync(const ExecutePolicyRequestT& request, const ExecutePolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AutoScalingClient::ExecutePolicy, request, handler, context);
        }

        /**
         * <p>Moves the specified instances out of the standby state.</p> <p>After you put
         * the instances back in service, the desired capacity is incremented.</p> <p>For
         * more information, see <a
         * href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/as-enter-exit-standby.html">Temporarily
         * removing instances from your Auto Scaling group</a> in the <i>Amazon EC2 Auto
         * Scaling User Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/autoscaling-2011-01-01/ExitStandby">AWS
         * API Reference</a></p>
         */
        virtual Model::ExitStandbyOutcome ExitStandby(const Model::ExitStandbyRequest& request) const;

        /**
         * A Callable wrapper for ExitStandby that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ExitStandbyRequestT = Model::ExitStandbyRequest>
        Model::ExitStandbyOutcomeCallable ExitStandbyCallable(const ExitStandbyRequestT& request) const
        {
            return SubmitCallable(&AutoScalingClient::ExitStandby, request);
        }

        /**
         * An Async wrapper for ExitStandby that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ExitStandbyRequestT = Model::ExitStandbyRequest>
        void ExitStandbyAsync(const ExitStandbyRequestT& request, const ExitStandbyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AutoScalingClient::ExitStandby, request, handler, context);
        }

        /**
         * <p>Retrieves the forecast data for a predictive scaling policy.</p> <p>Load
         * forecasts are predictions of the hourly load values using historical load data
         * from CloudWatch and an analysis of historical trends. Capacity forecasts are
         * represented as predicted values for the minimum capacity that is needed on an
         * hourly basis, based on the hourly load forecast.</p> <p>A minimum of 24 hours of
         * data is required to create the initial forecasts. However, having a full 14 days
         * of historical data results in more accurate forecasts.</p> <p>For more
         * information, see <a
         * href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/ec2-auto-scaling-predictive-scaling.html">Predictive
         * scaling for Amazon EC2 Auto Scaling</a> in the <i>Amazon EC2 Auto Scaling User
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/autoscaling-2011-01-01/GetPredictiveScalingForecast">AWS
         * API Reference</a></p>
         */
        virtual Model::GetPredictiveScalingForecastOutcome GetPredictiveScalingForecast(const Model::GetPredictiveScalingForecastRequest& request) const;

        /**
         * A Callable wrapper for GetPredictiveScalingForecast that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetPredictiveScalingForecastRequestT = Model::GetPredictiveScalingForecastRequest>
        Model::GetPredictiveScalingForecastOutcomeCallable GetPredictiveScalingForecastCallable(const GetPredictiveScalingForecastRequestT& request) const
        {
            return SubmitCallable(&AutoScalingClient::GetPredictiveScalingForecast, request);
        }

        /**
         * An Async wrapper for GetPredictiveScalingForecast that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetPredictiveScalingForecastRequestT = Model::GetPredictiveScalingForecastRequest>
        void GetPredictiveScalingForecastAsync(const GetPredictiveScalingForecastRequestT& request, const GetPredictiveScalingForecastResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AutoScalingClient::GetPredictiveScalingForecast, request, handler, context);
        }

        /**
         * <p>Creates or updates a lifecycle hook for the specified Auto Scaling group.</p>
         * <p>Lifecycle hooks let you create solutions that are aware of events in the Auto
         * Scaling instance lifecycle, and then perform a custom action on instances when
         * the corresponding lifecycle event occurs.</p> <p>This step is a part of the
         * procedure for adding a lifecycle hook to an Auto Scaling group:</p> <ol> <li>
         * <p>(Optional) Create a launch template or launch configuration with a user data
         * script that runs while an instance is in a wait state due to a lifecycle
         * hook.</p> </li> <li> <p>(Optional) Create a Lambda function and a rule that
         * allows Amazon EventBridge to invoke your Lambda function when an instance is put
         * into a wait state due to a lifecycle hook.</p> </li> <li> <p>(Optional) Create a
         * notification target and an IAM role. The target can be either an Amazon SQS
         * queue or an Amazon SNS topic. The role allows Amazon EC2 Auto Scaling to publish
         * lifecycle notifications to the target.</p> </li> <li> <p> <b>Create the
         * lifecycle hook. Specify whether the hook is used when the instances launch or
         * terminate.</b> </p> </li> <li> <p>If you need more time, record the lifecycle
         * action heartbeat to keep the instance in a wait state using the
         * <a>RecordLifecycleActionHeartbeat</a> API call.</p> </li> <li> <p>If you finish
         * before the timeout period ends, send a callback by using the
         * <a>CompleteLifecycleAction</a> API call.</p> </li> </ol> <p>For more
         * information, see <a
         * href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/lifecycle-hooks.html">Amazon
         * EC2 Auto Scaling lifecycle hooks</a> in the <i>Amazon EC2 Auto Scaling User
         * Guide</i>.</p> <p>If you exceed your maximum limit of lifecycle hooks, which by
         * default is 50 per Auto Scaling group, the call fails.</p> <p>You can view the
         * lifecycle hooks for an Auto Scaling group using the
         * <a>DescribeLifecycleHooks</a> API call. If you are no longer using a lifecycle
         * hook, you can delete it by calling the <a>DeleteLifecycleHook</a>
         * API.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/autoscaling-2011-01-01/PutLifecycleHook">AWS
         * API Reference</a></p>
         */
        virtual Model::PutLifecycleHookOutcome PutLifecycleHook(const Model::PutLifecycleHookRequest& request) const;

        /**
         * A Callable wrapper for PutLifecycleHook that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename PutLifecycleHookRequestT = Model::PutLifecycleHookRequest>
        Model::PutLifecycleHookOutcomeCallable PutLifecycleHookCallable(const PutLifecycleHookRequestT& request) const
        {
            return SubmitCallable(&AutoScalingClient::PutLifecycleHook, request);
        }

        /**
         * An Async wrapper for PutLifecycleHook that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename PutLifecycleHookRequestT = Model::PutLifecycleHookRequest>
        void PutLifecycleHookAsync(const PutLifecycleHookRequestT& request, const PutLifecycleHookResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AutoScalingClient::PutLifecycleHook, request, handler, context);
        }

        /**
         * <p>Configures an Auto Scaling group to send notifications when specified events
         * take place. Subscribers to the specified topic can have messages delivered to an
         * endpoint such as a web server or an email address.</p> <p>This configuration
         * overwrites any existing configuration.</p> <p>For more information, see <a
         * href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/ASGettingNotifications.html">Getting
         * Amazon SNS notifications when your Auto Scaling group scales</a> in the
         * <i>Amazon EC2 Auto Scaling User Guide</i>.</p> <p>If you exceed your maximum
         * limit of SNS topics, which is 10 per Auto Scaling group, the call
         * fails.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/autoscaling-2011-01-01/PutNotificationConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::PutNotificationConfigurationOutcome PutNotificationConfiguration(const Model::PutNotificationConfigurationRequest& request) const;

        /**
         * A Callable wrapper for PutNotificationConfiguration that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename PutNotificationConfigurationRequestT = Model::PutNotificationConfigurationRequest>
        Model::PutNotificationConfigurationOutcomeCallable PutNotificationConfigurationCallable(const PutNotificationConfigurationRequestT& request) const
        {
            return SubmitCallable(&AutoScalingClient::PutNotificationConfiguration, request);
        }

        /**
         * An Async wrapper for PutNotificationConfiguration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename PutNotificationConfigurationRequestT = Model::PutNotificationConfigurationRequest>
        void PutNotificationConfigurationAsync(const PutNotificationConfigurationRequestT& request, const PutNotificationConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AutoScalingClient::PutNotificationConfiguration, request, handler, context);
        }

        /**
         * <p>Creates or updates a scaling policy for an Auto Scaling group. Scaling
         * policies are used to scale an Auto Scaling group based on configurable metrics.
         * If no policies are defined, the dynamic scaling and predictive scaling features
         * are not used. </p> <p>For more information about using dynamic scaling, see <a
         * href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/as-scaling-target-tracking.html">Target
         * tracking scaling policies</a> and <a
         * href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/as-scaling-simple-step.html">Step
         * and simple scaling policies</a> in the <i>Amazon EC2 Auto Scaling User
         * Guide</i>.</p> <p>For more information about using predictive scaling, see <a
         * href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/ec2-auto-scaling-predictive-scaling.html">Predictive
         * scaling for Amazon EC2 Auto Scaling</a> in the <i>Amazon EC2 Auto Scaling User
         * Guide</i>.</p> <p>You can view the scaling policies for an Auto Scaling group
         * using the <a>DescribePolicies</a> API call. If you are no longer using a scaling
         * policy, you can delete it by calling the <a>DeletePolicy</a> API.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/autoscaling-2011-01-01/PutScalingPolicy">AWS
         * API Reference</a></p>
         */
        virtual Model::PutScalingPolicyOutcome PutScalingPolicy(const Model::PutScalingPolicyRequest& request) const;

        /**
         * A Callable wrapper for PutScalingPolicy that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename PutScalingPolicyRequestT = Model::PutScalingPolicyRequest>
        Model::PutScalingPolicyOutcomeCallable PutScalingPolicyCallable(const PutScalingPolicyRequestT& request) const
        {
            return SubmitCallable(&AutoScalingClient::PutScalingPolicy, request);
        }

        /**
         * An Async wrapper for PutScalingPolicy that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename PutScalingPolicyRequestT = Model::PutScalingPolicyRequest>
        void PutScalingPolicyAsync(const PutScalingPolicyRequestT& request, const PutScalingPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AutoScalingClient::PutScalingPolicy, request, handler, context);
        }

        /**
         * <p>Creates or updates a scheduled scaling action for an Auto Scaling group.</p>
         * <p>For more information, see <a
         * href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/schedule_time.html">Scheduled
         * scaling</a> in the <i>Amazon EC2 Auto Scaling User Guide</i>.</p> <p>You can
         * view the scheduled actions for an Auto Scaling group using the
         * <a>DescribeScheduledActions</a> API call. If you are no longer using a scheduled
         * action, you can delete it by calling the <a>DeleteScheduledAction</a> API.</p>
         * <p>If you try to schedule your action in the past, Amazon EC2 Auto Scaling
         * returns an error message.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/autoscaling-2011-01-01/PutScheduledUpdateGroupAction">AWS
         * API Reference</a></p>
         */
        virtual Model::PutScheduledUpdateGroupActionOutcome PutScheduledUpdateGroupAction(const Model::PutScheduledUpdateGroupActionRequest& request) const;

        /**
         * A Callable wrapper for PutScheduledUpdateGroupAction that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename PutScheduledUpdateGroupActionRequestT = Model::PutScheduledUpdateGroupActionRequest>
        Model::PutScheduledUpdateGroupActionOutcomeCallable PutScheduledUpdateGroupActionCallable(const PutScheduledUpdateGroupActionRequestT& request) const
        {
            return SubmitCallable(&AutoScalingClient::PutScheduledUpdateGroupAction, request);
        }

        /**
         * An Async wrapper for PutScheduledUpdateGroupAction that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename PutScheduledUpdateGroupActionRequestT = Model::PutScheduledUpdateGroupActionRequest>
        void PutScheduledUpdateGroupActionAsync(const PutScheduledUpdateGroupActionRequestT& request, const PutScheduledUpdateGroupActionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AutoScalingClient::PutScheduledUpdateGroupAction, request, handler, context);
        }

        /**
         * <p>Creates or updates a warm pool for the specified Auto Scaling group. A warm
         * pool is a pool of pre-initialized EC2 instances that sits alongside the Auto
         * Scaling group. Whenever your application needs to scale out, the Auto Scaling
         * group can draw on the warm pool to meet its new desired capacity. For more
         * information and example configurations, see <a
         * href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/ec2-auto-scaling-warm-pools.html">Warm
         * pools for Amazon EC2 Auto Scaling</a> in the <i>Amazon EC2 Auto Scaling User
         * Guide</i>.</p> <p>This operation must be called from the Region in which the
         * Auto Scaling group was created. This operation cannot be called on an Auto
         * Scaling group that has a mixed instances policy or a launch template or launch
         * configuration that requests Spot Instances.</p> <p>You can view the instances in
         * the warm pool using the <a>DescribeWarmPool</a> API call. If you are no longer
         * using a warm pool, you can delete it by calling the <a>DeleteWarmPool</a>
         * API.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/autoscaling-2011-01-01/PutWarmPool">AWS
         * API Reference</a></p>
         */
        virtual Model::PutWarmPoolOutcome PutWarmPool(const Model::PutWarmPoolRequest& request) const;

        /**
         * A Callable wrapper for PutWarmPool that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename PutWarmPoolRequestT = Model::PutWarmPoolRequest>
        Model::PutWarmPoolOutcomeCallable PutWarmPoolCallable(const PutWarmPoolRequestT& request) const
        {
            return SubmitCallable(&AutoScalingClient::PutWarmPool, request);
        }

        /**
         * An Async wrapper for PutWarmPool that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename PutWarmPoolRequestT = Model::PutWarmPoolRequest>
        void PutWarmPoolAsync(const PutWarmPoolRequestT& request, const PutWarmPoolResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AutoScalingClient::PutWarmPool, request, handler, context);
        }

        /**
         * <p>Records a heartbeat for the lifecycle action associated with the specified
         * token or instance. This extends the timeout by the length of time defined using
         * the <a>PutLifecycleHook</a> API call.</p> <p>This step is a part of the
         * procedure for adding a lifecycle hook to an Auto Scaling group:</p> <ol> <li>
         * <p>(Optional) Create a launch template or launch configuration with a user data
         * script that runs while an instance is in a wait state due to a lifecycle
         * hook.</p> </li> <li> <p>(Optional) Create a Lambda function and a rule that
         * allows Amazon EventBridge to invoke your Lambda function when an instance is put
         * into a wait state due to a lifecycle hook.</p> </li> <li> <p>(Optional) Create a
         * notification target and an IAM role. The target can be either an Amazon SQS
         * queue or an Amazon SNS topic. The role allows Amazon EC2 Auto Scaling to publish
         * lifecycle notifications to the target.</p> </li> <li> <p>Create the lifecycle
         * hook. Specify whether the hook is used when the instances launch or
         * terminate.</p> </li> <li> <p> <b>If you need more time, record the lifecycle
         * action heartbeat to keep the instance in a wait state.</b> </p> </li> <li> <p>If
         * you finish before the timeout period ends, send a callback by using the
         * <a>CompleteLifecycleAction</a> API call.</p> </li> </ol> <p>For more
         * information, see <a
         * href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/lifecycle-hooks.html">Amazon
         * EC2 Auto Scaling lifecycle hooks</a> in the <i>Amazon EC2 Auto Scaling User
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/autoscaling-2011-01-01/RecordLifecycleActionHeartbeat">AWS
         * API Reference</a></p>
         */
        virtual Model::RecordLifecycleActionHeartbeatOutcome RecordLifecycleActionHeartbeat(const Model::RecordLifecycleActionHeartbeatRequest& request) const;

        /**
         * A Callable wrapper for RecordLifecycleActionHeartbeat that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename RecordLifecycleActionHeartbeatRequestT = Model::RecordLifecycleActionHeartbeatRequest>
        Model::RecordLifecycleActionHeartbeatOutcomeCallable RecordLifecycleActionHeartbeatCallable(const RecordLifecycleActionHeartbeatRequestT& request) const
        {
            return SubmitCallable(&AutoScalingClient::RecordLifecycleActionHeartbeat, request);
        }

        /**
         * An Async wrapper for RecordLifecycleActionHeartbeat that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename RecordLifecycleActionHeartbeatRequestT = Model::RecordLifecycleActionHeartbeatRequest>
        void RecordLifecycleActionHeartbeatAsync(const RecordLifecycleActionHeartbeatRequestT& request, const RecordLifecycleActionHeartbeatResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AutoScalingClient::RecordLifecycleActionHeartbeat, request, handler, context);
        }

        /**
         * <p>Resumes the specified suspended auto scaling processes, or all suspended
         * process, for the specified Auto Scaling group.</p> <p>For more information, see
         * <a
         * href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/as-suspend-resume-processes.html">Suspending
         * and resuming scaling processes</a> in the <i>Amazon EC2 Auto Scaling User
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/autoscaling-2011-01-01/ResumeProcesses">AWS
         * API Reference</a></p>
         */
        virtual Model::ResumeProcessesOutcome ResumeProcesses(const Model::ResumeProcessesRequest& request) const;

        /**
         * A Callable wrapper for ResumeProcesses that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ResumeProcessesRequestT = Model::ResumeProcessesRequest>
        Model::ResumeProcessesOutcomeCallable ResumeProcessesCallable(const ResumeProcessesRequestT& request) const
        {
            return SubmitCallable(&AutoScalingClient::ResumeProcesses, request);
        }

        /**
         * An Async wrapper for ResumeProcesses that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ResumeProcessesRequestT = Model::ResumeProcessesRequest>
        void ResumeProcessesAsync(const ResumeProcessesRequestT& request, const ResumeProcessesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AutoScalingClient::ResumeProcesses, request, handler, context);
        }

        /**
         * <p>Cancels an instance refresh that is in progress and rolls back any changes
         * that it made. Amazon EC2 Auto Scaling replaces any instances that were replaced
         * during the instance refresh. This restores your Auto Scaling group to the
         * configuration that it was using before the start of the instance refresh. </p>
         * <p>This operation is part of the <a
         * href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/asg-instance-refresh.html">instance
         * refresh feature</a> in Amazon EC2 Auto Scaling, which helps you update instances
         * in your Auto Scaling group after you make configuration changes.</p> <p>A
         * rollback is not supported in the following situations: </p> <ul> <li> <p>There
         * is no desired configuration specified for the instance refresh.</p> </li> <li>
         * <p>The Auto Scaling group has a launch template that uses an Amazon Web Services
         * Systems Manager parameter instead of an AMI ID for the <code>ImageId</code>
         * property.</p> </li> <li> <p>The Auto Scaling group uses the launch template's
         * <code>$Latest</code> or <code>$Default</code> version.</p> </li> </ul> <p>When
         * you receive a successful response from this operation, Amazon EC2 Auto Scaling
         * immediately begins replacing instances. You can check the status of this
         * operation through the <a>DescribeInstanceRefreshes</a> API operation.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/autoscaling-2011-01-01/RollbackInstanceRefresh">AWS
         * API Reference</a></p>
         */
        virtual Model::RollbackInstanceRefreshOutcome RollbackInstanceRefresh(const Model::RollbackInstanceRefreshRequest& request) const;

        /**
         * A Callable wrapper for RollbackInstanceRefresh that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename RollbackInstanceRefreshRequestT = Model::RollbackInstanceRefreshRequest>
        Model::RollbackInstanceRefreshOutcomeCallable RollbackInstanceRefreshCallable(const RollbackInstanceRefreshRequestT& request) const
        {
            return SubmitCallable(&AutoScalingClient::RollbackInstanceRefresh, request);
        }

        /**
         * An Async wrapper for RollbackInstanceRefresh that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename RollbackInstanceRefreshRequestT = Model::RollbackInstanceRefreshRequest>
        void RollbackInstanceRefreshAsync(const RollbackInstanceRefreshRequestT& request, const RollbackInstanceRefreshResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AutoScalingClient::RollbackInstanceRefresh, request, handler, context);
        }

        /**
         * <p>Sets the size of the specified Auto Scaling group.</p> <p>If a scale-in
         * activity occurs as a result of a new <code>DesiredCapacity</code> value that is
         * lower than the current size of the group, the Auto Scaling group uses its
         * termination policy to determine which instances to terminate. </p> <p>For more
         * information, see <a
         * href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/as-manual-scaling.html">Manual
         * scaling</a> in the <i>Amazon EC2 Auto Scaling User Guide</i>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/autoscaling-2011-01-01/SetDesiredCapacity">AWS
         * API Reference</a></p>
         */
        virtual Model::SetDesiredCapacityOutcome SetDesiredCapacity(const Model::SetDesiredCapacityRequest& request) const;

        /**
         * A Callable wrapper for SetDesiredCapacity that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename SetDesiredCapacityRequestT = Model::SetDesiredCapacityRequest>
        Model::SetDesiredCapacityOutcomeCallable SetDesiredCapacityCallable(const SetDesiredCapacityRequestT& request) const
        {
            return SubmitCallable(&AutoScalingClient::SetDesiredCapacity, request);
        }

        /**
         * An Async wrapper for SetDesiredCapacity that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename SetDesiredCapacityRequestT = Model::SetDesiredCapacityRequest>
        void SetDesiredCapacityAsync(const SetDesiredCapacityRequestT& request, const SetDesiredCapacityResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AutoScalingClient::SetDesiredCapacity, request, handler, context);
        }

        /**
         * <p>Sets the health status of the specified instance.</p> <p>For more
         * information, see <a
         * href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/healthcheck.html">Health
         * checks for Auto Scaling instances</a> in the <i>Amazon EC2 Auto Scaling User
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/autoscaling-2011-01-01/SetInstanceHealth">AWS
         * API Reference</a></p>
         */
        virtual Model::SetInstanceHealthOutcome SetInstanceHealth(const Model::SetInstanceHealthRequest& request) const;

        /**
         * A Callable wrapper for SetInstanceHealth that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename SetInstanceHealthRequestT = Model::SetInstanceHealthRequest>
        Model::SetInstanceHealthOutcomeCallable SetInstanceHealthCallable(const SetInstanceHealthRequestT& request) const
        {
            return SubmitCallable(&AutoScalingClient::SetInstanceHealth, request);
        }

        /**
         * An Async wrapper for SetInstanceHealth that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename SetInstanceHealthRequestT = Model::SetInstanceHealthRequest>
        void SetInstanceHealthAsync(const SetInstanceHealthRequestT& request, const SetInstanceHealthResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AutoScalingClient::SetInstanceHealth, request, handler, context);
        }

        /**
         * <p>Updates the instance protection settings of the specified instances. This
         * operation cannot be called on instances in a warm pool.</p> <p>For more
         * information about preventing instances that are part of an Auto Scaling group
         * from terminating on scale in, see <a
         * href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/ec2-auto-scaling-instance-protection.html">Using
         * instance scale-in protection</a> in the <i>Amazon EC2 Auto Scaling User
         * Guide</i>.</p> <p>If you exceed your maximum limit of instance IDs, which is 50
         * per Auto Scaling group, the call fails.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/autoscaling-2011-01-01/SetInstanceProtection">AWS
         * API Reference</a></p>
         */
        virtual Model::SetInstanceProtectionOutcome SetInstanceProtection(const Model::SetInstanceProtectionRequest& request) const;

        /**
         * A Callable wrapper for SetInstanceProtection that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename SetInstanceProtectionRequestT = Model::SetInstanceProtectionRequest>
        Model::SetInstanceProtectionOutcomeCallable SetInstanceProtectionCallable(const SetInstanceProtectionRequestT& request) const
        {
            return SubmitCallable(&AutoScalingClient::SetInstanceProtection, request);
        }

        /**
         * An Async wrapper for SetInstanceProtection that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename SetInstanceProtectionRequestT = Model::SetInstanceProtectionRequest>
        void SetInstanceProtectionAsync(const SetInstanceProtectionRequestT& request, const SetInstanceProtectionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AutoScalingClient::SetInstanceProtection, request, handler, context);
        }

        /**
         * <p>Starts an instance refresh.</p> <p>This operation is part of the <a
         * href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/asg-instance-refresh.html">instance
         * refresh feature</a> in Amazon EC2 Auto Scaling, which helps you update instances
         * in your Auto Scaling group. This feature is helpful, for example, when you have
         * a new AMI or a new user data script. You just need to create a new launch
         * template that specifies the new AMI or user data script. Then start an instance
         * refresh to immediately begin the process of updating instances in the group.
         * </p> <p>If successful, the request's response contains a unique ID that you can
         * use to track the progress of the instance refresh. To query its status, call the
         * <a>DescribeInstanceRefreshes</a> API. To describe the instance refreshes that
         * have already run, call the <a>DescribeInstanceRefreshes</a> API. To cancel an
         * instance refresh that is in progress, use the <a>CancelInstanceRefresh</a> API.
         * </p> <p>An instance refresh might fail for several reasons, such as EC2 launch
         * failures, misconfigured health checks, or not ignoring or allowing the
         * termination of instances that are in <code>Standby</code> state or protected
         * from scale in. You can monitor for failed EC2 launches using the scaling
         * activities. To find the scaling activities, call the
         * <a>DescribeScalingActivities</a> API.</p> <p>If you enable auto rollback, your
         * Auto Scaling group will be rolled back automatically when the instance refresh
         * fails. You can enable this feature before starting an instance refresh by
         * specifying the <code>AutoRollback</code> property in the instance refresh
         * preferences. Otherwise, to roll back an instance refresh before it finishes, use
         * the <a>RollbackInstanceRefresh</a> API. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/autoscaling-2011-01-01/StartInstanceRefresh">AWS
         * API Reference</a></p>
         */
        virtual Model::StartInstanceRefreshOutcome StartInstanceRefresh(const Model::StartInstanceRefreshRequest& request) const;

        /**
         * A Callable wrapper for StartInstanceRefresh that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename StartInstanceRefreshRequestT = Model::StartInstanceRefreshRequest>
        Model::StartInstanceRefreshOutcomeCallable StartInstanceRefreshCallable(const StartInstanceRefreshRequestT& request) const
        {
            return SubmitCallable(&AutoScalingClient::StartInstanceRefresh, request);
        }

        /**
         * An Async wrapper for StartInstanceRefresh that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename StartInstanceRefreshRequestT = Model::StartInstanceRefreshRequest>
        void StartInstanceRefreshAsync(const StartInstanceRefreshRequestT& request, const StartInstanceRefreshResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AutoScalingClient::StartInstanceRefresh, request, handler, context);
        }

        /**
         * <p>Suspends the specified auto scaling processes, or all processes, for the
         * specified Auto Scaling group.</p> <p>If you suspend either the
         * <code>Launch</code> or <code>Terminate</code> process types, it can prevent
         * other process types from functioning properly. For more information, see <a
         * href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/as-suspend-resume-processes.html">Suspending
         * and resuming scaling processes</a> in the <i>Amazon EC2 Auto Scaling User
         * Guide</i>.</p> <p>To resume processes that have been suspended, call the
         * <a>ResumeProcesses</a> API.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/autoscaling-2011-01-01/SuspendProcesses">AWS
         * API Reference</a></p>
         */
        virtual Model::SuspendProcessesOutcome SuspendProcesses(const Model::SuspendProcessesRequest& request) const;

        /**
         * A Callable wrapper for SuspendProcesses that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename SuspendProcessesRequestT = Model::SuspendProcessesRequest>
        Model::SuspendProcessesOutcomeCallable SuspendProcessesCallable(const SuspendProcessesRequestT& request) const
        {
            return SubmitCallable(&AutoScalingClient::SuspendProcesses, request);
        }

        /**
         * An Async wrapper for SuspendProcesses that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename SuspendProcessesRequestT = Model::SuspendProcessesRequest>
        void SuspendProcessesAsync(const SuspendProcessesRequestT& request, const SuspendProcessesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AutoScalingClient::SuspendProcesses, request, handler, context);
        }

        /**
         * <p>Terminates the specified instance and optionally adjusts the desired group
         * size. This operation cannot be called on instances in a warm pool.</p> <p>This
         * call simply makes a termination request. The instance is not terminated
         * immediately. When an instance is terminated, the instance status changes to
         * <code>terminated</code>. You can't connect to or start an instance after you've
         * terminated it.</p> <p>If you do not specify the option to decrement the desired
         * capacity, Amazon EC2 Auto Scaling launches instances to replace the ones that
         * are terminated. </p> <p>By default, Amazon EC2 Auto Scaling balances instances
         * across all Availability Zones. If you decrement the desired capacity, your Auto
         * Scaling group can become unbalanced between Availability Zones. Amazon EC2 Auto
         * Scaling tries to rebalance the group, and rebalancing might terminate instances
         * in other zones. For more information, see <a
         * href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/auto-scaling-benefits.html#AutoScalingBehavior.InstanceUsage">Rebalancing
         * activities</a> in the <i>Amazon EC2 Auto Scaling User Guide</i>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/autoscaling-2011-01-01/TerminateInstanceInAutoScalingGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::TerminateInstanceInAutoScalingGroupOutcome TerminateInstanceInAutoScalingGroup(const Model::TerminateInstanceInAutoScalingGroupRequest& request) const;

        /**
         * A Callable wrapper for TerminateInstanceInAutoScalingGroup that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename TerminateInstanceInAutoScalingGroupRequestT = Model::TerminateInstanceInAutoScalingGroupRequest>
        Model::TerminateInstanceInAutoScalingGroupOutcomeCallable TerminateInstanceInAutoScalingGroupCallable(const TerminateInstanceInAutoScalingGroupRequestT& request) const
        {
            return SubmitCallable(&AutoScalingClient::TerminateInstanceInAutoScalingGroup, request);
        }

        /**
         * An Async wrapper for TerminateInstanceInAutoScalingGroup that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename TerminateInstanceInAutoScalingGroupRequestT = Model::TerminateInstanceInAutoScalingGroupRequest>
        void TerminateInstanceInAutoScalingGroupAsync(const TerminateInstanceInAutoScalingGroupRequestT& request, const TerminateInstanceInAutoScalingGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AutoScalingClient::TerminateInstanceInAutoScalingGroup, request, handler, context);
        }

        /**
         * <p> <b>We strongly recommend that all Auto Scaling groups use launch templates
         * to ensure full functionality for Amazon EC2 Auto Scaling and Amazon EC2.</b>
         * </p> <p>Updates the configuration for the specified Auto Scaling group.</p>
         * <p>To update an Auto Scaling group, specify the name of the group and the
         * property that you want to change. Any properties that you don't specify are not
         * changed by this update request. The new settings take effect on any scaling
         * activities after this call returns. </p> <p>If you associate a new launch
         * configuration or template with an Auto Scaling group, all new instances will get
         * the updated configuration. Existing instances continue to run with the
         * configuration that they were originally launched with. When you update a group
         * to specify a mixed instances policy instead of a launch configuration or
         * template, existing instances may be replaced to match the new purchasing options
         * that you specified in the policy. For example, if the group currently has 100%
         * On-Demand capacity and the policy specifies 50% Spot capacity, this means that
         * half of your instances will be gradually terminated and relaunched as Spot
         * Instances. When replacing instances, Amazon EC2 Auto Scaling launches new
         * instances before terminating the old ones, so that updating your group does not
         * compromise the performance or availability of your application.</p> <p>Note the
         * following about changing <code>DesiredCapacity</code>, <code>MaxSize</code>, or
         * <code>MinSize</code>:</p> <ul> <li> <p>If a scale-in activity occurs as a result
         * of a new <code>DesiredCapacity</code> value that is lower than the current size
         * of the group, the Auto Scaling group uses its termination policy to determine
         * which instances to terminate.</p> </li> <li> <p>If you specify a new value for
         * <code>MinSize</code> without specifying a value for
         * <code>DesiredCapacity</code>, and the new <code>MinSize</code> is larger than
         * the current size of the group, this sets the group's
         * <code>DesiredCapacity</code> to the new <code>MinSize</code> value.</p> </li>
         * <li> <p>If you specify a new value for <code>MaxSize</code> without specifying a
         * value for <code>DesiredCapacity</code>, and the new <code>MaxSize</code> is
         * smaller than the current size of the group, this sets the group's
         * <code>DesiredCapacity</code> to the new <code>MaxSize</code> value.</p> </li>
         * </ul> <p>To see which properties have been set, call the
         * <a>DescribeAutoScalingGroups</a> API. To view the scaling policies for an Auto
         * Scaling group, call the <a>DescribePolicies</a> API. If the group has scaling
         * policies, you can update them by calling the <a>PutScalingPolicy</a>
         * API.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/autoscaling-2011-01-01/UpdateAutoScalingGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateAutoScalingGroupOutcome UpdateAutoScalingGroup(const Model::UpdateAutoScalingGroupRequest& request) const;

        /**
         * A Callable wrapper for UpdateAutoScalingGroup that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateAutoScalingGroupRequestT = Model::UpdateAutoScalingGroupRequest>
        Model::UpdateAutoScalingGroupOutcomeCallable UpdateAutoScalingGroupCallable(const UpdateAutoScalingGroupRequestT& request) const
        {
            return SubmitCallable(&AutoScalingClient::UpdateAutoScalingGroup, request);
        }

        /**
         * An Async wrapper for UpdateAutoScalingGroup that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateAutoScalingGroupRequestT = Model::UpdateAutoScalingGroupRequest>
        void UpdateAutoScalingGroupAsync(const UpdateAutoScalingGroupRequestT& request, const UpdateAutoScalingGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AutoScalingClient::UpdateAutoScalingGroup, request, handler, context);
        }


        void OverrideEndpoint(const Aws::String& endpoint);
        std::shared_ptr<AutoScalingEndpointProviderBase>& accessEndpointProvider();
  private:
        friend class Aws::Client::ClientWithAsyncTemplateMethods<AutoScalingClient>;
        void init(const AutoScalingClientConfiguration& clientConfiguration);

        AutoScalingClientConfiguration m_clientConfiguration;
        std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
        std::shared_ptr<AutoScalingEndpointProviderBase> m_endpointProvider;
  };

} // namespace AutoScaling
} // namespace Aws
