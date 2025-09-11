/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ecs/ECS_EXPORTS.h>
#include <aws/ecs/ECSRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ecs/model/AvailabilityZoneRebalancing.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ecs/model/LaunchType.h>
#include <aws/ecs/model/DeploymentConfiguration.h>
#include <aws/ecs/model/NetworkConfiguration.h>
#include <aws/ecs/model/SchedulingStrategy.h>
#include <aws/ecs/model/DeploymentController.h>
#include <aws/ecs/model/PropagateTags.h>
#include <aws/ecs/model/ServiceConnectConfiguration.h>
#include <aws/ecs/model/LoadBalancer.h>
#include <aws/ecs/model/ServiceRegistry.h>
#include <aws/ecs/model/CapacityProviderStrategyItem.h>
#include <aws/ecs/model/PlacementConstraint.h>
#include <aws/ecs/model/PlacementStrategy.h>
#include <aws/ecs/model/Tag.h>
#include <aws/ecs/model/ServiceVolumeConfiguration.h>
#include <aws/ecs/model/VpcLatticeConfiguration.h>
#include <utility>

namespace Aws
{
namespace ECS
{
namespace Model
{

  /**
   */
  class CreateServiceRequest : public ECSRequest
  {
  public:
    AWS_ECS_API CreateServiceRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateService"; }

    AWS_ECS_API Aws::String SerializePayload() const override;

    AWS_ECS_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The short name or full Amazon Resource Name (ARN) of the cluster that you run
     * your service on. If you do not specify a cluster, the default cluster is
     * assumed.</p>
     */
    inline const Aws::String& GetCluster() const { return m_cluster; }
    inline bool ClusterHasBeenSet() const { return m_clusterHasBeenSet; }
    template<typename ClusterT = Aws::String>
    void SetCluster(ClusterT&& value) { m_clusterHasBeenSet = true; m_cluster = std::forward<ClusterT>(value); }
    template<typename ClusterT = Aws::String>
    CreateServiceRequest& WithCluster(ClusterT&& value) { SetCluster(std::forward<ClusterT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of your service. Up to 255 letters (uppercase and lowercase),
     * numbers, underscores, and hyphens are allowed. Service names must be unique
     * within a cluster, but you can have similarly named services in multiple clusters
     * within a Region or across multiple Regions.</p>
     */
    inline const Aws::String& GetServiceName() const { return m_serviceName; }
    inline bool ServiceNameHasBeenSet() const { return m_serviceNameHasBeenSet; }
    template<typename ServiceNameT = Aws::String>
    void SetServiceName(ServiceNameT&& value) { m_serviceNameHasBeenSet = true; m_serviceName = std::forward<ServiceNameT>(value); }
    template<typename ServiceNameT = Aws::String>
    CreateServiceRequest& WithServiceName(ServiceNameT&& value) { SetServiceName(std::forward<ServiceNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The <code>family</code> and <code>revision</code>
     * (<code>family:revision</code>) or full ARN of the task definition to run in your
     * service. If a <code>revision</code> isn't specified, the latest
     * <code>ACTIVE</code> revision is used.</p> <p>A task definition must be specified
     * if the service uses either the <code>ECS</code> or <code>CODE_DEPLOY</code>
     * deployment controllers.</p> <p>For more information about deployment types, see
     * <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/deployment-types.html">Amazon
     * ECS deployment types</a>.</p>
     */
    inline const Aws::String& GetTaskDefinition() const { return m_taskDefinition; }
    inline bool TaskDefinitionHasBeenSet() const { return m_taskDefinitionHasBeenSet; }
    template<typename TaskDefinitionT = Aws::String>
    void SetTaskDefinition(TaskDefinitionT&& value) { m_taskDefinitionHasBeenSet = true; m_taskDefinition = std::forward<TaskDefinitionT>(value); }
    template<typename TaskDefinitionT = Aws::String>
    CreateServiceRequest& WithTaskDefinition(TaskDefinitionT&& value) { SetTaskDefinition(std::forward<TaskDefinitionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether to use Availability Zone rebalancing for the service.</p>
     * <p>For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/service-rebalancing.html">Balancing
     * an Amazon ECS service across Availability Zones</a> in the <i> <i>Amazon Elastic
     * Container Service Developer Guide</i> </i>.</p> <p>The default behavior of
     * <code>AvailabilityZoneRebalancing</code> differs between create and update
     * requests:</p> <ul> <li> <p>For create service requests, when no value is
     * specified for <code>AvailabilityZoneRebalancing</code>, Amazon ECS defaults the
     * value to <code>ENABLED</code>.</p> </li> <li> <p>For update service requests,
     * when no value is specified for <code>AvailabilityZoneRebalancing</code>, Amazon
     * ECS defaults to the existing service’s <code>AvailabilityZoneRebalancing</code>
     * value. If the service never had an <code>AvailabilityZoneRebalancing</code>
     * value set, Amazon ECS treats this as <code>DISABLED</code>.</p> </li> </ul>
     */
    inline AvailabilityZoneRebalancing GetAvailabilityZoneRebalancing() const { return m_availabilityZoneRebalancing; }
    inline bool AvailabilityZoneRebalancingHasBeenSet() const { return m_availabilityZoneRebalancingHasBeenSet; }
    inline void SetAvailabilityZoneRebalancing(AvailabilityZoneRebalancing value) { m_availabilityZoneRebalancingHasBeenSet = true; m_availabilityZoneRebalancing = value; }
    inline CreateServiceRequest& WithAvailabilityZoneRebalancing(AvailabilityZoneRebalancing value) { SetAvailabilityZoneRebalancing(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A load balancer object representing the load balancers to use with your
     * service. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/service-load-balancing.html">Service
     * load balancing</a> in the <i>Amazon Elastic Container Service Developer
     * Guide</i>.</p> <p>If the service uses the <code>ECS</code> deployment controller
     * and using either an Application Load Balancer or Network Load Balancer, you must
     * specify one or more target group ARNs to attach to the service. The
     * service-linked role is required for services that use multiple target groups.
     * For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/using-service-linked-roles.html">Using
     * service-linked roles for Amazon ECS</a> in the <i>Amazon Elastic Container
     * Service Developer Guide</i>.</p> <p>If the service uses the
     * <code>CODE_DEPLOY</code> deployment controller, the service is required to use
     * either an Application Load Balancer or Network Load Balancer. When creating an
     * CodeDeploy deployment group, you specify two target groups (referred to as a
     * <code>targetGroupPair</code>). During a deployment, CodeDeploy determines which
     * task set in your service has the status <code>PRIMARY</code>, and it associates
     * one target group with it. Then, it also associates the other target group with
     * the replacement task set. The load balancer can also have up to two listeners: a
     * required listener for production traffic and an optional listener that you can
     * use to perform validation tests with Lambda functions before routing production
     * traffic to it.</p> <p>If you use the <code>CODE_DEPLOY</code> deployment
     * controller, these values can be changed when updating the service.</p> <p>For
     * Application Load Balancers and Network Load Balancers, this object must contain
     * the load balancer target group ARN, the container name, and the container port
     * to access from the load balancer. The container name must be as it appears in a
     * container definition. The load balancer name parameter must be omitted. When a
     * task from this service is placed on a container instance, the container instance
     * and port combination is registered as a target in the target group that's
     * specified here.</p> <p>For Classic Load Balancers, this object must contain the
     * load balancer name, the container name , and the container port to access from
     * the load balancer. The container name must be as it appears in a container
     * definition. The target group ARN parameter must be omitted. When a task from
     * this service is placed on a container instance, the container instance is
     * registered with the load balancer that's specified here.</p> <p>Services with
     * tasks that use the <code>awsvpc</code> network mode (for example, those with the
     * Fargate launch type) only support Application Load Balancers and Network Load
     * Balancers. Classic Load Balancers aren't supported. Also, when you create any
     * target groups for these services, you must choose <code>ip</code> as the target
     * type, not <code>instance</code>. This is because tasks that use the
     * <code>awsvpc</code> network mode are associated with an elastic network
     * interface, not an Amazon EC2 instance.</p>
     */
    inline const Aws::Vector<LoadBalancer>& GetLoadBalancers() const { return m_loadBalancers; }
    inline bool LoadBalancersHasBeenSet() const { return m_loadBalancersHasBeenSet; }
    template<typename LoadBalancersT = Aws::Vector<LoadBalancer>>
    void SetLoadBalancers(LoadBalancersT&& value) { m_loadBalancersHasBeenSet = true; m_loadBalancers = std::forward<LoadBalancersT>(value); }
    template<typename LoadBalancersT = Aws::Vector<LoadBalancer>>
    CreateServiceRequest& WithLoadBalancers(LoadBalancersT&& value) { SetLoadBalancers(std::forward<LoadBalancersT>(value)); return *this;}
    template<typename LoadBalancersT = LoadBalancer>
    CreateServiceRequest& AddLoadBalancers(LoadBalancersT&& value) { m_loadBalancersHasBeenSet = true; m_loadBalancers.emplace_back(std::forward<LoadBalancersT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The details of the service discovery registry to associate with this service.
     * For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/service-discovery.html">Service
     * discovery</a>.</p>  <p>Each service may be associated with one service
     * registry. Multiple service registries for each service isn't supported.</p>
     * 
     */
    inline const Aws::Vector<ServiceRegistry>& GetServiceRegistries() const { return m_serviceRegistries; }
    inline bool ServiceRegistriesHasBeenSet() const { return m_serviceRegistriesHasBeenSet; }
    template<typename ServiceRegistriesT = Aws::Vector<ServiceRegistry>>
    void SetServiceRegistries(ServiceRegistriesT&& value) { m_serviceRegistriesHasBeenSet = true; m_serviceRegistries = std::forward<ServiceRegistriesT>(value); }
    template<typename ServiceRegistriesT = Aws::Vector<ServiceRegistry>>
    CreateServiceRequest& WithServiceRegistries(ServiceRegistriesT&& value) { SetServiceRegistries(std::forward<ServiceRegistriesT>(value)); return *this;}
    template<typename ServiceRegistriesT = ServiceRegistry>
    CreateServiceRequest& AddServiceRegistries(ServiceRegistriesT&& value) { m_serviceRegistriesHasBeenSet = true; m_serviceRegistries.emplace_back(std::forward<ServiceRegistriesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The number of instantiations of the specified task definition to place and
     * keep running in your service.</p> <p>This is required if
     * <code>schedulingStrategy</code> is <code>REPLICA</code> or isn't specified. If
     * <code>schedulingStrategy</code> is <code>DAEMON</code> then this isn't
     * required.</p>
     */
    inline int GetDesiredCount() const { return m_desiredCount; }
    inline bool DesiredCountHasBeenSet() const { return m_desiredCountHasBeenSet; }
    inline void SetDesiredCount(int value) { m_desiredCountHasBeenSet = true; m_desiredCount = value; }
    inline CreateServiceRequest& WithDesiredCount(int value) { SetDesiredCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An identifier that you provide to ensure the idempotency of the request. It
     * must be unique and is case sensitive. Up to 36 ASCII characters in the range of
     * 33-126 (inclusive) are allowed.</p>
     */
    inline const Aws::String& GetClientToken() const { return m_clientToken; }
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
    template<typename ClientTokenT = Aws::String>
    void SetClientToken(ClientTokenT&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::forward<ClientTokenT>(value); }
    template<typename ClientTokenT = Aws::String>
    CreateServiceRequest& WithClientToken(ClientTokenT&& value) { SetClientToken(std::forward<ClientTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The infrastructure that you run your service on. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/launch_types.html">Amazon
     * ECS launch types</a> in the <i>Amazon Elastic Container Service Developer
     * Guide</i>.</p> <p>The <code>FARGATE</code> launch type runs your tasks on
     * Fargate On-Demand infrastructure.</p>  <p>Fargate Spot infrastructure is
     * available for use but a capacity provider strategy must be used. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/fargate-capacity-providers.html">Fargate
     * capacity providers</a> in the <i>Amazon ECS Developer Guide</i>.</p> 
     * <p>The <code>EC2</code> launch type runs your tasks on Amazon EC2 instances
     * registered to your cluster.</p> <p>The <code>EXTERNAL</code> launch type runs
     * your tasks on your on-premises server or virtual machine (VM) capacity
     * registered to your cluster.</p> <p>A service can use either a launch type or a
     * capacity provider strategy. If a <code>launchType</code> is specified, the
     * <code>capacityProviderStrategy</code> parameter must be omitted.</p>
     */
    inline LaunchType GetLaunchType() const { return m_launchType; }
    inline bool LaunchTypeHasBeenSet() const { return m_launchTypeHasBeenSet; }
    inline void SetLaunchType(LaunchType value) { m_launchTypeHasBeenSet = true; m_launchType = value; }
    inline CreateServiceRequest& WithLaunchType(LaunchType value) { SetLaunchType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The capacity provider strategy to use for the service.</p> <p>If a
     * <code>capacityProviderStrategy</code> is specified, the <code>launchType</code>
     * parameter must be omitted. If no <code>capacityProviderStrategy</code> or
     * <code>launchType</code> is specified, the
     * <code>defaultCapacityProviderStrategy</code> for the cluster is used.</p> <p>A
     * capacity provider strategy can contain a maximum of 20 capacity providers.</p>
     */
    inline const Aws::Vector<CapacityProviderStrategyItem>& GetCapacityProviderStrategy() const { return m_capacityProviderStrategy; }
    inline bool CapacityProviderStrategyHasBeenSet() const { return m_capacityProviderStrategyHasBeenSet; }
    template<typename CapacityProviderStrategyT = Aws::Vector<CapacityProviderStrategyItem>>
    void SetCapacityProviderStrategy(CapacityProviderStrategyT&& value) { m_capacityProviderStrategyHasBeenSet = true; m_capacityProviderStrategy = std::forward<CapacityProviderStrategyT>(value); }
    template<typename CapacityProviderStrategyT = Aws::Vector<CapacityProviderStrategyItem>>
    CreateServiceRequest& WithCapacityProviderStrategy(CapacityProviderStrategyT&& value) { SetCapacityProviderStrategy(std::forward<CapacityProviderStrategyT>(value)); return *this;}
    template<typename CapacityProviderStrategyT = CapacityProviderStrategyItem>
    CreateServiceRequest& AddCapacityProviderStrategy(CapacityProviderStrategyT&& value) { m_capacityProviderStrategyHasBeenSet = true; m_capacityProviderStrategy.emplace_back(std::forward<CapacityProviderStrategyT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The platform version that your tasks in the service are running on. A
     * platform version is specified only for tasks using the Fargate launch type. If
     * one isn't specified, the <code>LATEST</code> platform version is used. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/platform_versions.html">Fargate
     * platform versions</a> in the <i>Amazon Elastic Container Service Developer
     * Guide</i>.</p>
     */
    inline const Aws::String& GetPlatformVersion() const { return m_platformVersion; }
    inline bool PlatformVersionHasBeenSet() const { return m_platformVersionHasBeenSet; }
    template<typename PlatformVersionT = Aws::String>
    void SetPlatformVersion(PlatformVersionT&& value) { m_platformVersionHasBeenSet = true; m_platformVersion = std::forward<PlatformVersionT>(value); }
    template<typename PlatformVersionT = Aws::String>
    CreateServiceRequest& WithPlatformVersion(PlatformVersionT&& value) { SetPlatformVersion(std::forward<PlatformVersionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name or full Amazon Resource Name (ARN) of the IAM role that allows
     * Amazon ECS to make calls to your load balancer on your behalf. This parameter is
     * only permitted if you are using a load balancer with your service and your task
     * definition doesn't use the <code>awsvpc</code> network mode. If you specify the
     * <code>role</code> parameter, you must also specify a load balancer object with
     * the <code>loadBalancers</code> parameter.</p>  <p>If your account has
     * already created the Amazon ECS service-linked role, that role is used for your
     * service unless you specify a role here. The service-linked role is required if
     * your task definition uses the <code>awsvpc</code> network mode or if the service
     * is configured to use service discovery, an external deployment controller,
     * multiple target groups, or Elastic Inference accelerators in which case you
     * don't specify a role here. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/using-service-linked-roles.html">Using
     * service-linked roles for Amazon ECS</a> in the <i>Amazon Elastic Container
     * Service Developer Guide</i>.</p>  <p>If your specified role has a
     * path other than <code>/</code>, then you must either specify the full role ARN
     * (this is recommended) or prefix the role name with the path. For example, if a
     * role with the name <code>bar</code> has a path of <code>/foo/</code> then you
     * would specify <code>/foo/bar</code> as the role name. For more information, see
     * <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/reference_identifiers.html#identifiers-friendly-names">Friendly
     * names and paths</a> in the <i>IAM User Guide</i>.</p>
     */
    inline const Aws::String& GetRole() const { return m_role; }
    inline bool RoleHasBeenSet() const { return m_roleHasBeenSet; }
    template<typename RoleT = Aws::String>
    void SetRole(RoleT&& value) { m_roleHasBeenSet = true; m_role = std::forward<RoleT>(value); }
    template<typename RoleT = Aws::String>
    CreateServiceRequest& WithRole(RoleT&& value) { SetRole(std::forward<RoleT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Optional deployment parameters that control how many tasks run during the
     * deployment and the ordering of stopping and starting tasks.</p>
     */
    inline const DeploymentConfiguration& GetDeploymentConfiguration() const { return m_deploymentConfiguration; }
    inline bool DeploymentConfigurationHasBeenSet() const { return m_deploymentConfigurationHasBeenSet; }
    template<typename DeploymentConfigurationT = DeploymentConfiguration>
    void SetDeploymentConfiguration(DeploymentConfigurationT&& value) { m_deploymentConfigurationHasBeenSet = true; m_deploymentConfiguration = std::forward<DeploymentConfigurationT>(value); }
    template<typename DeploymentConfigurationT = DeploymentConfiguration>
    CreateServiceRequest& WithDeploymentConfiguration(DeploymentConfigurationT&& value) { SetDeploymentConfiguration(std::forward<DeploymentConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array of placement constraint objects to use for tasks in your service.
     * You can specify a maximum of 10 constraints for each task. This limit includes
     * constraints in the task definition and those specified at runtime.</p>
     */
    inline const Aws::Vector<PlacementConstraint>& GetPlacementConstraints() const { return m_placementConstraints; }
    inline bool PlacementConstraintsHasBeenSet() const { return m_placementConstraintsHasBeenSet; }
    template<typename PlacementConstraintsT = Aws::Vector<PlacementConstraint>>
    void SetPlacementConstraints(PlacementConstraintsT&& value) { m_placementConstraintsHasBeenSet = true; m_placementConstraints = std::forward<PlacementConstraintsT>(value); }
    template<typename PlacementConstraintsT = Aws::Vector<PlacementConstraint>>
    CreateServiceRequest& WithPlacementConstraints(PlacementConstraintsT&& value) { SetPlacementConstraints(std::forward<PlacementConstraintsT>(value)); return *this;}
    template<typename PlacementConstraintsT = PlacementConstraint>
    CreateServiceRequest& AddPlacementConstraints(PlacementConstraintsT&& value) { m_placementConstraintsHasBeenSet = true; m_placementConstraints.emplace_back(std::forward<PlacementConstraintsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The placement strategy objects to use for tasks in your service. You can
     * specify a maximum of 5 strategy rules for each service.</p>
     */
    inline const Aws::Vector<PlacementStrategy>& GetPlacementStrategy() const { return m_placementStrategy; }
    inline bool PlacementStrategyHasBeenSet() const { return m_placementStrategyHasBeenSet; }
    template<typename PlacementStrategyT = Aws::Vector<PlacementStrategy>>
    void SetPlacementStrategy(PlacementStrategyT&& value) { m_placementStrategyHasBeenSet = true; m_placementStrategy = std::forward<PlacementStrategyT>(value); }
    template<typename PlacementStrategyT = Aws::Vector<PlacementStrategy>>
    CreateServiceRequest& WithPlacementStrategy(PlacementStrategyT&& value) { SetPlacementStrategy(std::forward<PlacementStrategyT>(value)); return *this;}
    template<typename PlacementStrategyT = PlacementStrategy>
    CreateServiceRequest& AddPlacementStrategy(PlacementStrategyT&& value) { m_placementStrategyHasBeenSet = true; m_placementStrategy.emplace_back(std::forward<PlacementStrategyT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The network configuration for the service. This parameter is required for
     * task definitions that use the <code>awsvpc</code> network mode to receive their
     * own elastic network interface, and it isn't supported for other network modes.
     * For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/task-networking.html">Task
     * networking</a> in the <i>Amazon Elastic Container Service Developer
     * Guide</i>.</p>
     */
    inline const NetworkConfiguration& GetNetworkConfiguration() const { return m_networkConfiguration; }
    inline bool NetworkConfigurationHasBeenSet() const { return m_networkConfigurationHasBeenSet; }
    template<typename NetworkConfigurationT = NetworkConfiguration>
    void SetNetworkConfiguration(NetworkConfigurationT&& value) { m_networkConfigurationHasBeenSet = true; m_networkConfiguration = std::forward<NetworkConfigurationT>(value); }
    template<typename NetworkConfigurationT = NetworkConfiguration>
    CreateServiceRequest& WithNetworkConfiguration(NetworkConfigurationT&& value) { SetNetworkConfiguration(std::forward<NetworkConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The period of time, in seconds, that the Amazon Amazon ECS service scheduler
     * ignores unhealthy Elastic Load Balancing, VPC Lattice, and container health
     * checks after a task has first started. If you do not specify a health check
     * grace period value, the default value of 0 is used. If you do not use any of the
     * health checks, then <code>healthCheckGracePeriodSeconds</code> is unused.</p>
     */
    inline int GetHealthCheckGracePeriodSeconds() const { return m_healthCheckGracePeriodSeconds; }
    inline bool HealthCheckGracePeriodSecondsHasBeenSet() const { return m_healthCheckGracePeriodSecondsHasBeenSet; }
    inline void SetHealthCheckGracePeriodSeconds(int value) { m_healthCheckGracePeriodSecondsHasBeenSet = true; m_healthCheckGracePeriodSeconds = value; }
    inline CreateServiceRequest& WithHealthCheckGracePeriodSeconds(int value) { SetHealthCheckGracePeriodSeconds(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The scheduling strategy to use for the service. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/ecs_services.html">Services</a>.</p>
     * <p>There are two service scheduler strategies available:</p> <ul> <li> <p>
     * <code>REPLICA</code>-The replica scheduling strategy places and maintains the
     * desired number of tasks across your cluster. By default, the service scheduler
     * spreads tasks across Availability Zones. You can use task placement strategies
     * and constraints to customize task placement decisions. This scheduler strategy
     * is required if the service uses the <code>CODE_DEPLOY</code> or
     * <code>EXTERNAL</code> deployment controller types.</p> </li> <li> <p>
     * <code>DAEMON</code>-The daemon scheduling strategy deploys exactly one task on
     * each active container instance that meets all of the task placement constraints
     * that you specify in your cluster. The service scheduler also evaluates the task
     * placement constraints for running tasks and will stop tasks that don't meet the
     * placement constraints. When you're using this strategy, you don't need to
     * specify a desired number of tasks, a task placement strategy, or use Service
     * Auto Scaling policies.</p>  <p>Tasks using the Fargate launch type or the
     * <code>CODE_DEPLOY</code> or <code>EXTERNAL</code> deployment controller types
     * don't support the <code>DAEMON</code> scheduling strategy.</p>  </li>
     * </ul>
     */
    inline SchedulingStrategy GetSchedulingStrategy() const { return m_schedulingStrategy; }
    inline bool SchedulingStrategyHasBeenSet() const { return m_schedulingStrategyHasBeenSet; }
    inline void SetSchedulingStrategy(SchedulingStrategy value) { m_schedulingStrategyHasBeenSet = true; m_schedulingStrategy = value; }
    inline CreateServiceRequest& WithSchedulingStrategy(SchedulingStrategy value) { SetSchedulingStrategy(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The deployment controller to use for the service. If no deployment controller
     * is specified, the default value of <code>ECS</code> is used.</p>
     */
    inline const DeploymentController& GetDeploymentController() const { return m_deploymentController; }
    inline bool DeploymentControllerHasBeenSet() const { return m_deploymentControllerHasBeenSet; }
    template<typename DeploymentControllerT = DeploymentController>
    void SetDeploymentController(DeploymentControllerT&& value) { m_deploymentControllerHasBeenSet = true; m_deploymentController = std::forward<DeploymentControllerT>(value); }
    template<typename DeploymentControllerT = DeploymentController>
    CreateServiceRequest& WithDeploymentController(DeploymentControllerT&& value) { SetDeploymentController(std::forward<DeploymentControllerT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The metadata that you apply to the service to help you categorize and
     * organize them. Each tag consists of a key and an optional value, both of which
     * you define. When a service is deleted, the tags are deleted as well.</p> <p>The
     * following basic restrictions apply to tags:</p> <ul> <li> <p>Maximum number of
     * tags per resource - 50</p> </li> <li> <p>For each resource, each tag key must be
     * unique, and each tag key can have only one value.</p> </li> <li> <p>Maximum key
     * length - 128 Unicode characters in UTF-8</p> </li> <li> <p>Maximum value length
     * - 256 Unicode characters in UTF-8</p> </li> <li> <p>If your tagging schema is
     * used across multiple services and resources, remember that other services may
     * have restrictions on allowed characters. Generally allowed characters are:
     * letters, numbers, and spaces representable in UTF-8, and the following
     * characters: + - = . _ : / @.</p> </li> <li> <p>Tag keys and values are
     * case-sensitive.</p> </li> <li> <p>Do not use <code>aws:</code>,
     * <code>AWS:</code>, or any upper or lowercase combination of such as a prefix for
     * either keys or values as it is reserved for Amazon Web Services use. You cannot
     * edit or delete tag keys or values with this prefix. Tags with this prefix do not
     * count against your tags per resource limit.</p> </li> </ul>
     */
    inline const Aws::Vector<Tag>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Vector<Tag>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Vector<Tag>>
    CreateServiceRequest& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsT = Tag>
    CreateServiceRequest& AddTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags.emplace_back(std::forward<TagsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Specifies whether to turn on Amazon ECS managed tags for the tasks within the
     * service. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/ecs-using-tags.html">Tagging
     * your Amazon ECS resources</a> in the <i>Amazon Elastic Container Service
     * Developer Guide</i>.</p> <p>When you use Amazon ECS managed tags, you must set
     * the <code>propagateTags</code> request parameter.</p>
     */
    inline bool GetEnableECSManagedTags() const { return m_enableECSManagedTags; }
    inline bool EnableECSManagedTagsHasBeenSet() const { return m_enableECSManagedTagsHasBeenSet; }
    inline void SetEnableECSManagedTags(bool value) { m_enableECSManagedTagsHasBeenSet = true; m_enableECSManagedTags = value; }
    inline CreateServiceRequest& WithEnableECSManagedTags(bool value) { SetEnableECSManagedTags(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether to propagate the tags from the task definition to the task.
     * If no value is specified, the tags aren't propagated. Tags can only be
     * propagated to the task during task creation. To add tags to a task after task
     * creation, use the <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/APIReference/API_TagResource.html">TagResource</a>
     * API action.</p> <p>You must set this to a value other than <code>NONE</code>
     * when you use Cost Explorer. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/usage-reports.html">Amazon
     * ECS usage reports</a> in the <i>Amazon Elastic Container Service Developer
     * Guide</i>.</p> <p>The default is <code>NONE</code>.</p>
     */
    inline PropagateTags GetPropagateTags() const { return m_propagateTags; }
    inline bool PropagateTagsHasBeenSet() const { return m_propagateTagsHasBeenSet; }
    inline void SetPropagateTags(PropagateTags value) { m_propagateTagsHasBeenSet = true; m_propagateTags = value; }
    inline CreateServiceRequest& WithPropagateTags(PropagateTags value) { SetPropagateTags(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Determines whether the execute command functionality is turned on for the
     * service. If <code>true</code>, this enables execute command functionality on all
     * containers in the service tasks.</p>
     */
    inline bool GetEnableExecuteCommand() const { return m_enableExecuteCommand; }
    inline bool EnableExecuteCommandHasBeenSet() const { return m_enableExecuteCommandHasBeenSet; }
    inline void SetEnableExecuteCommand(bool value) { m_enableExecuteCommandHasBeenSet = true; m_enableExecuteCommand = value; }
    inline CreateServiceRequest& WithEnableExecuteCommand(bool value) { SetEnableExecuteCommand(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The configuration for this service to discover and connect to services, and
     * be discovered by, and connected from, other services within a namespace.</p>
     * <p>Tasks that run in a namespace can use short names to connect to services in
     * the namespace. Tasks can connect to services across all of the clusters in the
     * namespace. Tasks connect through a managed proxy container that collects logs
     * and metrics for increased visibility. Only the tasks that Amazon ECS services
     * create are supported with Service Connect. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/service-connect.html">Service
     * Connect</a> in the <i>Amazon Elastic Container Service Developer Guide</i>.</p>
     */
    inline const ServiceConnectConfiguration& GetServiceConnectConfiguration() const { return m_serviceConnectConfiguration; }
    inline bool ServiceConnectConfigurationHasBeenSet() const { return m_serviceConnectConfigurationHasBeenSet; }
    template<typename ServiceConnectConfigurationT = ServiceConnectConfiguration>
    void SetServiceConnectConfiguration(ServiceConnectConfigurationT&& value) { m_serviceConnectConfigurationHasBeenSet = true; m_serviceConnectConfiguration = std::forward<ServiceConnectConfigurationT>(value); }
    template<typename ServiceConnectConfigurationT = ServiceConnectConfiguration>
    CreateServiceRequest& WithServiceConnectConfiguration(ServiceConnectConfigurationT&& value) { SetServiceConnectConfiguration(std::forward<ServiceConnectConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The configuration for a volume specified in the task definition as a volume
     * that is configured at launch time. Currently, the only supported volume type is
     * an Amazon EBS volume.</p>
     */
    inline const Aws::Vector<ServiceVolumeConfiguration>& GetVolumeConfigurations() const { return m_volumeConfigurations; }
    inline bool VolumeConfigurationsHasBeenSet() const { return m_volumeConfigurationsHasBeenSet; }
    template<typename VolumeConfigurationsT = Aws::Vector<ServiceVolumeConfiguration>>
    void SetVolumeConfigurations(VolumeConfigurationsT&& value) { m_volumeConfigurationsHasBeenSet = true; m_volumeConfigurations = std::forward<VolumeConfigurationsT>(value); }
    template<typename VolumeConfigurationsT = Aws::Vector<ServiceVolumeConfiguration>>
    CreateServiceRequest& WithVolumeConfigurations(VolumeConfigurationsT&& value) { SetVolumeConfigurations(std::forward<VolumeConfigurationsT>(value)); return *this;}
    template<typename VolumeConfigurationsT = ServiceVolumeConfiguration>
    CreateServiceRequest& AddVolumeConfigurations(VolumeConfigurationsT&& value) { m_volumeConfigurationsHasBeenSet = true; m_volumeConfigurations.emplace_back(std::forward<VolumeConfigurationsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The VPC Lattice configuration for the service being created.</p>
     */
    inline const Aws::Vector<VpcLatticeConfiguration>& GetVpcLatticeConfigurations() const { return m_vpcLatticeConfigurations; }
    inline bool VpcLatticeConfigurationsHasBeenSet() const { return m_vpcLatticeConfigurationsHasBeenSet; }
    template<typename VpcLatticeConfigurationsT = Aws::Vector<VpcLatticeConfiguration>>
    void SetVpcLatticeConfigurations(VpcLatticeConfigurationsT&& value) { m_vpcLatticeConfigurationsHasBeenSet = true; m_vpcLatticeConfigurations = std::forward<VpcLatticeConfigurationsT>(value); }
    template<typename VpcLatticeConfigurationsT = Aws::Vector<VpcLatticeConfiguration>>
    CreateServiceRequest& WithVpcLatticeConfigurations(VpcLatticeConfigurationsT&& value) { SetVpcLatticeConfigurations(std::forward<VpcLatticeConfigurationsT>(value)); return *this;}
    template<typename VpcLatticeConfigurationsT = VpcLatticeConfiguration>
    CreateServiceRequest& AddVpcLatticeConfigurations(VpcLatticeConfigurationsT&& value) { m_vpcLatticeConfigurationsHasBeenSet = true; m_vpcLatticeConfigurations.emplace_back(std::forward<VpcLatticeConfigurationsT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_cluster;
    bool m_clusterHasBeenSet = false;

    Aws::String m_serviceName;
    bool m_serviceNameHasBeenSet = false;

    Aws::String m_taskDefinition;
    bool m_taskDefinitionHasBeenSet = false;

    AvailabilityZoneRebalancing m_availabilityZoneRebalancing{AvailabilityZoneRebalancing::NOT_SET};
    bool m_availabilityZoneRebalancingHasBeenSet = false;

    Aws::Vector<LoadBalancer> m_loadBalancers;
    bool m_loadBalancersHasBeenSet = false;

    Aws::Vector<ServiceRegistry> m_serviceRegistries;
    bool m_serviceRegistriesHasBeenSet = false;

    int m_desiredCount{0};
    bool m_desiredCountHasBeenSet = false;

    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet = false;

    LaunchType m_launchType{LaunchType::NOT_SET};
    bool m_launchTypeHasBeenSet = false;

    Aws::Vector<CapacityProviderStrategyItem> m_capacityProviderStrategy;
    bool m_capacityProviderStrategyHasBeenSet = false;

    Aws::String m_platformVersion;
    bool m_platformVersionHasBeenSet = false;

    Aws::String m_role;
    bool m_roleHasBeenSet = false;

    DeploymentConfiguration m_deploymentConfiguration;
    bool m_deploymentConfigurationHasBeenSet = false;

    Aws::Vector<PlacementConstraint> m_placementConstraints;
    bool m_placementConstraintsHasBeenSet = false;

    Aws::Vector<PlacementStrategy> m_placementStrategy;
    bool m_placementStrategyHasBeenSet = false;

    NetworkConfiguration m_networkConfiguration;
    bool m_networkConfigurationHasBeenSet = false;

    int m_healthCheckGracePeriodSeconds{0};
    bool m_healthCheckGracePeriodSecondsHasBeenSet = false;

    SchedulingStrategy m_schedulingStrategy{SchedulingStrategy::NOT_SET};
    bool m_schedulingStrategyHasBeenSet = false;

    DeploymentController m_deploymentController;
    bool m_deploymentControllerHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;

    bool m_enableECSManagedTags{false};
    bool m_enableECSManagedTagsHasBeenSet = false;

    PropagateTags m_propagateTags{PropagateTags::NOT_SET};
    bool m_propagateTagsHasBeenSet = false;

    bool m_enableExecuteCommand{false};
    bool m_enableExecuteCommandHasBeenSet = false;

    ServiceConnectConfiguration m_serviceConnectConfiguration;
    bool m_serviceConnectConfigurationHasBeenSet = false;

    Aws::Vector<ServiceVolumeConfiguration> m_volumeConfigurations;
    bool m_volumeConfigurationsHasBeenSet = false;

    Aws::Vector<VpcLatticeConfiguration> m_vpcLatticeConfigurations;
    bool m_vpcLatticeConfigurationsHasBeenSet = false;
  };

} // namespace Model
} // namespace ECS
} // namespace Aws
