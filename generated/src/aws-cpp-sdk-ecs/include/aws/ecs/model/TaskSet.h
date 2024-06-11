/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ecs/ECS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/ecs/model/LaunchType.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ecs/model/NetworkConfiguration.h>
#include <aws/ecs/model/Scale.h>
#include <aws/ecs/model/StabilityStatus.h>
#include <aws/ecs/model/DeploymentEphemeralStorage.h>
#include <aws/ecs/model/CapacityProviderStrategyItem.h>
#include <aws/ecs/model/LoadBalancer.h>
#include <aws/ecs/model/ServiceRegistry.h>
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
   * <p>Information about a set of Amazon ECS tasks in either an CodeDeploy or an
   * <code>EXTERNAL</code> deployment. An Amazon ECS task set includes details such
   * as the desired number of tasks, how many tasks are running, and whether the task
   * set serves production traffic.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ecs-2014-11-13/TaskSet">AWS API
   * Reference</a></p>
   */
  class TaskSet
  {
  public:
    AWS_ECS_API TaskSet();
    AWS_ECS_API TaskSet(Aws::Utils::Json::JsonView jsonValue);
    AWS_ECS_API TaskSet& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ECS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ID of the task set.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }
    inline TaskSet& WithId(const Aws::String& value) { SetId(value); return *this;}
    inline TaskSet& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}
    inline TaskSet& WithId(const char* value) { SetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the task set.</p>
     */
    inline const Aws::String& GetTaskSetArn() const{ return m_taskSetArn; }
    inline bool TaskSetArnHasBeenSet() const { return m_taskSetArnHasBeenSet; }
    inline void SetTaskSetArn(const Aws::String& value) { m_taskSetArnHasBeenSet = true; m_taskSetArn = value; }
    inline void SetTaskSetArn(Aws::String&& value) { m_taskSetArnHasBeenSet = true; m_taskSetArn = std::move(value); }
    inline void SetTaskSetArn(const char* value) { m_taskSetArnHasBeenSet = true; m_taskSetArn.assign(value); }
    inline TaskSet& WithTaskSetArn(const Aws::String& value) { SetTaskSetArn(value); return *this;}
    inline TaskSet& WithTaskSetArn(Aws::String&& value) { SetTaskSetArn(std::move(value)); return *this;}
    inline TaskSet& WithTaskSetArn(const char* value) { SetTaskSetArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the service the task set exists in.</p>
     */
    inline const Aws::String& GetServiceArn() const{ return m_serviceArn; }
    inline bool ServiceArnHasBeenSet() const { return m_serviceArnHasBeenSet; }
    inline void SetServiceArn(const Aws::String& value) { m_serviceArnHasBeenSet = true; m_serviceArn = value; }
    inline void SetServiceArn(Aws::String&& value) { m_serviceArnHasBeenSet = true; m_serviceArn = std::move(value); }
    inline void SetServiceArn(const char* value) { m_serviceArnHasBeenSet = true; m_serviceArn.assign(value); }
    inline TaskSet& WithServiceArn(const Aws::String& value) { SetServiceArn(value); return *this;}
    inline TaskSet& WithServiceArn(Aws::String&& value) { SetServiceArn(std::move(value)); return *this;}
    inline TaskSet& WithServiceArn(const char* value) { SetServiceArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the cluster that the service that hosts the
     * task set exists in.</p>
     */
    inline const Aws::String& GetClusterArn() const{ return m_clusterArn; }
    inline bool ClusterArnHasBeenSet() const { return m_clusterArnHasBeenSet; }
    inline void SetClusterArn(const Aws::String& value) { m_clusterArnHasBeenSet = true; m_clusterArn = value; }
    inline void SetClusterArn(Aws::String&& value) { m_clusterArnHasBeenSet = true; m_clusterArn = std::move(value); }
    inline void SetClusterArn(const char* value) { m_clusterArnHasBeenSet = true; m_clusterArn.assign(value); }
    inline TaskSet& WithClusterArn(const Aws::String& value) { SetClusterArn(value); return *this;}
    inline TaskSet& WithClusterArn(Aws::String&& value) { SetClusterArn(std::move(value)); return *this;}
    inline TaskSet& WithClusterArn(const char* value) { SetClusterArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The tag specified when a task set is started. If an CodeDeploy deployment
     * created the task set, the <code>startedBy</code> parameter is
     * <code>CODE_DEPLOY</code>. If an external deployment created the task set, the
     * <code>startedBy</code> field isn't used.</p>
     */
    inline const Aws::String& GetStartedBy() const{ return m_startedBy; }
    inline bool StartedByHasBeenSet() const { return m_startedByHasBeenSet; }
    inline void SetStartedBy(const Aws::String& value) { m_startedByHasBeenSet = true; m_startedBy = value; }
    inline void SetStartedBy(Aws::String&& value) { m_startedByHasBeenSet = true; m_startedBy = std::move(value); }
    inline void SetStartedBy(const char* value) { m_startedByHasBeenSet = true; m_startedBy.assign(value); }
    inline TaskSet& WithStartedBy(const Aws::String& value) { SetStartedBy(value); return *this;}
    inline TaskSet& WithStartedBy(Aws::String&& value) { SetStartedBy(std::move(value)); return *this;}
    inline TaskSet& WithStartedBy(const char* value) { SetStartedBy(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The external ID associated with the task set.</p> <p>If an CodeDeploy
     * deployment created a task set, the <code>externalId</code> parameter contains
     * the CodeDeploy deployment ID.</p> <p>If a task set is created for an external
     * deployment and is associated with a service discovery registry, the
     * <code>externalId</code> parameter contains the
     * <code>ECS_TASK_SET_EXTERNAL_ID</code> Cloud Map attribute.</p>
     */
    inline const Aws::String& GetExternalId() const{ return m_externalId; }
    inline bool ExternalIdHasBeenSet() const { return m_externalIdHasBeenSet; }
    inline void SetExternalId(const Aws::String& value) { m_externalIdHasBeenSet = true; m_externalId = value; }
    inline void SetExternalId(Aws::String&& value) { m_externalIdHasBeenSet = true; m_externalId = std::move(value); }
    inline void SetExternalId(const char* value) { m_externalIdHasBeenSet = true; m_externalId.assign(value); }
    inline TaskSet& WithExternalId(const Aws::String& value) { SetExternalId(value); return *this;}
    inline TaskSet& WithExternalId(Aws::String&& value) { SetExternalId(std::move(value)); return *this;}
    inline TaskSet& WithExternalId(const char* value) { SetExternalId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the task set. The following describes each state.</p> <dl>
     * <dt>PRIMARY</dt> <dd> <p>The task set is serving production traffic.</p> </dd>
     * <dt>ACTIVE</dt> <dd> <p>The task set isn't serving production traffic.</p> </dd>
     * <dt>DRAINING</dt> <dd> <p>The tasks in the task set are being stopped, and their
     * corresponding targets are being deregistered from their target group.</p> </dd>
     * </dl>
     */
    inline const Aws::String& GetStatus() const{ return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(const Aws::String& value) { m_statusHasBeenSet = true; m_status = value; }
    inline void SetStatus(Aws::String&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }
    inline void SetStatus(const char* value) { m_statusHasBeenSet = true; m_status.assign(value); }
    inline TaskSet& WithStatus(const Aws::String& value) { SetStatus(value); return *this;}
    inline TaskSet& WithStatus(Aws::String&& value) { SetStatus(std::move(value)); return *this;}
    inline TaskSet& WithStatus(const char* value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The task definition that the task set is using.</p>
     */
    inline const Aws::String& GetTaskDefinition() const{ return m_taskDefinition; }
    inline bool TaskDefinitionHasBeenSet() const { return m_taskDefinitionHasBeenSet; }
    inline void SetTaskDefinition(const Aws::String& value) { m_taskDefinitionHasBeenSet = true; m_taskDefinition = value; }
    inline void SetTaskDefinition(Aws::String&& value) { m_taskDefinitionHasBeenSet = true; m_taskDefinition = std::move(value); }
    inline void SetTaskDefinition(const char* value) { m_taskDefinitionHasBeenSet = true; m_taskDefinition.assign(value); }
    inline TaskSet& WithTaskDefinition(const Aws::String& value) { SetTaskDefinition(value); return *this;}
    inline TaskSet& WithTaskDefinition(Aws::String&& value) { SetTaskDefinition(std::move(value)); return *this;}
    inline TaskSet& WithTaskDefinition(const char* value) { SetTaskDefinition(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The computed desired count for the task set. This is calculated by
     * multiplying the service's <code>desiredCount</code> by the task set's
     * <code>scale</code> percentage. The result is always rounded up. For example, if
     * the computed desired count is 1.2, it rounds up to 2 tasks.</p>
     */
    inline int GetComputedDesiredCount() const{ return m_computedDesiredCount; }
    inline bool ComputedDesiredCountHasBeenSet() const { return m_computedDesiredCountHasBeenSet; }
    inline void SetComputedDesiredCount(int value) { m_computedDesiredCountHasBeenSet = true; m_computedDesiredCount = value; }
    inline TaskSet& WithComputedDesiredCount(int value) { SetComputedDesiredCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of tasks in the task set that are in the <code>PENDING</code>
     * status during a deployment. A task in the <code>PENDING</code> state is
     * preparing to enter the <code>RUNNING</code> state. A task set enters the
     * <code>PENDING</code> status when it launches for the first time or when it's
     * restarted after being in the <code>STOPPED</code> state.</p>
     */
    inline int GetPendingCount() const{ return m_pendingCount; }
    inline bool PendingCountHasBeenSet() const { return m_pendingCountHasBeenSet; }
    inline void SetPendingCount(int value) { m_pendingCountHasBeenSet = true; m_pendingCount = value; }
    inline TaskSet& WithPendingCount(int value) { SetPendingCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of tasks in the task set that are in the <code>RUNNING</code>
     * status during a deployment. A task in the <code>RUNNING</code> state is running
     * and ready for use.</p>
     */
    inline int GetRunningCount() const{ return m_runningCount; }
    inline bool RunningCountHasBeenSet() const { return m_runningCountHasBeenSet; }
    inline void SetRunningCount(int value) { m_runningCountHasBeenSet = true; m_runningCount = value; }
    inline TaskSet& WithRunningCount(int value) { SetRunningCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Unix timestamp for the time when the task set was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const{ return m_createdAt; }
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }
    inline void SetCreatedAt(const Aws::Utils::DateTime& value) { m_createdAtHasBeenSet = true; m_createdAt = value; }
    inline void SetCreatedAt(Aws::Utils::DateTime&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::move(value); }
    inline TaskSet& WithCreatedAt(const Aws::Utils::DateTime& value) { SetCreatedAt(value); return *this;}
    inline TaskSet& WithCreatedAt(Aws::Utils::DateTime&& value) { SetCreatedAt(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Unix timestamp for the time when the task set was last updated.</p>
     */
    inline const Aws::Utils::DateTime& GetUpdatedAt() const{ return m_updatedAt; }
    inline bool UpdatedAtHasBeenSet() const { return m_updatedAtHasBeenSet; }
    inline void SetUpdatedAt(const Aws::Utils::DateTime& value) { m_updatedAtHasBeenSet = true; m_updatedAt = value; }
    inline void SetUpdatedAt(Aws::Utils::DateTime&& value) { m_updatedAtHasBeenSet = true; m_updatedAt = std::move(value); }
    inline TaskSet& WithUpdatedAt(const Aws::Utils::DateTime& value) { SetUpdatedAt(value); return *this;}
    inline TaskSet& WithUpdatedAt(Aws::Utils::DateTime&& value) { SetUpdatedAt(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The launch type the tasks in the task set are using. For more information,
     * see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/launch_types.html">Amazon
     * ECS launch types</a> in the <i>Amazon Elastic Container Service Developer
     * Guide</i>.</p>
     */
    inline const LaunchType& GetLaunchType() const{ return m_launchType; }
    inline bool LaunchTypeHasBeenSet() const { return m_launchTypeHasBeenSet; }
    inline void SetLaunchType(const LaunchType& value) { m_launchTypeHasBeenSet = true; m_launchType = value; }
    inline void SetLaunchType(LaunchType&& value) { m_launchTypeHasBeenSet = true; m_launchType = std::move(value); }
    inline TaskSet& WithLaunchType(const LaunchType& value) { SetLaunchType(value); return *this;}
    inline TaskSet& WithLaunchType(LaunchType&& value) { SetLaunchType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The capacity provider strategy that are associated with the task set.</p>
     */
    inline const Aws::Vector<CapacityProviderStrategyItem>& GetCapacityProviderStrategy() const{ return m_capacityProviderStrategy; }
    inline bool CapacityProviderStrategyHasBeenSet() const { return m_capacityProviderStrategyHasBeenSet; }
    inline void SetCapacityProviderStrategy(const Aws::Vector<CapacityProviderStrategyItem>& value) { m_capacityProviderStrategyHasBeenSet = true; m_capacityProviderStrategy = value; }
    inline void SetCapacityProviderStrategy(Aws::Vector<CapacityProviderStrategyItem>&& value) { m_capacityProviderStrategyHasBeenSet = true; m_capacityProviderStrategy = std::move(value); }
    inline TaskSet& WithCapacityProviderStrategy(const Aws::Vector<CapacityProviderStrategyItem>& value) { SetCapacityProviderStrategy(value); return *this;}
    inline TaskSet& WithCapacityProviderStrategy(Aws::Vector<CapacityProviderStrategyItem>&& value) { SetCapacityProviderStrategy(std::move(value)); return *this;}
    inline TaskSet& AddCapacityProviderStrategy(const CapacityProviderStrategyItem& value) { m_capacityProviderStrategyHasBeenSet = true; m_capacityProviderStrategy.push_back(value); return *this; }
    inline TaskSet& AddCapacityProviderStrategy(CapacityProviderStrategyItem&& value) { m_capacityProviderStrategyHasBeenSet = true; m_capacityProviderStrategy.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The Fargate platform version where the tasks in the task set are running. A
     * platform version is only specified for tasks run on Fargate. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/platform_versions.html">Fargate
     * platform versions</a> in the <i>Amazon Elastic Container Service Developer
     * Guide</i>.</p>
     */
    inline const Aws::String& GetPlatformVersion() const{ return m_platformVersion; }
    inline bool PlatformVersionHasBeenSet() const { return m_platformVersionHasBeenSet; }
    inline void SetPlatformVersion(const Aws::String& value) { m_platformVersionHasBeenSet = true; m_platformVersion = value; }
    inline void SetPlatformVersion(Aws::String&& value) { m_platformVersionHasBeenSet = true; m_platformVersion = std::move(value); }
    inline void SetPlatformVersion(const char* value) { m_platformVersionHasBeenSet = true; m_platformVersion.assign(value); }
    inline TaskSet& WithPlatformVersion(const Aws::String& value) { SetPlatformVersion(value); return *this;}
    inline TaskSet& WithPlatformVersion(Aws::String&& value) { SetPlatformVersion(std::move(value)); return *this;}
    inline TaskSet& WithPlatformVersion(const char* value) { SetPlatformVersion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The operating system that your tasks in the set are running on. A platform
     * family is specified only for tasks that use the Fargate launch type. </p> <p>
     * All tasks in the set must have the same value.</p>
     */
    inline const Aws::String& GetPlatformFamily() const{ return m_platformFamily; }
    inline bool PlatformFamilyHasBeenSet() const { return m_platformFamilyHasBeenSet; }
    inline void SetPlatformFamily(const Aws::String& value) { m_platformFamilyHasBeenSet = true; m_platformFamily = value; }
    inline void SetPlatformFamily(Aws::String&& value) { m_platformFamilyHasBeenSet = true; m_platformFamily = std::move(value); }
    inline void SetPlatformFamily(const char* value) { m_platformFamilyHasBeenSet = true; m_platformFamily.assign(value); }
    inline TaskSet& WithPlatformFamily(const Aws::String& value) { SetPlatformFamily(value); return *this;}
    inline TaskSet& WithPlatformFamily(Aws::String&& value) { SetPlatformFamily(std::move(value)); return *this;}
    inline TaskSet& WithPlatformFamily(const char* value) { SetPlatformFamily(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The network configuration for the task set.</p>
     */
    inline const NetworkConfiguration& GetNetworkConfiguration() const{ return m_networkConfiguration; }
    inline bool NetworkConfigurationHasBeenSet() const { return m_networkConfigurationHasBeenSet; }
    inline void SetNetworkConfiguration(const NetworkConfiguration& value) { m_networkConfigurationHasBeenSet = true; m_networkConfiguration = value; }
    inline void SetNetworkConfiguration(NetworkConfiguration&& value) { m_networkConfigurationHasBeenSet = true; m_networkConfiguration = std::move(value); }
    inline TaskSet& WithNetworkConfiguration(const NetworkConfiguration& value) { SetNetworkConfiguration(value); return *this;}
    inline TaskSet& WithNetworkConfiguration(NetworkConfiguration&& value) { SetNetworkConfiguration(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Details on a load balancer that are used with a task set.</p>
     */
    inline const Aws::Vector<LoadBalancer>& GetLoadBalancers() const{ return m_loadBalancers; }
    inline bool LoadBalancersHasBeenSet() const { return m_loadBalancersHasBeenSet; }
    inline void SetLoadBalancers(const Aws::Vector<LoadBalancer>& value) { m_loadBalancersHasBeenSet = true; m_loadBalancers = value; }
    inline void SetLoadBalancers(Aws::Vector<LoadBalancer>&& value) { m_loadBalancersHasBeenSet = true; m_loadBalancers = std::move(value); }
    inline TaskSet& WithLoadBalancers(const Aws::Vector<LoadBalancer>& value) { SetLoadBalancers(value); return *this;}
    inline TaskSet& WithLoadBalancers(Aws::Vector<LoadBalancer>&& value) { SetLoadBalancers(std::move(value)); return *this;}
    inline TaskSet& AddLoadBalancers(const LoadBalancer& value) { m_loadBalancersHasBeenSet = true; m_loadBalancers.push_back(value); return *this; }
    inline TaskSet& AddLoadBalancers(LoadBalancer&& value) { m_loadBalancersHasBeenSet = true; m_loadBalancers.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The details for the service discovery registries to assign to this task set.
     * For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/service-discovery.html">Service
     * discovery</a>.</p>
     */
    inline const Aws::Vector<ServiceRegistry>& GetServiceRegistries() const{ return m_serviceRegistries; }
    inline bool ServiceRegistriesHasBeenSet() const { return m_serviceRegistriesHasBeenSet; }
    inline void SetServiceRegistries(const Aws::Vector<ServiceRegistry>& value) { m_serviceRegistriesHasBeenSet = true; m_serviceRegistries = value; }
    inline void SetServiceRegistries(Aws::Vector<ServiceRegistry>&& value) { m_serviceRegistriesHasBeenSet = true; m_serviceRegistries = std::move(value); }
    inline TaskSet& WithServiceRegistries(const Aws::Vector<ServiceRegistry>& value) { SetServiceRegistries(value); return *this;}
    inline TaskSet& WithServiceRegistries(Aws::Vector<ServiceRegistry>&& value) { SetServiceRegistries(std::move(value)); return *this;}
    inline TaskSet& AddServiceRegistries(const ServiceRegistry& value) { m_serviceRegistriesHasBeenSet = true; m_serviceRegistries.push_back(value); return *this; }
    inline TaskSet& AddServiceRegistries(ServiceRegistry&& value) { m_serviceRegistriesHasBeenSet = true; m_serviceRegistries.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A floating-point percentage of your desired number of tasks to place and keep
     * running in the task set.</p>
     */
    inline const Scale& GetScale() const{ return m_scale; }
    inline bool ScaleHasBeenSet() const { return m_scaleHasBeenSet; }
    inline void SetScale(const Scale& value) { m_scaleHasBeenSet = true; m_scale = value; }
    inline void SetScale(Scale&& value) { m_scaleHasBeenSet = true; m_scale = std::move(value); }
    inline TaskSet& WithScale(const Scale& value) { SetScale(value); return *this;}
    inline TaskSet& WithScale(Scale&& value) { SetScale(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The stability status. This indicates whether the task set has reached a
     * steady state. If the following conditions are met, the task set are in
     * <code>STEADY_STATE</code>:</p> <ul> <li> <p>The task <code>runningCount</code>
     * is equal to the <code>computedDesiredCount</code>.</p> </li> <li> <p>The
     * <code>pendingCount</code> is <code>0</code>.</p> </li> <li> <p>There are no
     * tasks that are running on container instances in the <code>DRAINING</code>
     * status.</p> </li> <li> <p>All tasks are reporting a healthy status from the load
     * balancers, service discovery, and container health checks.</p> </li> </ul> <p>If
     * any of those conditions aren't met, the stability status returns
     * <code>STABILIZING</code>.</p>
     */
    inline const StabilityStatus& GetStabilityStatus() const{ return m_stabilityStatus; }
    inline bool StabilityStatusHasBeenSet() const { return m_stabilityStatusHasBeenSet; }
    inline void SetStabilityStatus(const StabilityStatus& value) { m_stabilityStatusHasBeenSet = true; m_stabilityStatus = value; }
    inline void SetStabilityStatus(StabilityStatus&& value) { m_stabilityStatusHasBeenSet = true; m_stabilityStatus = std::move(value); }
    inline TaskSet& WithStabilityStatus(const StabilityStatus& value) { SetStabilityStatus(value); return *this;}
    inline TaskSet& WithStabilityStatus(StabilityStatus&& value) { SetStabilityStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Unix timestamp for the time when the task set stability status was
     * retrieved.</p>
     */
    inline const Aws::Utils::DateTime& GetStabilityStatusAt() const{ return m_stabilityStatusAt; }
    inline bool StabilityStatusAtHasBeenSet() const { return m_stabilityStatusAtHasBeenSet; }
    inline void SetStabilityStatusAt(const Aws::Utils::DateTime& value) { m_stabilityStatusAtHasBeenSet = true; m_stabilityStatusAt = value; }
    inline void SetStabilityStatusAt(Aws::Utils::DateTime&& value) { m_stabilityStatusAtHasBeenSet = true; m_stabilityStatusAt = std::move(value); }
    inline TaskSet& WithStabilityStatusAt(const Aws::Utils::DateTime& value) { SetStabilityStatusAt(value); return *this;}
    inline TaskSet& WithStabilityStatusAt(Aws::Utils::DateTime&& value) { SetStabilityStatusAt(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The metadata that you apply to the task set to help you categorize and
     * organize them. Each tag consists of a key and an optional value. You define
     * both.</p> <p>The following basic restrictions apply to tags:</p> <ul> <li>
     * <p>Maximum number of tags per resource - 50</p> </li> <li> <p>For each resource,
     * each tag key must be unique, and each tag key can have only one value.</p> </li>
     * <li> <p>Maximum key length - 128 Unicode characters in UTF-8</p> </li> <li>
     * <p>Maximum value length - 256 Unicode characters in UTF-8</p> </li> <li> <p>If
     * your tagging schema is used across multiple services and resources, remember
     * that other services may have restrictions on allowed characters. Generally
     * allowed characters are: letters, numbers, and spaces representable in UTF-8, and
     * the following characters: + - = . _ : / @.</p> </li> <li> <p>Tag keys and values
     * are case-sensitive.</p> </li> <li> <p>Do not use <code>aws:</code>,
     * <code>AWS:</code>, or any upper or lowercase combination of such as a prefix for
     * either keys or values as it is reserved for Amazon Web Services use. You cannot
     * edit or delete tag keys or values with this prefix. Tags with this prefix do not
     * count against your tags per resource limit.</p> </li> </ul>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }
    inline TaskSet& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}
    inline TaskSet& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}
    inline TaskSet& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }
    inline TaskSet& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The Fargate ephemeral storage settings for the task set.</p>
     */
    inline const DeploymentEphemeralStorage& GetFargateEphemeralStorage() const{ return m_fargateEphemeralStorage; }
    inline bool FargateEphemeralStorageHasBeenSet() const { return m_fargateEphemeralStorageHasBeenSet; }
    inline void SetFargateEphemeralStorage(const DeploymentEphemeralStorage& value) { m_fargateEphemeralStorageHasBeenSet = true; m_fargateEphemeralStorage = value; }
    inline void SetFargateEphemeralStorage(DeploymentEphemeralStorage&& value) { m_fargateEphemeralStorageHasBeenSet = true; m_fargateEphemeralStorage = std::move(value); }
    inline TaskSet& WithFargateEphemeralStorage(const DeploymentEphemeralStorage& value) { SetFargateEphemeralStorage(value); return *this;}
    inline TaskSet& WithFargateEphemeralStorage(DeploymentEphemeralStorage&& value) { SetFargateEphemeralStorage(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_taskSetArn;
    bool m_taskSetArnHasBeenSet = false;

    Aws::String m_serviceArn;
    bool m_serviceArnHasBeenSet = false;

    Aws::String m_clusterArn;
    bool m_clusterArnHasBeenSet = false;

    Aws::String m_startedBy;
    bool m_startedByHasBeenSet = false;

    Aws::String m_externalId;
    bool m_externalIdHasBeenSet = false;

    Aws::String m_status;
    bool m_statusHasBeenSet = false;

    Aws::String m_taskDefinition;
    bool m_taskDefinitionHasBeenSet = false;

    int m_computedDesiredCount;
    bool m_computedDesiredCountHasBeenSet = false;

    int m_pendingCount;
    bool m_pendingCountHasBeenSet = false;

    int m_runningCount;
    bool m_runningCountHasBeenSet = false;

    Aws::Utils::DateTime m_createdAt;
    bool m_createdAtHasBeenSet = false;

    Aws::Utils::DateTime m_updatedAt;
    bool m_updatedAtHasBeenSet = false;

    LaunchType m_launchType;
    bool m_launchTypeHasBeenSet = false;

    Aws::Vector<CapacityProviderStrategyItem> m_capacityProviderStrategy;
    bool m_capacityProviderStrategyHasBeenSet = false;

    Aws::String m_platformVersion;
    bool m_platformVersionHasBeenSet = false;

    Aws::String m_platformFamily;
    bool m_platformFamilyHasBeenSet = false;

    NetworkConfiguration m_networkConfiguration;
    bool m_networkConfigurationHasBeenSet = false;

    Aws::Vector<LoadBalancer> m_loadBalancers;
    bool m_loadBalancersHasBeenSet = false;

    Aws::Vector<ServiceRegistry> m_serviceRegistries;
    bool m_serviceRegistriesHasBeenSet = false;

    Scale m_scale;
    bool m_scaleHasBeenSet = false;

    StabilityStatus m_stabilityStatus;
    bool m_stabilityStatusHasBeenSet = false;

    Aws::Utils::DateTime m_stabilityStatusAt;
    bool m_stabilityStatusAtHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;

    DeploymentEphemeralStorage m_fargateEphemeralStorage;
    bool m_fargateEphemeralStorageHasBeenSet = false;
  };

} // namespace Model
} // namespace ECS
} // namespace Aws
