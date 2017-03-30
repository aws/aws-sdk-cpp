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
#pragma once
#include <aws/application-autoscaling/ApplicationAutoScaling_EXPORTS.h>
#include <aws/application-autoscaling/ApplicationAutoScalingErrors.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/application-autoscaling/model/DeleteScalingPolicyResult.h>
#include <aws/application-autoscaling/model/DeregisterScalableTargetResult.h>
#include <aws/application-autoscaling/model/DescribeScalableTargetsResult.h>
#include <aws/application-autoscaling/model/DescribeScalingActivitiesResult.h>
#include <aws/application-autoscaling/model/DescribeScalingPoliciesResult.h>
#include <aws/application-autoscaling/model/PutScalingPolicyResult.h>
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

namespace Json
{
  class JsonValue;
} // namespace Json
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
        class DeregisterScalableTargetRequest;
        class DescribeScalableTargetsRequest;
        class DescribeScalingActivitiesRequest;
        class DescribeScalingPoliciesRequest;
        class PutScalingPolicyRequest;
        class RegisterScalableTargetRequest;

        typedef Aws::Utils::Outcome<DeleteScalingPolicyResult, Aws::Client::AWSError<ApplicationAutoScalingErrors>> DeleteScalingPolicyOutcome;
        typedef Aws::Utils::Outcome<DeregisterScalableTargetResult, Aws::Client::AWSError<ApplicationAutoScalingErrors>> DeregisterScalableTargetOutcome;
        typedef Aws::Utils::Outcome<DescribeScalableTargetsResult, Aws::Client::AWSError<ApplicationAutoScalingErrors>> DescribeScalableTargetsOutcome;
        typedef Aws::Utils::Outcome<DescribeScalingActivitiesResult, Aws::Client::AWSError<ApplicationAutoScalingErrors>> DescribeScalingActivitiesOutcome;
        typedef Aws::Utils::Outcome<DescribeScalingPoliciesResult, Aws::Client::AWSError<ApplicationAutoScalingErrors>> DescribeScalingPoliciesOutcome;
        typedef Aws::Utils::Outcome<PutScalingPolicyResult, Aws::Client::AWSError<ApplicationAutoScalingErrors>> PutScalingPolicyOutcome;
        typedef Aws::Utils::Outcome<RegisterScalableTargetResult, Aws::Client::AWSError<ApplicationAutoScalingErrors>> RegisterScalableTargetOutcome;

        typedef std::future<DeleteScalingPolicyOutcome> DeleteScalingPolicyOutcomeCallable;
        typedef std::future<DeregisterScalableTargetOutcome> DeregisterScalableTargetOutcomeCallable;
        typedef std::future<DescribeScalableTargetsOutcome> DescribeScalableTargetsOutcomeCallable;
        typedef std::future<DescribeScalingActivitiesOutcome> DescribeScalingActivitiesOutcomeCallable;
        typedef std::future<DescribeScalingPoliciesOutcome> DescribeScalingPoliciesOutcomeCallable;
        typedef std::future<PutScalingPolicyOutcome> PutScalingPolicyOutcomeCallable;
        typedef std::future<RegisterScalableTargetOutcome> RegisterScalableTargetOutcomeCallable;
} // namespace Model

  class ApplicationAutoScalingClient;

    typedef std::function<void(const ApplicationAutoScalingClient*, const Model::DeleteScalingPolicyRequest&, const Model::DeleteScalingPolicyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteScalingPolicyResponseReceivedHandler;
    typedef std::function<void(const ApplicationAutoScalingClient*, const Model::DeregisterScalableTargetRequest&, const Model::DeregisterScalableTargetOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeregisterScalableTargetResponseReceivedHandler;
    typedef std::function<void(const ApplicationAutoScalingClient*, const Model::DescribeScalableTargetsRequest&, const Model::DescribeScalableTargetsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeScalableTargetsResponseReceivedHandler;
    typedef std::function<void(const ApplicationAutoScalingClient*, const Model::DescribeScalingActivitiesRequest&, const Model::DescribeScalingActivitiesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeScalingActivitiesResponseReceivedHandler;
    typedef std::function<void(const ApplicationAutoScalingClient*, const Model::DescribeScalingPoliciesRequest&, const Model::DescribeScalingPoliciesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeScalingPoliciesResponseReceivedHandler;
    typedef std::function<void(const ApplicationAutoScalingClient*, const Model::PutScalingPolicyRequest&, const Model::PutScalingPolicyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutScalingPolicyResponseReceivedHandler;
    typedef std::function<void(const ApplicationAutoScalingClient*, const Model::RegisterScalableTargetRequest&, const Model::RegisterScalableTargetOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > RegisterScalableTargetResponseReceivedHandler;

  /**
   * <p>With Application Auto Scaling, you can automatically scale your AWS
   * resources. The experience similar to that of <a
   * href="https://aws.amazon.com/autoscaling/">Auto Scaling</a>. You can use
   * Application Auto Scaling to accomplish the following tasks:</p> <ul> <li>
   * <p>Define scaling policies to automatically scale your AWS resources</p> </li>
   * <li> <p>Scale your resources in response to CloudWatch alarms</p> </li> <li>
   * <p>View the history of your scaling events</p> </li> </ul> <p>Application Auto
   * Scaling can scale the following AWS resources:</p> <ul> <li> <p>Amazon ECS
   * services. For more information, see <a
   * href="http://docs.aws.amazon.com/AmazonECS/latest/developerguide/service-auto-scaling.html">Service
   * Auto Scaling</a> in the <i>Amazon EC2 Container Service Developer Guide</i>.</p>
   * </li> <li> <p>Amazon EC2 Spot fleets. For more information, see <a
   * href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/fleet-auto-scaling.html">Automatic
   * Scaling for Spot Fleet</a> in the <i>Amazon EC2 User Guide</i>.</p> </li> <li>
   * <p>Amazon EMR clusters. For more information, see <a
   * href="http://docs.aws.amazon.com/ElasticMapReduce/latest/ManagementGuide/emr-automatic-scaling.html">Using
   * Automatic Scaling in Amazon EMR</a> in the <i>Amazon EMR Management
   * Guide</i>.</p> </li> <li> <p>AppStream 2.0 fleets. For more information, see <a
   * href="http://docs.aws.amazon.com/appstream2/latest/developerguide/autoscaling.html">Autoscaling
   * Amazon AppStream 2.0 Resources</a> in the <i>Amazon AppStream 2.0 Developer
   * Guide</i>.</p> </li> </ul> <p>For a list of supported regions, see <a
   * href="http://docs.aws.amazon.com/general/latest/gr/rande.html#as-app_region">AWS
   * Regions and Endpoints: Application Auto Scaling</a> in the <i>AWS General
   * Reference</i>.</p>
   */
  class AWS_APPLICATIONAUTOSCALING_API ApplicationAutoScalingClient : public Aws::Client::AWSJsonClient
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        ApplicationAutoScalingClient(const Client::ClientConfiguration& clientConfiguration = Client::ClientConfiguration());

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        ApplicationAutoScalingClient(const Auth::AWSCredentials& credentials, const Client::ClientConfiguration& clientConfiguration = Client::ClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        ApplicationAutoScalingClient(const std::shared_ptr<Auth::AWSCredentialsProvider>& credentialsProvider,
            const Client::ClientConfiguration& clientConfiguration = Client::ClientConfiguration());

        virtual ~ApplicationAutoScalingClient();

        /**
         * <p>Deletes the specified Application Auto Scaling scaling policy.</p>
         * <p>Deleting a policy deletes the underlying alarm action, but does not delete
         * the CloudWatch alarm associated with the scaling policy, even if it no longer
         * has an associated action.</p> <p>To create a scaling policy or update an
         * existing one, see <a>PutScalingPolicy</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/application-autoscaling-2016-02-06/DeleteScalingPolicy">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteScalingPolicyOutcome DeleteScalingPolicy(const Model::DeleteScalingPolicyRequest& request) const;

        /**
         * <p>Deletes the specified Application Auto Scaling scaling policy.</p>
         * <p>Deleting a policy deletes the underlying alarm action, but does not delete
         * the CloudWatch alarm associated with the scaling policy, even if it no longer
         * has an associated action.</p> <p>To create a scaling policy or update an
         * existing one, see <a>PutScalingPolicy</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/application-autoscaling-2016-02-06/DeleteScalingPolicy">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteScalingPolicyOutcomeCallable DeleteScalingPolicyCallable(const Model::DeleteScalingPolicyRequest& request) const;

        /**
         * <p>Deletes the specified Application Auto Scaling scaling policy.</p>
         * <p>Deleting a policy deletes the underlying alarm action, but does not delete
         * the CloudWatch alarm associated with the scaling policy, even if it no longer
         * has an associated action.</p> <p>To create a scaling policy or update an
         * existing one, see <a>PutScalingPolicy</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/application-autoscaling-2016-02-06/DeleteScalingPolicy">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteScalingPolicyAsync(const Model::DeleteScalingPolicyRequest& request, const DeleteScalingPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deregisters a scalable target.</p> <p>Deregistering a scalable target deletes
         * the scaling policies that are associated with it.</p> <p>To create a scalable
         * target or update an existing one, see
         * <a>RegisterScalableTarget</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/application-autoscaling-2016-02-06/DeregisterScalableTarget">AWS
         * API Reference</a></p>
         */
        virtual Model::DeregisterScalableTargetOutcome DeregisterScalableTarget(const Model::DeregisterScalableTargetRequest& request) const;

        /**
         * <p>Deregisters a scalable target.</p> <p>Deregistering a scalable target deletes
         * the scaling policies that are associated with it.</p> <p>To create a scalable
         * target or update an existing one, see
         * <a>RegisterScalableTarget</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/application-autoscaling-2016-02-06/DeregisterScalableTarget">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeregisterScalableTargetOutcomeCallable DeregisterScalableTargetCallable(const Model::DeregisterScalableTargetRequest& request) const;

        /**
         * <p>Deregisters a scalable target.</p> <p>Deregistering a scalable target deletes
         * the scaling policies that are associated with it.</p> <p>To create a scalable
         * target or update an existing one, see
         * <a>RegisterScalableTarget</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/application-autoscaling-2016-02-06/DeregisterScalableTarget">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeregisterScalableTargetAsync(const Model::DeregisterScalableTargetRequest& request, const DeregisterScalableTargetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Provides descriptive information about the scalable targets in the specified
         * namespace.</p> <p>You can filter the results using the <code>ResourceIds</code>
         * and <code>ScalableDimension</code> parameters.</p> <p>To create a scalable
         * target or update an existing one, see <a>RegisterScalableTarget</a>. If you are
         * no longer using a scalable target, you can deregister it using
         * <a>DeregisterScalableTarget</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/application-autoscaling-2016-02-06/DescribeScalableTargets">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeScalableTargetsOutcome DescribeScalableTargets(const Model::DescribeScalableTargetsRequest& request) const;

        /**
         * <p>Provides descriptive information about the scalable targets in the specified
         * namespace.</p> <p>You can filter the results using the <code>ResourceIds</code>
         * and <code>ScalableDimension</code> parameters.</p> <p>To create a scalable
         * target or update an existing one, see <a>RegisterScalableTarget</a>. If you are
         * no longer using a scalable target, you can deregister it using
         * <a>DeregisterScalableTarget</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/application-autoscaling-2016-02-06/DescribeScalableTargets">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeScalableTargetsOutcomeCallable DescribeScalableTargetsCallable(const Model::DescribeScalableTargetsRequest& request) const;

        /**
         * <p>Provides descriptive information about the scalable targets in the specified
         * namespace.</p> <p>You can filter the results using the <code>ResourceIds</code>
         * and <code>ScalableDimension</code> parameters.</p> <p>To create a scalable
         * target or update an existing one, see <a>RegisterScalableTarget</a>. If you are
         * no longer using a scalable target, you can deregister it using
         * <a>DeregisterScalableTarget</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/application-autoscaling-2016-02-06/DescribeScalableTargets">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeScalableTargetsAsync(const Model::DescribeScalableTargetsRequest& request, const DescribeScalableTargetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Provides descriptive information about the scaling activities in the
         * specified namespace from the previous six weeks.</p> <p>You can filter the
         * results using the <code>ResourceId</code> and <code>ScalableDimension</code>
         * parameters.</p> <p>Scaling activities are triggered by CloudWatch alarms that
         * are associated with scaling policies. To view the scaling policies for a service
         * namespace, see <a>DescribeScalingPolicies</a>. To create a scaling policy or
         * update an existing one, see <a>PutScalingPolicy</a>.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/application-autoscaling-2016-02-06/DescribeScalingActivities">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeScalingActivitiesOutcome DescribeScalingActivities(const Model::DescribeScalingActivitiesRequest& request) const;

        /**
         * <p>Provides descriptive information about the scaling activities in the
         * specified namespace from the previous six weeks.</p> <p>You can filter the
         * results using the <code>ResourceId</code> and <code>ScalableDimension</code>
         * parameters.</p> <p>Scaling activities are triggered by CloudWatch alarms that
         * are associated with scaling policies. To view the scaling policies for a service
         * namespace, see <a>DescribeScalingPolicies</a>. To create a scaling policy or
         * update an existing one, see <a>PutScalingPolicy</a>.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/application-autoscaling-2016-02-06/DescribeScalingActivities">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeScalingActivitiesOutcomeCallable DescribeScalingActivitiesCallable(const Model::DescribeScalingActivitiesRequest& request) const;

        /**
         * <p>Provides descriptive information about the scaling activities in the
         * specified namespace from the previous six weeks.</p> <p>You can filter the
         * results using the <code>ResourceId</code> and <code>ScalableDimension</code>
         * parameters.</p> <p>Scaling activities are triggered by CloudWatch alarms that
         * are associated with scaling policies. To view the scaling policies for a service
         * namespace, see <a>DescribeScalingPolicies</a>. To create a scaling policy or
         * update an existing one, see <a>PutScalingPolicy</a>.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/application-autoscaling-2016-02-06/DescribeScalingActivities">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeScalingActivitiesAsync(const Model::DescribeScalingActivitiesRequest& request, const DescribeScalingActivitiesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Provides descriptive information about the scaling policies in the specified
         * namespace.</p> <p>You can filter the results using the <code>ResourceId</code>,
         * <code>ScalableDimension</code>, and <code>PolicyNames</code> parameters.</p>
         * <p>To create a scaling policy or update an existing one, see
         * <a>PutScalingPolicy</a>. If you are no longer using a scaling policy, you can
         * delete it using <a>DeleteScalingPolicy</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/application-autoscaling-2016-02-06/DescribeScalingPolicies">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeScalingPoliciesOutcome DescribeScalingPolicies(const Model::DescribeScalingPoliciesRequest& request) const;

        /**
         * <p>Provides descriptive information about the scaling policies in the specified
         * namespace.</p> <p>You can filter the results using the <code>ResourceId</code>,
         * <code>ScalableDimension</code>, and <code>PolicyNames</code> parameters.</p>
         * <p>To create a scaling policy or update an existing one, see
         * <a>PutScalingPolicy</a>. If you are no longer using a scaling policy, you can
         * delete it using <a>DeleteScalingPolicy</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/application-autoscaling-2016-02-06/DescribeScalingPolicies">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeScalingPoliciesOutcomeCallable DescribeScalingPoliciesCallable(const Model::DescribeScalingPoliciesRequest& request) const;

        /**
         * <p>Provides descriptive information about the scaling policies in the specified
         * namespace.</p> <p>You can filter the results using the <code>ResourceId</code>,
         * <code>ScalableDimension</code>, and <code>PolicyNames</code> parameters.</p>
         * <p>To create a scaling policy or update an existing one, see
         * <a>PutScalingPolicy</a>. If you are no longer using a scaling policy, you can
         * delete it using <a>DeleteScalingPolicy</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/application-autoscaling-2016-02-06/DescribeScalingPolicies">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeScalingPoliciesAsync(const Model::DescribeScalingPoliciesRequest& request, const DescribeScalingPoliciesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates or updates a policy for an Application Auto Scaling scalable
         * target.</p> <p>Each scalable target is identified by a service namespace,
         * resource ID, and scalable dimension. A scaling policy applies to the scalable
         * target identified by those three attributes. You cannot create a scaling policy
         * without first registering a scalable target using
         * <a>RegisterScalableTarget</a>.</p> <p>To update a policy, specify its policy
         * name and the parameters that you want to change. Any parameters that you don't
         * specify are not changed by this update request.</p> <p>You can view the scaling
         * policies for a service namespace using <a>DescribeScalingPolicies</a>. If you
         * are no longer using a scaling policy, you can delete it using
         * <a>DeleteScalingPolicy</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/application-autoscaling-2016-02-06/PutScalingPolicy">AWS
         * API Reference</a></p>
         */
        virtual Model::PutScalingPolicyOutcome PutScalingPolicy(const Model::PutScalingPolicyRequest& request) const;

        /**
         * <p>Creates or updates a policy for an Application Auto Scaling scalable
         * target.</p> <p>Each scalable target is identified by a service namespace,
         * resource ID, and scalable dimension. A scaling policy applies to the scalable
         * target identified by those three attributes. You cannot create a scaling policy
         * without first registering a scalable target using
         * <a>RegisterScalableTarget</a>.</p> <p>To update a policy, specify its policy
         * name and the parameters that you want to change. Any parameters that you don't
         * specify are not changed by this update request.</p> <p>You can view the scaling
         * policies for a service namespace using <a>DescribeScalingPolicies</a>. If you
         * are no longer using a scaling policy, you can delete it using
         * <a>DeleteScalingPolicy</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/application-autoscaling-2016-02-06/PutScalingPolicy">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::PutScalingPolicyOutcomeCallable PutScalingPolicyCallable(const Model::PutScalingPolicyRequest& request) const;

        /**
         * <p>Creates or updates a policy for an Application Auto Scaling scalable
         * target.</p> <p>Each scalable target is identified by a service namespace,
         * resource ID, and scalable dimension. A scaling policy applies to the scalable
         * target identified by those three attributes. You cannot create a scaling policy
         * without first registering a scalable target using
         * <a>RegisterScalableTarget</a>.</p> <p>To update a policy, specify its policy
         * name and the parameters that you want to change. Any parameters that you don't
         * specify are not changed by this update request.</p> <p>You can view the scaling
         * policies for a service namespace using <a>DescribeScalingPolicies</a>. If you
         * are no longer using a scaling policy, you can delete it using
         * <a>DeleteScalingPolicy</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/application-autoscaling-2016-02-06/PutScalingPolicy">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void PutScalingPolicyAsync(const Model::PutScalingPolicyRequest& request, const PutScalingPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Registers or updates a scalable target. A scalable target is a resource that
         * Application Auto Scaling can scale out or scale in. After you have registered a
         * scalable target, you can use this operation to update the minimum and maximum
         * values for your scalable dimension.</p> <p>After you register a scalable target,
         * you can create and apply scaling policies using <a>PutScalingPolicy</a>. You can
         * view the scaling policies for a service namespace using
         * <a>DescribeScalableTargets</a>. If you are no longer using a scalable target,
         * you can deregister it using <a>DeregisterScalableTarget</a>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/application-autoscaling-2016-02-06/RegisterScalableTarget">AWS
         * API Reference</a></p>
         */
        virtual Model::RegisterScalableTargetOutcome RegisterScalableTarget(const Model::RegisterScalableTargetRequest& request) const;

        /**
         * <p>Registers or updates a scalable target. A scalable target is a resource that
         * Application Auto Scaling can scale out or scale in. After you have registered a
         * scalable target, you can use this operation to update the minimum and maximum
         * values for your scalable dimension.</p> <p>After you register a scalable target,
         * you can create and apply scaling policies using <a>PutScalingPolicy</a>. You can
         * view the scaling policies for a service namespace using
         * <a>DescribeScalableTargets</a>. If you are no longer using a scalable target,
         * you can deregister it using <a>DeregisterScalableTarget</a>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/application-autoscaling-2016-02-06/RegisterScalableTarget">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::RegisterScalableTargetOutcomeCallable RegisterScalableTargetCallable(const Model::RegisterScalableTargetRequest& request) const;

        /**
         * <p>Registers or updates a scalable target. A scalable target is a resource that
         * Application Auto Scaling can scale out or scale in. After you have registered a
         * scalable target, you can use this operation to update the minimum and maximum
         * values for your scalable dimension.</p> <p>After you register a scalable target,
         * you can create and apply scaling policies using <a>PutScalingPolicy</a>. You can
         * view the scaling policies for a service namespace using
         * <a>DescribeScalableTargets</a>. If you are no longer using a scalable target,
         * you can deregister it using <a>DeregisterScalableTarget</a>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/application-autoscaling-2016-02-06/RegisterScalableTarget">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void RegisterScalableTargetAsync(const Model::RegisterScalableTargetRequest& request, const RegisterScalableTargetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;


    private:
      void init(const Client::ClientConfiguration& clientConfiguration);

        /**Async helpers**/
        void DeleteScalingPolicyAsyncHelper(const Model::DeleteScalingPolicyRequest& request, const DeleteScalingPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeregisterScalableTargetAsyncHelper(const Model::DeregisterScalableTargetRequest& request, const DeregisterScalableTargetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeScalableTargetsAsyncHelper(const Model::DescribeScalableTargetsRequest& request, const DescribeScalableTargetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeScalingActivitiesAsyncHelper(const Model::DescribeScalingActivitiesRequest& request, const DescribeScalingActivitiesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeScalingPoliciesAsyncHelper(const Model::DescribeScalingPoliciesRequest& request, const DescribeScalingPoliciesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void PutScalingPolicyAsyncHelper(const Model::PutScalingPolicyRequest& request, const PutScalingPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void RegisterScalableTargetAsyncHelper(const Model::RegisterScalableTargetRequest& request, const RegisterScalableTargetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;

      Aws::String m_uri;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
  };

} // namespace ApplicationAutoScaling
} // namespace Aws
