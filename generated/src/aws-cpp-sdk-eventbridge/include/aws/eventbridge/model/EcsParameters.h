/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/eventbridge/EventBridge_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/eventbridge/model/LaunchType.h>
#include <aws/eventbridge/model/NetworkConfiguration.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/eventbridge/model/PropagateTags.h>
#include <aws/eventbridge/model/CapacityProviderStrategyItem.h>
#include <aws/eventbridge/model/PlacementConstraint.h>
#include <aws/eventbridge/model/PlacementStrategy.h>
#include <aws/eventbridge/model/Tag.h>
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
namespace EventBridge
{
namespace Model
{

  /**
   * <p>The custom parameters to be used when the target is an Amazon ECS
   * task.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/eventbridge-2015-10-07/EcsParameters">AWS
   * API Reference</a></p>
   */
  class EcsParameters
  {
  public:
    AWS_EVENTBRIDGE_API EcsParameters() = default;
    AWS_EVENTBRIDGE_API EcsParameters(Aws::Utils::Json::JsonView jsonValue);
    AWS_EVENTBRIDGE_API EcsParameters& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_EVENTBRIDGE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ARN of the task definition to use if the event target is an Amazon ECS
     * task. </p>
     */
    inline const Aws::String& GetTaskDefinitionArn() const { return m_taskDefinitionArn; }
    inline bool TaskDefinitionArnHasBeenSet() const { return m_taskDefinitionArnHasBeenSet; }
    template<typename TaskDefinitionArnT = Aws::String>
    void SetTaskDefinitionArn(TaskDefinitionArnT&& value) { m_taskDefinitionArnHasBeenSet = true; m_taskDefinitionArn = std::forward<TaskDefinitionArnT>(value); }
    template<typename TaskDefinitionArnT = Aws::String>
    EcsParameters& WithTaskDefinitionArn(TaskDefinitionArnT&& value) { SetTaskDefinitionArn(std::forward<TaskDefinitionArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of tasks to create based on <code>TaskDefinition</code>. The
     * default is 1.</p>
     */
    inline int GetTaskCount() const { return m_taskCount; }
    inline bool TaskCountHasBeenSet() const { return m_taskCountHasBeenSet; }
    inline void SetTaskCount(int value) { m_taskCountHasBeenSet = true; m_taskCount = value; }
    inline EcsParameters& WithTaskCount(int value) { SetTaskCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the launch type on which your task is running. The launch type that
     * you specify here must match one of the launch type (compatibilities) of the
     * target task. The <code>FARGATE</code> value is supported only in the Regions
     * where Fargate with Amazon ECS is supported. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/AWS-Fargate.html">Fargate
     * on Amazon ECS</a> in the <i>Amazon Elastic Container Service Developer
     * Guide</i>.</p>
     */
    inline LaunchType GetLaunchType() const { return m_launchType; }
    inline bool LaunchTypeHasBeenSet() const { return m_launchTypeHasBeenSet; }
    inline void SetLaunchType(LaunchType value) { m_launchTypeHasBeenSet = true; m_launchType = value; }
    inline EcsParameters& WithLaunchType(LaunchType value) { SetLaunchType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Use this structure if the Amazon ECS task uses the <code>awsvpc</code>
     * network mode. This structure specifies the VPC subnets and security groups
     * associated with the task, and whether a public IP address is to be used. This
     * structure is required if <code>LaunchType</code> is <code>FARGATE</code> because
     * the <code>awsvpc</code> mode is required for Fargate tasks.</p> <p>If you
     * specify <code>NetworkConfiguration</code> when the target ECS task does not use
     * the <code>awsvpc</code> network mode, the task fails.</p>
     */
    inline const NetworkConfiguration& GetNetworkConfiguration() const { return m_networkConfiguration; }
    inline bool NetworkConfigurationHasBeenSet() const { return m_networkConfigurationHasBeenSet; }
    template<typename NetworkConfigurationT = NetworkConfiguration>
    void SetNetworkConfiguration(NetworkConfigurationT&& value) { m_networkConfigurationHasBeenSet = true; m_networkConfiguration = std::forward<NetworkConfigurationT>(value); }
    template<typename NetworkConfigurationT = NetworkConfiguration>
    EcsParameters& WithNetworkConfiguration(NetworkConfigurationT&& value) { SetNetworkConfiguration(std::forward<NetworkConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the platform version for the task. Specify only the numeric portion
     * of the platform version, such as <code>1.1.0</code>.</p> <p>This structure is
     * used only if <code>LaunchType</code> is <code>FARGATE</code>. For more
     * information about valid platform versions, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/platform_versions.html">Fargate
     * Platform Versions</a> in the <i>Amazon Elastic Container Service Developer
     * Guide</i>.</p>
     */
    inline const Aws::String& GetPlatformVersion() const { return m_platformVersion; }
    inline bool PlatformVersionHasBeenSet() const { return m_platformVersionHasBeenSet; }
    template<typename PlatformVersionT = Aws::String>
    void SetPlatformVersion(PlatformVersionT&& value) { m_platformVersionHasBeenSet = true; m_platformVersion = std::forward<PlatformVersionT>(value); }
    template<typename PlatformVersionT = Aws::String>
    EcsParameters& WithPlatformVersion(PlatformVersionT&& value) { SetPlatformVersion(std::forward<PlatformVersionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies an ECS task group for the task. The maximum length is 255
     * characters.</p>
     */
    inline const Aws::String& GetGroup() const { return m_group; }
    inline bool GroupHasBeenSet() const { return m_groupHasBeenSet; }
    template<typename GroupT = Aws::String>
    void SetGroup(GroupT&& value) { m_groupHasBeenSet = true; m_group = std::forward<GroupT>(value); }
    template<typename GroupT = Aws::String>
    EcsParameters& WithGroup(GroupT&& value) { SetGroup(std::forward<GroupT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The capacity provider strategy to use for the task.</p> <p>If a
     * <code>capacityProviderStrategy</code> is specified, the <code>launchType</code>
     * parameter must be omitted. If no <code>capacityProviderStrategy</code> or
     * launchType is specified, the <code>defaultCapacityProviderStrategy</code> for
     * the cluster is used. </p>
     */
    inline const Aws::Vector<CapacityProviderStrategyItem>& GetCapacityProviderStrategy() const { return m_capacityProviderStrategy; }
    inline bool CapacityProviderStrategyHasBeenSet() const { return m_capacityProviderStrategyHasBeenSet; }
    template<typename CapacityProviderStrategyT = Aws::Vector<CapacityProviderStrategyItem>>
    void SetCapacityProviderStrategy(CapacityProviderStrategyT&& value) { m_capacityProviderStrategyHasBeenSet = true; m_capacityProviderStrategy = std::forward<CapacityProviderStrategyT>(value); }
    template<typename CapacityProviderStrategyT = Aws::Vector<CapacityProviderStrategyItem>>
    EcsParameters& WithCapacityProviderStrategy(CapacityProviderStrategyT&& value) { SetCapacityProviderStrategy(std::forward<CapacityProviderStrategyT>(value)); return *this;}
    template<typename CapacityProviderStrategyT = CapacityProviderStrategyItem>
    EcsParameters& AddCapacityProviderStrategy(CapacityProviderStrategyT&& value) { m_capacityProviderStrategyHasBeenSet = true; m_capacityProviderStrategy.emplace_back(std::forward<CapacityProviderStrategyT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Specifies whether to enable Amazon ECS managed tags for the task. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/ecs-using-tags.html">Tagging
     * Your Amazon ECS Resources</a> in the Amazon Elastic Container Service Developer
     * Guide. </p>
     */
    inline bool GetEnableECSManagedTags() const { return m_enableECSManagedTags; }
    inline bool EnableECSManagedTagsHasBeenSet() const { return m_enableECSManagedTagsHasBeenSet; }
    inline void SetEnableECSManagedTags(bool value) { m_enableECSManagedTagsHasBeenSet = true; m_enableECSManagedTags = value; }
    inline EcsParameters& WithEnableECSManagedTags(bool value) { SetEnableECSManagedTags(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Whether or not to enable the execute command functionality for the containers
     * in this task. If true, this enables execute command functionality on all
     * containers in the task.</p>
     */
    inline bool GetEnableExecuteCommand() const { return m_enableExecuteCommand; }
    inline bool EnableExecuteCommandHasBeenSet() const { return m_enableExecuteCommandHasBeenSet; }
    inline void SetEnableExecuteCommand(bool value) { m_enableExecuteCommandHasBeenSet = true; m_enableExecuteCommand = value; }
    inline EcsParameters& WithEnableExecuteCommand(bool value) { SetEnableExecuteCommand(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array of placement constraint objects to use for the task. You can specify
     * up to 10 constraints per task (including constraints in the task definition and
     * those specified at runtime).</p>
     */
    inline const Aws::Vector<PlacementConstraint>& GetPlacementConstraints() const { return m_placementConstraints; }
    inline bool PlacementConstraintsHasBeenSet() const { return m_placementConstraintsHasBeenSet; }
    template<typename PlacementConstraintsT = Aws::Vector<PlacementConstraint>>
    void SetPlacementConstraints(PlacementConstraintsT&& value) { m_placementConstraintsHasBeenSet = true; m_placementConstraints = std::forward<PlacementConstraintsT>(value); }
    template<typename PlacementConstraintsT = Aws::Vector<PlacementConstraint>>
    EcsParameters& WithPlacementConstraints(PlacementConstraintsT&& value) { SetPlacementConstraints(std::forward<PlacementConstraintsT>(value)); return *this;}
    template<typename PlacementConstraintsT = PlacementConstraint>
    EcsParameters& AddPlacementConstraints(PlacementConstraintsT&& value) { m_placementConstraintsHasBeenSet = true; m_placementConstraints.emplace_back(std::forward<PlacementConstraintsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The placement strategy objects to use for the task. You can specify a maximum
     * of five strategy rules per task. </p>
     */
    inline const Aws::Vector<PlacementStrategy>& GetPlacementStrategy() const { return m_placementStrategy; }
    inline bool PlacementStrategyHasBeenSet() const { return m_placementStrategyHasBeenSet; }
    template<typename PlacementStrategyT = Aws::Vector<PlacementStrategy>>
    void SetPlacementStrategy(PlacementStrategyT&& value) { m_placementStrategyHasBeenSet = true; m_placementStrategy = std::forward<PlacementStrategyT>(value); }
    template<typename PlacementStrategyT = Aws::Vector<PlacementStrategy>>
    EcsParameters& WithPlacementStrategy(PlacementStrategyT&& value) { SetPlacementStrategy(std::forward<PlacementStrategyT>(value)); return *this;}
    template<typename PlacementStrategyT = PlacementStrategy>
    EcsParameters& AddPlacementStrategy(PlacementStrategyT&& value) { m_placementStrategyHasBeenSet = true; m_placementStrategy.emplace_back(std::forward<PlacementStrategyT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Specifies whether to propagate the tags from the task definition to the task.
     * If no value is specified, the tags are not propagated. Tags can only be
     * propagated to the task during task creation. To add tags to a task after task
     * creation, use the TagResource API action. </p>
     */
    inline PropagateTags GetPropagateTags() const { return m_propagateTags; }
    inline bool PropagateTagsHasBeenSet() const { return m_propagateTagsHasBeenSet; }
    inline void SetPropagateTags(PropagateTags value) { m_propagateTagsHasBeenSet = true; m_propagateTags = value; }
    inline EcsParameters& WithPropagateTags(PropagateTags value) { SetPropagateTags(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The reference ID to use for the task.</p>
     */
    inline const Aws::String& GetReferenceId() const { return m_referenceId; }
    inline bool ReferenceIdHasBeenSet() const { return m_referenceIdHasBeenSet; }
    template<typename ReferenceIdT = Aws::String>
    void SetReferenceId(ReferenceIdT&& value) { m_referenceIdHasBeenSet = true; m_referenceId = std::forward<ReferenceIdT>(value); }
    template<typename ReferenceIdT = Aws::String>
    EcsParameters& WithReferenceId(ReferenceIdT&& value) { SetReferenceId(std::forward<ReferenceIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The metadata that you apply to the task to help you categorize and organize
     * them. Each tag consists of a key and an optional value, both of which you
     * define. To learn more, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/APIReference/API_RunTask.html#ECS-RunTask-request-tags">RunTask</a>
     * in the Amazon ECS API Reference.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Vector<Tag>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Vector<Tag>>
    EcsParameters& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsT = Tag>
    EcsParameters& AddTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags.emplace_back(std::forward<TagsT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_taskDefinitionArn;
    bool m_taskDefinitionArnHasBeenSet = false;

    int m_taskCount{0};
    bool m_taskCountHasBeenSet = false;

    LaunchType m_launchType{LaunchType::NOT_SET};
    bool m_launchTypeHasBeenSet = false;

    NetworkConfiguration m_networkConfiguration;
    bool m_networkConfigurationHasBeenSet = false;

    Aws::String m_platformVersion;
    bool m_platformVersionHasBeenSet = false;

    Aws::String m_group;
    bool m_groupHasBeenSet = false;

    Aws::Vector<CapacityProviderStrategyItem> m_capacityProviderStrategy;
    bool m_capacityProviderStrategyHasBeenSet = false;

    bool m_enableECSManagedTags{false};
    bool m_enableECSManagedTagsHasBeenSet = false;

    bool m_enableExecuteCommand{false};
    bool m_enableExecuteCommandHasBeenSet = false;

    Aws::Vector<PlacementConstraint> m_placementConstraints;
    bool m_placementConstraintsHasBeenSet = false;

    Aws::Vector<PlacementStrategy> m_placementStrategy;
    bool m_placementStrategyHasBeenSet = false;

    PropagateTags m_propagateTags{PropagateTags::NOT_SET};
    bool m_propagateTagsHasBeenSet = false;

    Aws::String m_referenceId;
    bool m_referenceIdHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace EventBridge
} // namespace Aws
