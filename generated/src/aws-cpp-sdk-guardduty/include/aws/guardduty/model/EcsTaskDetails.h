/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/guardduty/GuardDuty_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/guardduty/model/Tag.h>
#include <aws/guardduty/model/Volume.h>
#include <aws/guardduty/model/Container.h>
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
namespace GuardDuty
{
namespace Model
{

  /**
   * <p>Contains information about the task in an ECS cluster.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/EcsTaskDetails">AWS
   * API Reference</a></p>
   */
  class EcsTaskDetails
  {
  public:
    AWS_GUARDDUTY_API EcsTaskDetails() = default;
    AWS_GUARDDUTY_API EcsTaskDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_GUARDDUTY_API EcsTaskDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GUARDDUTY_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the task.</p>
     */
    inline const Aws::String& GetArn() const { return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    template<typename ArnT = Aws::String>
    void SetArn(ArnT&& value) { m_arnHasBeenSet = true; m_arn = std::forward<ArnT>(value); }
    template<typename ArnT = Aws::String>
    EcsTaskDetails& WithArn(ArnT&& value) { SetArn(std::forward<ArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the task definition that creates the task.</p>
     */
    inline const Aws::String& GetDefinitionArn() const { return m_definitionArn; }
    inline bool DefinitionArnHasBeenSet() const { return m_definitionArnHasBeenSet; }
    template<typename DefinitionArnT = Aws::String>
    void SetDefinitionArn(DefinitionArnT&& value) { m_definitionArnHasBeenSet = true; m_definitionArn = std::forward<DefinitionArnT>(value); }
    template<typename DefinitionArnT = Aws::String>
    EcsTaskDetails& WithDefinitionArn(DefinitionArnT&& value) { SetDefinitionArn(std::forward<DefinitionArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version counter for the task.</p>
     */
    inline const Aws::String& GetVersion() const { return m_version; }
    inline bool VersionHasBeenSet() const { return m_versionHasBeenSet; }
    template<typename VersionT = Aws::String>
    void SetVersion(VersionT&& value) { m_versionHasBeenSet = true; m_version = std::forward<VersionT>(value); }
    template<typename VersionT = Aws::String>
    EcsTaskDetails& WithVersion(VersionT&& value) { SetVersion(std::forward<VersionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Unix timestamp for the time when the task was created.</p>
     */
    inline const Aws::Utils::DateTime& GetTaskCreatedAt() const { return m_taskCreatedAt; }
    inline bool TaskCreatedAtHasBeenSet() const { return m_taskCreatedAtHasBeenSet; }
    template<typename TaskCreatedAtT = Aws::Utils::DateTime>
    void SetTaskCreatedAt(TaskCreatedAtT&& value) { m_taskCreatedAtHasBeenSet = true; m_taskCreatedAt = std::forward<TaskCreatedAtT>(value); }
    template<typename TaskCreatedAtT = Aws::Utils::DateTime>
    EcsTaskDetails& WithTaskCreatedAt(TaskCreatedAtT&& value) { SetTaskCreatedAt(std::forward<TaskCreatedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Unix timestamp for the time when the task started.</p>
     */
    inline const Aws::Utils::DateTime& GetStartedAt() const { return m_startedAt; }
    inline bool StartedAtHasBeenSet() const { return m_startedAtHasBeenSet; }
    template<typename StartedAtT = Aws::Utils::DateTime>
    void SetStartedAt(StartedAtT&& value) { m_startedAtHasBeenSet = true; m_startedAt = std::forward<StartedAtT>(value); }
    template<typename StartedAtT = Aws::Utils::DateTime>
    EcsTaskDetails& WithStartedAt(StartedAtT&& value) { SetStartedAt(std::forward<StartedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains the tag specified when a task is started.</p>
     */
    inline const Aws::String& GetStartedBy() const { return m_startedBy; }
    inline bool StartedByHasBeenSet() const { return m_startedByHasBeenSet; }
    template<typename StartedByT = Aws::String>
    void SetStartedBy(StartedByT&& value) { m_startedByHasBeenSet = true; m_startedBy = std::forward<StartedByT>(value); }
    template<typename StartedByT = Aws::String>
    EcsTaskDetails& WithStartedBy(StartedByT&& value) { SetStartedBy(std::forward<StartedByT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The tags of the ECS Task.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Vector<Tag>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Vector<Tag>>
    EcsTaskDetails& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsT = Tag>
    EcsTaskDetails& AddTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags.emplace_back(std::forward<TagsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The list of data volume definitions for the task.</p>
     */
    inline const Aws::Vector<Volume>& GetVolumes() const { return m_volumes; }
    inline bool VolumesHasBeenSet() const { return m_volumesHasBeenSet; }
    template<typename VolumesT = Aws::Vector<Volume>>
    void SetVolumes(VolumesT&& value) { m_volumesHasBeenSet = true; m_volumes = std::forward<VolumesT>(value); }
    template<typename VolumesT = Aws::Vector<Volume>>
    EcsTaskDetails& WithVolumes(VolumesT&& value) { SetVolumes(std::forward<VolumesT>(value)); return *this;}
    template<typename VolumesT = Volume>
    EcsTaskDetails& AddVolumes(VolumesT&& value) { m_volumesHasBeenSet = true; m_volumes.emplace_back(std::forward<VolumesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The containers that's associated with the task.</p>
     */
    inline const Aws::Vector<Container>& GetContainers() const { return m_containers; }
    inline bool ContainersHasBeenSet() const { return m_containersHasBeenSet; }
    template<typename ContainersT = Aws::Vector<Container>>
    void SetContainers(ContainersT&& value) { m_containersHasBeenSet = true; m_containers = std::forward<ContainersT>(value); }
    template<typename ContainersT = Aws::Vector<Container>>
    EcsTaskDetails& WithContainers(ContainersT&& value) { SetContainers(std::forward<ContainersT>(value)); return *this;}
    template<typename ContainersT = Container>
    EcsTaskDetails& AddContainers(ContainersT&& value) { m_containersHasBeenSet = true; m_containers.emplace_back(std::forward<ContainersT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The name of the task group that's associated with the task.</p>
     */
    inline const Aws::String& GetGroup() const { return m_group; }
    inline bool GroupHasBeenSet() const { return m_groupHasBeenSet; }
    template<typename GroupT = Aws::String>
    void SetGroup(GroupT&& value) { m_groupHasBeenSet = true; m_group = std::forward<GroupT>(value); }
    template<typename GroupT = Aws::String>
    EcsTaskDetails& WithGroup(GroupT&& value) { SetGroup(std::forward<GroupT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A capacity on which the task is running. For example, <code>Fargate</code>
     * and <code>EC2</code>.</p>
     */
    inline const Aws::String& GetLaunchType() const { return m_launchType; }
    inline bool LaunchTypeHasBeenSet() const { return m_launchTypeHasBeenSet; }
    template<typename LaunchTypeT = Aws::String>
    void SetLaunchType(LaunchTypeT&& value) { m_launchTypeHasBeenSet = true; m_launchType = std::forward<LaunchTypeT>(value); }
    template<typename LaunchTypeT = Aws::String>
    EcsTaskDetails& WithLaunchType(LaunchTypeT&& value) { SetLaunchType(std::forward<LaunchTypeT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::String m_definitionArn;
    bool m_definitionArnHasBeenSet = false;

    Aws::String m_version;
    bool m_versionHasBeenSet = false;

    Aws::Utils::DateTime m_taskCreatedAt{};
    bool m_taskCreatedAtHasBeenSet = false;

    Aws::Utils::DateTime m_startedAt{};
    bool m_startedAtHasBeenSet = false;

    Aws::String m_startedBy;
    bool m_startedByHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;

    Aws::Vector<Volume> m_volumes;
    bool m_volumesHasBeenSet = false;

    Aws::Vector<Container> m_containers;
    bool m_containersHasBeenSet = false;

    Aws::String m_group;
    bool m_groupHasBeenSet = false;

    Aws::String m_launchType;
    bool m_launchTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace GuardDuty
} // namespace Aws
