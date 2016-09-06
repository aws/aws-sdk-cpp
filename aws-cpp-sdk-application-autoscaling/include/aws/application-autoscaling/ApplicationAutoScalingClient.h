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
   * <p>Application Auto Scaling is a general purpose Auto Scaling service for
   * supported elastic AWS resources. With Application Auto Scaling, you can
   * automatically scale your AWS resources, with an experience similar to that of
   * Auto Scaling.</p> <p>Application Auto Scaling supports scaling the following AWS
   * resources:</p> <ul> <li> <p>Amazon ECS services</p> </li> <li> <p>Amazon EC2
   * Spot fleet instances</p> </li> </ul> <p>You can use Application Auto Scaling to
   * accomplish the following tasks:</p> <ul> <li> <p>Define scaling policies for
   * automatically adjusting your AWS resources</p> </li> <li> <p>Scale your
   * resources in response to CloudWatch alarms</p> </li> <li> <p>View history of
   * your scaling events </p> </li> </ul> <p>Application Auto Scaling is available in
   * the following regions:</p> <ul> <li> <p> <code>us-east-1</code> </p> </li> <li>
   * <p> <code>us-west-1</code> </p> </li> <li> <p> <code>us-west-2</code> </p> </li>
   * <li> <p> <code>ap-southeast-1</code> </p> </li> <li> <p>
   * <code>ap-southeast-2</code> </p> </li> <li> <p> <code>ap-northeast-1</code> </p>
   * </li> <li> <p> <code>eu-central-1</code> </p> </li> <li> <p>
   * <code>eu-west-1</code> </p> </li> </ul>
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
         * <p>Deletes an Application Auto Scaling scaling policy that was previously
         * created. If you are no longer using a scaling policy, you can delete it with
         * this operation.</p> <p>Deleting a policy deletes the underlying alarm action,
         * but does not delete the CloudWatch alarm associated with the scaling policy,
         * even if it no longer has an associated action.</p> <p>To create a new scaling
         * policy or update an existing one, see <a>PutScalingPolicy</a>.</p>
         */
        virtual Model::DeleteScalingPolicyOutcome DeleteScalingPolicy(const Model::DeleteScalingPolicyRequest& request) const;

        /**
         * <p>Deletes an Application Auto Scaling scaling policy that was previously
         * created. If you are no longer using a scaling policy, you can delete it with
         * this operation.</p> <p>Deleting a policy deletes the underlying alarm action,
         * but does not delete the CloudWatch alarm associated with the scaling policy,
         * even if it no longer has an associated action.</p> <p>To create a new scaling
         * policy or update an existing one, see <a>PutScalingPolicy</a>.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteScalingPolicyOutcomeCallable DeleteScalingPolicyCallable(const Model::DeleteScalingPolicyRequest& request) const;

        /**
         * <p>Deletes an Application Auto Scaling scaling policy that was previously
         * created. If you are no longer using a scaling policy, you can delete it with
         * this operation.</p> <p>Deleting a policy deletes the underlying alarm action,
         * but does not delete the CloudWatch alarm associated with the scaling policy,
         * even if it no longer has an associated action.</p> <p>To create a new scaling
         * policy or update an existing one, see <a>PutScalingPolicy</a>.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteScalingPolicyAsync(const Model::DeleteScalingPolicyRequest& request, const DeleteScalingPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deregisters a scalable target that was previously registered. If you are no
         * longer using a scalable target, you can delete it with this operation. When you
         * deregister a scalable target, all of the scaling policies that are associated
         * with that scalable target are deleted.</p> <p>To create a new scalable target or
         * update an existing one, see <a>RegisterScalableTarget</a>.</p>
         */
        virtual Model::DeregisterScalableTargetOutcome DeregisterScalableTarget(const Model::DeregisterScalableTargetRequest& request) const;

        /**
         * <p>Deregisters a scalable target that was previously registered. If you are no
         * longer using a scalable target, you can delete it with this operation. When you
         * deregister a scalable target, all of the scaling policies that are associated
         * with that scalable target are deleted.</p> <p>To create a new scalable target or
         * update an existing one, see <a>RegisterScalableTarget</a>.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeregisterScalableTargetOutcomeCallable DeregisterScalableTargetCallable(const Model::DeregisterScalableTargetRequest& request) const;

        /**
         * <p>Deregisters a scalable target that was previously registered. If you are no
         * longer using a scalable target, you can delete it with this operation. When you
         * deregister a scalable target, all of the scaling policies that are associated
         * with that scalable target are deleted.</p> <p>To create a new scalable target or
         * update an existing one, see <a>RegisterScalableTarget</a>.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeregisterScalableTargetAsync(const Model::DeregisterScalableTargetRequest& request, const DeregisterScalableTargetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Provides descriptive information for scalable targets with a specified
         * service namespace.</p> <p>You can filter the results in a service namespace with
         * the <code>ResourceIds</code> and <code>ScalableDimension</code> parameters.</p>
         * <p>To create a new scalable target or update an existing one, see
         * <a>RegisterScalableTarget</a>. If you are no longer using a scalable target, you
         * can deregister it with <a>DeregisterScalableTarget</a>.</p>
         */
        virtual Model::DescribeScalableTargetsOutcome DescribeScalableTargets(const Model::DescribeScalableTargetsRequest& request) const;

        /**
         * <p>Provides descriptive information for scalable targets with a specified
         * service namespace.</p> <p>You can filter the results in a service namespace with
         * the <code>ResourceIds</code> and <code>ScalableDimension</code> parameters.</p>
         * <p>To create a new scalable target or update an existing one, see
         * <a>RegisterScalableTarget</a>. If you are no longer using a scalable target, you
         * can deregister it with <a>DeregisterScalableTarget</a>.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeScalableTargetsOutcomeCallable DescribeScalableTargetsCallable(const Model::DescribeScalableTargetsRequest& request) const;

        /**
         * <p>Provides descriptive information for scalable targets with a specified
         * service namespace.</p> <p>You can filter the results in a service namespace with
         * the <code>ResourceIds</code> and <code>ScalableDimension</code> parameters.</p>
         * <p>To create a new scalable target or update an existing one, see
         * <a>RegisterScalableTarget</a>. If you are no longer using a scalable target, you
         * can deregister it with <a>DeregisterScalableTarget</a>.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeScalableTargetsAsync(const Model::DescribeScalableTargetsRequest& request, const DescribeScalableTargetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Provides descriptive information for scaling activities with a specified
         * service namespace for the previous six weeks.</p> <p>You can filter the results
         * in a service namespace with the <code>ResourceId</code> and
         * <code>ScalableDimension</code> parameters.</p> <p>Scaling activities are
         * triggered by CloudWatch alarms that are associated with scaling policies. To
         * view the existing scaling policies for a service namespace, see
         * <a>DescribeScalingPolicies</a>. To create a new scaling policy or update an
         * existing one, see <a>PutScalingPolicy</a>.</p>
         */
        virtual Model::DescribeScalingActivitiesOutcome DescribeScalingActivities(const Model::DescribeScalingActivitiesRequest& request) const;

        /**
         * <p>Provides descriptive information for scaling activities with a specified
         * service namespace for the previous six weeks.</p> <p>You can filter the results
         * in a service namespace with the <code>ResourceId</code> and
         * <code>ScalableDimension</code> parameters.</p> <p>Scaling activities are
         * triggered by CloudWatch alarms that are associated with scaling policies. To
         * view the existing scaling policies for a service namespace, see
         * <a>DescribeScalingPolicies</a>. To create a new scaling policy or update an
         * existing one, see <a>PutScalingPolicy</a>.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeScalingActivitiesOutcomeCallable DescribeScalingActivitiesCallable(const Model::DescribeScalingActivitiesRequest& request) const;

        /**
         * <p>Provides descriptive information for scaling activities with a specified
         * service namespace for the previous six weeks.</p> <p>You can filter the results
         * in a service namespace with the <code>ResourceId</code> and
         * <code>ScalableDimension</code> parameters.</p> <p>Scaling activities are
         * triggered by CloudWatch alarms that are associated with scaling policies. To
         * view the existing scaling policies for a service namespace, see
         * <a>DescribeScalingPolicies</a>. To create a new scaling policy or update an
         * existing one, see <a>PutScalingPolicy</a>.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeScalingActivitiesAsync(const Model::DescribeScalingActivitiesRequest& request, const DescribeScalingActivitiesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Provides descriptive information for scaling policies with a specified
         * service namespace.</p> <p>You can filter the results in a service namespace with
         * the <code>ResourceId</code>, <code>ScalableDimension</code>, and
         * <code>PolicyNames</code> parameters.</p> <p>To create a new scaling policy or
         * update an existing one, see <a>PutScalingPolicy</a>. If you are no longer using
         * a scaling policy, you can delete it with <a>DeleteScalingPolicy</a>.</p>
         */
        virtual Model::DescribeScalingPoliciesOutcome DescribeScalingPolicies(const Model::DescribeScalingPoliciesRequest& request) const;

        /**
         * <p>Provides descriptive information for scaling policies with a specified
         * service namespace.</p> <p>You can filter the results in a service namespace with
         * the <code>ResourceId</code>, <code>ScalableDimension</code>, and
         * <code>PolicyNames</code> parameters.</p> <p>To create a new scaling policy or
         * update an existing one, see <a>PutScalingPolicy</a>. If you are no longer using
         * a scaling policy, you can delete it with <a>DeleteScalingPolicy</a>.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeScalingPoliciesOutcomeCallable DescribeScalingPoliciesCallable(const Model::DescribeScalingPoliciesRequest& request) const;

        /**
         * <p>Provides descriptive information for scaling policies with a specified
         * service namespace.</p> <p>You can filter the results in a service namespace with
         * the <code>ResourceId</code>, <code>ScalableDimension</code>, and
         * <code>PolicyNames</code> parameters.</p> <p>To create a new scaling policy or
         * update an existing one, see <a>PutScalingPolicy</a>. If you are no longer using
         * a scaling policy, you can delete it with <a>DeleteScalingPolicy</a>.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeScalingPoliciesAsync(const Model::DescribeScalingPoliciesRequest& request, const DescribeScalingPoliciesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates or updates a policy for an existing Application Auto Scaling scalable
         * target. Each scalable target is identified by service namespace, a resource ID,
         * and a scalable dimension, and a scaling policy applies to a scalable target that
         * is identified by those three attributes. You cannot create a scaling policy
         * without first registering a scalable target with
         * <a>RegisterScalableTarget</a>.</p> <p>To update an existing policy, use the
         * existing policy name and set the parameters you want to change. Any existing
         * parameter not changed in an update to an existing policy is not changed in this
         * update request.</p> <p>You can view the existing scaling policies for a service
         * namespace with <a>DescribeScalingPolicies</a>. If you are no longer using a
         * scaling policy, you can delete it with <a>DeleteScalingPolicy</a>.</p>
         */
        virtual Model::PutScalingPolicyOutcome PutScalingPolicy(const Model::PutScalingPolicyRequest& request) const;

        /**
         * <p>Creates or updates a policy for an existing Application Auto Scaling scalable
         * target. Each scalable target is identified by service namespace, a resource ID,
         * and a scalable dimension, and a scaling policy applies to a scalable target that
         * is identified by those three attributes. You cannot create a scaling policy
         * without first registering a scalable target with
         * <a>RegisterScalableTarget</a>.</p> <p>To update an existing policy, use the
         * existing policy name and set the parameters you want to change. Any existing
         * parameter not changed in an update to an existing policy is not changed in this
         * update request.</p> <p>You can view the existing scaling policies for a service
         * namespace with <a>DescribeScalingPolicies</a>. If you are no longer using a
         * scaling policy, you can delete it with <a>DeleteScalingPolicy</a>.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::PutScalingPolicyOutcomeCallable PutScalingPolicyCallable(const Model::PutScalingPolicyRequest& request) const;

        /**
         * <p>Creates or updates a policy for an existing Application Auto Scaling scalable
         * target. Each scalable target is identified by service namespace, a resource ID,
         * and a scalable dimension, and a scaling policy applies to a scalable target that
         * is identified by those three attributes. You cannot create a scaling policy
         * without first registering a scalable target with
         * <a>RegisterScalableTarget</a>.</p> <p>To update an existing policy, use the
         * existing policy name and set the parameters you want to change. Any existing
         * parameter not changed in an update to an existing policy is not changed in this
         * update request.</p> <p>You can view the existing scaling policies for a service
         * namespace with <a>DescribeScalingPolicies</a>. If you are no longer using a
         * scaling policy, you can delete it with <a>DeleteScalingPolicy</a>.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void PutScalingPolicyAsync(const Model::PutScalingPolicyRequest& request, const PutScalingPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Registers or updates a scalable target. A scalable target is a resource that
         * can be scaled out or in with Application Auto Scaling. After you have registered
         * a scalable target, you can use this operation to update the minimum and maximum
         * values for your scalable dimension.</p> <p>After you register a scalable target
         * with Application Auto Scaling, you can create and apply scaling policies to it
         * with <a>PutScalingPolicy</a>. You can view the existing scaling policies for a
         * service namespace with <a>DescribeScalableTargets</a>. If you are no longer
         * using a scalable target, you can deregister it with
         * <a>DeregisterScalableTarget</a>.</p>
         */
        virtual Model::RegisterScalableTargetOutcome RegisterScalableTarget(const Model::RegisterScalableTargetRequest& request) const;

        /**
         * <p>Registers or updates a scalable target. A scalable target is a resource that
         * can be scaled out or in with Application Auto Scaling. After you have registered
         * a scalable target, you can use this operation to update the minimum and maximum
         * values for your scalable dimension.</p> <p>After you register a scalable target
         * with Application Auto Scaling, you can create and apply scaling policies to it
         * with <a>PutScalingPolicy</a>. You can view the existing scaling policies for a
         * service namespace with <a>DescribeScalableTargets</a>. If you are no longer
         * using a scalable target, you can deregister it with
         * <a>DeregisterScalableTarget</a>.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::RegisterScalableTargetOutcomeCallable RegisterScalableTargetCallable(const Model::RegisterScalableTargetRequest& request) const;

        /**
         * <p>Registers or updates a scalable target. A scalable target is a resource that
         * can be scaled out or in with Application Auto Scaling. After you have registered
         * a scalable target, you can use this operation to update the minimum and maximum
         * values for your scalable dimension.</p> <p>After you register a scalable target
         * with Application Auto Scaling, you can create and apply scaling policies to it
         * with <a>PutScalingPolicy</a>. You can view the existing scaling policies for a
         * service namespace with <a>DescribeScalableTargets</a>. If you are no longer
         * using a scalable target, you can deregister it with
         * <a>DeregisterScalableTarget</a>.</p>
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
      std::shared_ptr<Utils::Threading::Executor> m_executor;
  };

} // namespace ApplicationAutoScaling
} // namespace Aws
