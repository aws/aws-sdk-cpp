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
    AWS_GUARDDUTY_API EcsTaskDetails();
    AWS_GUARDDUTY_API EcsTaskDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_GUARDDUTY_API EcsTaskDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GUARDDUTY_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the task.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }
    inline EcsTaskDetails& WithArn(const Aws::String& value) { SetArn(value); return *this;}
    inline EcsTaskDetails& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}
    inline EcsTaskDetails& WithArn(const char* value) { SetArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the task definition that creates the task.</p>
     */
    inline const Aws::String& GetDefinitionArn() const{ return m_definitionArn; }
    inline bool DefinitionArnHasBeenSet() const { return m_definitionArnHasBeenSet; }
    inline void SetDefinitionArn(const Aws::String& value) { m_definitionArnHasBeenSet = true; m_definitionArn = value; }
    inline void SetDefinitionArn(Aws::String&& value) { m_definitionArnHasBeenSet = true; m_definitionArn = std::move(value); }
    inline void SetDefinitionArn(const char* value) { m_definitionArnHasBeenSet = true; m_definitionArn.assign(value); }
    inline EcsTaskDetails& WithDefinitionArn(const Aws::String& value) { SetDefinitionArn(value); return *this;}
    inline EcsTaskDetails& WithDefinitionArn(Aws::String&& value) { SetDefinitionArn(std::move(value)); return *this;}
    inline EcsTaskDetails& WithDefinitionArn(const char* value) { SetDefinitionArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version counter for the task.</p>
     */
    inline const Aws::String& GetVersion() const{ return m_version; }
    inline bool VersionHasBeenSet() const { return m_versionHasBeenSet; }
    inline void SetVersion(const Aws::String& value) { m_versionHasBeenSet = true; m_version = value; }
    inline void SetVersion(Aws::String&& value) { m_versionHasBeenSet = true; m_version = std::move(value); }
    inline void SetVersion(const char* value) { m_versionHasBeenSet = true; m_version.assign(value); }
    inline EcsTaskDetails& WithVersion(const Aws::String& value) { SetVersion(value); return *this;}
    inline EcsTaskDetails& WithVersion(Aws::String&& value) { SetVersion(std::move(value)); return *this;}
    inline EcsTaskDetails& WithVersion(const char* value) { SetVersion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Unix timestamp for the time when the task was created.</p>
     */
    inline const Aws::Utils::DateTime& GetTaskCreatedAt() const{ return m_taskCreatedAt; }
    inline bool TaskCreatedAtHasBeenSet() const { return m_taskCreatedAtHasBeenSet; }
    inline void SetTaskCreatedAt(const Aws::Utils::DateTime& value) { m_taskCreatedAtHasBeenSet = true; m_taskCreatedAt = value; }
    inline void SetTaskCreatedAt(Aws::Utils::DateTime&& value) { m_taskCreatedAtHasBeenSet = true; m_taskCreatedAt = std::move(value); }
    inline EcsTaskDetails& WithTaskCreatedAt(const Aws::Utils::DateTime& value) { SetTaskCreatedAt(value); return *this;}
    inline EcsTaskDetails& WithTaskCreatedAt(Aws::Utils::DateTime&& value) { SetTaskCreatedAt(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Unix timestamp for the time when the task started.</p>
     */
    inline const Aws::Utils::DateTime& GetStartedAt() const{ return m_startedAt; }
    inline bool StartedAtHasBeenSet() const { return m_startedAtHasBeenSet; }
    inline void SetStartedAt(const Aws::Utils::DateTime& value) { m_startedAtHasBeenSet = true; m_startedAt = value; }
    inline void SetStartedAt(Aws::Utils::DateTime&& value) { m_startedAtHasBeenSet = true; m_startedAt = std::move(value); }
    inline EcsTaskDetails& WithStartedAt(const Aws::Utils::DateTime& value) { SetStartedAt(value); return *this;}
    inline EcsTaskDetails& WithStartedAt(Aws::Utils::DateTime&& value) { SetStartedAt(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains the tag specified when a task is started.</p>
     */
    inline const Aws::String& GetStartedBy() const{ return m_startedBy; }
    inline bool StartedByHasBeenSet() const { return m_startedByHasBeenSet; }
    inline void SetStartedBy(const Aws::String& value) { m_startedByHasBeenSet = true; m_startedBy = value; }
    inline void SetStartedBy(Aws::String&& value) { m_startedByHasBeenSet = true; m_startedBy = std::move(value); }
    inline void SetStartedBy(const char* value) { m_startedByHasBeenSet = true; m_startedBy.assign(value); }
    inline EcsTaskDetails& WithStartedBy(const Aws::String& value) { SetStartedBy(value); return *this;}
    inline EcsTaskDetails& WithStartedBy(Aws::String&& value) { SetStartedBy(std::move(value)); return *this;}
    inline EcsTaskDetails& WithStartedBy(const char* value) { SetStartedBy(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The tags of the ECS Task.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }
    inline EcsTaskDetails& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}
    inline EcsTaskDetails& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}
    inline EcsTaskDetails& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }
    inline EcsTaskDetails& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The list of data volume definitions for the task.</p>
     */
    inline const Aws::Vector<Volume>& GetVolumes() const{ return m_volumes; }
    inline bool VolumesHasBeenSet() const { return m_volumesHasBeenSet; }
    inline void SetVolumes(const Aws::Vector<Volume>& value) { m_volumesHasBeenSet = true; m_volumes = value; }
    inline void SetVolumes(Aws::Vector<Volume>&& value) { m_volumesHasBeenSet = true; m_volumes = std::move(value); }
    inline EcsTaskDetails& WithVolumes(const Aws::Vector<Volume>& value) { SetVolumes(value); return *this;}
    inline EcsTaskDetails& WithVolumes(Aws::Vector<Volume>&& value) { SetVolumes(std::move(value)); return *this;}
    inline EcsTaskDetails& AddVolumes(const Volume& value) { m_volumesHasBeenSet = true; m_volumes.push_back(value); return *this; }
    inline EcsTaskDetails& AddVolumes(Volume&& value) { m_volumesHasBeenSet = true; m_volumes.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The containers that's associated with the task.</p>
     */
    inline const Aws::Vector<Container>& GetContainers() const{ return m_containers; }
    inline bool ContainersHasBeenSet() const { return m_containersHasBeenSet; }
    inline void SetContainers(const Aws::Vector<Container>& value) { m_containersHasBeenSet = true; m_containers = value; }
    inline void SetContainers(Aws::Vector<Container>&& value) { m_containersHasBeenSet = true; m_containers = std::move(value); }
    inline EcsTaskDetails& WithContainers(const Aws::Vector<Container>& value) { SetContainers(value); return *this;}
    inline EcsTaskDetails& WithContainers(Aws::Vector<Container>&& value) { SetContainers(std::move(value)); return *this;}
    inline EcsTaskDetails& AddContainers(const Container& value) { m_containersHasBeenSet = true; m_containers.push_back(value); return *this; }
    inline EcsTaskDetails& AddContainers(Container&& value) { m_containersHasBeenSet = true; m_containers.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The name of the task group that's associated with the task.</p>
     */
    inline const Aws::String& GetGroup() const{ return m_group; }
    inline bool GroupHasBeenSet() const { return m_groupHasBeenSet; }
    inline void SetGroup(const Aws::String& value) { m_groupHasBeenSet = true; m_group = value; }
    inline void SetGroup(Aws::String&& value) { m_groupHasBeenSet = true; m_group = std::move(value); }
    inline void SetGroup(const char* value) { m_groupHasBeenSet = true; m_group.assign(value); }
    inline EcsTaskDetails& WithGroup(const Aws::String& value) { SetGroup(value); return *this;}
    inline EcsTaskDetails& WithGroup(Aws::String&& value) { SetGroup(std::move(value)); return *this;}
    inline EcsTaskDetails& WithGroup(const char* value) { SetGroup(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A capacity on which the task is running. For example, <code>Fargate</code>
     * and <code>EC2</code>.</p>
     */
    inline const Aws::String& GetLaunchType() const{ return m_launchType; }
    inline bool LaunchTypeHasBeenSet() const { return m_launchTypeHasBeenSet; }
    inline void SetLaunchType(const Aws::String& value) { m_launchTypeHasBeenSet = true; m_launchType = value; }
    inline void SetLaunchType(Aws::String&& value) { m_launchTypeHasBeenSet = true; m_launchType = std::move(value); }
    inline void SetLaunchType(const char* value) { m_launchTypeHasBeenSet = true; m_launchType.assign(value); }
    inline EcsTaskDetails& WithLaunchType(const Aws::String& value) { SetLaunchType(value); return *this;}
    inline EcsTaskDetails& WithLaunchType(Aws::String&& value) { SetLaunchType(std::move(value)); return *this;}
    inline EcsTaskDetails& WithLaunchType(const char* value) { SetLaunchType(value); return *this;}
    ///@}
  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::String m_definitionArn;
    bool m_definitionArnHasBeenSet = false;

    Aws::String m_version;
    bool m_versionHasBeenSet = false;

    Aws::Utils::DateTime m_taskCreatedAt;
    bool m_taskCreatedAtHasBeenSet = false;

    Aws::Utils::DateTime m_startedAt;
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
