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
    AWS_ECS_API UpdateServiceRequest();

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
     * assumed.</p>
     */
    inline const Aws::String& GetCluster() const{ return m_cluster; }
    inline bool ClusterHasBeenSet() const { return m_clusterHasBeenSet; }
    inline void SetCluster(const Aws::String& value) { m_clusterHasBeenSet = true; m_cluster = value; }
    inline void SetCluster(Aws::String&& value) { m_clusterHasBeenSet = true; m_cluster = std::move(value); }
    inline void SetCluster(const char* value) { m_clusterHasBeenSet = true; m_cluster.assign(value); }
    inline UpdateServiceRequest& WithCluster(const Aws::String& value) { SetCluster(value); return *this;}
    inline UpdateServiceRequest& WithCluster(Aws::String&& value) { SetCluster(std::move(value)); return *this;}
    inline UpdateServiceRequest& WithCluster(const char* value) { SetCluster(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the service to update.</p>
     */
    inline const Aws::String& GetService() const{ return m_service; }
    inline bool ServiceHasBeenSet() const { return m_serviceHasBeenSet; }
    inline void SetService(const Aws::String& value) { m_serviceHasBeenSet = true; m_service = value; }
    inline void SetService(Aws::String&& value) { m_serviceHasBeenSet = true; m_service = std::move(value); }
    inline void SetService(const char* value) { m_serviceHasBeenSet = true; m_service.assign(value); }
    inline UpdateServiceRequest& WithService(const Aws::String& value) { SetService(value); return *this;}
    inline UpdateServiceRequest& WithService(Aws::String&& value) { SetService(std::move(value)); return *this;}
    inline UpdateServiceRequest& WithService(const char* value) { SetService(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of instantiations of the task to place and keep running in your
     * service.</p>
     */
    inline int GetDesiredCount() const{ return m_desiredCount; }
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
     */
    inline const Aws::String& GetTaskDefinition() const{ return m_taskDefinition; }
    inline bool TaskDefinitionHasBeenSet() const { return m_taskDefinitionHasBeenSet; }
    inline void SetTaskDefinition(const Aws::String& value) { m_taskDefinitionHasBeenSet = true; m_taskDefinition = value; }
    inline void SetTaskDefinition(Aws::String&& value) { m_taskDefinitionHasBeenSet = true; m_taskDefinition = std::move(value); }
    inline void SetTaskDefinition(const char* value) { m_taskDefinitionHasBeenSet = true; m_taskDefinition.assign(value); }
    inline UpdateServiceRequest& WithTaskDefinition(const Aws::String& value) { SetTaskDefinition(value); return *this;}
    inline UpdateServiceRequest& WithTaskDefinition(Aws::String&& value) { SetTaskDefinition(std::move(value)); return *this;}
    inline UpdateServiceRequest& WithTaskDefinition(const char* value) { SetTaskDefinition(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The capacity provider strategy to update the service to use.</p> <p>if the
     * service uses the default capacity provider strategy for the cluster, the service
     * can be updated to use one or more capacity providers as opposed to the default
     * capacity provider strategy. However, when a service is using a capacity provider
     * strategy that's not the default capacity provider strategy, the service can't be
     * updated to use the cluster's default capacity provider strategy.</p> <p>A
     * capacity provider strategy consists of one or more capacity providers along with
     * the <code>base</code> and <code>weight</code> to assign to them. A capacity
     * provider must be associated with the cluster to be used in a capacity provider
     * strategy. The <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/APIReference/API_PutClusterCapacityProviders.html">PutClusterCapacityProviders</a>
     * API is used to associate a capacity provider with a cluster. Only capacity
     * providers with an <code>ACTIVE</code> or <code>UPDATING</code> status can be
     * used.</p> <p>If specifying a capacity provider that uses an Auto Scaling group,
     * the capacity provider must already be created. New capacity providers can be
     * created with the <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/APIReference/API_CreateClusterCapacityProvider.html">CreateClusterCapacityProvider</a>
     * API operation.</p> <p>To use a Fargate capacity provider, specify either the
     * <code>FARGATE</code> or <code>FARGATE_SPOT</code> capacity providers. The
     * Fargate capacity providers are available to all accounts and only need to be
     * associated with a cluster to be used.</p> <p>The <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/APIReference/API_PutClusterCapacityProviders.html">PutClusterCapacityProviders</a>API
     * operation is used to update the list of available capacity providers for a
     * cluster after the cluster is created.</p> <p/>
     */
    inline const Aws::Vector<CapacityProviderStrategyItem>& GetCapacityProviderStrategy() const{ return m_capacityProviderStrategy; }
    inline bool CapacityProviderStrategyHasBeenSet() const { return m_capacityProviderStrategyHasBeenSet; }
    inline void SetCapacityProviderStrategy(const Aws::Vector<CapacityProviderStrategyItem>& value) { m_capacityProviderStrategyHasBeenSet = true; m_capacityProviderStrategy = value; }
    inline void SetCapacityProviderStrategy(Aws::Vector<CapacityProviderStrategyItem>&& value) { m_capacityProviderStrategyHasBeenSet = true; m_capacityProviderStrategy = std::move(value); }
    inline UpdateServiceRequest& WithCapacityProviderStrategy(const Aws::Vector<CapacityProviderStrategyItem>& value) { SetCapacityProviderStrategy(value); return *this;}
    inline UpdateServiceRequest& WithCapacityProviderStrategy(Aws::Vector<CapacityProviderStrategyItem>&& value) { SetCapacityProviderStrategy(std::move(value)); return *this;}
    inline UpdateServiceRequest& AddCapacityProviderStrategy(const CapacityProviderStrategyItem& value) { m_capacityProviderStrategyHasBeenSet = true; m_capacityProviderStrategy.push_back(value); return *this; }
    inline UpdateServiceRequest& AddCapacityProviderStrategy(CapacityProviderStrategyItem&& value) { m_capacityProviderStrategyHasBeenSet = true; m_capacityProviderStrategy.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Optional deployment parameters that control how many tasks run during the
     * deployment and the ordering of stopping and starting tasks.</p>
     */
    inline const DeploymentConfiguration& GetDeploymentConfiguration() const{ return m_deploymentConfiguration; }
    inline bool DeploymentConfigurationHasBeenSet() const { return m_deploymentConfigurationHasBeenSet; }
    inline void SetDeploymentConfiguration(const DeploymentConfiguration& value) { m_deploymentConfigurationHasBeenSet = true; m_deploymentConfiguration = value; }
    inline void SetDeploymentConfiguration(DeploymentConfiguration&& value) { m_deploymentConfigurationHasBeenSet = true; m_deploymentConfiguration = std::move(value); }
    inline UpdateServiceRequest& WithDeploymentConfiguration(const DeploymentConfiguration& value) { SetDeploymentConfiguration(value); return *this;}
    inline UpdateServiceRequest& WithDeploymentConfiguration(DeploymentConfiguration&& value) { SetDeploymentConfiguration(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether to use Availability Zone rebalancing for the service.</p>
     * <p>For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/service-rebalancing.html">Balancing
     * an Amazon ECS service across Availability Zones</a> in the <i>Amazon Elastic
     * Container Service Developer Guide</i>.</p>
     */
    inline const AvailabilityZoneRebalancing& GetAvailabilityZoneRebalancing() const{ return m_availabilityZoneRebalancing; }
    inline bool AvailabilityZoneRebalancingHasBeenSet() const { return m_availabilityZoneRebalancingHasBeenSet; }
    inline void SetAvailabilityZoneRebalancing(const AvailabilityZoneRebalancing& value) { m_availabilityZoneRebalancingHasBeenSet = true; m_availabilityZoneRebalancing = value; }
    inline void SetAvailabilityZoneRebalancing(AvailabilityZoneRebalancing&& value) { m_availabilityZoneRebalancingHasBeenSet = true; m_availabilityZoneRebalancing = std::move(value); }
    inline UpdateServiceRequest& WithAvailabilityZoneRebalancing(const AvailabilityZoneRebalancing& value) { SetAvailabilityZoneRebalancing(value); return *this;}
    inline UpdateServiceRequest& WithAvailabilityZoneRebalancing(AvailabilityZoneRebalancing&& value) { SetAvailabilityZoneRebalancing(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An object representing the network configuration for the service.</p>
     */
    inline const NetworkConfiguration& GetNetworkConfiguration() const{ return m_networkConfiguration; }
    inline bool NetworkConfigurationHasBeenSet() const { return m_networkConfigurationHasBeenSet; }
    inline void SetNetworkConfiguration(const NetworkConfiguration& value) { m_networkConfigurationHasBeenSet = true; m_networkConfiguration = value; }
    inline void SetNetworkConfiguration(NetworkConfiguration&& value) { m_networkConfigurationHasBeenSet = true; m_networkConfiguration = std::move(value); }
    inline UpdateServiceRequest& WithNetworkConfiguration(const NetworkConfiguration& value) { SetNetworkConfiguration(value); return *this;}
    inline UpdateServiceRequest& WithNetworkConfiguration(NetworkConfiguration&& value) { SetNetworkConfiguration(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array of task placement constraint objects to update the service to use.
     * If no value is specified, the existing placement constraints for the service
     * will remain unchanged. If this value is specified, it will override any existing
     * placement constraints defined for the service. To remove all existing placement
     * constraints, specify an empty array.</p> <p>You can specify a maximum of 10
     * constraints for each task. This limit includes constraints in the task
     * definition and those specified at runtime.</p>
     */
    inline const Aws::Vector<PlacementConstraint>& GetPlacementConstraints() const{ return m_placementConstraints; }
    inline bool PlacementConstraintsHasBeenSet() const { return m_placementConstraintsHasBeenSet; }
    inline void SetPlacementConstraints(const Aws::Vector<PlacementConstraint>& value) { m_placementConstraintsHasBeenSet = true; m_placementConstraints = value; }
    inline void SetPlacementConstraints(Aws::Vector<PlacementConstraint>&& value) { m_placementConstraintsHasBeenSet = true; m_placementConstraints = std::move(value); }
    inline UpdateServiceRequest& WithPlacementConstraints(const Aws::Vector<PlacementConstraint>& value) { SetPlacementConstraints(value); return *this;}
    inline UpdateServiceRequest& WithPlacementConstraints(Aws::Vector<PlacementConstraint>&& value) { SetPlacementConstraints(std::move(value)); return *this;}
    inline UpdateServiceRequest& AddPlacementConstraints(const PlacementConstraint& value) { m_placementConstraintsHasBeenSet = true; m_placementConstraints.push_back(value); return *this; }
    inline UpdateServiceRequest& AddPlacementConstraints(PlacementConstraint&& value) { m_placementConstraintsHasBeenSet = true; m_placementConstraints.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The task placement strategy objects to update the service to use. If no value
     * is specified, the existing placement strategy for the service will remain
     * unchanged. If this value is specified, it will override the existing placement
     * strategy defined for the service. To remove an existing placement strategy,
     * specify an empty object.</p> <p>You can specify a maximum of five strategy rules
     * for each service.</p>
     */
    inline const Aws::Vector<PlacementStrategy>& GetPlacementStrategy() const{ return m_placementStrategy; }
    inline bool PlacementStrategyHasBeenSet() const { return m_placementStrategyHasBeenSet; }
    inline void SetPlacementStrategy(const Aws::Vector<PlacementStrategy>& value) { m_placementStrategyHasBeenSet = true; m_placementStrategy = value; }
    inline void SetPlacementStrategy(Aws::Vector<PlacementStrategy>&& value) { m_placementStrategyHasBeenSet = true; m_placementStrategy = std::move(value); }
    inline UpdateServiceRequest& WithPlacementStrategy(const Aws::Vector<PlacementStrategy>& value) { SetPlacementStrategy(value); return *this;}
    inline UpdateServiceRequest& WithPlacementStrategy(Aws::Vector<PlacementStrategy>&& value) { SetPlacementStrategy(std::move(value)); return *this;}
    inline UpdateServiceRequest& AddPlacementStrategy(const PlacementStrategy& value) { m_placementStrategyHasBeenSet = true; m_placementStrategy.push_back(value); return *this; }
    inline UpdateServiceRequest& AddPlacementStrategy(PlacementStrategy&& value) { m_placementStrategyHasBeenSet = true; m_placementStrategy.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The platform version that your tasks in the service run on. A platform
     * version is only specified for tasks using the Fargate launch type. If a platform
     * version is not specified, the <code>LATEST</code> platform version is used. For
     * more information, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/platform_versions.html">Fargate
     * Platform Versions</a> in the <i>Amazon Elastic Container Service Developer
     * Guide</i>.</p>
     */
    inline const Aws::String& GetPlatformVersion() const{ return m_platformVersion; }
    inline bool PlatformVersionHasBeenSet() const { return m_platformVersionHasBeenSet; }
    inline void SetPlatformVersion(const Aws::String& value) { m_platformVersionHasBeenSet = true; m_platformVersion = value; }
    inline void SetPlatformVersion(Aws::String&& value) { m_platformVersionHasBeenSet = true; m_platformVersion = std::move(value); }
    inline void SetPlatformVersion(const char* value) { m_platformVersionHasBeenSet = true; m_platformVersion.assign(value); }
    inline UpdateServiceRequest& WithPlatformVersion(const Aws::String& value) { SetPlatformVersion(value); return *this;}
    inline UpdateServiceRequest& WithPlatformVersion(Aws::String&& value) { SetPlatformVersion(std::move(value)); return *this;}
    inline UpdateServiceRequest& WithPlatformVersion(const char* value) { SetPlatformVersion(value); return *this;}
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
    inline bool GetForceNewDeployment() const{ return m_forceNewDeployment; }
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
     * up.</p>
     */
    inline int GetHealthCheckGracePeriodSeconds() const{ return m_healthCheckGracePeriodSeconds; }
    inline bool HealthCheckGracePeriodSecondsHasBeenSet() const { return m_healthCheckGracePeriodSecondsHasBeenSet; }
    inline void SetHealthCheckGracePeriodSeconds(int value) { m_healthCheckGracePeriodSecondsHasBeenSet = true; m_healthCheckGracePeriodSeconds = value; }
    inline UpdateServiceRequest& WithHealthCheckGracePeriodSeconds(int value) { SetHealthCheckGracePeriodSeconds(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>If <code>true</code>, this enables execute command functionality on all task
     * containers.</p> <p>If you do not want to override the value that was set when
     * the service was created, you can set this to <code>null</code> when performing
     * this action.</p>
     */
    inline bool GetEnableExecuteCommand() const{ return m_enableExecuteCommand; }
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
     * tags.</p>
     */
    inline bool GetEnableECSManagedTags() const{ return m_enableECSManagedTags; }
    inline bool EnableECSManagedTagsHasBeenSet() const { return m_enableECSManagedTagsHasBeenSet; }
    inline void SetEnableECSManagedTags(bool value) { m_enableECSManagedTagsHasBeenSet = true; m_enableECSManagedTags = value; }
    inline UpdateServiceRequest& WithEnableECSManagedTags(bool value) { SetEnableECSManagedTags(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of Elastic Load Balancing load balancer objects. It contains the load
     * balancer name, the container name, and the container port to access from the
     * load balancer. The container name is as it appears in a container
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
     * <code>loadBalancers</code> by passing an empty list.</p>
     */
    inline const Aws::Vector<LoadBalancer>& GetLoadBalancers() const{ return m_loadBalancers; }
    inline bool LoadBalancersHasBeenSet() const { return m_loadBalancersHasBeenSet; }
    inline void SetLoadBalancers(const Aws::Vector<LoadBalancer>& value) { m_loadBalancersHasBeenSet = true; m_loadBalancers = value; }
    inline void SetLoadBalancers(Aws::Vector<LoadBalancer>&& value) { m_loadBalancersHasBeenSet = true; m_loadBalancers = std::move(value); }
    inline UpdateServiceRequest& WithLoadBalancers(const Aws::Vector<LoadBalancer>& value) { SetLoadBalancers(value); return *this;}
    inline UpdateServiceRequest& WithLoadBalancers(Aws::Vector<LoadBalancer>&& value) { SetLoadBalancers(std::move(value)); return *this;}
    inline UpdateServiceRequest& AddLoadBalancers(const LoadBalancer& value) { m_loadBalancersHasBeenSet = true; m_loadBalancers.push_back(value); return *this; }
    inline UpdateServiceRequest& AddLoadBalancers(LoadBalancer&& value) { m_loadBalancersHasBeenSet = true; m_loadBalancers.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Determines whether to propagate the tags from the task definition or the
     * service to the task. If no value is specified, the tags aren't propagated.</p>
     * <p>Only tasks launched after the update will reflect the update. To update the
     * tags on all tasks, set <code>forceNewDeployment</code> to <code>true</code>, so
     * that Amazon ECS starts new tasks with the updated tags.</p>
     */
    inline const PropagateTags& GetPropagateTags() const{ return m_propagateTags; }
    inline bool PropagateTagsHasBeenSet() const { return m_propagateTagsHasBeenSet; }
    inline void SetPropagateTags(const PropagateTags& value) { m_propagateTagsHasBeenSet = true; m_propagateTags = value; }
    inline void SetPropagateTags(PropagateTags&& value) { m_propagateTagsHasBeenSet = true; m_propagateTags = std::move(value); }
    inline UpdateServiceRequest& WithPropagateTags(const PropagateTags& value) { SetPropagateTags(value); return *this;}
    inline UpdateServiceRequest& WithPropagateTags(PropagateTags&& value) { SetPropagateTags(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The details for the service discovery registries to assign to this service.
     * For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/service-discovery.html">Service
     * Discovery</a>.</p> <p>When you add, update, or remove the service registries
     * configuration, Amazon ECS starts new tasks with the updated service registries
     * configuration, and then stops the old tasks when the new tasks are running.</p>
     * <p>You can remove existing <code>serviceRegistries</code> by passing an empty
     * list.</p>
     */
    inline const Aws::Vector<ServiceRegistry>& GetServiceRegistries() const{ return m_serviceRegistries; }
    inline bool ServiceRegistriesHasBeenSet() const { return m_serviceRegistriesHasBeenSet; }
    inline void SetServiceRegistries(const Aws::Vector<ServiceRegistry>& value) { m_serviceRegistriesHasBeenSet = true; m_serviceRegistries = value; }
    inline void SetServiceRegistries(Aws::Vector<ServiceRegistry>&& value) { m_serviceRegistriesHasBeenSet = true; m_serviceRegistries = std::move(value); }
    inline UpdateServiceRequest& WithServiceRegistries(const Aws::Vector<ServiceRegistry>& value) { SetServiceRegistries(value); return *this;}
    inline UpdateServiceRequest& WithServiceRegistries(Aws::Vector<ServiceRegistry>&& value) { SetServiceRegistries(std::move(value)); return *this;}
    inline UpdateServiceRequest& AddServiceRegistries(const ServiceRegistry& value) { m_serviceRegistriesHasBeenSet = true; m_serviceRegistries.push_back(value); return *this; }
    inline UpdateServiceRequest& AddServiceRegistries(ServiceRegistry&& value) { m_serviceRegistriesHasBeenSet = true; m_serviceRegistries.push_back(std::move(value)); return *this; }
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
    inline const ServiceConnectConfiguration& GetServiceConnectConfiguration() const{ return m_serviceConnectConfiguration; }
    inline bool ServiceConnectConfigurationHasBeenSet() const { return m_serviceConnectConfigurationHasBeenSet; }
    inline void SetServiceConnectConfiguration(const ServiceConnectConfiguration& value) { m_serviceConnectConfigurationHasBeenSet = true; m_serviceConnectConfiguration = value; }
    inline void SetServiceConnectConfiguration(ServiceConnectConfiguration&& value) { m_serviceConnectConfigurationHasBeenSet = true; m_serviceConnectConfiguration = std::move(value); }
    inline UpdateServiceRequest& WithServiceConnectConfiguration(const ServiceConnectConfiguration& value) { SetServiceConnectConfiguration(value); return *this;}
    inline UpdateServiceRequest& WithServiceConnectConfiguration(ServiceConnectConfiguration&& value) { SetServiceConnectConfiguration(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The details of the volume that was <code>configuredAtLaunch</code>. You can
     * configure the size, volumeType, IOPS, throughput, snapshot and encryption in <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/APIReference/API_ServiceManagedEBSVolumeConfiguration.html">ServiceManagedEBSVolumeConfiguration</a>.
     * The <code>name</code> of the volume must match the <code>name</code> from the
     * task definition. If set to null, no new deployment is triggered. Otherwise, if
     * this configuration differs from the existing one, it triggers a new
     * deployment.</p>
     */
    inline const Aws::Vector<ServiceVolumeConfiguration>& GetVolumeConfigurations() const{ return m_volumeConfigurations; }
    inline bool VolumeConfigurationsHasBeenSet() const { return m_volumeConfigurationsHasBeenSet; }
    inline void SetVolumeConfigurations(const Aws::Vector<ServiceVolumeConfiguration>& value) { m_volumeConfigurationsHasBeenSet = true; m_volumeConfigurations = value; }
    inline void SetVolumeConfigurations(Aws::Vector<ServiceVolumeConfiguration>&& value) { m_volumeConfigurationsHasBeenSet = true; m_volumeConfigurations = std::move(value); }
    inline UpdateServiceRequest& WithVolumeConfigurations(const Aws::Vector<ServiceVolumeConfiguration>& value) { SetVolumeConfigurations(value); return *this;}
    inline UpdateServiceRequest& WithVolumeConfigurations(Aws::Vector<ServiceVolumeConfiguration>&& value) { SetVolumeConfigurations(std::move(value)); return *this;}
    inline UpdateServiceRequest& AddVolumeConfigurations(const ServiceVolumeConfiguration& value) { m_volumeConfigurationsHasBeenSet = true; m_volumeConfigurations.push_back(value); return *this; }
    inline UpdateServiceRequest& AddVolumeConfigurations(ServiceVolumeConfiguration&& value) { m_volumeConfigurationsHasBeenSet = true; m_volumeConfigurations.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>An object representing the VPC Lattice configuration for the service being
     * updated.</p>
     */
    inline const Aws::Vector<VpcLatticeConfiguration>& GetVpcLatticeConfigurations() const{ return m_vpcLatticeConfigurations; }
    inline bool VpcLatticeConfigurationsHasBeenSet() const { return m_vpcLatticeConfigurationsHasBeenSet; }
    inline void SetVpcLatticeConfigurations(const Aws::Vector<VpcLatticeConfiguration>& value) { m_vpcLatticeConfigurationsHasBeenSet = true; m_vpcLatticeConfigurations = value; }
    inline void SetVpcLatticeConfigurations(Aws::Vector<VpcLatticeConfiguration>&& value) { m_vpcLatticeConfigurationsHasBeenSet = true; m_vpcLatticeConfigurations = std::move(value); }
    inline UpdateServiceRequest& WithVpcLatticeConfigurations(const Aws::Vector<VpcLatticeConfiguration>& value) { SetVpcLatticeConfigurations(value); return *this;}
    inline UpdateServiceRequest& WithVpcLatticeConfigurations(Aws::Vector<VpcLatticeConfiguration>&& value) { SetVpcLatticeConfigurations(std::move(value)); return *this;}
    inline UpdateServiceRequest& AddVpcLatticeConfigurations(const VpcLatticeConfiguration& value) { m_vpcLatticeConfigurationsHasBeenSet = true; m_vpcLatticeConfigurations.push_back(value); return *this; }
    inline UpdateServiceRequest& AddVpcLatticeConfigurations(VpcLatticeConfiguration&& value) { m_vpcLatticeConfigurationsHasBeenSet = true; m_vpcLatticeConfigurations.push_back(std::move(value)); return *this; }
    ///@}
  private:

    Aws::String m_cluster;
    bool m_clusterHasBeenSet = false;

    Aws::String m_service;
    bool m_serviceHasBeenSet = false;

    int m_desiredCount;
    bool m_desiredCountHasBeenSet = false;

    Aws::String m_taskDefinition;
    bool m_taskDefinitionHasBeenSet = false;

    Aws::Vector<CapacityProviderStrategyItem> m_capacityProviderStrategy;
    bool m_capacityProviderStrategyHasBeenSet = false;

    DeploymentConfiguration m_deploymentConfiguration;
    bool m_deploymentConfigurationHasBeenSet = false;

    AvailabilityZoneRebalancing m_availabilityZoneRebalancing;
    bool m_availabilityZoneRebalancingHasBeenSet = false;

    NetworkConfiguration m_networkConfiguration;
    bool m_networkConfigurationHasBeenSet = false;

    Aws::Vector<PlacementConstraint> m_placementConstraints;
    bool m_placementConstraintsHasBeenSet = false;

    Aws::Vector<PlacementStrategy> m_placementStrategy;
    bool m_placementStrategyHasBeenSet = false;

    Aws::String m_platformVersion;
    bool m_platformVersionHasBeenSet = false;

    bool m_forceNewDeployment;
    bool m_forceNewDeploymentHasBeenSet = false;

    int m_healthCheckGracePeriodSeconds;
    bool m_healthCheckGracePeriodSecondsHasBeenSet = false;

    bool m_enableExecuteCommand;
    bool m_enableExecuteCommandHasBeenSet = false;

    bool m_enableECSManagedTags;
    bool m_enableECSManagedTagsHasBeenSet = false;

    Aws::Vector<LoadBalancer> m_loadBalancers;
    bool m_loadBalancersHasBeenSet = false;

    PropagateTags m_propagateTags;
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
