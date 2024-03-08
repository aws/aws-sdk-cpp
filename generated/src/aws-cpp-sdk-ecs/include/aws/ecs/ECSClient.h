/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ecs/ECS_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSClientAsyncCRTP.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/ecs/ECSServiceClientModel.h>

namespace Aws
{
namespace ECS
{
  /**
   * <fullname>Amazon Elastic Container Service</fullname> <p>Amazon Elastic
   * Container Service (Amazon ECS) is a highly scalable, fast, container management
   * service. It makes it easy to run, stop, and manage Docker containers. You can
   * host your cluster on a serverless infrastructure that's managed by Amazon ECS by
   * launching your services or tasks on Fargate. For more control, you can host your
   * tasks on a cluster of Amazon Elastic Compute Cloud (Amazon EC2) or External
   * (on-premises) instances that you manage.</p> <p>Amazon ECS makes it easy to
   * launch and stop container-based applications with simple API calls. This makes
   * it easy to get the state of your cluster from a centralized service, and gives
   * you access to many familiar Amazon EC2 features.</p> <p>You can use Amazon ECS
   * to schedule the placement of containers across your cluster based on your
   * resource needs, isolation policies, and availability requirements. With Amazon
   * ECS, you don't need to operate your own cluster management and configuration
   * management systems. You also don't need to worry about scaling your management
   * infrastructure. </p>
   */
  class AWS_ECS_API ECSClient : public Aws::Client::AWSJsonClient, public Aws::Client::ClientWithAsyncTemplateMethods<ECSClient>
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;
      static const char* GetServiceName();
      static const char* GetAllocationTag();

      typedef ECSClientConfiguration ClientConfigurationType;
      typedef ECSEndpointProvider EndpointProviderType;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        ECSClient(const Aws::ECS::ECSClientConfiguration& clientConfiguration = Aws::ECS::ECSClientConfiguration(),
                  std::shared_ptr<ECSEndpointProviderBase> endpointProvider = nullptr);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        ECSClient(const Aws::Auth::AWSCredentials& credentials,
                  std::shared_ptr<ECSEndpointProviderBase> endpointProvider = nullptr,
                  const Aws::ECS::ECSClientConfiguration& clientConfiguration = Aws::ECS::ECSClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        ECSClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                  std::shared_ptr<ECSEndpointProviderBase> endpointProvider = nullptr,
                  const Aws::ECS::ECSClientConfiguration& clientConfiguration = Aws::ECS::ECSClientConfiguration());


        /* Legacy constructors due deprecation */
       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        ECSClient(const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        ECSClient(const Aws::Auth::AWSCredentials& credentials,
                  const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        ECSClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                  const Aws::Client::ClientConfiguration& clientConfiguration);

        /* End of legacy constructors due deprecation */
        virtual ~ECSClient();

        /**
         * <p>Creates a new capacity provider. Capacity providers are associated with an
         * Amazon ECS cluster and are used in capacity provider strategies to facilitate
         * cluster auto scaling.</p> <p>Only capacity providers that use an Auto Scaling
         * group can be created. Amazon ECS tasks on Fargate use the <code>FARGATE</code>
         * and <code>FARGATE_SPOT</code> capacity providers. These providers are available
         * to all accounts in the Amazon Web Services Regions that Fargate
         * supports.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ecs-2014-11-13/CreateCapacityProvider">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateCapacityProviderOutcome CreateCapacityProvider(const Model::CreateCapacityProviderRequest& request) const;

        /**
         * A Callable wrapper for CreateCapacityProvider that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateCapacityProviderRequestT = Model::CreateCapacityProviderRequest>
        Model::CreateCapacityProviderOutcomeCallable CreateCapacityProviderCallable(const CreateCapacityProviderRequestT& request) const
        {
            return SubmitCallable(&ECSClient::CreateCapacityProvider, request);
        }

        /**
         * An Async wrapper for CreateCapacityProvider that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateCapacityProviderRequestT = Model::CreateCapacityProviderRequest>
        void CreateCapacityProviderAsync(const CreateCapacityProviderRequestT& request, const CreateCapacityProviderResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ECSClient::CreateCapacityProvider, request, handler, context);
        }

        /**
         * <p>Creates a new Amazon ECS cluster. By default, your account receives a
         * <code>default</code> cluster when you launch your first container instance.
         * However, you can create your own cluster with a unique name with the
         * <code>CreateCluster</code> action.</p>  <p>When you call the
         * <a>CreateCluster</a> API operation, Amazon ECS attempts to create the Amazon ECS
         * service-linked role for your account. This is so that it can manage required
         * resources in other Amazon Web Services services on your behalf. However, if the
         * user that makes the call doesn't have permissions to create the service-linked
         * role, it isn't created. For more information, see <a
         * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/using-service-linked-roles.html">Using
         * service-linked roles for Amazon ECS</a> in the <i>Amazon Elastic Container
         * Service Developer Guide</i>.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ecs-2014-11-13/CreateCluster">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateClusterOutcome CreateCluster(const Model::CreateClusterRequest& request) const;

        /**
         * A Callable wrapper for CreateCluster that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateClusterRequestT = Model::CreateClusterRequest>
        Model::CreateClusterOutcomeCallable CreateClusterCallable(const CreateClusterRequestT& request) const
        {
            return SubmitCallable(&ECSClient::CreateCluster, request);
        }

        /**
         * An Async wrapper for CreateCluster that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateClusterRequestT = Model::CreateClusterRequest>
        void CreateClusterAsync(const CreateClusterRequestT& request, const CreateClusterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ECSClient::CreateCluster, request, handler, context);
        }

        /**
         * <p>Runs and maintains your desired number of tasks from a specified task
         * definition. If the number of tasks running in a service drops below the
         * <code>desiredCount</code>, Amazon ECS runs another copy of the task in the
         * specified cluster. To update an existing service, see the <a>UpdateService</a>
         * action.</p>  <p>Starting April 15, 2023, Amazon Web Services will not
         * onboard new customers to Amazon Elastic Inference (EI), and will help current
         * customers migrate their workloads to options that offer better price and
         * performance. After April 15, 2023, new customers will not be able to launch
         * instances with Amazon EI accelerators in Amazon SageMaker, Amazon ECS, or Amazon
         * EC2. However, customers who have used Amazon EI at least once during the past
         * 30-day period are considered current customers and will be able to continue
         * using the service. </p>  <p>In addition to maintaining the desired count
         * of tasks in your service, you can optionally run your service behind one or more
         * load balancers. The load balancers distribute traffic across the tasks that are
         * associated with the service. For more information, see <a
         * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/service-load-balancing.html">Service
         * load balancing</a> in the <i>Amazon Elastic Container Service Developer
         * Guide</i>.</p> <p>You can attach Amazon EBS volumes to Amazon ECS tasks by
         * configuring the volume when creating or updating a service.
         * <code>volumeConfigurations</code> is only supported for REPLICA service and not
         * DAEMON service. For more infomation, see <a
         * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/ebs-volumes.html#ebs-volume-types">Amazon
         * EBS volumes</a> in the <i>Amazon Elastic Container Service Developer
         * Guide</i>.</p> <p>Tasks for services that don't use a load balancer are
         * considered healthy if they're in the <code>RUNNING</code> state. Tasks for
         * services that use a load balancer are considered healthy if they're in the
         * <code>RUNNING</code> state and are reported as healthy by the load balancer.</p>
         * <p>There are two service scheduler strategies available:</p> <ul> <li> <p>
         * <code>REPLICA</code> - The replica scheduling strategy places and maintains your
         * desired number of tasks across your cluster. By default, the service scheduler
         * spreads tasks across Availability Zones. You can use task placement strategies
         * and constraints to customize task placement decisions. For more information, see
         * <a
         * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/ecs_services.html">Service
         * scheduler concepts</a> in the <i>Amazon Elastic Container Service Developer
         * Guide</i>.</p> </li> <li> <p> <code>DAEMON</code> - The daemon scheduling
         * strategy deploys exactly one task on each active container instance that meets
         * all of the task placement constraints that you specify in your cluster. The
         * service scheduler also evaluates the task placement constraints for running
         * tasks. It also stops tasks that don't meet the placement constraints. When using
         * this strategy, you don't need to specify a desired number of tasks, a task
         * placement strategy, or use Service Auto Scaling policies. For more information,
         * see <a
         * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/ecs_services.html">Service
         * scheduler concepts</a> in the <i>Amazon Elastic Container Service Developer
         * Guide</i>.</p> </li> </ul> <p>You can optionally specify a deployment
         * configuration for your service. The deployment is initiated by changing
         * properties. For example, the deployment might be initiated by the task
         * definition or by your desired count of a service. This is done with an
         * <a>UpdateService</a> operation. The default value for a replica service for
         * <code>minimumHealthyPercent</code> is 100%. The default value for a daemon
         * service for <code>minimumHealthyPercent</code> is 0%.</p> <p>If a service uses
         * the <code>ECS</code> deployment controller, the minimum healthy percent
         * represents a lower limit on the number of tasks in a service that must remain in
         * the <code>RUNNING</code> state during a deployment. Specifically, it represents
         * it as a percentage of your desired number of tasks (rounded up to the nearest
         * integer). This happens when any of your container instances are in the
         * <code>DRAINING</code> state if the service contains tasks using the EC2 launch
         * type. Using this parameter, you can deploy without using additional cluster
         * capacity. For example, if you set your service to have desired number of four
         * tasks and a minimum healthy percent of 50%, the scheduler might stop two
         * existing tasks to free up cluster capacity before starting two new tasks. If
         * they're in the <code>RUNNING</code> state, tasks for services that don't use a
         * load balancer are considered healthy . If they're in the <code>RUNNING</code>
         * state and reported as healthy by the load balancer, tasks for services that
         * <i>do</i> use a load balancer are considered healthy . The default value for
         * minimum healthy percent is 100%.</p> <p>If a service uses the <code>ECS</code>
         * deployment controller, the <b>maximum percent</b> parameter represents an upper
         * limit on the number of tasks in a service that are allowed in the
         * <code>RUNNING</code> or <code>PENDING</code> state during a deployment.
         * Specifically, it represents it as a percentage of the desired number of tasks
         * (rounded down to the nearest integer). This happens when any of your container
         * instances are in the <code>DRAINING</code> state if the service contains tasks
         * using the EC2 launch type. Using this parameter, you can define the deployment
         * batch size. For example, if your service has a desired number of four tasks and
         * a maximum percent value of 200%, the scheduler may start four new tasks before
         * stopping the four older tasks (provided that the cluster resources required to
         * do this are available). The default value for maximum percent is 200%.</p> <p>If
         * a service uses either the <code>CODE_DEPLOY</code> or <code>EXTERNAL</code>
         * deployment controller types and tasks that use the EC2 launch type, the
         * <b>minimum healthy percent</b> and <b>maximum percent</b> values are used only
         * to define the lower and upper limit on the number of the tasks in the service
         * that remain in the <code>RUNNING</code> state. This is while the container
         * instances are in the <code>DRAINING</code> state. If the tasks in the service
         * use the Fargate launch type, the minimum healthy percent and maximum percent
         * values aren't used. This is the case even if they're currently visible when
         * describing your service.</p> <p>When creating a service that uses the
         * <code>EXTERNAL</code> deployment controller, you can specify only parameters
         * that aren't controlled at the task set level. The only required parameter is the
         * service name. You control your services using the <a>CreateTaskSet</a>
         * operation. For more information, see <a
         * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/deployment-types.html">Amazon
         * ECS deployment types</a> in the <i>Amazon Elastic Container Service Developer
         * Guide</i>.</p> <p>When the service scheduler launches new tasks, it determines
         * task placement. For information about task placement and task placement
         * strategies, see <a
         * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/task-placement.html">Amazon
         * ECS task placement</a> in the <i>Amazon Elastic Container Service Developer
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ecs-2014-11-13/CreateService">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateServiceOutcome CreateService(const Model::CreateServiceRequest& request) const;

        /**
         * A Callable wrapper for CreateService that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateServiceRequestT = Model::CreateServiceRequest>
        Model::CreateServiceOutcomeCallable CreateServiceCallable(const CreateServiceRequestT& request) const
        {
            return SubmitCallable(&ECSClient::CreateService, request);
        }

        /**
         * An Async wrapper for CreateService that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateServiceRequestT = Model::CreateServiceRequest>
        void CreateServiceAsync(const CreateServiceRequestT& request, const CreateServiceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ECSClient::CreateService, request, handler, context);
        }

        /**
         * <p>Create a task set in the specified cluster and service. This is used when a
         * service uses the <code>EXTERNAL</code> deployment controller type. For more
         * information, see <a
         * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/deployment-types.html">Amazon
         * ECS deployment types</a> in the <i>Amazon Elastic Container Service Developer
         * Guide</i>.</p> <p>For information about the maximum number of task sets and
         * otther quotas, see <a
         * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/service-quotas.html">Amazon
         * ECS service quotas</a> in the <i>Amazon Elastic Container Service Developer
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ecs-2014-11-13/CreateTaskSet">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateTaskSetOutcome CreateTaskSet(const Model::CreateTaskSetRequest& request) const;

        /**
         * A Callable wrapper for CreateTaskSet that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateTaskSetRequestT = Model::CreateTaskSetRequest>
        Model::CreateTaskSetOutcomeCallable CreateTaskSetCallable(const CreateTaskSetRequestT& request) const
        {
            return SubmitCallable(&ECSClient::CreateTaskSet, request);
        }

        /**
         * An Async wrapper for CreateTaskSet that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateTaskSetRequestT = Model::CreateTaskSetRequest>
        void CreateTaskSetAsync(const CreateTaskSetRequestT& request, const CreateTaskSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ECSClient::CreateTaskSet, request, handler, context);
        }

        /**
         * <p>Disables an account setting for a specified user, role, or the root user for
         * an account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ecs-2014-11-13/DeleteAccountSetting">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteAccountSettingOutcome DeleteAccountSetting(const Model::DeleteAccountSettingRequest& request) const;

        /**
         * A Callable wrapper for DeleteAccountSetting that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteAccountSettingRequestT = Model::DeleteAccountSettingRequest>
        Model::DeleteAccountSettingOutcomeCallable DeleteAccountSettingCallable(const DeleteAccountSettingRequestT& request) const
        {
            return SubmitCallable(&ECSClient::DeleteAccountSetting, request);
        }

        /**
         * An Async wrapper for DeleteAccountSetting that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteAccountSettingRequestT = Model::DeleteAccountSettingRequest>
        void DeleteAccountSettingAsync(const DeleteAccountSettingRequestT& request, const DeleteAccountSettingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ECSClient::DeleteAccountSetting, request, handler, context);
        }

        /**
         * <p>Deletes one or more custom attributes from an Amazon ECS
         * resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ecs-2014-11-13/DeleteAttributes">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteAttributesOutcome DeleteAttributes(const Model::DeleteAttributesRequest& request) const;

        /**
         * A Callable wrapper for DeleteAttributes that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteAttributesRequestT = Model::DeleteAttributesRequest>
        Model::DeleteAttributesOutcomeCallable DeleteAttributesCallable(const DeleteAttributesRequestT& request) const
        {
            return SubmitCallable(&ECSClient::DeleteAttributes, request);
        }

        /**
         * An Async wrapper for DeleteAttributes that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteAttributesRequestT = Model::DeleteAttributesRequest>
        void DeleteAttributesAsync(const DeleteAttributesRequestT& request, const DeleteAttributesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ECSClient::DeleteAttributes, request, handler, context);
        }

        /**
         * <p>Deletes the specified capacity provider.</p>  <p>The
         * <code>FARGATE</code> and <code>FARGATE_SPOT</code> capacity providers are
         * reserved and can't be deleted. You can disassociate them from a cluster using
         * either the <a>PutClusterCapacityProviders</a> API or by deleting the
         * cluster.</p>  <p>Prior to a capacity provider being deleted, the capacity
         * provider must be removed from the capacity provider strategy from all services.
         * The <a>UpdateService</a> API can be used to remove a capacity provider from a
         * service's capacity provider strategy. When updating a service, the
         * <code>forceNewDeployment</code> option can be used to ensure that any tasks
         * using the Amazon EC2 instance capacity provided by the capacity provider are
         * transitioned to use the capacity from the remaining capacity providers. Only
         * capacity providers that aren't associated with a cluster can be deleted. To
         * remove a capacity provider from a cluster, you can either use
         * <a>PutClusterCapacityProviders</a> or delete the cluster.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ecs-2014-11-13/DeleteCapacityProvider">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteCapacityProviderOutcome DeleteCapacityProvider(const Model::DeleteCapacityProviderRequest& request) const;

        /**
         * A Callable wrapper for DeleteCapacityProvider that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteCapacityProviderRequestT = Model::DeleteCapacityProviderRequest>
        Model::DeleteCapacityProviderOutcomeCallable DeleteCapacityProviderCallable(const DeleteCapacityProviderRequestT& request) const
        {
            return SubmitCallable(&ECSClient::DeleteCapacityProvider, request);
        }

        /**
         * An Async wrapper for DeleteCapacityProvider that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteCapacityProviderRequestT = Model::DeleteCapacityProviderRequest>
        void DeleteCapacityProviderAsync(const DeleteCapacityProviderRequestT& request, const DeleteCapacityProviderResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ECSClient::DeleteCapacityProvider, request, handler, context);
        }

        /**
         * <p>Deletes the specified cluster. The cluster transitions to the
         * <code>INACTIVE</code> state. Clusters with an <code>INACTIVE</code> status might
         * remain discoverable in your account for a period of time. However, this behavior
         * is subject to change in the future. We don't recommend that you rely on
         * <code>INACTIVE</code> clusters persisting.</p> <p>You must deregister all
         * container instances from this cluster before you may delete it. You can list the
         * container instances in a cluster with <a>ListContainerInstances</a> and
         * deregister them with <a>DeregisterContainerInstance</a>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ecs-2014-11-13/DeleteCluster">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteClusterOutcome DeleteCluster(const Model::DeleteClusterRequest& request) const;

        /**
         * A Callable wrapper for DeleteCluster that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteClusterRequestT = Model::DeleteClusterRequest>
        Model::DeleteClusterOutcomeCallable DeleteClusterCallable(const DeleteClusterRequestT& request) const
        {
            return SubmitCallable(&ECSClient::DeleteCluster, request);
        }

        /**
         * An Async wrapper for DeleteCluster that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteClusterRequestT = Model::DeleteClusterRequest>
        void DeleteClusterAsync(const DeleteClusterRequestT& request, const DeleteClusterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ECSClient::DeleteCluster, request, handler, context);
        }

        /**
         * <p>Deletes a specified service within a cluster. You can delete a service if you
         * have no running tasks in it and the desired task count is zero. If the service
         * is actively maintaining tasks, you can't delete it, and you must update the
         * service to a desired task count of zero. For more information, see
         * <a>UpdateService</a>.</p>  <p>When you delete a service, if there are
         * still running tasks that require cleanup, the service status moves from
         * <code>ACTIVE</code> to <code>DRAINING</code>, and the service is no longer
         * visible in the console or in the <a>ListServices</a> API operation. After all
         * tasks have transitioned to either <code>STOPPING</code> or <code>STOPPED</code>
         * status, the service status moves from <code>DRAINING</code> to
         * <code>INACTIVE</code>. Services in the <code>DRAINING</code> or
         * <code>INACTIVE</code> status can still be viewed with the
         * <a>DescribeServices</a> API operation. However, in the future,
         * <code>INACTIVE</code> services may be cleaned up and purged from Amazon ECS
         * record keeping, and <a>DescribeServices</a> calls on those services return a
         * <code>ServiceNotFoundException</code> error.</p>   <p>If you
         * attempt to create a new service with the same name as an existing service in
         * either <code>ACTIVE</code> or <code>DRAINING</code> status, you receive an
         * error.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ecs-2014-11-13/DeleteService">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteServiceOutcome DeleteService(const Model::DeleteServiceRequest& request) const;

        /**
         * A Callable wrapper for DeleteService that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteServiceRequestT = Model::DeleteServiceRequest>
        Model::DeleteServiceOutcomeCallable DeleteServiceCallable(const DeleteServiceRequestT& request) const
        {
            return SubmitCallable(&ECSClient::DeleteService, request);
        }

        /**
         * An Async wrapper for DeleteService that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteServiceRequestT = Model::DeleteServiceRequest>
        void DeleteServiceAsync(const DeleteServiceRequestT& request, const DeleteServiceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ECSClient::DeleteService, request, handler, context);
        }

        /**
         * <p>Deletes one or more task definitions.</p> <p>You must deregister a task
         * definition revision before you delete it. For more information, see <a
         * href="https://docs.aws.amazon.com/AmazonECS/latest/APIReference/API_DeregisterTaskDefinition.html">DeregisterTaskDefinition</a>.</p>
         * <p>When you delete a task definition revision, it is immediately transitions
         * from the <code>INACTIVE</code> to <code>DELETE_IN_PROGRESS</code>. Existing
         * tasks and services that reference a <code>DELETE_IN_PROGRESS</code> task
         * definition revision continue to run without disruption. Existing services that
         * reference a <code>DELETE_IN_PROGRESS</code> task definition revision can still
         * scale up or down by modifying the service's desired count.</p> <p>You can't use
         * a <code>DELETE_IN_PROGRESS</code> task definition revision to run new tasks or
         * create new services. You also can't update an existing service to reference a
         * <code>DELETE_IN_PROGRESS</code> task definition revision.</p> <p> A task
         * definition revision will stay in <code>DELETE_IN_PROGRESS</code> status until
         * all the associated tasks and services have been terminated.</p> <p>When you
         * delete all <code>INACTIVE</code> task definition revisions, the task definition
         * name is not displayed in the console and not returned in the API. If a task
         * definition revisions are in the <code>DELETE_IN_PROGRESS</code> state, the task
         * definition name is displayed in the console and returned in the API. The task
         * definition name is retained by Amazon ECS and the revision is incremented the
         * next time you create a task definition with that name.</p><p><h3>See Also:</h3> 
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ecs-2014-11-13/DeleteTaskDefinitions">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteTaskDefinitionsOutcome DeleteTaskDefinitions(const Model::DeleteTaskDefinitionsRequest& request) const;

        /**
         * A Callable wrapper for DeleteTaskDefinitions that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteTaskDefinitionsRequestT = Model::DeleteTaskDefinitionsRequest>
        Model::DeleteTaskDefinitionsOutcomeCallable DeleteTaskDefinitionsCallable(const DeleteTaskDefinitionsRequestT& request) const
        {
            return SubmitCallable(&ECSClient::DeleteTaskDefinitions, request);
        }

        /**
         * An Async wrapper for DeleteTaskDefinitions that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteTaskDefinitionsRequestT = Model::DeleteTaskDefinitionsRequest>
        void DeleteTaskDefinitionsAsync(const DeleteTaskDefinitionsRequestT& request, const DeleteTaskDefinitionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ECSClient::DeleteTaskDefinitions, request, handler, context);
        }

        /**
         * <p>Deletes a specified task set within a service. This is used when a service
         * uses the <code>EXTERNAL</code> deployment controller type. For more information,
         * see <a
         * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/deployment-types.html">Amazon
         * ECS deployment types</a> in the <i>Amazon Elastic Container Service Developer
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ecs-2014-11-13/DeleteTaskSet">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteTaskSetOutcome DeleteTaskSet(const Model::DeleteTaskSetRequest& request) const;

        /**
         * A Callable wrapper for DeleteTaskSet that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteTaskSetRequestT = Model::DeleteTaskSetRequest>
        Model::DeleteTaskSetOutcomeCallable DeleteTaskSetCallable(const DeleteTaskSetRequestT& request) const
        {
            return SubmitCallable(&ECSClient::DeleteTaskSet, request);
        }

        /**
         * An Async wrapper for DeleteTaskSet that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteTaskSetRequestT = Model::DeleteTaskSetRequest>
        void DeleteTaskSetAsync(const DeleteTaskSetRequestT& request, const DeleteTaskSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ECSClient::DeleteTaskSet, request, handler, context);
        }

        /**
         * <p>Deregisters an Amazon ECS container instance from the specified cluster. This
         * instance is no longer available to run tasks.</p> <p>If you intend to use the
         * container instance for some other purpose after deregistration, we recommend
         * that you stop all of the tasks running on the container instance before
         * deregistration. That prevents any orphaned tasks from consuming resources.</p>
         * <p>Deregistering a container instance removes the instance from a cluster, but
         * it doesn't terminate the EC2 instance. If you are finished using the instance,
         * be sure to terminate it in the Amazon EC2 console to stop billing.</p> 
         * <p>If you terminate a running container instance, Amazon ECS automatically
         * deregisters the instance from your cluster (stopped container instances or
         * instances with disconnected agents aren't automatically deregistered when
         * terminated).</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ecs-2014-11-13/DeregisterContainerInstance">AWS
         * API Reference</a></p>
         */
        virtual Model::DeregisterContainerInstanceOutcome DeregisterContainerInstance(const Model::DeregisterContainerInstanceRequest& request) const;

        /**
         * A Callable wrapper for DeregisterContainerInstance that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeregisterContainerInstanceRequestT = Model::DeregisterContainerInstanceRequest>
        Model::DeregisterContainerInstanceOutcomeCallable DeregisterContainerInstanceCallable(const DeregisterContainerInstanceRequestT& request) const
        {
            return SubmitCallable(&ECSClient::DeregisterContainerInstance, request);
        }

        /**
         * An Async wrapper for DeregisterContainerInstance that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeregisterContainerInstanceRequestT = Model::DeregisterContainerInstanceRequest>
        void DeregisterContainerInstanceAsync(const DeregisterContainerInstanceRequestT& request, const DeregisterContainerInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ECSClient::DeregisterContainerInstance, request, handler, context);
        }

        /**
         * <p>Deregisters the specified task definition by family and revision. Upon
         * deregistration, the task definition is marked as <code>INACTIVE</code>. Existing
         * tasks and services that reference an <code>INACTIVE</code> task definition
         * continue to run without disruption. Existing services that reference an
         * <code>INACTIVE</code> task definition can still scale up or down by modifying
         * the service's desired count. If you want to delete a task definition revision,
         * you must first deregister the task definition revision.</p> <p>You can't use an
         * <code>INACTIVE</code> task definition to run new tasks or create new services,
         * and you can't update an existing service to reference an <code>INACTIVE</code>
         * task definition. However, there may be up to a 10-minute window following
         * deregistration where these restrictions have not yet taken effect.</p> 
         * <p>At this time, <code>INACTIVE</code> task definitions remain discoverable in
         * your account indefinitely. However, this behavior is subject to change in the
         * future. We don't recommend that you rely on <code>INACTIVE</code> task
         * definitions persisting beyond the lifecycle of any associated tasks and
         * services.</p>  <p>You must deregister a task definition revision before
         * you delete it. For more information, see <a
         * href="https://docs.aws.amazon.com/AmazonECS/latest/APIReference/API_DeleteTaskDefinitions.html">DeleteTaskDefinitions</a>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ecs-2014-11-13/DeregisterTaskDefinition">AWS
         * API Reference</a></p>
         */
        virtual Model::DeregisterTaskDefinitionOutcome DeregisterTaskDefinition(const Model::DeregisterTaskDefinitionRequest& request) const;

        /**
         * A Callable wrapper for DeregisterTaskDefinition that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeregisterTaskDefinitionRequestT = Model::DeregisterTaskDefinitionRequest>
        Model::DeregisterTaskDefinitionOutcomeCallable DeregisterTaskDefinitionCallable(const DeregisterTaskDefinitionRequestT& request) const
        {
            return SubmitCallable(&ECSClient::DeregisterTaskDefinition, request);
        }

        /**
         * An Async wrapper for DeregisterTaskDefinition that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeregisterTaskDefinitionRequestT = Model::DeregisterTaskDefinitionRequest>
        void DeregisterTaskDefinitionAsync(const DeregisterTaskDefinitionRequestT& request, const DeregisterTaskDefinitionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ECSClient::DeregisterTaskDefinition, request, handler, context);
        }

        /**
         * <p>Describes one or more of your capacity providers.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ecs-2014-11-13/DescribeCapacityProviders">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeCapacityProvidersOutcome DescribeCapacityProviders(const Model::DescribeCapacityProvidersRequest& request) const;

        /**
         * A Callable wrapper for DescribeCapacityProviders that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeCapacityProvidersRequestT = Model::DescribeCapacityProvidersRequest>
        Model::DescribeCapacityProvidersOutcomeCallable DescribeCapacityProvidersCallable(const DescribeCapacityProvidersRequestT& request) const
        {
            return SubmitCallable(&ECSClient::DescribeCapacityProviders, request);
        }

        /**
         * An Async wrapper for DescribeCapacityProviders that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeCapacityProvidersRequestT = Model::DescribeCapacityProvidersRequest>
        void DescribeCapacityProvidersAsync(const DescribeCapacityProvidersRequestT& request, const DescribeCapacityProvidersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ECSClient::DescribeCapacityProviders, request, handler, context);
        }

        /**
         * <p>Describes one or more of your clusters.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ecs-2014-11-13/DescribeClusters">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeClustersOutcome DescribeClusters(const Model::DescribeClustersRequest& request) const;

        /**
         * A Callable wrapper for DescribeClusters that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeClustersRequestT = Model::DescribeClustersRequest>
        Model::DescribeClustersOutcomeCallable DescribeClustersCallable(const DescribeClustersRequestT& request) const
        {
            return SubmitCallable(&ECSClient::DescribeClusters, request);
        }

        /**
         * An Async wrapper for DescribeClusters that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeClustersRequestT = Model::DescribeClustersRequest>
        void DescribeClustersAsync(const DescribeClustersRequestT& request, const DescribeClustersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ECSClient::DescribeClusters, request, handler, context);
        }

        /**
         * <p>Describes one or more container instances. Returns metadata about each
         * container instance requested.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ecs-2014-11-13/DescribeContainerInstances">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeContainerInstancesOutcome DescribeContainerInstances(const Model::DescribeContainerInstancesRequest& request) const;

        /**
         * A Callable wrapper for DescribeContainerInstances that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeContainerInstancesRequestT = Model::DescribeContainerInstancesRequest>
        Model::DescribeContainerInstancesOutcomeCallable DescribeContainerInstancesCallable(const DescribeContainerInstancesRequestT& request) const
        {
            return SubmitCallable(&ECSClient::DescribeContainerInstances, request);
        }

        /**
         * An Async wrapper for DescribeContainerInstances that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeContainerInstancesRequestT = Model::DescribeContainerInstancesRequest>
        void DescribeContainerInstancesAsync(const DescribeContainerInstancesRequestT& request, const DescribeContainerInstancesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ECSClient::DescribeContainerInstances, request, handler, context);
        }

        /**
         * <p>Describes the specified services running in your cluster.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ecs-2014-11-13/DescribeServices">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeServicesOutcome DescribeServices(const Model::DescribeServicesRequest& request) const;

        /**
         * A Callable wrapper for DescribeServices that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeServicesRequestT = Model::DescribeServicesRequest>
        Model::DescribeServicesOutcomeCallable DescribeServicesCallable(const DescribeServicesRequestT& request) const
        {
            return SubmitCallable(&ECSClient::DescribeServices, request);
        }

        /**
         * An Async wrapper for DescribeServices that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeServicesRequestT = Model::DescribeServicesRequest>
        void DescribeServicesAsync(const DescribeServicesRequestT& request, const DescribeServicesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ECSClient::DescribeServices, request, handler, context);
        }

        /**
         * <p>Describes a task definition. You can specify a <code>family</code> and
         * <code>revision</code> to find information about a specific task definition, or
         * you can simply specify the family to find the latest <code>ACTIVE</code>
         * revision in that family.</p>  <p>You can only describe
         * <code>INACTIVE</code> task definitions while an active task or service
         * references them.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ecs-2014-11-13/DescribeTaskDefinition">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeTaskDefinitionOutcome DescribeTaskDefinition(const Model::DescribeTaskDefinitionRequest& request) const;

        /**
         * A Callable wrapper for DescribeTaskDefinition that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeTaskDefinitionRequestT = Model::DescribeTaskDefinitionRequest>
        Model::DescribeTaskDefinitionOutcomeCallable DescribeTaskDefinitionCallable(const DescribeTaskDefinitionRequestT& request) const
        {
            return SubmitCallable(&ECSClient::DescribeTaskDefinition, request);
        }

        /**
         * An Async wrapper for DescribeTaskDefinition that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeTaskDefinitionRequestT = Model::DescribeTaskDefinitionRequest>
        void DescribeTaskDefinitionAsync(const DescribeTaskDefinitionRequestT& request, const DescribeTaskDefinitionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ECSClient::DescribeTaskDefinition, request, handler, context);
        }

        /**
         * <p>Describes the task sets in the specified cluster and service. This is used
         * when a service uses the <code>EXTERNAL</code> deployment controller type. For
         * more information, see <a
         * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/deployment-types.html">Amazon
         * ECS Deployment Types</a> in the <i>Amazon Elastic Container Service Developer
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ecs-2014-11-13/DescribeTaskSets">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeTaskSetsOutcome DescribeTaskSets(const Model::DescribeTaskSetsRequest& request) const;

        /**
         * A Callable wrapper for DescribeTaskSets that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeTaskSetsRequestT = Model::DescribeTaskSetsRequest>
        Model::DescribeTaskSetsOutcomeCallable DescribeTaskSetsCallable(const DescribeTaskSetsRequestT& request) const
        {
            return SubmitCallable(&ECSClient::DescribeTaskSets, request);
        }

        /**
         * An Async wrapper for DescribeTaskSets that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeTaskSetsRequestT = Model::DescribeTaskSetsRequest>
        void DescribeTaskSetsAsync(const DescribeTaskSetsRequestT& request, const DescribeTaskSetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ECSClient::DescribeTaskSets, request, handler, context);
        }

        /**
         * <p>Describes a specified task or tasks.</p> <p>Currently, stopped tasks appear
         * in the returned results for at least one hour.</p> <p>If you have tasks with
         * tags, and then delete the cluster, the tagged tasks are returned in the
         * response. If you create a new cluster with the same name as the deleted cluster,
         * the tagged tasks are not included in the response.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ecs-2014-11-13/DescribeTasks">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeTasksOutcome DescribeTasks(const Model::DescribeTasksRequest& request) const;

        /**
         * A Callable wrapper for DescribeTasks that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeTasksRequestT = Model::DescribeTasksRequest>
        Model::DescribeTasksOutcomeCallable DescribeTasksCallable(const DescribeTasksRequestT& request) const
        {
            return SubmitCallable(&ECSClient::DescribeTasks, request);
        }

        /**
         * An Async wrapper for DescribeTasks that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeTasksRequestT = Model::DescribeTasksRequest>
        void DescribeTasksAsync(const DescribeTasksRequestT& request, const DescribeTasksResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ECSClient::DescribeTasks, request, handler, context);
        }

        /**
         *  <p>This action is only used by the Amazon ECS agent, and it is not
         * intended for use outside of the agent.</p>  <p>Returns an endpoint for
         * the Amazon ECS agent to poll for updates.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ecs-2014-11-13/DiscoverPollEndpoint">AWS
         * API Reference</a></p>
         */
        virtual Model::DiscoverPollEndpointOutcome DiscoverPollEndpoint(const Model::DiscoverPollEndpointRequest& request) const;

        /**
         * A Callable wrapper for DiscoverPollEndpoint that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DiscoverPollEndpointRequestT = Model::DiscoverPollEndpointRequest>
        Model::DiscoverPollEndpointOutcomeCallable DiscoverPollEndpointCallable(const DiscoverPollEndpointRequestT& request) const
        {
            return SubmitCallable(&ECSClient::DiscoverPollEndpoint, request);
        }

        /**
         * An Async wrapper for DiscoverPollEndpoint that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DiscoverPollEndpointRequestT = Model::DiscoverPollEndpointRequest>
        void DiscoverPollEndpointAsync(const DiscoverPollEndpointRequestT& request, const DiscoverPollEndpointResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ECSClient::DiscoverPollEndpoint, request, handler, context);
        }

        /**
         * <p>Runs a command remotely on a container within a task.</p> <p>If you use a
         * condition key in your IAM policy to refine the conditions for the policy
         * statement, for example limit the actions to a specific cluster, you receive an
         * <code>AccessDeniedException</code> when there is a mismatch between the
         * condition key value and the corresponding parameter value.</p> <p>For
         * information about required permissions and considerations, see <a
         * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/ecs-exec.html">Using
         * Amazon ECS Exec for debugging</a> in the <i>Amazon ECS Developer Guide</i>.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ecs-2014-11-13/ExecuteCommand">AWS
         * API Reference</a></p>
         */
        virtual Model::ExecuteCommandOutcome ExecuteCommand(const Model::ExecuteCommandRequest& request) const;

        /**
         * A Callable wrapper for ExecuteCommand that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ExecuteCommandRequestT = Model::ExecuteCommandRequest>
        Model::ExecuteCommandOutcomeCallable ExecuteCommandCallable(const ExecuteCommandRequestT& request) const
        {
            return SubmitCallable(&ECSClient::ExecuteCommand, request);
        }

        /**
         * An Async wrapper for ExecuteCommand that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ExecuteCommandRequestT = Model::ExecuteCommandRequest>
        void ExecuteCommandAsync(const ExecuteCommandRequestT& request, const ExecuteCommandResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ECSClient::ExecuteCommand, request, handler, context);
        }

        /**
         * <p>Retrieves the protection status of tasks in an Amazon ECS
         * service.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ecs-2014-11-13/GetTaskProtection">AWS
         * API Reference</a></p>
         */
        virtual Model::GetTaskProtectionOutcome GetTaskProtection(const Model::GetTaskProtectionRequest& request) const;

        /**
         * A Callable wrapper for GetTaskProtection that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetTaskProtectionRequestT = Model::GetTaskProtectionRequest>
        Model::GetTaskProtectionOutcomeCallable GetTaskProtectionCallable(const GetTaskProtectionRequestT& request) const
        {
            return SubmitCallable(&ECSClient::GetTaskProtection, request);
        }

        /**
         * An Async wrapper for GetTaskProtection that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetTaskProtectionRequestT = Model::GetTaskProtectionRequest>
        void GetTaskProtectionAsync(const GetTaskProtectionRequestT& request, const GetTaskProtectionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ECSClient::GetTaskProtection, request, handler, context);
        }

        /**
         * <p>Lists the account settings for a specified principal.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ecs-2014-11-13/ListAccountSettings">AWS
         * API Reference</a></p>
         */
        virtual Model::ListAccountSettingsOutcome ListAccountSettings(const Model::ListAccountSettingsRequest& request) const;

        /**
         * A Callable wrapper for ListAccountSettings that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListAccountSettingsRequestT = Model::ListAccountSettingsRequest>
        Model::ListAccountSettingsOutcomeCallable ListAccountSettingsCallable(const ListAccountSettingsRequestT& request) const
        {
            return SubmitCallable(&ECSClient::ListAccountSettings, request);
        }

        /**
         * An Async wrapper for ListAccountSettings that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListAccountSettingsRequestT = Model::ListAccountSettingsRequest>
        void ListAccountSettingsAsync(const ListAccountSettingsRequestT& request, const ListAccountSettingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ECSClient::ListAccountSettings, request, handler, context);
        }

        /**
         * <p>Lists the attributes for Amazon ECS resources within a specified target type
         * and cluster. When you specify a target type and cluster,
         * <code>ListAttributes</code> returns a list of attribute objects, one for each
         * attribute on each resource. You can filter the list of results to a single
         * attribute name to only return results that have that name. You can also filter
         * the results by attribute name and value. You can do this, for example, to see
         * which container instances in a cluster are running a Linux AMI
         * (<code>ecs.os-type=linux</code>). </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ecs-2014-11-13/ListAttributes">AWS
         * API Reference</a></p>
         */
        virtual Model::ListAttributesOutcome ListAttributes(const Model::ListAttributesRequest& request) const;

        /**
         * A Callable wrapper for ListAttributes that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListAttributesRequestT = Model::ListAttributesRequest>
        Model::ListAttributesOutcomeCallable ListAttributesCallable(const ListAttributesRequestT& request) const
        {
            return SubmitCallable(&ECSClient::ListAttributes, request);
        }

        /**
         * An Async wrapper for ListAttributes that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListAttributesRequestT = Model::ListAttributesRequest>
        void ListAttributesAsync(const ListAttributesRequestT& request, const ListAttributesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ECSClient::ListAttributes, request, handler, context);
        }

        /**
         * <p>Returns a list of existing clusters.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ecs-2014-11-13/ListClusters">AWS
         * API Reference</a></p>
         */
        virtual Model::ListClustersOutcome ListClusters(const Model::ListClustersRequest& request) const;

        /**
         * A Callable wrapper for ListClusters that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListClustersRequestT = Model::ListClustersRequest>
        Model::ListClustersOutcomeCallable ListClustersCallable(const ListClustersRequestT& request) const
        {
            return SubmitCallable(&ECSClient::ListClusters, request);
        }

        /**
         * An Async wrapper for ListClusters that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListClustersRequestT = Model::ListClustersRequest>
        void ListClustersAsync(const ListClustersRequestT& request, const ListClustersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ECSClient::ListClusters, request, handler, context);
        }

        /**
         * <p>Returns a list of container instances in a specified cluster. You can filter
         * the results of a <code>ListContainerInstances</code> operation with cluster
         * query language statements inside the <code>filter</code> parameter. For more
         * information, see <a
         * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/cluster-query-language.html">Cluster
         * Query Language</a> in the <i>Amazon Elastic Container Service Developer
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ecs-2014-11-13/ListContainerInstances">AWS
         * API Reference</a></p>
         */
        virtual Model::ListContainerInstancesOutcome ListContainerInstances(const Model::ListContainerInstancesRequest& request) const;

        /**
         * A Callable wrapper for ListContainerInstances that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListContainerInstancesRequestT = Model::ListContainerInstancesRequest>
        Model::ListContainerInstancesOutcomeCallable ListContainerInstancesCallable(const ListContainerInstancesRequestT& request) const
        {
            return SubmitCallable(&ECSClient::ListContainerInstances, request);
        }

        /**
         * An Async wrapper for ListContainerInstances that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListContainerInstancesRequestT = Model::ListContainerInstancesRequest>
        void ListContainerInstancesAsync(const ListContainerInstancesRequestT& request, const ListContainerInstancesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ECSClient::ListContainerInstances, request, handler, context);
        }

        /**
         * <p>Returns a list of services. You can filter the results by cluster, launch
         * type, and scheduling strategy.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ecs-2014-11-13/ListServices">AWS
         * API Reference</a></p>
         */
        virtual Model::ListServicesOutcome ListServices(const Model::ListServicesRequest& request) const;

        /**
         * A Callable wrapper for ListServices that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListServicesRequestT = Model::ListServicesRequest>
        Model::ListServicesOutcomeCallable ListServicesCallable(const ListServicesRequestT& request) const
        {
            return SubmitCallable(&ECSClient::ListServices, request);
        }

        /**
         * An Async wrapper for ListServices that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListServicesRequestT = Model::ListServicesRequest>
        void ListServicesAsync(const ListServicesRequestT& request, const ListServicesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ECSClient::ListServices, request, handler, context);
        }

        /**
         * <p>This operation lists all of the services that are associated with a Cloud Map
         * namespace. This list might include services in different clusters. In contrast,
         * <code>ListServices</code> can only list services in one cluster at a time. If
         * you need to filter the list of services in a single cluster by various
         * parameters, use <code>ListServices</code>. For more information, see <a
         * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/service-connect.html">Service
         * Connect</a> in the <i>Amazon Elastic Container Service Developer
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ecs-2014-11-13/ListServicesByNamespace">AWS
         * API Reference</a></p>
         */
        virtual Model::ListServicesByNamespaceOutcome ListServicesByNamespace(const Model::ListServicesByNamespaceRequest& request) const;

        /**
         * A Callable wrapper for ListServicesByNamespace that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListServicesByNamespaceRequestT = Model::ListServicesByNamespaceRequest>
        Model::ListServicesByNamespaceOutcomeCallable ListServicesByNamespaceCallable(const ListServicesByNamespaceRequestT& request) const
        {
            return SubmitCallable(&ECSClient::ListServicesByNamespace, request);
        }

        /**
         * An Async wrapper for ListServicesByNamespace that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListServicesByNamespaceRequestT = Model::ListServicesByNamespaceRequest>
        void ListServicesByNamespaceAsync(const ListServicesByNamespaceRequestT& request, const ListServicesByNamespaceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ECSClient::ListServicesByNamespace, request, handler, context);
        }

        /**
         * <p>List the tags for an Amazon ECS resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ecs-2014-11-13/ListTagsForResource">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTagsForResourceOutcome ListTagsForResource(const Model::ListTagsForResourceRequest& request) const;

        /**
         * A Callable wrapper for ListTagsForResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListTagsForResourceRequestT = Model::ListTagsForResourceRequest>
        Model::ListTagsForResourceOutcomeCallable ListTagsForResourceCallable(const ListTagsForResourceRequestT& request) const
        {
            return SubmitCallable(&ECSClient::ListTagsForResource, request);
        }

        /**
         * An Async wrapper for ListTagsForResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListTagsForResourceRequestT = Model::ListTagsForResourceRequest>
        void ListTagsForResourceAsync(const ListTagsForResourceRequestT& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ECSClient::ListTagsForResource, request, handler, context);
        }

        /**
         * <p>Returns a list of task definition families that are registered to your
         * account. This list includes task definition families that no longer have any
         * <code>ACTIVE</code> task definition revisions.</p> <p>You can filter out task
         * definition families that don't contain any <code>ACTIVE</code> task definition
         * revisions by setting the <code>status</code> parameter to <code>ACTIVE</code>.
         * You can also filter the results with the <code>familyPrefix</code>
         * parameter.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ecs-2014-11-13/ListTaskDefinitionFamilies">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTaskDefinitionFamiliesOutcome ListTaskDefinitionFamilies(const Model::ListTaskDefinitionFamiliesRequest& request) const;

        /**
         * A Callable wrapper for ListTaskDefinitionFamilies that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListTaskDefinitionFamiliesRequestT = Model::ListTaskDefinitionFamiliesRequest>
        Model::ListTaskDefinitionFamiliesOutcomeCallable ListTaskDefinitionFamiliesCallable(const ListTaskDefinitionFamiliesRequestT& request) const
        {
            return SubmitCallable(&ECSClient::ListTaskDefinitionFamilies, request);
        }

        /**
         * An Async wrapper for ListTaskDefinitionFamilies that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListTaskDefinitionFamiliesRequestT = Model::ListTaskDefinitionFamiliesRequest>
        void ListTaskDefinitionFamiliesAsync(const ListTaskDefinitionFamiliesRequestT& request, const ListTaskDefinitionFamiliesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ECSClient::ListTaskDefinitionFamilies, request, handler, context);
        }

        /**
         * <p>Returns a list of task definitions that are registered to your account. You
         * can filter the results by family name with the <code>familyPrefix</code>
         * parameter or by status with the <code>status</code> parameter.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ecs-2014-11-13/ListTaskDefinitions">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTaskDefinitionsOutcome ListTaskDefinitions(const Model::ListTaskDefinitionsRequest& request) const;

        /**
         * A Callable wrapper for ListTaskDefinitions that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListTaskDefinitionsRequestT = Model::ListTaskDefinitionsRequest>
        Model::ListTaskDefinitionsOutcomeCallable ListTaskDefinitionsCallable(const ListTaskDefinitionsRequestT& request) const
        {
            return SubmitCallable(&ECSClient::ListTaskDefinitions, request);
        }

        /**
         * An Async wrapper for ListTaskDefinitions that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListTaskDefinitionsRequestT = Model::ListTaskDefinitionsRequest>
        void ListTaskDefinitionsAsync(const ListTaskDefinitionsRequestT& request, const ListTaskDefinitionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ECSClient::ListTaskDefinitions, request, handler, context);
        }

        /**
         * <p>Returns a list of tasks. You can filter the results by cluster, task
         * definition family, container instance, launch type, what IAM principal started
         * the task, or by the desired status of the task.</p> <p>Recently stopped tasks
         * might appear in the returned results. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ecs-2014-11-13/ListTasks">AWS API
         * Reference</a></p>
         */
        virtual Model::ListTasksOutcome ListTasks(const Model::ListTasksRequest& request) const;

        /**
         * A Callable wrapper for ListTasks that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListTasksRequestT = Model::ListTasksRequest>
        Model::ListTasksOutcomeCallable ListTasksCallable(const ListTasksRequestT& request) const
        {
            return SubmitCallable(&ECSClient::ListTasks, request);
        }

        /**
         * An Async wrapper for ListTasks that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListTasksRequestT = Model::ListTasksRequest>
        void ListTasksAsync(const ListTasksRequestT& request, const ListTasksResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ECSClient::ListTasks, request, handler, context);
        }

        /**
         * <p>Modifies an account setting. Account settings are set on a per-Region
         * basis.</p> <p>If you change the root user account setting, the default settings
         * are reset for users and roles that do not have specified individual account
         * settings. For more information, see <a
         * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/ecs-account-settings.html">Account
         * Settings</a> in the <i>Amazon Elastic Container Service Developer
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ecs-2014-11-13/PutAccountSetting">AWS
         * API Reference</a></p>
         */
        virtual Model::PutAccountSettingOutcome PutAccountSetting(const Model::PutAccountSettingRequest& request) const;

        /**
         * A Callable wrapper for PutAccountSetting that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename PutAccountSettingRequestT = Model::PutAccountSettingRequest>
        Model::PutAccountSettingOutcomeCallable PutAccountSettingCallable(const PutAccountSettingRequestT& request) const
        {
            return SubmitCallable(&ECSClient::PutAccountSetting, request);
        }

        /**
         * An Async wrapper for PutAccountSetting that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename PutAccountSettingRequestT = Model::PutAccountSettingRequest>
        void PutAccountSettingAsync(const PutAccountSettingRequestT& request, const PutAccountSettingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ECSClient::PutAccountSetting, request, handler, context);
        }

        /**
         * <p>Modifies an account setting for all users on an account for whom no
         * individual account setting has been specified. Account settings are set on a
         * per-Region basis.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ecs-2014-11-13/PutAccountSettingDefault">AWS
         * API Reference</a></p>
         */
        virtual Model::PutAccountSettingDefaultOutcome PutAccountSettingDefault(const Model::PutAccountSettingDefaultRequest& request) const;

        /**
         * A Callable wrapper for PutAccountSettingDefault that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename PutAccountSettingDefaultRequestT = Model::PutAccountSettingDefaultRequest>
        Model::PutAccountSettingDefaultOutcomeCallable PutAccountSettingDefaultCallable(const PutAccountSettingDefaultRequestT& request) const
        {
            return SubmitCallable(&ECSClient::PutAccountSettingDefault, request);
        }

        /**
         * An Async wrapper for PutAccountSettingDefault that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename PutAccountSettingDefaultRequestT = Model::PutAccountSettingDefaultRequest>
        void PutAccountSettingDefaultAsync(const PutAccountSettingDefaultRequestT& request, const PutAccountSettingDefaultResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ECSClient::PutAccountSettingDefault, request, handler, context);
        }

        /**
         * <p>Create or update an attribute on an Amazon ECS resource. If the attribute
         * doesn't exist, it's created. If the attribute exists, its value is replaced with
         * the specified value. To delete an attribute, use <a>DeleteAttributes</a>. For
         * more information, see <a
         * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/task-placement-constraints.html#attributes">Attributes</a>
         * in the <i>Amazon Elastic Container Service Developer Guide</i>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ecs-2014-11-13/PutAttributes">AWS
         * API Reference</a></p>
         */
        virtual Model::PutAttributesOutcome PutAttributes(const Model::PutAttributesRequest& request) const;

        /**
         * A Callable wrapper for PutAttributes that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename PutAttributesRequestT = Model::PutAttributesRequest>
        Model::PutAttributesOutcomeCallable PutAttributesCallable(const PutAttributesRequestT& request) const
        {
            return SubmitCallable(&ECSClient::PutAttributes, request);
        }

        /**
         * An Async wrapper for PutAttributes that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename PutAttributesRequestT = Model::PutAttributesRequest>
        void PutAttributesAsync(const PutAttributesRequestT& request, const PutAttributesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ECSClient::PutAttributes, request, handler, context);
        }

        /**
         * <p>Modifies the available capacity providers and the default capacity provider
         * strategy for a cluster.</p> <p>You must specify both the available capacity
         * providers and a default capacity provider strategy for the cluster. If the
         * specified cluster has existing capacity providers associated with it, you must
         * specify all existing capacity providers in addition to any new ones you want to
         * add. Any existing capacity providers that are associated with a cluster that are
         * omitted from a <a>PutClusterCapacityProviders</a> API call will be disassociated
         * with the cluster. You can only disassociate an existing capacity provider from a
         * cluster if it's not being used by any existing tasks.</p> <p>When creating a
         * service or running a task on a cluster, if no capacity provider or launch type
         * is specified, then the cluster's default capacity provider strategy is used. We
         * recommend that you define a default capacity provider strategy for your cluster.
         * However, you must specify an empty array (<code>[]</code>) to bypass defining a
         * default strategy.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ecs-2014-11-13/PutClusterCapacityProviders">AWS
         * API Reference</a></p>
         */
        virtual Model::PutClusterCapacityProvidersOutcome PutClusterCapacityProviders(const Model::PutClusterCapacityProvidersRequest& request) const;

        /**
         * A Callable wrapper for PutClusterCapacityProviders that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename PutClusterCapacityProvidersRequestT = Model::PutClusterCapacityProvidersRequest>
        Model::PutClusterCapacityProvidersOutcomeCallable PutClusterCapacityProvidersCallable(const PutClusterCapacityProvidersRequestT& request) const
        {
            return SubmitCallable(&ECSClient::PutClusterCapacityProviders, request);
        }

        /**
         * An Async wrapper for PutClusterCapacityProviders that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename PutClusterCapacityProvidersRequestT = Model::PutClusterCapacityProvidersRequest>
        void PutClusterCapacityProvidersAsync(const PutClusterCapacityProvidersRequestT& request, const PutClusterCapacityProvidersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ECSClient::PutClusterCapacityProviders, request, handler, context);
        }

        /**
         *  <p>This action is only used by the Amazon ECS agent, and it is not
         * intended for use outside of the agent.</p>  <p>Registers an EC2 instance
         * into the specified cluster. This instance becomes available to place containers
         * on.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ecs-2014-11-13/RegisterContainerInstance">AWS
         * API Reference</a></p>
         */
        virtual Model::RegisterContainerInstanceOutcome RegisterContainerInstance(const Model::RegisterContainerInstanceRequest& request) const;

        /**
         * A Callable wrapper for RegisterContainerInstance that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename RegisterContainerInstanceRequestT = Model::RegisterContainerInstanceRequest>
        Model::RegisterContainerInstanceOutcomeCallable RegisterContainerInstanceCallable(const RegisterContainerInstanceRequestT& request) const
        {
            return SubmitCallable(&ECSClient::RegisterContainerInstance, request);
        }

        /**
         * An Async wrapper for RegisterContainerInstance that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename RegisterContainerInstanceRequestT = Model::RegisterContainerInstanceRequest>
        void RegisterContainerInstanceAsync(const RegisterContainerInstanceRequestT& request, const RegisterContainerInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ECSClient::RegisterContainerInstance, request, handler, context);
        }

        /**
         * <p>Registers a new task definition from the supplied <code>family</code> and
         * <code>containerDefinitions</code>. Optionally, you can add data volumes to your
         * containers with the <code>volumes</code> parameter. For more information about
         * task definition parameters and defaults, see <a
         * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/task_defintions.html">Amazon
         * ECS Task Definitions</a> in the <i>Amazon Elastic Container Service Developer
         * Guide</i>.</p> <p>You can specify a role for your task with the
         * <code>taskRoleArn</code> parameter. When you specify a role for a task, its
         * containers can then use the latest versions of the CLI or SDKs to make API
         * requests to the Amazon Web Services services that are specified in the policy
         * that's associated with the role. For more information, see <a
         * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/task-iam-roles.html">IAM
         * Roles for Tasks</a> in the <i>Amazon Elastic Container Service Developer
         * Guide</i>.</p> <p>You can specify a Docker networking mode for the containers in
         * your task definition with the <code>networkMode</code> parameter. The available
         * network modes correspond to those described in <a
         * href="https://docs.docker.com/engine/reference/run/#/network-settings">Network
         * settings</a> in the Docker run reference. If you specify the <code>awsvpc</code>
         * network mode, the task is allocated an elastic network interface, and you must
         * specify a <a>NetworkConfiguration</a> when you create a service or run a task
         * with the task definition. For more information, see <a
         * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/task-networking.html">Task
         * Networking</a> in the <i>Amazon Elastic Container Service Developer
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ecs-2014-11-13/RegisterTaskDefinition">AWS
         * API Reference</a></p>
         */
        virtual Model::RegisterTaskDefinitionOutcome RegisterTaskDefinition(const Model::RegisterTaskDefinitionRequest& request) const;

        /**
         * A Callable wrapper for RegisterTaskDefinition that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename RegisterTaskDefinitionRequestT = Model::RegisterTaskDefinitionRequest>
        Model::RegisterTaskDefinitionOutcomeCallable RegisterTaskDefinitionCallable(const RegisterTaskDefinitionRequestT& request) const
        {
            return SubmitCallable(&ECSClient::RegisterTaskDefinition, request);
        }

        /**
         * An Async wrapper for RegisterTaskDefinition that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename RegisterTaskDefinitionRequestT = Model::RegisterTaskDefinitionRequest>
        void RegisterTaskDefinitionAsync(const RegisterTaskDefinitionRequestT& request, const RegisterTaskDefinitionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ECSClient::RegisterTaskDefinition, request, handler, context);
        }

        /**
         * <p>Starts a new task using the specified task definition.</p> <p>You can allow
         * Amazon ECS to place tasks for you, or you can customize how Amazon ECS places
         * tasks using placement constraints and placement strategies. For more
         * information, see <a
         * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/scheduling_tasks.html">Scheduling
         * Tasks</a> in the <i>Amazon Elastic Container Service Developer Guide</i>.</p>
         * <p>Alternatively, you can use <a>StartTask</a> to use your own scheduler or
         * place tasks manually on specific container instances.</p>  <p>Starting
         * April 15, 2023, Amazon Web Services will not onboard new customers to Amazon
         * Elastic Inference (EI), and will help current customers migrate their workloads
         * to options that offer better price and performance. After April 15, 2023, new
         * customers will not be able to launch instances with Amazon EI accelerators in
         * Amazon SageMaker, Amazon ECS, or Amazon EC2. However, customers who have used
         * Amazon EI at least once during the past 30-day period are considered current
         * customers and will be able to continue using the service. </p>  <p>You
         * can attach Amazon EBS volumes to Amazon ECS tasks by configuring the volume when
         * creating or updating a service. For more infomation, see <a
         * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/ebs-volumes.html#ebs-volume-types">Amazon
         * EBS volumes</a> in the <i>Amazon Elastic Container Service Developer
         * Guide</i>.</p> <p>The Amazon ECS API follows an eventual consistency model. This
         * is because of the distributed nature of the system supporting the API. This
         * means that the result of an API command you run that affects your Amazon ECS
         * resources might not be immediately visible to all subsequent commands you run.
         * Keep this in mind when you carry out an API command that immediately follows a
         * previous API command.</p> <p>To manage eventual consistency, you can do the
         * following:</p> <ul> <li> <p>Confirm the state of the resource before you run a
         * command to modify it. Run the DescribeTasks command using an exponential backoff
         * algorithm to ensure that you allow enough time for the previous command to
         * propagate through the system. To do this, run the DescribeTasks command
         * repeatedly, starting with a couple of seconds of wait time and increasing
         * gradually up to five minutes of wait time.</p> </li> <li> <p>Add wait time
         * between subsequent commands, even if the DescribeTasks command returns an
         * accurate response. Apply an exponential backoff algorithm starting with a couple
         * of seconds of wait time, and increase gradually up to about five minutes of wait
         * time.</p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ecs-2014-11-13/RunTask">AWS API
         * Reference</a></p>
         */
        virtual Model::RunTaskOutcome RunTask(const Model::RunTaskRequest& request) const;

        /**
         * A Callable wrapper for RunTask that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename RunTaskRequestT = Model::RunTaskRequest>
        Model::RunTaskOutcomeCallable RunTaskCallable(const RunTaskRequestT& request) const
        {
            return SubmitCallable(&ECSClient::RunTask, request);
        }

        /**
         * An Async wrapper for RunTask that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename RunTaskRequestT = Model::RunTaskRequest>
        void RunTaskAsync(const RunTaskRequestT& request, const RunTaskResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ECSClient::RunTask, request, handler, context);
        }

        /**
         * <p>Starts a new task from the specified task definition on the specified
         * container instance or instances.</p>  <p>Starting April 15, 2023, Amazon
         * Web Services will not onboard new customers to Amazon Elastic Inference (EI),
         * and will help current customers migrate their workloads to options that offer
         * better price and performance. After April 15, 2023, new customers will not be
         * able to launch instances with Amazon EI accelerators in Amazon SageMaker, Amazon
         * ECS, or Amazon EC2. However, customers who have used Amazon EI at least once
         * during the past 30-day period are considered current customers and will be able
         * to continue using the service. </p>  <p>Alternatively, you can use
         * <a>RunTask</a> to place tasks for you. For more information, see <a
         * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/scheduling_tasks.html">Scheduling
         * Tasks</a> in the <i>Amazon Elastic Container Service Developer Guide</i>.</p>
         * <p>You can attach Amazon EBS volumes to Amazon ECS tasks by configuring the
         * volume when creating or updating a service. For more infomation, see <a
         * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/ebs-volumes.html#ebs-volume-types">Amazon
         * EBS volumes</a> in the <i>Amazon Elastic Container Service Developer
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ecs-2014-11-13/StartTask">AWS API
         * Reference</a></p>
         */
        virtual Model::StartTaskOutcome StartTask(const Model::StartTaskRequest& request) const;

        /**
         * A Callable wrapper for StartTask that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename StartTaskRequestT = Model::StartTaskRequest>
        Model::StartTaskOutcomeCallable StartTaskCallable(const StartTaskRequestT& request) const
        {
            return SubmitCallable(&ECSClient::StartTask, request);
        }

        /**
         * An Async wrapper for StartTask that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename StartTaskRequestT = Model::StartTaskRequest>
        void StartTaskAsync(const StartTaskRequestT& request, const StartTaskResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ECSClient::StartTask, request, handler, context);
        }

        /**
         * <p>Stops a running task. Any tags associated with the task will be deleted.</p>
         * <p>When <a>StopTask</a> is called on a task, the equivalent of <code>docker
         * stop</code> is issued to the containers running in the task. This results in a
         * <code>SIGTERM</code> value and a default 30-second timeout, after which the
         * <code>SIGKILL</code> value is sent and the containers are forcibly stopped. If
         * the container handles the <code>SIGTERM</code> value gracefully and exits within
         * 30 seconds from receiving it, no <code>SIGKILL</code> value is sent.</p> 
         * <p>The default 30-second timeout can be configured on the Amazon ECS container
         * agent with the <code>ECS_CONTAINER_STOP_TIMEOUT</code> variable. For more
         * information, see <a
         * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/ecs-agent-config.html">Amazon
         * ECS Container Agent Configuration</a> in the <i>Amazon Elastic Container Service
         * Developer Guide</i>.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ecs-2014-11-13/StopTask">AWS API
         * Reference</a></p>
         */
        virtual Model::StopTaskOutcome StopTask(const Model::StopTaskRequest& request) const;

        /**
         * A Callable wrapper for StopTask that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename StopTaskRequestT = Model::StopTaskRequest>
        Model::StopTaskOutcomeCallable StopTaskCallable(const StopTaskRequestT& request) const
        {
            return SubmitCallable(&ECSClient::StopTask, request);
        }

        /**
         * An Async wrapper for StopTask that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename StopTaskRequestT = Model::StopTaskRequest>
        void StopTaskAsync(const StopTaskRequestT& request, const StopTaskResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ECSClient::StopTask, request, handler, context);
        }

        /**
         *  <p>This action is only used by the Amazon ECS agent, and it is not
         * intended for use outside of the agent.</p>  <p>Sent to acknowledge that
         * an attachment changed states.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ecs-2014-11-13/SubmitAttachmentStateChanges">AWS
         * API Reference</a></p>
         */
        virtual Model::SubmitAttachmentStateChangesOutcome SubmitAttachmentStateChanges(const Model::SubmitAttachmentStateChangesRequest& request) const;

        /**
         * A Callable wrapper for SubmitAttachmentStateChanges that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename SubmitAttachmentStateChangesRequestT = Model::SubmitAttachmentStateChangesRequest>
        Model::SubmitAttachmentStateChangesOutcomeCallable SubmitAttachmentStateChangesCallable(const SubmitAttachmentStateChangesRequestT& request) const
        {
            return SubmitCallable(&ECSClient::SubmitAttachmentStateChanges, request);
        }

        /**
         * An Async wrapper for SubmitAttachmentStateChanges that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename SubmitAttachmentStateChangesRequestT = Model::SubmitAttachmentStateChangesRequest>
        void SubmitAttachmentStateChangesAsync(const SubmitAttachmentStateChangesRequestT& request, const SubmitAttachmentStateChangesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ECSClient::SubmitAttachmentStateChanges, request, handler, context);
        }

        /**
         *  <p>This action is only used by the Amazon ECS agent, and it is not
         * intended for use outside of the agent.</p>  <p>Sent to acknowledge that a
         * container changed states.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ecs-2014-11-13/SubmitContainerStateChange">AWS
         * API Reference</a></p>
         */
        virtual Model::SubmitContainerStateChangeOutcome SubmitContainerStateChange(const Model::SubmitContainerStateChangeRequest& request) const;

        /**
         * A Callable wrapper for SubmitContainerStateChange that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename SubmitContainerStateChangeRequestT = Model::SubmitContainerStateChangeRequest>
        Model::SubmitContainerStateChangeOutcomeCallable SubmitContainerStateChangeCallable(const SubmitContainerStateChangeRequestT& request) const
        {
            return SubmitCallable(&ECSClient::SubmitContainerStateChange, request);
        }

        /**
         * An Async wrapper for SubmitContainerStateChange that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename SubmitContainerStateChangeRequestT = Model::SubmitContainerStateChangeRequest>
        void SubmitContainerStateChangeAsync(const SubmitContainerStateChangeRequestT& request, const SubmitContainerStateChangeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ECSClient::SubmitContainerStateChange, request, handler, context);
        }

        /**
         *  <p>This action is only used by the Amazon ECS agent, and it is not
         * intended for use outside of the agent.</p>  <p>Sent to acknowledge that a
         * task changed states.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ecs-2014-11-13/SubmitTaskStateChange">AWS
         * API Reference</a></p>
         */
        virtual Model::SubmitTaskStateChangeOutcome SubmitTaskStateChange(const Model::SubmitTaskStateChangeRequest& request) const;

        /**
         * A Callable wrapper for SubmitTaskStateChange that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename SubmitTaskStateChangeRequestT = Model::SubmitTaskStateChangeRequest>
        Model::SubmitTaskStateChangeOutcomeCallable SubmitTaskStateChangeCallable(const SubmitTaskStateChangeRequestT& request) const
        {
            return SubmitCallable(&ECSClient::SubmitTaskStateChange, request);
        }

        /**
         * An Async wrapper for SubmitTaskStateChange that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename SubmitTaskStateChangeRequestT = Model::SubmitTaskStateChangeRequest>
        void SubmitTaskStateChangeAsync(const SubmitTaskStateChangeRequestT& request, const SubmitTaskStateChangeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ECSClient::SubmitTaskStateChange, request, handler, context);
        }

        /**
         * <p>Associates the specified tags to a resource with the specified
         * <code>resourceArn</code>. If existing tags on a resource aren't specified in the
         * request parameters, they aren't changed. When a resource is deleted, the tags
         * that are associated with that resource are deleted as well.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ecs-2014-11-13/TagResource">AWS API
         * Reference</a></p>
         */
        virtual Model::TagResourceOutcome TagResource(const Model::TagResourceRequest& request) const;

        /**
         * A Callable wrapper for TagResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename TagResourceRequestT = Model::TagResourceRequest>
        Model::TagResourceOutcomeCallable TagResourceCallable(const TagResourceRequestT& request) const
        {
            return SubmitCallable(&ECSClient::TagResource, request);
        }

        /**
         * An Async wrapper for TagResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename TagResourceRequestT = Model::TagResourceRequest>
        void TagResourceAsync(const TagResourceRequestT& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ECSClient::TagResource, request, handler, context);
        }

        /**
         * <p>Deletes specified tags from a resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ecs-2014-11-13/UntagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::UntagResourceOutcome UntagResource(const Model::UntagResourceRequest& request) const;

        /**
         * A Callable wrapper for UntagResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UntagResourceRequestT = Model::UntagResourceRequest>
        Model::UntagResourceOutcomeCallable UntagResourceCallable(const UntagResourceRequestT& request) const
        {
            return SubmitCallable(&ECSClient::UntagResource, request);
        }

        /**
         * An Async wrapper for UntagResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UntagResourceRequestT = Model::UntagResourceRequest>
        void UntagResourceAsync(const UntagResourceRequestT& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ECSClient::UntagResource, request, handler, context);
        }

        /**
         * <p>Modifies the parameters for a capacity provider.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ecs-2014-11-13/UpdateCapacityProvider">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateCapacityProviderOutcome UpdateCapacityProvider(const Model::UpdateCapacityProviderRequest& request) const;

        /**
         * A Callable wrapper for UpdateCapacityProvider that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateCapacityProviderRequestT = Model::UpdateCapacityProviderRequest>
        Model::UpdateCapacityProviderOutcomeCallable UpdateCapacityProviderCallable(const UpdateCapacityProviderRequestT& request) const
        {
            return SubmitCallable(&ECSClient::UpdateCapacityProvider, request);
        }

        /**
         * An Async wrapper for UpdateCapacityProvider that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateCapacityProviderRequestT = Model::UpdateCapacityProviderRequest>
        void UpdateCapacityProviderAsync(const UpdateCapacityProviderRequestT& request, const UpdateCapacityProviderResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ECSClient::UpdateCapacityProvider, request, handler, context);
        }

        /**
         * <p>Updates the cluster.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ecs-2014-11-13/UpdateCluster">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateClusterOutcome UpdateCluster(const Model::UpdateClusterRequest& request) const;

        /**
         * A Callable wrapper for UpdateCluster that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateClusterRequestT = Model::UpdateClusterRequest>
        Model::UpdateClusterOutcomeCallable UpdateClusterCallable(const UpdateClusterRequestT& request) const
        {
            return SubmitCallable(&ECSClient::UpdateCluster, request);
        }

        /**
         * An Async wrapper for UpdateCluster that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateClusterRequestT = Model::UpdateClusterRequest>
        void UpdateClusterAsync(const UpdateClusterRequestT& request, const UpdateClusterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ECSClient::UpdateCluster, request, handler, context);
        }

        /**
         * <p>Modifies the settings to use for a cluster.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ecs-2014-11-13/UpdateClusterSettings">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateClusterSettingsOutcome UpdateClusterSettings(const Model::UpdateClusterSettingsRequest& request) const;

        /**
         * A Callable wrapper for UpdateClusterSettings that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateClusterSettingsRequestT = Model::UpdateClusterSettingsRequest>
        Model::UpdateClusterSettingsOutcomeCallable UpdateClusterSettingsCallable(const UpdateClusterSettingsRequestT& request) const
        {
            return SubmitCallable(&ECSClient::UpdateClusterSettings, request);
        }

        /**
         * An Async wrapper for UpdateClusterSettings that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateClusterSettingsRequestT = Model::UpdateClusterSettingsRequest>
        void UpdateClusterSettingsAsync(const UpdateClusterSettingsRequestT& request, const UpdateClusterSettingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ECSClient::UpdateClusterSettings, request, handler, context);
        }

        /**
         * <p>Updates the Amazon ECS container agent on a specified container instance.
         * Updating the Amazon ECS container agent doesn't interrupt running tasks or
         * services on the container instance. The process for updating the agent differs
         * depending on whether your container instance was launched with the Amazon
         * ECS-optimized AMI or another operating system.</p>  <p>The
         * <code>UpdateContainerAgent</code> API isn't supported for container instances
         * using the Amazon ECS-optimized Amazon Linux 2 (arm64) AMI. To update the
         * container agent, you can update the <code>ecs-init</code> package. This updates
         * the agent. For more information, see <a
         * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/agent-update-ecs-ami.html">Updating
         * the Amazon ECS container agent</a> in the <i>Amazon Elastic Container Service
         * Developer Guide</i>.</p>   <p>Agent updates with the
         * <code>UpdateContainerAgent</code> API operation do not apply to Windows
         * container instances. We recommend that you launch new container instances to
         * update the agent version in your Windows clusters.</p>  <p>The
         * <code>UpdateContainerAgent</code> API requires an Amazon ECS-optimized AMI or
         * Amazon Linux AMI with the <code>ecs-init</code> service installed and running.
         * For help updating the Amazon ECS container agent on other operating systems, see
         * <a
         * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/ecs-agent-update.html#manually_update_agent">Manually
         * updating the Amazon ECS container agent</a> in the <i>Amazon Elastic Container
         * Service Developer Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ecs-2014-11-13/UpdateContainerAgent">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateContainerAgentOutcome UpdateContainerAgent(const Model::UpdateContainerAgentRequest& request) const;

        /**
         * A Callable wrapper for UpdateContainerAgent that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateContainerAgentRequestT = Model::UpdateContainerAgentRequest>
        Model::UpdateContainerAgentOutcomeCallable UpdateContainerAgentCallable(const UpdateContainerAgentRequestT& request) const
        {
            return SubmitCallable(&ECSClient::UpdateContainerAgent, request);
        }

        /**
         * An Async wrapper for UpdateContainerAgent that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateContainerAgentRequestT = Model::UpdateContainerAgentRequest>
        void UpdateContainerAgentAsync(const UpdateContainerAgentRequestT& request, const UpdateContainerAgentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ECSClient::UpdateContainerAgent, request, handler, context);
        }

        /**
         * <p>Modifies the status of an Amazon ECS container instance.</p> <p>Once a
         * container instance has reached an <code>ACTIVE</code> state, you can change the
         * status of a container instance to <code>DRAINING</code> to manually remove an
         * instance from a cluster, for example to perform system updates, update the
         * Docker daemon, or scale down the cluster size.</p>  <p>A container
         * instance can't be changed to <code>DRAINING</code> until it has reached an
         * <code>ACTIVE</code> status. If the instance is in any other status, an error
         * will be received.</p>  <p>When you set a container instance to
         * <code>DRAINING</code>, Amazon ECS prevents new tasks from being scheduled for
         * placement on the container instance and replacement service tasks are started on
         * other container instances in the cluster if the resources are available. Service
         * tasks on the container instance that are in the <code>PENDING</code> state are
         * stopped immediately.</p> <p>Service tasks on the container instance that are in
         * the <code>RUNNING</code> state are stopped and replaced according to the
         * service's deployment configuration parameters,
         * <code>minimumHealthyPercent</code> and <code>maximumPercent</code>. You can
         * change the deployment configuration of your service using
         * <a>UpdateService</a>.</p> <ul> <li> <p>If <code>minimumHealthyPercent</code> is
         * below 100%, the scheduler can ignore <code>desiredCount</code> temporarily
         * during task replacement. For example, <code>desiredCount</code> is four tasks, a
         * minimum of 50% allows the scheduler to stop two existing tasks before starting
         * two new tasks. If the minimum is 100%, the service scheduler can't remove
         * existing tasks until the replacement tasks are considered healthy. Tasks for
         * services that do not use a load balancer are considered healthy if they're in
         * the <code>RUNNING</code> state. Tasks for services that use a load balancer are
         * considered healthy if they're in the <code>RUNNING</code> state and are reported
         * as healthy by the load balancer.</p> </li> <li> <p>The
         * <code>maximumPercent</code> parameter represents an upper limit on the number of
         * running tasks during task replacement. You can use this to define the
         * replacement batch size. For example, if <code>desiredCount</code> is four tasks,
         * a maximum of 200% starts four new tasks before stopping the four tasks to be
         * drained, provided that the cluster resources required to do this are available.
         * If the maximum is 100%, then replacement tasks can't start until the draining
         * tasks have stopped.</p> </li> </ul> <p>Any <code>PENDING</code> or
         * <code>RUNNING</code> tasks that do not belong to a service aren't affected. You
         * must wait for them to finish or stop them manually.</p> <p>A container instance
         * has completed draining when it has no more <code>RUNNING</code> tasks. You can
         * verify this using <a>ListTasks</a>.</p> <p>When a container instance has been
         * drained, you can set a container instance to <code>ACTIVE</code> status and once
         * it has reached that status the Amazon ECS scheduler can begin scheduling tasks
         * on the instance again.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ecs-2014-11-13/UpdateContainerInstancesState">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateContainerInstancesStateOutcome UpdateContainerInstancesState(const Model::UpdateContainerInstancesStateRequest& request) const;

        /**
         * A Callable wrapper for UpdateContainerInstancesState that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateContainerInstancesStateRequestT = Model::UpdateContainerInstancesStateRequest>
        Model::UpdateContainerInstancesStateOutcomeCallable UpdateContainerInstancesStateCallable(const UpdateContainerInstancesStateRequestT& request) const
        {
            return SubmitCallable(&ECSClient::UpdateContainerInstancesState, request);
        }

        /**
         * An Async wrapper for UpdateContainerInstancesState that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateContainerInstancesStateRequestT = Model::UpdateContainerInstancesStateRequest>
        void UpdateContainerInstancesStateAsync(const UpdateContainerInstancesStateRequestT& request, const UpdateContainerInstancesStateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ECSClient::UpdateContainerInstancesState, request, handler, context);
        }

        /**
         * <p>Modifies the parameters of a service.</p> <p>For services using the rolling
         * update (<code>ECS</code>) you can update the desired count, deployment
         * configuration, network configuration, load balancers, service registries, enable
         * ECS managed tags option, propagate tags option, task placement constraints and
         * strategies, and task definition. When you update any of these parameters, Amazon
         * ECS starts new tasks with the new configuration. </p> <p>You can attach Amazon
         * EBS volumes to Amazon ECS tasks by configuring the volume when starting or
         * running a task, or when creating or updating a service. For more infomation, see
         * <a
         * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/ebs-volumes.html#ebs-volume-types">Amazon
         * EBS volumes</a> in the <i>Amazon Elastic Container Service Developer Guide</i>.
         * You can update your volume configurations and trigger a new deployment.
         * <code>volumeConfigurations</code> is only supported for REPLICA service and not
         * DAEMON service. If you leave <code>volumeConfigurations</code>
         * <code>null</code>, it doesn't trigger a new deployment. For more infomation on
         * volumes, see <a
         * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/ebs-volumes.html#ebs-volume-types">Amazon
         * EBS volumes</a> in the <i>Amazon Elastic Container Service Developer
         * Guide</i>.</p> <p>For services using the blue/green (<code>CODE_DEPLOY</code>)
         * deployment controller, only the desired count, deployment configuration, health
         * check grace period, task placement constraints and strategies, enable ECS
         * managed tags option, and propagate tags can be updated using this API. If the
         * network configuration, platform version, task definition, or load balancer need
         * to be updated, create a new CodeDeploy deployment. For more information, see <a
         * href="https://docs.aws.amazon.com/codedeploy/latest/APIReference/API_CreateDeployment.html">CreateDeployment</a>
         * in the <i>CodeDeploy API Reference</i>.</p> <p>For services using an external
         * deployment controller, you can update only the desired count, task placement
         * constraints and strategies, health check grace period, enable ECS managed tags
         * option, and propagate tags option, using this API. If the launch type, load
         * balancer, network configuration, platform version, or task definition need to be
         * updated, create a new task set For more information, see
         * <a>CreateTaskSet</a>.</p> <p>You can add to or subtract from the number of
         * instantiations of a task definition in a service by specifying the cluster that
         * the service is running in and a new <code>desiredCount</code> parameter.</p>
         * <p>You can attach Amazon EBS volumes to Amazon ECS tasks by configuring the
         * volume when starting or running a task, or when creating or updating a service.
         * For more infomation, see <a
         * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/ebs-volumes.html#ebs-volume-types">Amazon
         * EBS volumes</a> in the <i>Amazon Elastic Container Service Developer
         * Guide</i>.</p> <p>If you have updated the container image of your application,
         * you can create a new task definition with that image and deploy it to your
         * service. The service scheduler uses the minimum healthy percent and maximum
         * percent parameters (in the service's deployment configuration) to determine the
         * deployment strategy.</p>  <p>If your updated Docker image uses the same
         * tag as what is in the existing task definition for your service (for example,
         * <code>my_image:latest</code>), you don't need to create a new revision of your
         * task definition. You can update the service using the
         * <code>forceNewDeployment</code> option. The new tasks launched by the deployment
         * pull the current image/tag combination from your repository when they start.</p>
         *  <p>You can also update the deployment configuration of a service. When a
         * deployment is triggered by updating the task definition of a service, the
         * service scheduler uses the deployment configuration parameters,
         * <code>minimumHealthyPercent</code> and <code>maximumPercent</code>, to determine
         * the deployment strategy.</p> <ul> <li> <p>If <code>minimumHealthyPercent</code>
         * is below 100%, the scheduler can ignore <code>desiredCount</code> temporarily
         * during a deployment. For example, if <code>desiredCount</code> is four tasks, a
         * minimum of 50% allows the scheduler to stop two existing tasks before starting
         * two new tasks. Tasks for services that don't use a load balancer are considered
         * healthy if they're in the <code>RUNNING</code> state. Tasks for services that
         * use a load balancer are considered healthy if they're in the
         * <code>RUNNING</code> state and are reported as healthy by the load balancer.</p>
         * </li> <li> <p>The <code>maximumPercent</code> parameter represents an upper
         * limit on the number of running tasks during a deployment. You can use it to
         * define the deployment batch size. For example, if <code>desiredCount</code> is
         * four tasks, a maximum of 200% starts four new tasks before stopping the four
         * older tasks (provided that the cluster resources required to do this are
         * available).</p> </li> </ul> <p>When <a>UpdateService</a> stops a task during a
         * deployment, the equivalent of <code>docker stop</code> is issued to the
         * containers running in the task. This results in a <code>SIGTERM</code> and a
         * 30-second timeout. After this, <code>SIGKILL</code> is sent and the containers
         * are forcibly stopped. If the container handles the <code>SIGTERM</code>
         * gracefully and exits within 30 seconds from receiving it, no
         * <code>SIGKILL</code> is sent.</p> <p>When the service scheduler launches new
         * tasks, it determines task placement in your cluster with the following
         * logic.</p> <ul> <li> <p>Determine which of the container instances in your
         * cluster can support your service's task definition. For example, they have the
         * required CPU, memory, ports, and container instance attributes.</p> </li> <li>
         * <p>By default, the service scheduler attempts to balance tasks across
         * Availability Zones in this manner even though you can choose a different
         * placement strategy.</p> <ul> <li> <p>Sort the valid container instances by the
         * fewest number of running tasks for this service in the same Availability Zone as
         * the instance. For example, if zone A has one running service task and zones B
         * and C each have zero, valid container instances in either zone B or C are
         * considered optimal for placement.</p> </li> <li> <p>Place the new service task
         * on a valid container instance in an optimal Availability Zone (based on the
         * previous steps), favoring container instances with the fewest number of running
         * tasks for this service.</p> </li> </ul> </li> </ul> <p>When the service
         * scheduler stops running tasks, it attempts to maintain balance across the
         * Availability Zones in your cluster using the following logic: </p> <ul> <li>
         * <p>Sort the container instances by the largest number of running tasks for this
         * service in the same Availability Zone as the instance. For example, if zone A
         * has one running service task and zones B and C each have two, container
         * instances in either zone B or C are considered optimal for termination.</p>
         * </li> <li> <p>Stop the task on a container instance in an optimal Availability
         * Zone (based on the previous steps), favoring container instances with the
         * largest number of running tasks for this service.</p> </li> </ul>  <p>You
         * must have a service-linked role when you update any of the following service
         * properties:</p> <ul> <li> <p> <code>loadBalancers</code>,</p> </li> <li> <p>
         * <code>serviceRegistries</code> </p> </li> </ul> <p>For more information about
         * the role see the <code>CreateService</code> request parameter <a
         * href="https://docs.aws.amazon.com/AmazonECS/latest/APIReference/API_CreateService.html#ECS-CreateService-request-role">
         * <code>role</code> </a>. </p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ecs-2014-11-13/UpdateService">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateServiceOutcome UpdateService(const Model::UpdateServiceRequest& request) const;

        /**
         * A Callable wrapper for UpdateService that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateServiceRequestT = Model::UpdateServiceRequest>
        Model::UpdateServiceOutcomeCallable UpdateServiceCallable(const UpdateServiceRequestT& request) const
        {
            return SubmitCallable(&ECSClient::UpdateService, request);
        }

        /**
         * An Async wrapper for UpdateService that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateServiceRequestT = Model::UpdateServiceRequest>
        void UpdateServiceAsync(const UpdateServiceRequestT& request, const UpdateServiceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ECSClient::UpdateService, request, handler, context);
        }

        /**
         * <p>Modifies which task set in a service is the primary task set. Any parameters
         * that are updated on the primary task set in a service will transition to the
         * service. This is used when a service uses the <code>EXTERNAL</code> deployment
         * controller type. For more information, see <a
         * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/deployment-types.html">Amazon
         * ECS Deployment Types</a> in the <i>Amazon Elastic Container Service Developer
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ecs-2014-11-13/UpdateServicePrimaryTaskSet">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateServicePrimaryTaskSetOutcome UpdateServicePrimaryTaskSet(const Model::UpdateServicePrimaryTaskSetRequest& request) const;

        /**
         * A Callable wrapper for UpdateServicePrimaryTaskSet that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateServicePrimaryTaskSetRequestT = Model::UpdateServicePrimaryTaskSetRequest>
        Model::UpdateServicePrimaryTaskSetOutcomeCallable UpdateServicePrimaryTaskSetCallable(const UpdateServicePrimaryTaskSetRequestT& request) const
        {
            return SubmitCallable(&ECSClient::UpdateServicePrimaryTaskSet, request);
        }

        /**
         * An Async wrapper for UpdateServicePrimaryTaskSet that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateServicePrimaryTaskSetRequestT = Model::UpdateServicePrimaryTaskSetRequest>
        void UpdateServicePrimaryTaskSetAsync(const UpdateServicePrimaryTaskSetRequestT& request, const UpdateServicePrimaryTaskSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ECSClient::UpdateServicePrimaryTaskSet, request, handler, context);
        }

        /**
         * <p>Updates the protection status of a task. You can set
         * <code>protectionEnabled</code> to <code>true</code> to protect your task from
         * termination during scale-in events from <a
         * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/service-auto-scaling.html">Service
         * Autoscaling</a> or <a
         * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/deployment-types.html">deployments</a>.</p>
         * <p>Task-protection, by default, expires after 2 hours at which point Amazon ECS
         * clears the <code>protectionEnabled</code> property making the task eligible for
         * termination by a subsequent scale-in event.</p> <p>You can specify a custom
         * expiration period for task protection from 1 minute to up to 2,880 minutes (48
         * hours). To specify the custom expiration period, set the
         * <code>expiresInMinutes</code> property. The <code>expiresInMinutes</code>
         * property is always reset when you invoke this operation for a task that already
         * has <code>protectionEnabled</code> set to <code>true</code>. You can keep
         * extending the protection expiration period of a task by invoking this operation
         * repeatedly.</p> <p>To learn more about Amazon ECS task protection, see <a
         * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/task-scale-in-protection.html">Task
         * scale-in protection</a> in the <i> <i>Amazon Elastic Container Service Developer
         * Guide</i> </i>.</p>  <p>This operation is only supported for tasks
         * belonging to an Amazon ECS service. Invoking this operation for a standalone
         * task will result in an <code>TASK_NOT_VALID</code> failure. For more
         * information, see <a
         * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/api_failures_messages.html">API
         * failure reasons</a>.</p>   <p>If you prefer to set task
         * protection from within the container, we recommend using the <a
         * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/task-scale-in-protection-endpoint.html">Task
         * scale-in protection endpoint</a>.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ecs-2014-11-13/UpdateTaskProtection">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateTaskProtectionOutcome UpdateTaskProtection(const Model::UpdateTaskProtectionRequest& request) const;

        /**
         * A Callable wrapper for UpdateTaskProtection that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateTaskProtectionRequestT = Model::UpdateTaskProtectionRequest>
        Model::UpdateTaskProtectionOutcomeCallable UpdateTaskProtectionCallable(const UpdateTaskProtectionRequestT& request) const
        {
            return SubmitCallable(&ECSClient::UpdateTaskProtection, request);
        }

        /**
         * An Async wrapper for UpdateTaskProtection that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateTaskProtectionRequestT = Model::UpdateTaskProtectionRequest>
        void UpdateTaskProtectionAsync(const UpdateTaskProtectionRequestT& request, const UpdateTaskProtectionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ECSClient::UpdateTaskProtection, request, handler, context);
        }

        /**
         * <p>Modifies a task set. This is used when a service uses the
         * <code>EXTERNAL</code> deployment controller type. For more information, see <a
         * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/deployment-types.html">Amazon
         * ECS Deployment Types</a> in the <i>Amazon Elastic Container Service Developer
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ecs-2014-11-13/UpdateTaskSet">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateTaskSetOutcome UpdateTaskSet(const Model::UpdateTaskSetRequest& request) const;

        /**
         * A Callable wrapper for UpdateTaskSet that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateTaskSetRequestT = Model::UpdateTaskSetRequest>
        Model::UpdateTaskSetOutcomeCallable UpdateTaskSetCallable(const UpdateTaskSetRequestT& request) const
        {
            return SubmitCallable(&ECSClient::UpdateTaskSet, request);
        }

        /**
         * An Async wrapper for UpdateTaskSet that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateTaskSetRequestT = Model::UpdateTaskSetRequest>
        void UpdateTaskSetAsync(const UpdateTaskSetRequestT& request, const UpdateTaskSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ECSClient::UpdateTaskSet, request, handler, context);
        }


      void OverrideEndpoint(const Aws::String& endpoint);
      std::shared_ptr<ECSEndpointProviderBase>& accessEndpointProvider();
    private:
      friend class Aws::Client::ClientWithAsyncTemplateMethods<ECSClient>;
      void init(const ECSClientConfiguration& clientConfiguration);

      ECSClientConfiguration m_clientConfiguration;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
      std::shared_ptr<ECSEndpointProviderBase> m_endpointProvider;
  };

} // namespace ECS
} // namespace Aws
