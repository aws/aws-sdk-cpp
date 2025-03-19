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
    AWS_ECS_API TaskSet() = default;
    AWS_ECS_API TaskSet(Aws::Utils::Json::JsonView jsonValue);
    AWS_ECS_API TaskSet& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ECS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ID of the task set.</p>
     */
    inline const Aws::String& GetId() const { return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    template<typename IdT = Aws::String>
    void SetId(IdT&& value) { m_idHasBeenSet = true; m_id = std::forward<IdT>(value); }
    template<typename IdT = Aws::String>
    TaskSet& WithId(IdT&& value) { SetId(std::forward<IdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the task set.</p>
     */
    inline const Aws::String& GetTaskSetArn() const { return m_taskSetArn; }
    inline bool TaskSetArnHasBeenSet() const { return m_taskSetArnHasBeenSet; }
    template<typename TaskSetArnT = Aws::String>
    void SetTaskSetArn(TaskSetArnT&& value) { m_taskSetArnHasBeenSet = true; m_taskSetArn = std::forward<TaskSetArnT>(value); }
    template<typename TaskSetArnT = Aws::String>
    TaskSet& WithTaskSetArn(TaskSetArnT&& value) { SetTaskSetArn(std::forward<TaskSetArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the service the task set exists in.</p>
     */
    inline const Aws::String& GetServiceArn() const { return m_serviceArn; }
    inline bool ServiceArnHasBeenSet() const { return m_serviceArnHasBeenSet; }
    template<typename ServiceArnT = Aws::String>
    void SetServiceArn(ServiceArnT&& value) { m_serviceArnHasBeenSet = true; m_serviceArn = std::forward<ServiceArnT>(value); }
    template<typename ServiceArnT = Aws::String>
    TaskSet& WithServiceArn(ServiceArnT&& value) { SetServiceArn(std::forward<ServiceArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the cluster that the service that hosts the
     * task set exists in.</p>
     */
    inline const Aws::String& GetClusterArn() const { return m_clusterArn; }
    inline bool ClusterArnHasBeenSet() const { return m_clusterArnHasBeenSet; }
    template<typename ClusterArnT = Aws::String>
    void SetClusterArn(ClusterArnT&& value) { m_clusterArnHasBeenSet = true; m_clusterArn = std::forward<ClusterArnT>(value); }
    template<typename ClusterArnT = Aws::String>
    TaskSet& WithClusterArn(ClusterArnT&& value) { SetClusterArn(std::forward<ClusterArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The tag specified when a task set is started. If an CodeDeploy deployment
     * created the task set, the <code>startedBy</code> parameter is
     * <code>CODE_DEPLOY</code>. If an external deployment created the task set, the
     * <code>startedBy</code> field isn't used.</p>
     */
    inline const Aws::String& GetStartedBy() const { return m_startedBy; }
    inline bool StartedByHasBeenSet() const { return m_startedByHasBeenSet; }
    template<typename StartedByT = Aws::String>
    void SetStartedBy(StartedByT&& value) { m_startedByHasBeenSet = true; m_startedBy = std::forward<StartedByT>(value); }
    template<typename StartedByT = Aws::String>
    TaskSet& WithStartedBy(StartedByT&& value) { SetStartedBy(std::forward<StartedByT>(value)); return *this;}
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
    inline const Aws::String& GetExternalId() const { return m_externalId; }
    inline bool ExternalIdHasBeenSet() const { return m_externalIdHasBeenSet; }
    template<typename ExternalIdT = Aws::String>
    void SetExternalId(ExternalIdT&& value) { m_externalIdHasBeenSet = true; m_externalId = std::forward<ExternalIdT>(value); }
    template<typename ExternalIdT = Aws::String>
    TaskSet& WithExternalId(ExternalIdT&& value) { SetExternalId(std::forward<ExternalIdT>(value)); return *this;}
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
    inline const Aws::String& GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    template<typename StatusT = Aws::String>
    void SetStatus(StatusT&& value) { m_statusHasBeenSet = true; m_status = std::forward<StatusT>(value); }
    template<typename StatusT = Aws::String>
    TaskSet& WithStatus(StatusT&& value) { SetStatus(std::forward<StatusT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The task definition that the task set is using.</p>
     */
    inline const Aws::String& GetTaskDefinition() const { return m_taskDefinition; }
    inline bool TaskDefinitionHasBeenSet() const { return m_taskDefinitionHasBeenSet; }
    template<typename TaskDefinitionT = Aws::String>
    void SetTaskDefinition(TaskDefinitionT&& value) { m_taskDefinitionHasBeenSet = true; m_taskDefinition = std::forward<TaskDefinitionT>(value); }
    template<typename TaskDefinitionT = Aws::String>
    TaskSet& WithTaskDefinition(TaskDefinitionT&& value) { SetTaskDefinition(std::forward<TaskDefinitionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The computed desired count for the task set. This is calculated by
     * multiplying the service's <code>desiredCount</code> by the task set's
     * <code>scale</code> percentage. The result is always rounded up. For example, if
     * the computed desired count is 1.2, it rounds up to 2 tasks.</p>
     */
    inline int GetComputedDesiredCount() const { return m_computedDesiredCount; }
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
    inline int GetPendingCount() const { return m_pendingCount; }
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
    inline int GetRunningCount() const { return m_runningCount; }
    inline bool RunningCountHasBeenSet() const { return m_runningCountHasBeenSet; }
    inline void SetRunningCount(int value) { m_runningCountHasBeenSet = true; m_runningCount = value; }
    inline TaskSet& WithRunningCount(int value) { SetRunningCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Unix timestamp for the time when the task set was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    void SetCreatedAt(CreatedAtT&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::forward<CreatedAtT>(value); }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    TaskSet& WithCreatedAt(CreatedAtT&& value) { SetCreatedAt(std::forward<CreatedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Unix timestamp for the time when the task set was last updated.</p>
     */
    inline const Aws::Utils::DateTime& GetUpdatedAt() const { return m_updatedAt; }
    inline bool UpdatedAtHasBeenSet() const { return m_updatedAtHasBeenSet; }
    template<typename UpdatedAtT = Aws::Utils::DateTime>
    void SetUpdatedAt(UpdatedAtT&& value) { m_updatedAtHasBeenSet = true; m_updatedAt = std::forward<UpdatedAtT>(value); }
    template<typename UpdatedAtT = Aws::Utils::DateTime>
    TaskSet& WithUpdatedAt(UpdatedAtT&& value) { SetUpdatedAt(std::forward<UpdatedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The launch type the tasks in the task set are using. For more information,
     * see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/launch_types.html">Amazon
     * ECS launch types</a> in the <i>Amazon Elastic Container Service Developer
     * Guide</i>.</p>
     */
    inline LaunchType GetLaunchType() const { return m_launchType; }
    inline bool LaunchTypeHasBeenSet() const { return m_launchTypeHasBeenSet; }
    inline void SetLaunchType(LaunchType value) { m_launchTypeHasBeenSet = true; m_launchType = value; }
    inline TaskSet& WithLaunchType(LaunchType value) { SetLaunchType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The capacity provider strategy that are associated with the task set.</p>
     */
    inline const Aws::Vector<CapacityProviderStrategyItem>& GetCapacityProviderStrategy() const { return m_capacityProviderStrategy; }
    inline bool CapacityProviderStrategyHasBeenSet() const { return m_capacityProviderStrategyHasBeenSet; }
    template<typename CapacityProviderStrategyT = Aws::Vector<CapacityProviderStrategyItem>>
    void SetCapacityProviderStrategy(CapacityProviderStrategyT&& value) { m_capacityProviderStrategyHasBeenSet = true; m_capacityProviderStrategy = std::forward<CapacityProviderStrategyT>(value); }
    template<typename CapacityProviderStrategyT = Aws::Vector<CapacityProviderStrategyItem>>
    TaskSet& WithCapacityProviderStrategy(CapacityProviderStrategyT&& value) { SetCapacityProviderStrategy(std::forward<CapacityProviderStrategyT>(value)); return *this;}
    template<typename CapacityProviderStrategyT = CapacityProviderStrategyItem>
    TaskSet& AddCapacityProviderStrategy(CapacityProviderStrategyT&& value) { m_capacityProviderStrategyHasBeenSet = true; m_capacityProviderStrategy.emplace_back(std::forward<CapacityProviderStrategyT>(value)); return *this; }
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
    inline const Aws::String& GetPlatformVersion() const { return m_platformVersion; }
    inline bool PlatformVersionHasBeenSet() const { return m_platformVersionHasBeenSet; }
    template<typename PlatformVersionT = Aws::String>
    void SetPlatformVersion(PlatformVersionT&& value) { m_platformVersionHasBeenSet = true; m_platformVersion = std::forward<PlatformVersionT>(value); }
    template<typename PlatformVersionT = Aws::String>
    TaskSet& WithPlatformVersion(PlatformVersionT&& value) { SetPlatformVersion(std::forward<PlatformVersionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The operating system that your tasks in the set are running on. A platform
     * family is specified only for tasks that use the Fargate launch type. </p> <p>
     * All tasks in the set must have the same value.</p>
     */
    inline const Aws::String& GetPlatformFamily() const { return m_platformFamily; }
    inline bool PlatformFamilyHasBeenSet() const { return m_platformFamilyHasBeenSet; }
    template<typename PlatformFamilyT = Aws::String>
    void SetPlatformFamily(PlatformFamilyT&& value) { m_platformFamilyHasBeenSet = true; m_platformFamily = std::forward<PlatformFamilyT>(value); }
    template<typename PlatformFamilyT = Aws::String>
    TaskSet& WithPlatformFamily(PlatformFamilyT&& value) { SetPlatformFamily(std::forward<PlatformFamilyT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The network configuration for the task set.</p>
     */
    inline const NetworkConfiguration& GetNetworkConfiguration() const { return m_networkConfiguration; }
    inline bool NetworkConfigurationHasBeenSet() const { return m_networkConfigurationHasBeenSet; }
    template<typename NetworkConfigurationT = NetworkConfiguration>
    void SetNetworkConfiguration(NetworkConfigurationT&& value) { m_networkConfigurationHasBeenSet = true; m_networkConfiguration = std::forward<NetworkConfigurationT>(value); }
    template<typename NetworkConfigurationT = NetworkConfiguration>
    TaskSet& WithNetworkConfiguration(NetworkConfigurationT&& value) { SetNetworkConfiguration(std::forward<NetworkConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Details on a load balancer that are used with a task set.</p>
     */
    inline const Aws::Vector<LoadBalancer>& GetLoadBalancers() const { return m_loadBalancers; }
    inline bool LoadBalancersHasBeenSet() const { return m_loadBalancersHasBeenSet; }
    template<typename LoadBalancersT = Aws::Vector<LoadBalancer>>
    void SetLoadBalancers(LoadBalancersT&& value) { m_loadBalancersHasBeenSet = true; m_loadBalancers = std::forward<LoadBalancersT>(value); }
    template<typename LoadBalancersT = Aws::Vector<LoadBalancer>>
    TaskSet& WithLoadBalancers(LoadBalancersT&& value) { SetLoadBalancers(std::forward<LoadBalancersT>(value)); return *this;}
    template<typename LoadBalancersT = LoadBalancer>
    TaskSet& AddLoadBalancers(LoadBalancersT&& value) { m_loadBalancersHasBeenSet = true; m_loadBalancers.emplace_back(std::forward<LoadBalancersT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The details for the service discovery registries to assign to this task set.
     * For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/service-discovery.html">Service
     * discovery</a>.</p>
     */
    inline const Aws::Vector<ServiceRegistry>& GetServiceRegistries() const { return m_serviceRegistries; }
    inline bool ServiceRegistriesHasBeenSet() const { return m_serviceRegistriesHasBeenSet; }
    template<typename ServiceRegistriesT = Aws::Vector<ServiceRegistry>>
    void SetServiceRegistries(ServiceRegistriesT&& value) { m_serviceRegistriesHasBeenSet = true; m_serviceRegistries = std::forward<ServiceRegistriesT>(value); }
    template<typename ServiceRegistriesT = Aws::Vector<ServiceRegistry>>
    TaskSet& WithServiceRegistries(ServiceRegistriesT&& value) { SetServiceRegistries(std::forward<ServiceRegistriesT>(value)); return *this;}
    template<typename ServiceRegistriesT = ServiceRegistry>
    TaskSet& AddServiceRegistries(ServiceRegistriesT&& value) { m_serviceRegistriesHasBeenSet = true; m_serviceRegistries.emplace_back(std::forward<ServiceRegistriesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A floating-point percentage of your desired number of tasks to place and keep
     * running in the task set.</p>
     */
    inline const Scale& GetScale() const { return m_scale; }
    inline bool ScaleHasBeenSet() const { return m_scaleHasBeenSet; }
    template<typename ScaleT = Scale>
    void SetScale(ScaleT&& value) { m_scaleHasBeenSet = true; m_scale = std::forward<ScaleT>(value); }
    template<typename ScaleT = Scale>
    TaskSet& WithScale(ScaleT&& value) { SetScale(std::forward<ScaleT>(value)); return *this;}
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
    inline StabilityStatus GetStabilityStatus() const { return m_stabilityStatus; }
    inline bool StabilityStatusHasBeenSet() const { return m_stabilityStatusHasBeenSet; }
    inline void SetStabilityStatus(StabilityStatus value) { m_stabilityStatusHasBeenSet = true; m_stabilityStatus = value; }
    inline TaskSet& WithStabilityStatus(StabilityStatus value) { SetStabilityStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Unix timestamp for the time when the task set stability status was
     * retrieved.</p>
     */
    inline const Aws::Utils::DateTime& GetStabilityStatusAt() const { return m_stabilityStatusAt; }
    inline bool StabilityStatusAtHasBeenSet() const { return m_stabilityStatusAtHasBeenSet; }
    template<typename StabilityStatusAtT = Aws::Utils::DateTime>
    void SetStabilityStatusAt(StabilityStatusAtT&& value) { m_stabilityStatusAtHasBeenSet = true; m_stabilityStatusAt = std::forward<StabilityStatusAtT>(value); }
    template<typename StabilityStatusAtT = Aws::Utils::DateTime>
    TaskSet& WithStabilityStatusAt(StabilityStatusAtT&& value) { SetStabilityStatusAt(std::forward<StabilityStatusAtT>(value)); return *this;}
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
    inline const Aws::Vector<Tag>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Vector<Tag>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Vector<Tag>>
    TaskSet& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsT = Tag>
    TaskSet& AddTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags.emplace_back(std::forward<TagsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The Fargate ephemeral storage settings for the task set.</p>
     */
    inline const DeploymentEphemeralStorage& GetFargateEphemeralStorage() const { return m_fargateEphemeralStorage; }
    inline bool FargateEphemeralStorageHasBeenSet() const { return m_fargateEphemeralStorageHasBeenSet; }
    template<typename FargateEphemeralStorageT = DeploymentEphemeralStorage>
    void SetFargateEphemeralStorage(FargateEphemeralStorageT&& value) { m_fargateEphemeralStorageHasBeenSet = true; m_fargateEphemeralStorage = std::forward<FargateEphemeralStorageT>(value); }
    template<typename FargateEphemeralStorageT = DeploymentEphemeralStorage>
    TaskSet& WithFargateEphemeralStorage(FargateEphemeralStorageT&& value) { SetFargateEphemeralStorage(std::forward<FargateEphemeralStorageT>(value)); return *this;}
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

    int m_computedDesiredCount{0};
    bool m_computedDesiredCountHasBeenSet = false;

    int m_pendingCount{0};
    bool m_pendingCountHasBeenSet = false;

    int m_runningCount{0};
    bool m_runningCountHasBeenSet = false;

    Aws::Utils::DateTime m_createdAt{};
    bool m_createdAtHasBeenSet = false;

    Aws::Utils::DateTime m_updatedAt{};
    bool m_updatedAtHasBeenSet = false;

    LaunchType m_launchType{LaunchType::NOT_SET};
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

    StabilityStatus m_stabilityStatus{StabilityStatus::NOT_SET};
    bool m_stabilityStatusHasBeenSet = false;

    Aws::Utils::DateTime m_stabilityStatusAt{};
    bool m_stabilityStatusAtHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;

    DeploymentEphemeralStorage m_fargateEphemeralStorage;
    bool m_fargateEphemeralStorageHasBeenSet = false;
  };

} // namespace Model
} // namespace ECS
} // namespace Aws
