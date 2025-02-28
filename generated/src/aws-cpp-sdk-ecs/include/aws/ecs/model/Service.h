﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ecs/ECS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ecs/model/LaunchType.h>
#include <aws/ecs/model/DeploymentConfiguration.h>
#include <aws/core/utils/DateTime.h>
#include <aws/ecs/model/NetworkConfiguration.h>
#include <aws/ecs/model/SchedulingStrategy.h>
#include <aws/ecs/model/DeploymentController.h>
#include <aws/ecs/model/PropagateTags.h>
#include <aws/ecs/model/AvailabilityZoneRebalancing.h>
#include <aws/ecs/model/LoadBalancer.h>
#include <aws/ecs/model/ServiceRegistry.h>
#include <aws/ecs/model/CapacityProviderStrategyItem.h>
#include <aws/ecs/model/TaskSet.h>
#include <aws/ecs/model/Deployment.h>
#include <aws/ecs/model/ServiceEvent.h>
#include <aws/ecs/model/PlacementConstraint.h>
#include <aws/ecs/model/PlacementStrategy.h>
#include <aws/ecs/model/Tag.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace ECS
{
namespace Model
{

  /**
   * <p>Details on a service within a cluster.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ecs-2014-11-13/Service">AWS API
   * Reference</a></p>
   */
  class Service
  {
  public:
    AWS_ECS_API Service();
    AWS_ECS_API Service(Aws::Utils::Json::JsonView jsonValue);
    AWS_ECS_API Service& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ECS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ARN that identifies the service. For more information about the ARN
     * format, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/ecs-account-settings.html#ecs-resource-ids">Amazon
     * Resource Name (ARN)</a> in the <i>Amazon ECS Developer Guide</i>.</p>
     */
    inline const Aws::String& GetServiceArn() const{ return m_serviceArn; }
    inline bool ServiceArnHasBeenSet() const { return m_serviceArnHasBeenSet; }
    inline void SetServiceArn(const Aws::String& value) { m_serviceArnHasBeenSet = true; m_serviceArn = value; }
    inline void SetServiceArn(Aws::String&& value) { m_serviceArnHasBeenSet = true; m_serviceArn = std::move(value); }
    inline void SetServiceArn(const char* value) { m_serviceArnHasBeenSet = true; m_serviceArn.assign(value); }
    inline Service& WithServiceArn(const Aws::String& value) { SetServiceArn(value); return *this;}
    inline Service& WithServiceArn(Aws::String&& value) { SetServiceArn(std::move(value)); return *this;}
    inline Service& WithServiceArn(const char* value) { SetServiceArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of your service. Up to 255 letters (uppercase and lowercase),
     * numbers, underscores, and hyphens are allowed. Service names must be unique
     * within a cluster. However, you can have similarly named services in multiple
     * clusters within a Region or across multiple Regions.</p>
     */
    inline const Aws::String& GetServiceName() const{ return m_serviceName; }
    inline bool ServiceNameHasBeenSet() const { return m_serviceNameHasBeenSet; }
    inline void SetServiceName(const Aws::String& value) { m_serviceNameHasBeenSet = true; m_serviceName = value; }
    inline void SetServiceName(Aws::String&& value) { m_serviceNameHasBeenSet = true; m_serviceName = std::move(value); }
    inline void SetServiceName(const char* value) { m_serviceNameHasBeenSet = true; m_serviceName.assign(value); }
    inline Service& WithServiceName(const Aws::String& value) { SetServiceName(value); return *this;}
    inline Service& WithServiceName(Aws::String&& value) { SetServiceName(std::move(value)); return *this;}
    inline Service& WithServiceName(const char* value) { SetServiceName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the cluster that hosts the service.</p>
     */
    inline const Aws::String& GetClusterArn() const{ return m_clusterArn; }
    inline bool ClusterArnHasBeenSet() const { return m_clusterArnHasBeenSet; }
    inline void SetClusterArn(const Aws::String& value) { m_clusterArnHasBeenSet = true; m_clusterArn = value; }
    inline void SetClusterArn(Aws::String&& value) { m_clusterArnHasBeenSet = true; m_clusterArn = std::move(value); }
    inline void SetClusterArn(const char* value) { m_clusterArnHasBeenSet = true; m_clusterArn.assign(value); }
    inline Service& WithClusterArn(const Aws::String& value) { SetClusterArn(value); return *this;}
    inline Service& WithClusterArn(Aws::String&& value) { SetClusterArn(std::move(value)); return *this;}
    inline Service& WithClusterArn(const char* value) { SetClusterArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of Elastic Load Balancing load balancer objects. It contains the load
     * balancer name, the container name, and the container port to access from the
     * load balancer. The container name is as it appears in a container
     * definition.</p>
     */
    inline const Aws::Vector<LoadBalancer>& GetLoadBalancers() const{ return m_loadBalancers; }
    inline bool LoadBalancersHasBeenSet() const { return m_loadBalancersHasBeenSet; }
    inline void SetLoadBalancers(const Aws::Vector<LoadBalancer>& value) { m_loadBalancersHasBeenSet = true; m_loadBalancers = value; }
    inline void SetLoadBalancers(Aws::Vector<LoadBalancer>&& value) { m_loadBalancersHasBeenSet = true; m_loadBalancers = std::move(value); }
    inline Service& WithLoadBalancers(const Aws::Vector<LoadBalancer>& value) { SetLoadBalancers(value); return *this;}
    inline Service& WithLoadBalancers(Aws::Vector<LoadBalancer>&& value) { SetLoadBalancers(std::move(value)); return *this;}
    inline Service& AddLoadBalancers(const LoadBalancer& value) { m_loadBalancersHasBeenSet = true; m_loadBalancers.push_back(value); return *this; }
    inline Service& AddLoadBalancers(LoadBalancer&& value) { m_loadBalancersHasBeenSet = true; m_loadBalancers.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The details for the service discovery registries to assign to this service.
     * For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/service-discovery.html">Service
     * Discovery</a>.</p>
     */
    inline const Aws::Vector<ServiceRegistry>& GetServiceRegistries() const{ return m_serviceRegistries; }
    inline bool ServiceRegistriesHasBeenSet() const { return m_serviceRegistriesHasBeenSet; }
    inline void SetServiceRegistries(const Aws::Vector<ServiceRegistry>& value) { m_serviceRegistriesHasBeenSet = true; m_serviceRegistries = value; }
    inline void SetServiceRegistries(Aws::Vector<ServiceRegistry>&& value) { m_serviceRegistriesHasBeenSet = true; m_serviceRegistries = std::move(value); }
    inline Service& WithServiceRegistries(const Aws::Vector<ServiceRegistry>& value) { SetServiceRegistries(value); return *this;}
    inline Service& WithServiceRegistries(Aws::Vector<ServiceRegistry>&& value) { SetServiceRegistries(std::move(value)); return *this;}
    inline Service& AddServiceRegistries(const ServiceRegistry& value) { m_serviceRegistriesHasBeenSet = true; m_serviceRegistries.push_back(value); return *this; }
    inline Service& AddServiceRegistries(ServiceRegistry&& value) { m_serviceRegistriesHasBeenSet = true; m_serviceRegistries.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The status of the service. The valid values are <code>ACTIVE</code>,
     * <code>DRAINING</code>, or <code>INACTIVE</code>.</p>
     */
    inline const Aws::String& GetStatus() const{ return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(const Aws::String& value) { m_statusHasBeenSet = true; m_status = value; }
    inline void SetStatus(Aws::String&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }
    inline void SetStatus(const char* value) { m_statusHasBeenSet = true; m_status.assign(value); }
    inline Service& WithStatus(const Aws::String& value) { SetStatus(value); return *this;}
    inline Service& WithStatus(Aws::String&& value) { SetStatus(std::move(value)); return *this;}
    inline Service& WithStatus(const char* value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The desired number of instantiations of the task definition to keep running
     * on the service. This value is specified when the service is created with <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/APIReference/API_CreateService.html">CreateService</a>
     * , and it can be modified with <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/APIReference/API_UpdateService.html">UpdateService</a>.</p>
     */
    inline int GetDesiredCount() const{ return m_desiredCount; }
    inline bool DesiredCountHasBeenSet() const { return m_desiredCountHasBeenSet; }
    inline void SetDesiredCount(int value) { m_desiredCountHasBeenSet = true; m_desiredCount = value; }
    inline Service& WithDesiredCount(int value) { SetDesiredCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of tasks in the cluster that are in the <code>RUNNING</code>
     * state.</p>
     */
    inline int GetRunningCount() const{ return m_runningCount; }
    inline bool RunningCountHasBeenSet() const { return m_runningCountHasBeenSet; }
    inline void SetRunningCount(int value) { m_runningCountHasBeenSet = true; m_runningCount = value; }
    inline Service& WithRunningCount(int value) { SetRunningCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of tasks in the cluster that are in the <code>PENDING</code>
     * state.</p>
     */
    inline int GetPendingCount() const{ return m_pendingCount; }
    inline bool PendingCountHasBeenSet() const { return m_pendingCountHasBeenSet; }
    inline void SetPendingCount(int value) { m_pendingCountHasBeenSet = true; m_pendingCount = value; }
    inline Service& WithPendingCount(int value) { SetPendingCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The launch type the service is using. When using the DescribeServices API,
     * this field is omitted if the service was created using a capacity provider
     * strategy.</p>
     */
    inline const LaunchType& GetLaunchType() const{ return m_launchType; }
    inline bool LaunchTypeHasBeenSet() const { return m_launchTypeHasBeenSet; }
    inline void SetLaunchType(const LaunchType& value) { m_launchTypeHasBeenSet = true; m_launchType = value; }
    inline void SetLaunchType(LaunchType&& value) { m_launchTypeHasBeenSet = true; m_launchType = std::move(value); }
    inline Service& WithLaunchType(const LaunchType& value) { SetLaunchType(value); return *this;}
    inline Service& WithLaunchType(LaunchType&& value) { SetLaunchType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The capacity provider strategy the service uses. When using the
     * DescribeServices API, this field is omitted if the service was created using a
     * launch type.</p>
     */
    inline const Aws::Vector<CapacityProviderStrategyItem>& GetCapacityProviderStrategy() const{ return m_capacityProviderStrategy; }
    inline bool CapacityProviderStrategyHasBeenSet() const { return m_capacityProviderStrategyHasBeenSet; }
    inline void SetCapacityProviderStrategy(const Aws::Vector<CapacityProviderStrategyItem>& value) { m_capacityProviderStrategyHasBeenSet = true; m_capacityProviderStrategy = value; }
    inline void SetCapacityProviderStrategy(Aws::Vector<CapacityProviderStrategyItem>&& value) { m_capacityProviderStrategyHasBeenSet = true; m_capacityProviderStrategy = std::move(value); }
    inline Service& WithCapacityProviderStrategy(const Aws::Vector<CapacityProviderStrategyItem>& value) { SetCapacityProviderStrategy(value); return *this;}
    inline Service& WithCapacityProviderStrategy(Aws::Vector<CapacityProviderStrategyItem>&& value) { SetCapacityProviderStrategy(std::move(value)); return *this;}
    inline Service& AddCapacityProviderStrategy(const CapacityProviderStrategyItem& value) { m_capacityProviderStrategyHasBeenSet = true; m_capacityProviderStrategy.push_back(value); return *this; }
    inline Service& AddCapacityProviderStrategy(CapacityProviderStrategyItem&& value) { m_capacityProviderStrategyHasBeenSet = true; m_capacityProviderStrategy.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The platform version to run your service on. A platform version is only
     * specified for tasks that are hosted on Fargate. If one isn't specified, the
     * <code>LATEST</code> platform version is used. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/platform_versions.html">Fargate
     * Platform Versions</a> in the <i>Amazon Elastic Container Service Developer
     * Guide</i>.</p>
     */
    inline const Aws::String& GetPlatformVersion() const{ return m_platformVersion; }
    inline bool PlatformVersionHasBeenSet() const { return m_platformVersionHasBeenSet; }
    inline void SetPlatformVersion(const Aws::String& value) { m_platformVersionHasBeenSet = true; m_platformVersion = value; }
    inline void SetPlatformVersion(Aws::String&& value) { m_platformVersionHasBeenSet = true; m_platformVersion = std::move(value); }
    inline void SetPlatformVersion(const char* value) { m_platformVersionHasBeenSet = true; m_platformVersion.assign(value); }
    inline Service& WithPlatformVersion(const Aws::String& value) { SetPlatformVersion(value); return *this;}
    inline Service& WithPlatformVersion(Aws::String&& value) { SetPlatformVersion(std::move(value)); return *this;}
    inline Service& WithPlatformVersion(const char* value) { SetPlatformVersion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The operating system that your tasks in the service run on. A platform family
     * is specified only for tasks using the Fargate launch type. </p> <p> All tasks
     * that run as part of this service must use the same <code>platformFamily</code>
     * value as the service (for example, <code>LINUX</code>).</p>
     */
    inline const Aws::String& GetPlatformFamily() const{ return m_platformFamily; }
    inline bool PlatformFamilyHasBeenSet() const { return m_platformFamilyHasBeenSet; }
    inline void SetPlatformFamily(const Aws::String& value) { m_platformFamilyHasBeenSet = true; m_platformFamily = value; }
    inline void SetPlatformFamily(Aws::String&& value) { m_platformFamilyHasBeenSet = true; m_platformFamily = std::move(value); }
    inline void SetPlatformFamily(const char* value) { m_platformFamilyHasBeenSet = true; m_platformFamily.assign(value); }
    inline Service& WithPlatformFamily(const Aws::String& value) { SetPlatformFamily(value); return *this;}
    inline Service& WithPlatformFamily(Aws::String&& value) { SetPlatformFamily(std::move(value)); return *this;}
    inline Service& WithPlatformFamily(const char* value) { SetPlatformFamily(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The task definition to use for tasks in the service. This value is specified
     * when the service is created with <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/APIReference/API_CreateService.html">CreateService</a>,
     * and it can be modified with <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/APIReference/API_UpdateService.html">UpdateService</a>.</p>
     */
    inline const Aws::String& GetTaskDefinition() const{ return m_taskDefinition; }
    inline bool TaskDefinitionHasBeenSet() const { return m_taskDefinitionHasBeenSet; }
    inline void SetTaskDefinition(const Aws::String& value) { m_taskDefinitionHasBeenSet = true; m_taskDefinition = value; }
    inline void SetTaskDefinition(Aws::String&& value) { m_taskDefinitionHasBeenSet = true; m_taskDefinition = std::move(value); }
    inline void SetTaskDefinition(const char* value) { m_taskDefinitionHasBeenSet = true; m_taskDefinition.assign(value); }
    inline Service& WithTaskDefinition(const Aws::String& value) { SetTaskDefinition(value); return *this;}
    inline Service& WithTaskDefinition(Aws::String&& value) { SetTaskDefinition(std::move(value)); return *this;}
    inline Service& WithTaskDefinition(const char* value) { SetTaskDefinition(value); return *this;}
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
    inline Service& WithDeploymentConfiguration(const DeploymentConfiguration& value) { SetDeploymentConfiguration(value); return *this;}
    inline Service& WithDeploymentConfiguration(DeploymentConfiguration&& value) { SetDeploymentConfiguration(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about a set of Amazon ECS tasks in either an CodeDeploy or an
     * <code>EXTERNAL</code> deployment. An Amazon ECS task set includes details such
     * as the desired number of tasks, how many tasks are running, and whether the task
     * set serves production traffic.</p>
     */
    inline const Aws::Vector<TaskSet>& GetTaskSets() const{ return m_taskSets; }
    inline bool TaskSetsHasBeenSet() const { return m_taskSetsHasBeenSet; }
    inline void SetTaskSets(const Aws::Vector<TaskSet>& value) { m_taskSetsHasBeenSet = true; m_taskSets = value; }
    inline void SetTaskSets(Aws::Vector<TaskSet>&& value) { m_taskSetsHasBeenSet = true; m_taskSets = std::move(value); }
    inline Service& WithTaskSets(const Aws::Vector<TaskSet>& value) { SetTaskSets(value); return *this;}
    inline Service& WithTaskSets(Aws::Vector<TaskSet>&& value) { SetTaskSets(std::move(value)); return *this;}
    inline Service& AddTaskSets(const TaskSet& value) { m_taskSetsHasBeenSet = true; m_taskSets.push_back(value); return *this; }
    inline Service& AddTaskSets(TaskSet&& value) { m_taskSetsHasBeenSet = true; m_taskSets.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The current state of deployments for the service.</p>
     */
    inline const Aws::Vector<Deployment>& GetDeployments() const{ return m_deployments; }
    inline bool DeploymentsHasBeenSet() const { return m_deploymentsHasBeenSet; }
    inline void SetDeployments(const Aws::Vector<Deployment>& value) { m_deploymentsHasBeenSet = true; m_deployments = value; }
    inline void SetDeployments(Aws::Vector<Deployment>&& value) { m_deploymentsHasBeenSet = true; m_deployments = std::move(value); }
    inline Service& WithDeployments(const Aws::Vector<Deployment>& value) { SetDeployments(value); return *this;}
    inline Service& WithDeployments(Aws::Vector<Deployment>&& value) { SetDeployments(std::move(value)); return *this;}
    inline Service& AddDeployments(const Deployment& value) { m_deploymentsHasBeenSet = true; m_deployments.push_back(value); return *this; }
    inline Service& AddDeployments(Deployment&& value) { m_deploymentsHasBeenSet = true; m_deployments.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The ARN of the IAM role that's associated with the service. It allows the
     * Amazon ECS container agent to register container instances with an Elastic Load
     * Balancing load balancer.</p>
     */
    inline const Aws::String& GetRoleArn() const{ return m_roleArn; }
    inline bool RoleArnHasBeenSet() const { return m_roleArnHasBeenSet; }
    inline void SetRoleArn(const Aws::String& value) { m_roleArnHasBeenSet = true; m_roleArn = value; }
    inline void SetRoleArn(Aws::String&& value) { m_roleArnHasBeenSet = true; m_roleArn = std::move(value); }
    inline void SetRoleArn(const char* value) { m_roleArnHasBeenSet = true; m_roleArn.assign(value); }
    inline Service& WithRoleArn(const Aws::String& value) { SetRoleArn(value); return *this;}
    inline Service& WithRoleArn(Aws::String&& value) { SetRoleArn(std::move(value)); return *this;}
    inline Service& WithRoleArn(const char* value) { SetRoleArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The event stream for your service. A maximum of 100 of the latest events are
     * displayed.</p>
     */
    inline const Aws::Vector<ServiceEvent>& GetEvents() const{ return m_events; }
    inline bool EventsHasBeenSet() const { return m_eventsHasBeenSet; }
    inline void SetEvents(const Aws::Vector<ServiceEvent>& value) { m_eventsHasBeenSet = true; m_events = value; }
    inline void SetEvents(Aws::Vector<ServiceEvent>&& value) { m_eventsHasBeenSet = true; m_events = std::move(value); }
    inline Service& WithEvents(const Aws::Vector<ServiceEvent>& value) { SetEvents(value); return *this;}
    inline Service& WithEvents(Aws::Vector<ServiceEvent>&& value) { SetEvents(std::move(value)); return *this;}
    inline Service& AddEvents(const ServiceEvent& value) { m_eventsHasBeenSet = true; m_events.push_back(value); return *this; }
    inline Service& AddEvents(ServiceEvent&& value) { m_eventsHasBeenSet = true; m_events.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The Unix timestamp for the time when the service was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const{ return m_createdAt; }
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }
    inline void SetCreatedAt(const Aws::Utils::DateTime& value) { m_createdAtHasBeenSet = true; m_createdAt = value; }
    inline void SetCreatedAt(Aws::Utils::DateTime&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::move(value); }
    inline Service& WithCreatedAt(const Aws::Utils::DateTime& value) { SetCreatedAt(value); return *this;}
    inline Service& WithCreatedAt(Aws::Utils::DateTime&& value) { SetCreatedAt(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The placement constraints for the tasks in the service.</p>
     */
    inline const Aws::Vector<PlacementConstraint>& GetPlacementConstraints() const{ return m_placementConstraints; }
    inline bool PlacementConstraintsHasBeenSet() const { return m_placementConstraintsHasBeenSet; }
    inline void SetPlacementConstraints(const Aws::Vector<PlacementConstraint>& value) { m_placementConstraintsHasBeenSet = true; m_placementConstraints = value; }
    inline void SetPlacementConstraints(Aws::Vector<PlacementConstraint>&& value) { m_placementConstraintsHasBeenSet = true; m_placementConstraints = std::move(value); }
    inline Service& WithPlacementConstraints(const Aws::Vector<PlacementConstraint>& value) { SetPlacementConstraints(value); return *this;}
    inline Service& WithPlacementConstraints(Aws::Vector<PlacementConstraint>&& value) { SetPlacementConstraints(std::move(value)); return *this;}
    inline Service& AddPlacementConstraints(const PlacementConstraint& value) { m_placementConstraintsHasBeenSet = true; m_placementConstraints.push_back(value); return *this; }
    inline Service& AddPlacementConstraints(PlacementConstraint&& value) { m_placementConstraintsHasBeenSet = true; m_placementConstraints.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The placement strategy that determines how tasks for the service are
     * placed.</p>
     */
    inline const Aws::Vector<PlacementStrategy>& GetPlacementStrategy() const{ return m_placementStrategy; }
    inline bool PlacementStrategyHasBeenSet() const { return m_placementStrategyHasBeenSet; }
    inline void SetPlacementStrategy(const Aws::Vector<PlacementStrategy>& value) { m_placementStrategyHasBeenSet = true; m_placementStrategy = value; }
    inline void SetPlacementStrategy(Aws::Vector<PlacementStrategy>&& value) { m_placementStrategyHasBeenSet = true; m_placementStrategy = std::move(value); }
    inline Service& WithPlacementStrategy(const Aws::Vector<PlacementStrategy>& value) { SetPlacementStrategy(value); return *this;}
    inline Service& WithPlacementStrategy(Aws::Vector<PlacementStrategy>&& value) { SetPlacementStrategy(std::move(value)); return *this;}
    inline Service& AddPlacementStrategy(const PlacementStrategy& value) { m_placementStrategyHasBeenSet = true; m_placementStrategy.push_back(value); return *this; }
    inline Service& AddPlacementStrategy(PlacementStrategy&& value) { m_placementStrategyHasBeenSet = true; m_placementStrategy.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The VPC subnet and security group configuration for tasks that receive their
     * own elastic network interface by using the <code>awsvpc</code> networking
     * mode.</p>
     */
    inline const NetworkConfiguration& GetNetworkConfiguration() const{ return m_networkConfiguration; }
    inline bool NetworkConfigurationHasBeenSet() const { return m_networkConfigurationHasBeenSet; }
    inline void SetNetworkConfiguration(const NetworkConfiguration& value) { m_networkConfigurationHasBeenSet = true; m_networkConfiguration = value; }
    inline void SetNetworkConfiguration(NetworkConfiguration&& value) { m_networkConfigurationHasBeenSet = true; m_networkConfiguration = std::move(value); }
    inline Service& WithNetworkConfiguration(const NetworkConfiguration& value) { SetNetworkConfiguration(value); return *this;}
    inline Service& WithNetworkConfiguration(NetworkConfiguration&& value) { SetNetworkConfiguration(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The period of time, in seconds, that the Amazon ECS service scheduler ignores
     * unhealthy Elastic Load Balancing target health checks after a task has first
     * started.</p>
     */
    inline int GetHealthCheckGracePeriodSeconds() const{ return m_healthCheckGracePeriodSeconds; }
    inline bool HealthCheckGracePeriodSecondsHasBeenSet() const { return m_healthCheckGracePeriodSecondsHasBeenSet; }
    inline void SetHealthCheckGracePeriodSeconds(int value) { m_healthCheckGracePeriodSecondsHasBeenSet = true; m_healthCheckGracePeriodSeconds = value; }
    inline Service& WithHealthCheckGracePeriodSeconds(int value) { SetHealthCheckGracePeriodSeconds(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The scheduling strategy to use for the service. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/ecs_services.html">Services</a>.</p>
     * <p>There are two service scheduler strategies available.</p> <ul> <li> <p>
     * <code>REPLICA</code>-The replica scheduling strategy places and maintains the
     * desired number of tasks across your cluster. By default, the service scheduler
     * spreads tasks across Availability Zones. You can use task placement strategies
     * and constraints to customize task placement decisions.</p> </li> <li> <p>
     * <code>DAEMON</code>-The daemon scheduling strategy deploys exactly one task on
     * each active container instance. This task meets all of the task placement
     * constraints that you specify in your cluster. The service scheduler also
     * evaluates the task placement constraints for running tasks. It stop tasks that
     * don't meet the placement constraints.</p>  <p>Fargate tasks don't support
     * the <code>DAEMON</code> scheduling strategy.</p>  </li> </ul>
     */
    inline const SchedulingStrategy& GetSchedulingStrategy() const{ return m_schedulingStrategy; }
    inline bool SchedulingStrategyHasBeenSet() const { return m_schedulingStrategyHasBeenSet; }
    inline void SetSchedulingStrategy(const SchedulingStrategy& value) { m_schedulingStrategyHasBeenSet = true; m_schedulingStrategy = value; }
    inline void SetSchedulingStrategy(SchedulingStrategy&& value) { m_schedulingStrategyHasBeenSet = true; m_schedulingStrategy = std::move(value); }
    inline Service& WithSchedulingStrategy(const SchedulingStrategy& value) { SetSchedulingStrategy(value); return *this;}
    inline Service& WithSchedulingStrategy(SchedulingStrategy&& value) { SetSchedulingStrategy(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The deployment controller type the service is using. </p>
     */
    inline const DeploymentController& GetDeploymentController() const{ return m_deploymentController; }
    inline bool DeploymentControllerHasBeenSet() const { return m_deploymentControllerHasBeenSet; }
    inline void SetDeploymentController(const DeploymentController& value) { m_deploymentControllerHasBeenSet = true; m_deploymentController = value; }
    inline void SetDeploymentController(DeploymentController&& value) { m_deploymentControllerHasBeenSet = true; m_deploymentController = std::move(value); }
    inline Service& WithDeploymentController(const DeploymentController& value) { SetDeploymentController(value); return *this;}
    inline Service& WithDeploymentController(DeploymentController&& value) { SetDeploymentController(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The metadata that you apply to the service to help you categorize and
     * organize them. Each tag consists of a key and an optional value. You define bot
     * the key and value.</p> <p>The following basic restrictions apply to tags:</p>
     * <ul> <li> <p>Maximum number of tags per resource - 50</p> </li> <li> <p>For each
     * resource, each tag key must be unique, and each tag key can have only one
     * value.</p> </li> <li> <p>Maximum key length - 128 Unicode characters in
     * UTF-8</p> </li> <li> <p>Maximum value length - 256 Unicode characters in
     * UTF-8</p> </li> <li> <p>If your tagging schema is used across multiple services
     * and resources, remember that other services may have restrictions on allowed
     * characters. Generally allowed characters are: letters, numbers, and spaces
     * representable in UTF-8, and the following characters: + - = . _ : / @.</p> </li>
     * <li> <p>Tag keys and values are case-sensitive.</p> </li> <li> <p>Do not use
     * <code>aws:</code>, <code>AWS:</code>, or any upper or lowercase combination of
     * such as a prefix for either keys or values as it is reserved for Amazon Web
     * Services use. You cannot edit or delete tag keys or values with this prefix.
     * Tags with this prefix do not count against your tags per resource limit.</p>
     * </li> </ul>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }
    inline Service& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}
    inline Service& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}
    inline Service& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }
    inline Service& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The principal that created the service.</p>
     */
    inline const Aws::String& GetCreatedBy() const{ return m_createdBy; }
    inline bool CreatedByHasBeenSet() const { return m_createdByHasBeenSet; }
    inline void SetCreatedBy(const Aws::String& value) { m_createdByHasBeenSet = true; m_createdBy = value; }
    inline void SetCreatedBy(Aws::String&& value) { m_createdByHasBeenSet = true; m_createdBy = std::move(value); }
    inline void SetCreatedBy(const char* value) { m_createdByHasBeenSet = true; m_createdBy.assign(value); }
    inline Service& WithCreatedBy(const Aws::String& value) { SetCreatedBy(value); return *this;}
    inline Service& WithCreatedBy(Aws::String&& value) { SetCreatedBy(std::move(value)); return *this;}
    inline Service& WithCreatedBy(const char* value) { SetCreatedBy(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Determines whether to use Amazon ECS managed tags for the tasks in the
     * service. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/ecs-using-tags.html">Tagging
     * Your Amazon ECS Resources</a> in the <i>Amazon Elastic Container Service
     * Developer Guide</i>.</p>
     */
    inline bool GetEnableECSManagedTags() const{ return m_enableECSManagedTags; }
    inline bool EnableECSManagedTagsHasBeenSet() const { return m_enableECSManagedTagsHasBeenSet; }
    inline void SetEnableECSManagedTags(bool value) { m_enableECSManagedTagsHasBeenSet = true; m_enableECSManagedTags = value; }
    inline Service& WithEnableECSManagedTags(bool value) { SetEnableECSManagedTags(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Determines whether to propagate the tags from the task definition or the
     * service to the task. If no value is specified, the tags aren't propagated.</p>
     */
    inline const PropagateTags& GetPropagateTags() const{ return m_propagateTags; }
    inline bool PropagateTagsHasBeenSet() const { return m_propagateTagsHasBeenSet; }
    inline void SetPropagateTags(const PropagateTags& value) { m_propagateTagsHasBeenSet = true; m_propagateTags = value; }
    inline void SetPropagateTags(PropagateTags&& value) { m_propagateTagsHasBeenSet = true; m_propagateTags = std::move(value); }
    inline Service& WithPropagateTags(const PropagateTags& value) { SetPropagateTags(value); return *this;}
    inline Service& WithPropagateTags(PropagateTags&& value) { SetPropagateTags(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Determines whether the execute command functionality is turned on for the
     * service. If <code>true</code>, the execute command functionality is turned on
     * for all containers in tasks as part of the service.</p>
     */
    inline bool GetEnableExecuteCommand() const{ return m_enableExecuteCommand; }
    inline bool EnableExecuteCommandHasBeenSet() const { return m_enableExecuteCommandHasBeenSet; }
    inline void SetEnableExecuteCommand(bool value) { m_enableExecuteCommandHasBeenSet = true; m_enableExecuteCommand = value; }
    inline Service& WithEnableExecuteCommand(bool value) { SetEnableExecuteCommand(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether to use Availability Zone rebalancing for the service.</p>
     * <p>For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/service-rebalancing.html">Balancing
     * an Amazon ECS service across Availability Zones</a> in the <i> <i>Amazon Elastic
     * Container Service Developer Guide</i> </i>.</p>
     */
    inline const AvailabilityZoneRebalancing& GetAvailabilityZoneRebalancing() const{ return m_availabilityZoneRebalancing; }
    inline bool AvailabilityZoneRebalancingHasBeenSet() const { return m_availabilityZoneRebalancingHasBeenSet; }
    inline void SetAvailabilityZoneRebalancing(const AvailabilityZoneRebalancing& value) { m_availabilityZoneRebalancingHasBeenSet = true; m_availabilityZoneRebalancing = value; }
    inline void SetAvailabilityZoneRebalancing(AvailabilityZoneRebalancing&& value) { m_availabilityZoneRebalancingHasBeenSet = true; m_availabilityZoneRebalancing = std::move(value); }
    inline Service& WithAvailabilityZoneRebalancing(const AvailabilityZoneRebalancing& value) { SetAvailabilityZoneRebalancing(value); return *this;}
    inline Service& WithAvailabilityZoneRebalancing(AvailabilityZoneRebalancing&& value) { SetAvailabilityZoneRebalancing(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_serviceArn;
    bool m_serviceArnHasBeenSet = false;

    Aws::String m_serviceName;
    bool m_serviceNameHasBeenSet = false;

    Aws::String m_clusterArn;
    bool m_clusterArnHasBeenSet = false;

    Aws::Vector<LoadBalancer> m_loadBalancers;
    bool m_loadBalancersHasBeenSet = false;

    Aws::Vector<ServiceRegistry> m_serviceRegistries;
    bool m_serviceRegistriesHasBeenSet = false;

    Aws::String m_status;
    bool m_statusHasBeenSet = false;

    int m_desiredCount;
    bool m_desiredCountHasBeenSet = false;

    int m_runningCount;
    bool m_runningCountHasBeenSet = false;

    int m_pendingCount;
    bool m_pendingCountHasBeenSet = false;

    LaunchType m_launchType;
    bool m_launchTypeHasBeenSet = false;

    Aws::Vector<CapacityProviderStrategyItem> m_capacityProviderStrategy;
    bool m_capacityProviderStrategyHasBeenSet = false;

    Aws::String m_platformVersion;
    bool m_platformVersionHasBeenSet = false;

    Aws::String m_platformFamily;
    bool m_platformFamilyHasBeenSet = false;

    Aws::String m_taskDefinition;
    bool m_taskDefinitionHasBeenSet = false;

    DeploymentConfiguration m_deploymentConfiguration;
    bool m_deploymentConfigurationHasBeenSet = false;

    Aws::Vector<TaskSet> m_taskSets;
    bool m_taskSetsHasBeenSet = false;

    Aws::Vector<Deployment> m_deployments;
    bool m_deploymentsHasBeenSet = false;

    Aws::String m_roleArn;
    bool m_roleArnHasBeenSet = false;

    Aws::Vector<ServiceEvent> m_events;
    bool m_eventsHasBeenSet = false;

    Aws::Utils::DateTime m_createdAt;
    bool m_createdAtHasBeenSet = false;

    Aws::Vector<PlacementConstraint> m_placementConstraints;
    bool m_placementConstraintsHasBeenSet = false;

    Aws::Vector<PlacementStrategy> m_placementStrategy;
    bool m_placementStrategyHasBeenSet = false;

    NetworkConfiguration m_networkConfiguration;
    bool m_networkConfigurationHasBeenSet = false;

    int m_healthCheckGracePeriodSeconds;
    bool m_healthCheckGracePeriodSecondsHasBeenSet = false;

    SchedulingStrategy m_schedulingStrategy;
    bool m_schedulingStrategyHasBeenSet = false;

    DeploymentController m_deploymentController;
    bool m_deploymentControllerHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;

    Aws::String m_createdBy;
    bool m_createdByHasBeenSet = false;

    bool m_enableECSManagedTags;
    bool m_enableECSManagedTagsHasBeenSet = false;

    PropagateTags m_propagateTags;
    bool m_propagateTagsHasBeenSet = false;

    bool m_enableExecuteCommand;
    bool m_enableExecuteCommandHasBeenSet = false;

    AvailabilityZoneRebalancing m_availabilityZoneRebalancing;
    bool m_availabilityZoneRebalancingHasBeenSet = false;
  };

} // namespace Model
} // namespace ECS
} // namespace Aws
