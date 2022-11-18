/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/autoscaling/AutoScaling_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/AmazonSerializableWebServiceRequest.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSAsyncOperationTemplate.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/autoscaling/AutoScalingServiceClientModel.h>
#include <aws/autoscaling/AutoScalingLegacyAsyncMacros.h>

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
  class AWS_AUTOSCALING_API AutoScalingClient : public Aws::Client::AWSXMLClient
  {
    public:
      typedef Aws::Client::AWSXMLClient BASECLASS;
      static const char* SERVICE_NAME;
      static const char* ALLOCATION_TAG;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        AutoScalingClient(const Aws::AutoScaling::AutoScalingClientConfiguration& clientConfiguration = Aws::AutoScaling::AutoScalingClientConfiguration(),
                          std::shared_ptr<AutoScalingEndpointProviderBase> endpointProvider = Aws::MakeShared<AutoScalingEndpointProvider>(ALLOCATION_TAG));

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        AutoScalingClient(const Aws::Auth::AWSCredentials& credentials,
                          std::shared_ptr<AutoScalingEndpointProviderBase> endpointProvider = Aws::MakeShared<AutoScalingEndpointProvider>(ALLOCATION_TAG),
                          const Aws::AutoScaling::AutoScalingClientConfiguration& clientConfiguration = Aws::AutoScaling::AutoScalingClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        AutoScalingClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                          std::shared_ptr<AutoScalingEndpointProviderBase> endpointProvider = Aws::MakeShared<AutoScalingEndpointProvider>(ALLOCATION_TAG),
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


        template<typename RequestT,
                 typename HandlerT,
                 typename HandlerContextT,
                 typename OperationFuncT>
        void SubmitAsync(OperationFuncT&& operationFunc,
                         const RequestT& request,
                         const HandlerT& handler,
                         const HandlerContextT& context)
        {
            Aws::Client::MakeAsyncOperation(std::forward<OperationFuncT>(operationFunc), this, request, handler, context, m_executor.get());
        }

        template<typename RequestT,
                 typename HandlerT,
                 typename HandlerContextT,
                 typename OperationFuncT>
        void SubmitAsync(OperationFuncT&& operationFunc,
                         RequestT& request,
                         const HandlerT& handler,
                         const HandlerContextT& context)
        {
            Aws::Client::MakeAsyncStreamingOperation(std::forward<OperationFuncT>(operationFunc), this, request, handler, context, m_executor.get());
        }

        template<typename RequestT,
                 typename OperationFuncT>
        auto SubmitCallable(OperationFuncT&& operationFunc,
                            const RequestT& request) -> std::future<decltype((this->*operationFunc)(request))>
        {
            return Aws::Client::MakeCallableOperation(ALLOCATION_TAG, operationFunc, this, request, m_executor.get());
        }

        template<typename RequestT,
                 typename OperationFuncT>
        auto SubmitCallable(OperationFuncT&& operationFunc,
                            RequestT& request) -> std::future<decltype((this->*operationFunc)(request))>
        {
            return Aws::Client::MakeCallableStreamingOperation(ALLOCATION_TAG, operationFunc, this, request, m_executor.get());
        }


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
         * <p>Attaches one or more target groups to the specified Auto Scaling group.</p>
         * <p>This operation is used with the following load balancer types: </p> <ul> <li>
         * <p>Application Load Balancer - Operates at the application layer (layer 7) and
         * supports HTTP and HTTPS. </p> </li> <li> <p>Network Load Balancer - Operates at
         * the transport layer (layer 4) and supports TCP, TLS, and UDP. </p> </li> <li>
         * <p>Gateway Load Balancer - Operates at the network layer (layer 3).</p> </li>
         * </ul> <p>To describe the target groups for an Auto Scaling group, call the
         * <a>DescribeLoadBalancerTargetGroups</a> API. To detach the target group from the
         * Auto Scaling group, call the <a>DetachLoadBalancerTargetGroups</a> API.</p>
         * <p>This operation is additive and does not detach existing target groups or
         * Classic Load Balancers from the Auto Scaling group.</p> <p>For more information,
         * see <a
         * href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/autoscaling-load-balancer.html">Use
         * Elastic Load Balancing to distribute traffic across the instances in your Auto
         * Scaling group</a> in the <i>Amazon EC2 Auto Scaling User Guide</i>.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/autoscaling-2011-01-01/AttachLoadBalancerTargetGroups">AWS
         * API Reference</a></p>
         */
        virtual Model::AttachLoadBalancerTargetGroupsOutcome AttachLoadBalancerTargetGroups(const Model::AttachLoadBalancerTargetGroupsRequest& request) const;


        /**
         *  <p>To attach an Application Load Balancer, Network Load Balancer, or
         * Gateway Load Balancer, use the <a>AttachLoadBalancerTargetGroups</a> API
         * operation instead.</p>  <p>Attaches one or more Classic Load Balancers to
         * the specified Auto Scaling group. Amazon EC2 Auto Scaling registers the running
         * instances with these Classic Load Balancers.</p> <p>To describe the load
         * balancers for an Auto Scaling group, call the <a>DescribeLoadBalancers</a> API.
         * To detach a load balancer from the Auto Scaling group, call the
         * <a>DetachLoadBalancers</a> API.</p> <p>This operation is additive and does not
         * detach existing Classic Load Balancers or target groups from the Auto Scaling
         * group.</p> <p>For more information, see <a
         * href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/autoscaling-load-balancer.html">Use
         * Elastic Load Balancing to distribute traffic across the instances in your Auto
         * Scaling group</a> in the <i>Amazon EC2 Auto Scaling User
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/autoscaling-2011-01-01/AttachLoadBalancers">AWS
         * API Reference</a></p>
         */
        virtual Model::AttachLoadBalancersOutcome AttachLoadBalancers(const Model::AttachLoadBalancersRequest& request) const;


        /**
         * <p>Deletes one or more scheduled actions for the specified Auto Scaling
         * group.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/autoscaling-2011-01-01/BatchDeleteScheduledAction">AWS
         * API Reference</a></p>
         */
        virtual Model::BatchDeleteScheduledActionOutcome BatchDeleteScheduledAction(const Model::BatchDeleteScheduledActionRequest& request) const;


        /**
         * <p>Creates or updates one or more scheduled scaling actions for an Auto Scaling
         * group.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/autoscaling-2011-01-01/BatchPutScheduledUpdateGroupAction">AWS
         * API Reference</a></p>
         */
        virtual Model::BatchPutScheduledUpdateGroupActionOutcome BatchPutScheduledUpdateGroupAction(const Model::BatchPutScheduledUpdateGroupActionRequest& request) const;


        /**
         * <p>Cancels an instance refresh operation in progress. Cancellation does not roll
         * back any replacements that have already been completed, but it prevents new
         * replacements from being started. </p> <p>This operation is part of the <a
         * href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/asg-instance-refresh.html">instance
         * refresh feature</a> in Amazon EC2 Auto Scaling, which helps you update instances
         * in your Auto Scaling group after you make configuration changes.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/autoscaling-2011-01-01/CancelInstanceRefresh">AWS
         * API Reference</a></p>
         */
        virtual Model::CancelInstanceRefreshOutcome CancelInstanceRefresh(const Model::CancelInstanceRefreshRequest& request) const;


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
         * href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/lifecycle-hooks.html">Amazon
         * EC2 Auto Scaling lifecycle hooks</a> in the <i>Amazon EC2 Auto Scaling User
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/autoscaling-2011-01-01/CompleteLifecycleAction">AWS
         * API Reference</a></p>
         */
        virtual Model::CompleteLifecycleActionOutcome CompleteLifecycleAction(const Model::CompleteLifecycleActionRequest& request) const;


        /**
         * <p> <b>We strongly recommend using a launch template when calling this operation
         * to ensure full functionality for Amazon EC2 Auto Scaling and Amazon EC2.</b>
         * </p> <p>Creates an Auto Scaling group with the specified name and attributes.
         * </p> <p>If you exceed your maximum limit of Auto Scaling groups, the call fails.
         * To query this limit, call the <a>DescribeAccountLimits</a> API. For information
         * about updating this limit, see <a
         * href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/ec2-auto-scaling-quotas.html">Quotas
         * for Amazon EC2 Auto Scaling</a> in the <i>Amazon EC2 Auto Scaling User
         * Guide</i>.</p> <p>For introductory exercises for creating an Auto Scaling group,
         * see <a
         * href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/GettingStartedTutorial.html">Getting
         * started with Amazon EC2 Auto Scaling</a> and <a
         * href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/as-register-lbs-with-asg.html">Tutorial:
         * Set up a scaled and load-balanced application</a> in the <i>Amazon EC2 Auto
         * Scaling User Guide</i>. For more information, see <a
         * href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/AutoScalingGroup.html">Auto
         * Scaling groups</a> in the <i>Amazon EC2 Auto Scaling User Guide</i>.</p>
         * <p>Every Auto Scaling group has three size properties
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
         * <p>Deletes the specified launch configuration.</p> <p>The launch configuration
         * must not be attached to an Auto Scaling group. When this call completes, the
         * launch configuration is no longer available for use.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/autoscaling-2011-01-01/DeleteLaunchConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteLaunchConfigurationOutcome DeleteLaunchConfiguration(const Model::DeleteLaunchConfigurationRequest& request) const;


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
         * <p>Deletes the specified notification.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/autoscaling-2011-01-01/DeleteNotificationConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteNotificationConfigurationOutcome DeleteNotificationConfiguration(const Model::DeleteNotificationConfigurationRequest& request) const;


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
         * <p>Deletes the specified scheduled action.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/autoscaling-2011-01-01/DeleteScheduledAction">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteScheduledActionOutcome DeleteScheduledAction(const Model::DeleteScheduledActionRequest& request) const;


        /**
         * <p>Deletes the specified tags.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/autoscaling-2011-01-01/DeleteTags">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteTagsOutcome DeleteTags(const Model::DeleteTagsRequest& request) const;


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
         * <p>Gets information about the Auto Scaling instances in the account and
         * Region.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/autoscaling-2011-01-01/DescribeAutoScalingInstances">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeAutoScalingInstancesOutcome DescribeAutoScalingInstances(const Model::DescribeAutoScalingInstancesRequest& request) const;


        /**
         * <p>Describes the notification types that are supported by Amazon EC2 Auto
         * Scaling.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/autoscaling-2011-01-01/DescribeAutoScalingNotificationTypes">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeAutoScalingNotificationTypesOutcome DescribeAutoScalingNotificationTypes(const Model::DescribeAutoScalingNotificationTypesRequest& request) const;


        /**
         * <p>Gets information about the instance refreshes for the specified Auto Scaling
         * group.</p> <p>This operation is part of the <a
         * href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/asg-instance-refresh.html">instance
         * refresh feature</a> in Amazon EC2 Auto Scaling, which helps you update instances
         * in your Auto Scaling group after you make configuration changes.</p> <p>To help
         * you determine the status of an instance refresh, this operation returns
         * information about the instance refreshes you previously initiated, including
         * their status, end time, the percentage of the instance refresh that is complete,
         * and the number of instances remaining to update before the instance refresh is
         * complete.</p> <p>The following are the possible statuses: </p> <ul> <li> <p>
         * <code>Pending</code> - The request was created, but the operation has not
         * started.</p> </li> <li> <p> <code>InProgress</code> - The operation is in
         * progress.</p> </li> <li> <p> <code>Successful</code> - The operation completed
         * successfully.</p> </li> <li> <p> <code>Failed</code> - The operation failed to
         * complete. You can troubleshoot using the status reason and the scaling
         * activities. </p> </li> <li> <p> <code>Cancelling</code> - An ongoing operation
         * is being cancelled. Cancellation does not roll back any replacements that have
         * already been completed, but it prevents new replacements from being started.
         * </p> </li> <li> <p> <code>Cancelled</code> - The operation is cancelled. </p>
         * </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/autoscaling-2011-01-01/DescribeInstanceRefreshes">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeInstanceRefreshesOutcome DescribeInstanceRefreshes(const Model::DescribeInstanceRefreshesRequest& request) const;


        /**
         * <p>Gets information about the launch configurations in the account and
         * Region.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/autoscaling-2011-01-01/DescribeLaunchConfigurations">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeLaunchConfigurationsOutcome DescribeLaunchConfigurations(const Model::DescribeLaunchConfigurationsRequest& request) const;


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
         * <p>Gets information about the lifecycle hooks for the specified Auto Scaling
         * group.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/autoscaling-2011-01-01/DescribeLifecycleHooks">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeLifecycleHooksOutcome DescribeLifecycleHooks(const Model::DescribeLifecycleHooksRequest& request) const;


        /**
         * <p>Gets information about the Elastic Load Balancing target groups for the
         * specified Auto Scaling group.</p> <p>To determine the attachment status of the
         * target group, use the <code>State</code> element in the response. When you
         * attach a target group to an Auto Scaling group, the initial <code>State</code>
         * value is <code>Adding</code>. The state transitions to <code>Added</code> after
         * all Auto Scaling instances are registered with the target group. If Elastic Load
         * Balancing health checks are enabled for the Auto Scaling group, the state
         * transitions to <code>InService</code> after at least one Auto Scaling instance
         * passes the health check. When the target group is in the <code>InService</code>
         * state, Amazon EC2 Auto Scaling can terminate and replace any instances that are
         * reported as unhealthy. If no registered instances pass the health checks, the
         * target group doesn't enter the <code>InService</code> state. </p> <p>Target
         * groups also have an <code>InService</code> state if you attach them in the
         * <a>CreateAutoScalingGroup</a> API call. If your target group state is
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
         * href="http://docs.aws.amazon.com/goto/WebAPI/autoscaling-2011-01-01/DescribeLoadBalancerTargetGroups">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeLoadBalancerTargetGroupsOutcome DescribeLoadBalancerTargetGroups(const Model::DescribeLoadBalancerTargetGroupsRequest& request) const;


        /**
         * <p>Gets information about the load balancers for the specified Auto Scaling
         * group.</p> <p>This operation describes only Classic Load Balancers. If you have
         * Application Load Balancers, Network Load Balancers, or Gateway Load Balancer,
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
         * <p>Describes the available CloudWatch metrics for Amazon EC2 Auto
         * Scaling.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/autoscaling-2011-01-01/DescribeMetricCollectionTypes">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeMetricCollectionTypesOutcome DescribeMetricCollectionTypes(const Model::DescribeMetricCollectionTypesRequest& request) const;


        /**
         * <p>Gets information about the Amazon SNS notifications that are configured for
         * one or more Auto Scaling groups.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/autoscaling-2011-01-01/DescribeNotificationConfigurations">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeNotificationConfigurationsOutcome DescribeNotificationConfigurations(const Model::DescribeNotificationConfigurationsRequest& request) const;


        /**
         * <p>Gets information about the scaling policies in the account and
         * Region.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/autoscaling-2011-01-01/DescribePolicies">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribePoliciesOutcome DescribePolicies(const Model::DescribePoliciesRequest& request) const;


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
         * <p>Describes the scaling process types for use with the <a>ResumeProcesses</a>
         * and <a>SuspendProcesses</a> APIs.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/autoscaling-2011-01-01/DescribeScalingProcessTypes">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeScalingProcessTypesOutcome DescribeScalingProcessTypes(const Model::DescribeScalingProcessTypesRequest& request) const;


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
         * <p>Detaches one or more target groups from the specified Auto Scaling group.</p>
         * <p>When you detach a target group, it enters the <code>Removing</code> state
         * while deregistering the instances in the group. When all instances are
         * deregistered, then you can no longer describe the target group using the
         * <a>DescribeLoadBalancerTargetGroups</a> API call. The instances remain
         * running.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/autoscaling-2011-01-01/DetachLoadBalancerTargetGroups">AWS
         * API Reference</a></p>
         */
        virtual Model::DetachLoadBalancerTargetGroupsOutcome DetachLoadBalancerTargetGroups(const Model::DetachLoadBalancerTargetGroupsRequest& request) const;


        /**
         * <p>Detaches one or more Classic Load Balancers from the specified Auto Scaling
         * group.</p> <p>This operation detaches only Classic Load Balancers. If you have
         * Application Load Balancers, Network Load Balancers, or Gateway Load Balancer,
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
         * <p>Disables group metrics collection for the specified Auto Scaling
         * group.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/autoscaling-2011-01-01/DisableMetricsCollection">AWS
         * API Reference</a></p>
         */
        virtual Model::DisableMetricsCollectionOutcome DisableMetricsCollection(const Model::DisableMetricsCollectionRequest& request) const;


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
         * <p>Executes the specified policy. This can be useful for testing the design of
         * your scaling policy.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/autoscaling-2011-01-01/ExecutePolicy">AWS
         * API Reference</a></p>
         */
        virtual Model::ExecutePolicyOutcome ExecutePolicy(const Model::ExecutePolicyRequest& request) const;


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
         * <p>Starts a new instance refresh operation. An instance refresh performs a
         * rolling replacement of all or some instances in an Auto Scaling group. Each
         * instance is terminated first and then replaced, which temporarily reduces the
         * capacity available within your Auto Scaling group.</p> <p>This operation is part
         * of the <a
         * href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/asg-instance-refresh.html">instance
         * refresh feature</a> in Amazon EC2 Auto Scaling, which helps you update instances
         * in your Auto Scaling group. This feature is helpful, for example, when you have
         * a new AMI or a new user data script. You just need to create a new launch
         * template that specifies the new AMI or user data script. Then start an instance
         * refresh to immediately begin the process of updating instances in the group.
         * </p> <p>If the call succeeds, it creates a new instance refresh request with a
         * unique ID that you can use to track its progress. To query its status, call the
         * <a>DescribeInstanceRefreshes</a> API. To describe the instance refreshes that
         * have already run, call the <a>DescribeInstanceRefreshes</a> API. To cancel an
         * instance refresh operation in progress, use the <a>CancelInstanceRefresh</a>
         * API. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/autoscaling-2011-01-01/StartInstanceRefresh">AWS
         * API Reference</a></p>
         */
        virtual Model::StartInstanceRefreshOutcome StartInstanceRefresh(const Model::StartInstanceRefreshRequest& request) const;


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



        void OverrideEndpoint(const Aws::String& endpoint);
        std::shared_ptr<AutoScalingEndpointProviderBase>& accessEndpointProvider();
  private:
        void init(const AutoScalingClientConfiguration& clientConfiguration);

        AutoScalingClientConfiguration m_clientConfiguration;
        std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
        std::shared_ptr<AutoScalingEndpointProviderBase> m_endpointProvider;
  };

} // namespace AutoScaling
} // namespace Aws
