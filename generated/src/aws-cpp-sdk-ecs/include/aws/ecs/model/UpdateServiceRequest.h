/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ecs/ECS_EXPORTS.h>
#include <aws/ecs/ECSRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ecs/model/DeploymentConfiguration.h>
#include <aws/ecs/model/AvailabilityZoneRebalancing.h>
#include <aws/ecs/model/NetworkConfiguration.h>
#include <aws/ecs/model/DeploymentController.h>
#include <aws/ecs/model/PropagateTags.h>
#include <aws/ecs/model/ServiceConnectConfiguration.h>
#include <aws/ecs/model/CapacityProviderStrategyItem.h>
#include <aws/ecs/model/PlacementConstraint.h>
#include <aws/ecs/model/PlacementStrategy.h>
#include <aws/ecs/model/LoadBalancer.h>
#include <aws/ecs/model/ServiceRegistry.h>
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
  class UpdateServiceRequest : public ECSRequest
  {
  public:
    AWS_ECS_API UpdateServiceRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateService"; }

    AWS_ECS_API Aws::String SerializePayload() const override;

    AWS_ECS_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The short name or full Amazon Resource Name (ARN) of the cluster that your
     * service runs on. If you do not specify a cluster, the default cluster is
     * assumed.</p> <p>You can't change the cluster name.</p>
     */
    inline const Aws::String& GetCluster() const { return m_cluster; }
    inline bool ClusterHasBeenSet() const { return m_clusterHasBeenSet; }
    template<typename ClusterT = Aws::String>
    void SetCluster(ClusterT&& value) { m_clusterHasBeenSet = true; m_cluster = std::forward<ClusterT>(value); }
    template<typename ClusterT = Aws::String>
    UpdateServiceRequest& WithCluster(ClusterT&& value) { SetCluster(std::forward<ClusterT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the service to update.</p>
     */
    inline const Aws::String& GetService() const { return m_service; }
    inline bool ServiceHasBeenSet() const { return m_serviceHasBeenSet; }
    template<typename ServiceT = Aws::String>
    void SetService(ServiceT&& value) { m_serviceHasBeenSet = true; m_service = std::forward<ServiceT>(value); }
    template<typename ServiceT = Aws::String>
    UpdateServiceRequest& WithService(ServiceT&& value) { SetService(std::forward<ServiceT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of instantiations of the task to place and keep running in your
     * service.</p> <p>This parameter doesn't trigger a new service deployment.</p>
     */
    inline int GetDesiredCount() const { return m_desiredCount; }
    inline bool DesiredCountHasBeenSet() const { return m_desiredCountHasBeenSet; }
    inline void SetDesiredCount(int value) { m_desiredCountHasBeenSet = true; m_desiredCount = value; }
    inline UpdateServiceRequest& WithDesiredCount(int value) { SetDesiredCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The <code>family</code> and <code>revision</code>
     * (<code>family:revision</code>) or full ARN of the task definition to run in your
     * service. If a <code>revision</code> is not specified, the latest
     * <code>ACTIVE</code> revision is used. If you modify the task definition with
     * <code>UpdateService</code>, Amazon ECS spawns a task with the new version of the
     * task definition and then stops an old task after the new version is running.</p>
     * <p>This parameter triggers a new service deployment.</p>
     */
    inline const Aws::String& GetTaskDefinition() const { return m_taskDefinition; }
    inline bool TaskDefinitionHasBeenSet() const { return m_taskDefinitionHasBeenSet; }
    template<typename TaskDefinitionT = Aws::String>
    void SetTaskDefinition(TaskDefinitionT&& value) { m_taskDefinitionHasBeenSet = true; m_taskDefinition = std::forward<TaskDefinitionT>(value); }
    template<typename TaskDefinitionT = Aws::String>
    UpdateServiceRequest& WithTaskDefinition(TaskDefinitionT&& value) { SetTaskDefinition(std::forward<TaskDefinitionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The details of a capacity provider strategy. You can set a capacity provider
     * when you create a cluster, run a task, or update a service.</p> <p>When you use
     * Fargate, the capacity providers are <code>FARGATE</code> or
     * <code>FARGATE_SPOT</code>.</p> <p>When you use Amazon EC2, the capacity
     * providers are Auto Scaling groups.</p> <p>You can change capacity providers for
     * rolling deployments and blue/green deployments.</p> <p>The following list
     * provides the valid transitions:</p> <ul> <li> <p>Update the Fargate launch type
     * to an Auto Scaling group capacity provider.</p> </li> <li> <p>Update the Amazon
     * EC2 launch type to a Fargate capacity provider.</p> </li> <li> <p>Update the
     * Fargate capacity provider to an Auto Scaling group capacity provider.</p> </li>
     * <li> <p>Update the Amazon EC2 capacity provider to a Fargate capacity provider.
     * </p> </li> <li> <p>Update the Auto Scaling group or Fargate capacity provider
     * back to the launch type.</p> <p>Pass an empty list in the
     * <code>capacityProviderStrategy</code> parameter.</p> </li> </ul> <p>For
     * information about Amazon Web Services CDK considerations, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/update-service-parameters.html">Amazon
     * Web Services CDK considerations</a>.</p> <p>This parameter doesn't trigger a new
     * service deployment.</p>
     */
    inline const Aws::Vector<CapacityProviderStrategyItem>& GetCapacityProviderStrategy() const { return m_capacityProviderStrategy; }
    inline bool CapacityProviderStrategyHasBeenSet() const { return m_capacityProviderStrategyHasBeenSet; }
    template<typename CapacityProviderStrategyT = Aws::Vector<CapacityProviderStrategyItem>>
    void SetCapacityProviderStrategy(CapacityProviderStrategyT&& value) { m_capacityProviderStrategyHasBeenSet = true; m_capacityProviderStrategy = std::forward<CapacityProviderStrategyT>(value); }
    template<typename CapacityProviderStrategyT = Aws::Vector<CapacityProviderStrategyItem>>
    UpdateServiceRequest& WithCapacityProviderStrategy(CapacityProviderStrategyT&& value) { SetCapacityProviderStrategy(std::forward<CapacityProviderStrategyT>(value)); return *this;}
    template<typename CapacityProviderStrategyT = CapacityProviderStrategyItem>
    UpdateServiceRequest& AddCapacityProviderStrategy(CapacityProviderStrategyT&& value) { m_capacityProviderStrategyHasBeenSet = true; m_capacityProviderStrategy.emplace_back(std::forward<CapacityProviderStrategyT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Optional deployment parameters that control how many tasks run during the
     * deployment and the ordering of stopping and starting tasks.</p> <p>This
     * parameter doesn't trigger a new service deployment.</p>
     */
    inline const DeploymentConfiguration& GetDeploymentConfiguration() const { return m_deploymentConfiguration; }
    inline bool DeploymentConfigurationHasBeenSet() const { return m_deploymentConfigurationHasBeenSet; }
    template<typename DeploymentConfigurationT = DeploymentConfiguration>
    void SetDeploymentConfiguration(DeploymentConfigurationT&& value) { m_deploymentConfigurationHasBeenSet = true; m_deploymentConfiguration = std::forward<DeploymentConfigurationT>(value); }
    template<typename DeploymentConfigurationT = DeploymentConfiguration>
    UpdateServiceRequest& WithDeploymentConfiguration(DeploymentConfigurationT&& value) { SetDeploymentConfiguration(std::forward<DeploymentConfigurationT>(value)); return *this;}
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
     * <p>This parameter doesn't trigger a new service deployment.</p>
     */
    inline AvailabilityZoneRebalancing GetAvailabilityZoneRebalancing() const { return m_availabilityZoneRebalancing; }
    inline bool AvailabilityZoneRebalancingHasBeenSet() const { return m_availabilityZoneRebalancingHasBeenSet; }
    inline void SetAvailabilityZoneRebalancing(AvailabilityZoneRebalancing value) { m_availabilityZoneRebalancingHasBeenSet = true; m_availabilityZoneRebalancing = value; }
    inline UpdateServiceRequest& WithAvailabilityZoneRebalancing(AvailabilityZoneRebalancing value) { SetAvailabilityZoneRebalancing(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An object representing the network configuration for the service.</p> <p>This
     * parameter triggers a new service deployment.</p>
     */
    inline const NetworkConfiguration& GetNetworkConfiguration() const { return m_networkConfiguration; }
    inline bool NetworkConfigurationHasBeenSet() const { return m_networkConfigurationHasBeenSet; }
    template<typename NetworkConfigurationT = NetworkConfiguration>
    void SetNetworkConfiguration(NetworkConfigurationT&& value) { m_networkConfigurationHasBeenSet = true; m_networkConfiguration = std::forward<NetworkConfigurationT>(value); }
    template<typename NetworkConfigurationT = NetworkConfiguration>
    UpdateServiceRequest& WithNetworkConfiguration(NetworkConfigurationT&& value) { SetNetworkConfiguration(std::forward<NetworkConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array of task placement constraint objects to update the service to use.
     * If no value is specified, the existing placement constraints for the service
     * will remain unchanged. If this value is specified, it will override any existing
     * placement constraints defined for the service. To remove all existing placement
     * constraints, specify an empty array.</p> <p>You can specify a maximum of 10
     * constraints for each task. This limit includes constraints in the task
     * definition and those specified at runtime.</p> <p>This parameter doesn't trigger
     * a new service deployment.</p>
     */
    inline const Aws::Vector<PlacementConstraint>& GetPlacementConstraints() const { return m_placementConstraints; }
    inline bool PlacementConstraintsHasBeenSet() const { return m_placementConstraintsHasBeenSet; }
    template<typename PlacementConstraintsT = Aws::Vector<PlacementConstraint>>
    void SetPlacementConstraints(PlacementConstraintsT&& value) { m_placementConstraintsHasBeenSet = true; m_placementConstraints = std::forward<PlacementConstraintsT>(value); }
    template<typename PlacementConstraintsT = Aws::Vector<PlacementConstraint>>
    UpdateServiceRequest& WithPlacementConstraints(PlacementConstraintsT&& value) { SetPlacementConstraints(std::forward<PlacementConstraintsT>(value)); return *this;}
    template<typename PlacementConstraintsT = PlacementConstraint>
    UpdateServiceRequest& AddPlacementConstraints(PlacementConstraintsT&& value) { m_placementConstraintsHasBeenSet = true; m_placementConstraints.emplace_back(std::forward<PlacementConstraintsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The task placement strategy objects to update the service to use. If no value
     * is specified, the existing placement strategy for the service will remain
     * unchanged. If this value is specified, it will override the existing placement
     * strategy defined for the service. To remove an existing placement strategy,
     * specify an empty object.</p> <p>You can specify a maximum of five strategy rules
     * for each service.</p> <p>This parameter doesn't trigger a new service
     * deployment.</p>
     */
    inline const Aws::Vector<PlacementStrategy>& GetPlacementStrategy() const { return m_placementStrategy; }
    inline bool PlacementStrategyHasBeenSet() const { return m_placementStrategyHasBeenSet; }
    template<typename PlacementStrategyT = Aws::Vector<PlacementStrategy>>
    void SetPlacementStrategy(PlacementStrategyT&& value) { m_placementStrategyHasBeenSet = true; m_placementStrategy = std::forward<PlacementStrategyT>(value); }
    template<typename PlacementStrategyT = Aws::Vector<PlacementStrategy>>
    UpdateServiceRequest& WithPlacementStrategy(PlacementStrategyT&& value) { SetPlacementStrategy(std::forward<PlacementStrategyT>(value)); return *this;}
    template<typename PlacementStrategyT = PlacementStrategy>
    UpdateServiceRequest& AddPlacementStrategy(PlacementStrategyT&& value) { m_placementStrategyHasBeenSet = true; m_placementStrategy.emplace_back(std::forward<PlacementStrategyT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The platform version that your tasks in the service run on. A platform
     * version is only specified for tasks using the Fargate launch type. If a platform
     * version is not specified, the <code>LATEST</code> platform version is used. For
     * more information, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/platform_versions.html">Fargate
     * Platform Versions</a> in the <i>Amazon Elastic Container Service Developer
     * Guide</i>.</p> <p>This parameter triggers a new service deployment.</p>
     */
    inline const Aws::String& GetPlatformVersion() const { return m_platformVersion; }
    inline bool PlatformVersionHasBeenSet() const { return m_platformVersionHasBeenSet; }
    template<typename PlatformVersionT = Aws::String>
    void SetPlatformVersion(PlatformVersionT&& value) { m_platformVersionHasBeenSet = true; m_platformVersion = std::forward<PlatformVersionT>(value); }
    template<typename PlatformVersionT = Aws::String>
    UpdateServiceRequest& WithPlatformVersion(PlatformVersionT&& value) { SetPlatformVersion(std::forward<PlatformVersionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Determines whether to force a new deployment of the service. By default,
     * deployments aren't forced. You can use this option to start a new deployment
     * with no service definition changes. For example, you can update a service's
     * tasks to use a newer Docker image with the same image/tag combination
     * (<code>my_image:latest</code>) or to roll Fargate tasks onto a newer platform
     * version.</p>
     */
    inline bool GetForceNewDeployment() const { return m_forceNewDeployment; }
    inline bool ForceNewDeploymentHasBeenSet() const { return m_forceNewDeploymentHasBeenSet; }
    inline void SetForceNewDeployment(bool value) { m_forceNewDeploymentHasBeenSet = true; m_forceNewDeployment = value; }
    inline UpdateServiceRequest& WithForceNewDeployment(bool value) { SetForceNewDeployment(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The period of time, in seconds, that the Amazon ECS service scheduler ignores
     * unhealthy Elastic Load Balancing, VPC Lattice, and container health checks after
     * a task has first started. If you don't specify a health check grace period
     * value, the default value of <code>0</code> is used. If you don't use any of the
     * health checks, then <code>healthCheckGracePeriodSeconds</code> is unused.</p>
     * <p>If your service's tasks take a while to start and respond to health checks,
     * you can specify a health check grace period of up to 2,147,483,647 seconds
     * (about 69 years). During that time, the Amazon ECS service scheduler ignores
     * health check status. This grace period can prevent the service scheduler from
     * marking tasks as unhealthy and stopping them before they have time to come
     * up.</p> <p>This parameter doesn't trigger a new service deployment.</p>
     */
    inline int GetHealthCheckGracePeriodSeconds() const { return m_healthCheckGracePeriodSeconds; }
    inline bool HealthCheckGracePeriodSecondsHasBeenSet() const { return m_healthCheckGracePeriodSecondsHasBeenSet; }
    inline void SetHealthCheckGracePeriodSeconds(int value) { m_healthCheckGracePeriodSecondsHasBeenSet = true; m_healthCheckGracePeriodSeconds = value; }
    inline UpdateServiceRequest& WithHealthCheckGracePeriodSeconds(int value) { SetHealthCheckGracePeriodSeconds(value); return *this;}
    ///@}

    ///@{
    
    inline const DeploymentController& GetDeploymentController() const { return m_deploymentController; }
    inline bool DeploymentControllerHasBeenSet() const { return m_deploymentControllerHasBeenSet; }
    template<typename DeploymentControllerT = DeploymentController>
    void SetDeploymentController(DeploymentControllerT&& value) { m_deploymentControllerHasBeenSet = true; m_deploymentController = std::forward<DeploymentControllerT>(value); }
    template<typename DeploymentControllerT = DeploymentController>
    UpdateServiceRequest& WithDeploymentController(DeploymentControllerT&& value) { SetDeploymentController(std::forward<DeploymentControllerT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>If <code>true</code>, this enables execute command functionality on all task
     * containers.</p> <p>If you do not want to override the value that was set when
     * the service was created, you can set this to <code>null</code> when performing
     * this action.</p> <p>This parameter doesn't trigger a new service deployment.</p>
     */
    inline bool GetEnableExecuteCommand() const { return m_enableExecuteCommand; }
    inline bool EnableExecuteCommandHasBeenSet() const { return m_enableExecuteCommandHasBeenSet; }
    inline void SetEnableExecuteCommand(bool value) { m_enableExecuteCommandHasBeenSet = true; m_enableExecuteCommand = value; }
    inline UpdateServiceRequest& WithEnableExecuteCommand(bool value) { SetEnableExecuteCommand(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Determines whether to turn on Amazon ECS managed tags for the tasks in the
     * service. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/ecs-using-tags.html">Tagging
     * Your Amazon ECS Resources</a> in the <i>Amazon Elastic Container Service
     * Developer Guide</i>.</p> <p>Only tasks launched after the update will reflect
     * the update. To update the tags on all tasks, set <code>forceNewDeployment</code>
     * to <code>true</code>, so that Amazon ECS starts new tasks with the updated
     * tags.</p> <p>This parameter doesn't trigger a new service deployment.</p>
     */
    inline bool GetEnableECSManagedTags() const { return m_enableECSManagedTags; }
    inline bool EnableECSManagedTagsHasBeenSet() const { return m_enableECSManagedTagsHasBeenSet; }
    inline void SetEnableECSManagedTags(bool value) { m_enableECSManagedTagsHasBeenSet = true; m_enableECSManagedTags = value; }
    inline UpdateServiceRequest& WithEnableECSManagedTags(bool value) { SetEnableECSManagedTags(value); return *this;}
    ///@}

    ///@{
    /**
     *  <p>You must have a service-linked role when you update this property</p>
     *  <p>A list of Elastic Load Balancing load balancer objects. It contains
     * the load balancer name, the container name, and the container port to access
     * from the load balancer. The container name is as it appears in a container
     * definition.</p> <p>When you add, update, or remove a load balancer
     * configuration, Amazon ECS starts new tasks with the updated Elastic Load
     * Balancing configuration, and then stops the old tasks when the new tasks are
     * running.</p> <p>For services that use rolling updates, you can add, update, or
     * remove Elastic Load Balancing target groups. You can update from a single target
     * group to multiple target groups and from multiple target groups to a single
     * target group.</p> <p>For services that use blue/green deployments, you can
     * update Elastic Load Balancing target groups by using <code> <a
     * href="https://docs.aws.amazon.com/codedeploy/latest/APIReference/API_CreateDeployment.html">CreateDeployment</a>
     * </code> through CodeDeploy. Note that multiple target groups are not supported
     * for blue/green deployments. For more information see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/register-multiple-targetgroups.html">Register
     * multiple target groups with a service</a> in the <i>Amazon Elastic Container
     * Service Developer Guide</i>. </p> <p>For services that use the external
     * deployment controller, you can add, update, or remove load balancers by using <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/APIReference/API_CreateTaskSet.html">CreateTaskSet</a>.
     * Note that multiple target groups are not supported for external deployments. For
     * more information see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/register-multiple-targetgroups.html">Register
     * multiple target groups with a service</a> in the <i>Amazon Elastic Container
     * Service Developer Guide</i>. </p> <p>You can remove existing
     * <code>loadBalancers</code> by passing an empty list.</p> <p>This parameter
     * triggers a new service deployment.</p>
     */
    inline const Aws::Vector<LoadBalancer>& GetLoadBalancers() const { return m_loadBalancers; }
    inline bool LoadBalancersHasBeenSet() const { return m_loadBalancersHasBeenSet; }
    template<typename LoadBalancersT = Aws::Vector<LoadBalancer>>
    void SetLoadBalancers(LoadBalancersT&& value) { m_loadBalancersHasBeenSet = true; m_loadBalancers = std::forward<LoadBalancersT>(value); }
    template<typename LoadBalancersT = Aws::Vector<LoadBalancer>>
    UpdateServiceRequest& WithLoadBalancers(LoadBalancersT&& value) { SetLoadBalancers(std::forward<LoadBalancersT>(value)); return *this;}
    template<typename LoadBalancersT = LoadBalancer>
    UpdateServiceRequest& AddLoadBalancers(LoadBalancersT&& value) { m_loadBalancersHasBeenSet = true; m_loadBalancers.emplace_back(std::forward<LoadBalancersT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Determines whether to propagate the tags from the task definition or the
     * service to the task. If no value is specified, the tags aren't propagated.</p>
     * <p>Only tasks launched after the update will reflect the update. To update the
     * tags on all tasks, set <code>forceNewDeployment</code> to <code>true</code>, so
     * that Amazon ECS starts new tasks with the updated tags.</p> <p>This parameter
     * doesn't trigger a new service deployment.</p>
     */
    inline PropagateTags GetPropagateTags() const { return m_propagateTags; }
    inline bool PropagateTagsHasBeenSet() const { return m_propagateTagsHasBeenSet; }
    inline void SetPropagateTags(PropagateTags value) { m_propagateTagsHasBeenSet = true; m_propagateTags = value; }
    inline UpdateServiceRequest& WithPropagateTags(PropagateTags value) { SetPropagateTags(value); return *this;}
    ///@}

    ///@{
    /**
     *  <p>You must have a service-linked role when you update this property.</p>
     * <p>For more information about the role see the <code>CreateService</code>
     * request parameter <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/APIReference/API_CreateService.html#ECS-CreateService-request-role">
     * <code>role</code> </a>. </p>  <p>The details for the service discovery
     * registries to assign to this service. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/service-discovery.html">Service
     * Discovery</a>.</p> <p>When you add, update, or remove the service registries
     * configuration, Amazon ECS starts new tasks with the updated service registries
     * configuration, and then stops the old tasks when the new tasks are running.</p>
     * <p>You can remove existing <code>serviceRegistries</code> by passing an empty
     * list.</p> <p>This parameter triggers a new service deployment.</p>
     */
    inline const Aws::Vector<ServiceRegistry>& GetServiceRegistries() const { return m_serviceRegistries; }
    inline bool ServiceRegistriesHasBeenSet() const { return m_serviceRegistriesHasBeenSet; }
    template<typename ServiceRegistriesT = Aws::Vector<ServiceRegistry>>
    void SetServiceRegistries(ServiceRegistriesT&& value) { m_serviceRegistriesHasBeenSet = true; m_serviceRegistries = std::forward<ServiceRegistriesT>(value); }
    template<typename ServiceRegistriesT = Aws::Vector<ServiceRegistry>>
    UpdateServiceRequest& WithServiceRegistries(ServiceRegistriesT&& value) { SetServiceRegistries(std::forward<ServiceRegistriesT>(value)); return *this;}
    template<typename ServiceRegistriesT = ServiceRegistry>
    UpdateServiceRequest& AddServiceRegistries(ServiceRegistriesT&& value) { m_serviceRegistriesHasBeenSet = true; m_serviceRegistries.emplace_back(std::forward<ServiceRegistriesT>(value)); return *this; }
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
     * <p>This parameter triggers a new service deployment.</p>
     */
    inline const ServiceConnectConfiguration& GetServiceConnectConfiguration() const { return m_serviceConnectConfiguration; }
    inline bool ServiceConnectConfigurationHasBeenSet() const { return m_serviceConnectConfigurationHasBeenSet; }
    template<typename ServiceConnectConfigurationT = ServiceConnectConfiguration>
    void SetServiceConnectConfiguration(ServiceConnectConfigurationT&& value) { m_serviceConnectConfigurationHasBeenSet = true; m_serviceConnectConfiguration = std::forward<ServiceConnectConfigurationT>(value); }
    template<typename ServiceConnectConfigurationT = ServiceConnectConfiguration>
    UpdateServiceRequest& WithServiceConnectConfiguration(ServiceConnectConfigurationT&& value) { SetServiceConnectConfiguration(std::forward<ServiceConnectConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The details of the volume that was <code>configuredAtLaunch</code>. You can
     * configure the size, volumeType, IOPS, throughput, snapshot and encryption in <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/APIReference/API_ServiceManagedEBSVolumeConfiguration.html">ServiceManagedEBSVolumeConfiguration</a>.
     * The <code>name</code> of the volume must match the <code>name</code> from the
     * task definition. If set to null, no new deployment is triggered. Otherwise, if
     * this configuration differs from the existing one, it triggers a new
     * deployment.</p> <p>This parameter triggers a new service deployment.</p>
     */
    inline const Aws::Vector<ServiceVolumeConfiguration>& GetVolumeConfigurations() const { return m_volumeConfigurations; }
    inline bool VolumeConfigurationsHasBeenSet() const { return m_volumeConfigurationsHasBeenSet; }
    template<typename VolumeConfigurationsT = Aws::Vector<ServiceVolumeConfiguration>>
    void SetVolumeConfigurations(VolumeConfigurationsT&& value) { m_volumeConfigurationsHasBeenSet = true; m_volumeConfigurations = std::forward<VolumeConfigurationsT>(value); }
    template<typename VolumeConfigurationsT = Aws::Vector<ServiceVolumeConfiguration>>
    UpdateServiceRequest& WithVolumeConfigurations(VolumeConfigurationsT&& value) { SetVolumeConfigurations(std::forward<VolumeConfigurationsT>(value)); return *this;}
    template<typename VolumeConfigurationsT = ServiceVolumeConfiguration>
    UpdateServiceRequest& AddVolumeConfigurations(VolumeConfigurationsT&& value) { m_volumeConfigurationsHasBeenSet = true; m_volumeConfigurations.emplace_back(std::forward<VolumeConfigurationsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>An object representing the VPC Lattice configuration for the service being
     * updated.</p> <p>This parameter triggers a new service deployment.</p>
     */
    inline const Aws::Vector<VpcLatticeConfiguration>& GetVpcLatticeConfigurations() const { return m_vpcLatticeConfigurations; }
    inline bool VpcLatticeConfigurationsHasBeenSet() const { return m_vpcLatticeConfigurationsHasBeenSet; }
    template<typename VpcLatticeConfigurationsT = Aws::Vector<VpcLatticeConfiguration>>
    void SetVpcLatticeConfigurations(VpcLatticeConfigurationsT&& value) { m_vpcLatticeConfigurationsHasBeenSet = true; m_vpcLatticeConfigurations = std::forward<VpcLatticeConfigurationsT>(value); }
    template<typename VpcLatticeConfigurationsT = Aws::Vector<VpcLatticeConfiguration>>
    UpdateServiceRequest& WithVpcLatticeConfigurations(VpcLatticeConfigurationsT&& value) { SetVpcLatticeConfigurations(std::forward<VpcLatticeConfigurationsT>(value)); return *this;}
    template<typename VpcLatticeConfigurationsT = VpcLatticeConfiguration>
    UpdateServiceRequest& AddVpcLatticeConfigurations(VpcLatticeConfigurationsT&& value) { m_vpcLatticeConfigurationsHasBeenSet = true; m_vpcLatticeConfigurations.emplace_back(std::forward<VpcLatticeConfigurationsT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_cluster;
    bool m_clusterHasBeenSet = false;

    Aws::String m_service;
    bool m_serviceHasBeenSet = false;

    int m_desiredCount{0};
    bool m_desiredCountHasBeenSet = false;

    Aws::String m_taskDefinition;
    bool m_taskDefinitionHasBeenSet = false;

    Aws::Vector<CapacityProviderStrategyItem> m_capacityProviderStrategy;
    bool m_capacityProviderStrategyHasBeenSet = false;

    DeploymentConfiguration m_deploymentConfiguration;
    bool m_deploymentConfigurationHasBeenSet = false;

    AvailabilityZoneRebalancing m_availabilityZoneRebalancing{AvailabilityZoneRebalancing::NOT_SET};
    bool m_availabilityZoneRebalancingHasBeenSet = false;

    NetworkConfiguration m_networkConfiguration;
    bool m_networkConfigurationHasBeenSet = false;

    Aws::Vector<PlacementConstraint> m_placementConstraints;
    bool m_placementConstraintsHasBeenSet = false;

    Aws::Vector<PlacementStrategy> m_placementStrategy;
    bool m_placementStrategyHasBeenSet = false;

    Aws::String m_platformVersion;
    bool m_platformVersionHasBeenSet = false;

    bool m_forceNewDeployment{false};
    bool m_forceNewDeploymentHasBeenSet = false;

    int m_healthCheckGracePeriodSeconds{0};
    bool m_healthCheckGracePeriodSecondsHasBeenSet = false;

    DeploymentController m_deploymentController;
    bool m_deploymentControllerHasBeenSet = false;

    bool m_enableExecuteCommand{false};
    bool m_enableExecuteCommandHasBeenSet = false;

    bool m_enableECSManagedTags{false};
    bool m_enableECSManagedTagsHasBeenSet = false;

    Aws::Vector<LoadBalancer> m_loadBalancers;
    bool m_loadBalancersHasBeenSet = false;

    PropagateTags m_propagateTags{PropagateTags::NOT_SET};
    bool m_propagateTagsHasBeenSet = false;

    Aws::Vector<ServiceRegistry> m_serviceRegistries;
    bool m_serviceRegistriesHasBeenSet = false;

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
