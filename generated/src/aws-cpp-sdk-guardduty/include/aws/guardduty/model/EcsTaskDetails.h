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


    /**
     * <p>The Amazon Resource Name (ARN) of the task.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the task.</p>
     */
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the task.</p>
     */
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the task.</p>
     */
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the task.</p>
     */
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the task.</p>
     */
    inline EcsTaskDetails& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the task.</p>
     */
    inline EcsTaskDetails& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the task.</p>
     */
    inline EcsTaskDetails& WithArn(const char* value) { SetArn(value); return *this;}


    /**
     * <p>The ARN of the task definition that creates the task.</p>
     */
    inline const Aws::String& GetDefinitionArn() const{ return m_definitionArn; }

    /**
     * <p>The ARN of the task definition that creates the task.</p>
     */
    inline bool DefinitionArnHasBeenSet() const { return m_definitionArnHasBeenSet; }

    /**
     * <p>The ARN of the task definition that creates the task.</p>
     */
    inline void SetDefinitionArn(const Aws::String& value) { m_definitionArnHasBeenSet = true; m_definitionArn = value; }

    /**
     * <p>The ARN of the task definition that creates the task.</p>
     */
    inline void SetDefinitionArn(Aws::String&& value) { m_definitionArnHasBeenSet = true; m_definitionArn = std::move(value); }

    /**
     * <p>The ARN of the task definition that creates the task.</p>
     */
    inline void SetDefinitionArn(const char* value) { m_definitionArnHasBeenSet = true; m_definitionArn.assign(value); }

    /**
     * <p>The ARN of the task definition that creates the task.</p>
     */
    inline EcsTaskDetails& WithDefinitionArn(const Aws::String& value) { SetDefinitionArn(value); return *this;}

    /**
     * <p>The ARN of the task definition that creates the task.</p>
     */
    inline EcsTaskDetails& WithDefinitionArn(Aws::String&& value) { SetDefinitionArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the task definition that creates the task.</p>
     */
    inline EcsTaskDetails& WithDefinitionArn(const char* value) { SetDefinitionArn(value); return *this;}


    /**
     * <p>The version counter for the task.</p>
     */
    inline const Aws::String& GetVersion() const{ return m_version; }

    /**
     * <p>The version counter for the task.</p>
     */
    inline bool VersionHasBeenSet() const { return m_versionHasBeenSet; }

    /**
     * <p>The version counter for the task.</p>
     */
    inline void SetVersion(const Aws::String& value) { m_versionHasBeenSet = true; m_version = value; }

    /**
     * <p>The version counter for the task.</p>
     */
    inline void SetVersion(Aws::String&& value) { m_versionHasBeenSet = true; m_version = std::move(value); }

    /**
     * <p>The version counter for the task.</p>
     */
    inline void SetVersion(const char* value) { m_versionHasBeenSet = true; m_version.assign(value); }

    /**
     * <p>The version counter for the task.</p>
     */
    inline EcsTaskDetails& WithVersion(const Aws::String& value) { SetVersion(value); return *this;}

    /**
     * <p>The version counter for the task.</p>
     */
    inline EcsTaskDetails& WithVersion(Aws::String&& value) { SetVersion(std::move(value)); return *this;}

    /**
     * <p>The version counter for the task.</p>
     */
    inline EcsTaskDetails& WithVersion(const char* value) { SetVersion(value); return *this;}


    /**
     * <p>The Unix timestamp for the time when the task was created.</p>
     */
    inline const Aws::Utils::DateTime& GetTaskCreatedAt() const{ return m_taskCreatedAt; }

    /**
     * <p>The Unix timestamp for the time when the task was created.</p>
     */
    inline bool TaskCreatedAtHasBeenSet() const { return m_taskCreatedAtHasBeenSet; }

    /**
     * <p>The Unix timestamp for the time when the task was created.</p>
     */
    inline void SetTaskCreatedAt(const Aws::Utils::DateTime& value) { m_taskCreatedAtHasBeenSet = true; m_taskCreatedAt = value; }

    /**
     * <p>The Unix timestamp for the time when the task was created.</p>
     */
    inline void SetTaskCreatedAt(Aws::Utils::DateTime&& value) { m_taskCreatedAtHasBeenSet = true; m_taskCreatedAt = std::move(value); }

    /**
     * <p>The Unix timestamp for the time when the task was created.</p>
     */
    inline EcsTaskDetails& WithTaskCreatedAt(const Aws::Utils::DateTime& value) { SetTaskCreatedAt(value); return *this;}

    /**
     * <p>The Unix timestamp for the time when the task was created.</p>
     */
    inline EcsTaskDetails& WithTaskCreatedAt(Aws::Utils::DateTime&& value) { SetTaskCreatedAt(std::move(value)); return *this;}


    /**
     * <p>The Unix timestamp for the time when the task started.</p>
     */
    inline const Aws::Utils::DateTime& GetStartedAt() const{ return m_startedAt; }

    /**
     * <p>The Unix timestamp for the time when the task started.</p>
     */
    inline bool StartedAtHasBeenSet() const { return m_startedAtHasBeenSet; }

    /**
     * <p>The Unix timestamp for the time when the task started.</p>
     */
    inline void SetStartedAt(const Aws::Utils::DateTime& value) { m_startedAtHasBeenSet = true; m_startedAt = value; }

    /**
     * <p>The Unix timestamp for the time when the task started.</p>
     */
    inline void SetStartedAt(Aws::Utils::DateTime&& value) { m_startedAtHasBeenSet = true; m_startedAt = std::move(value); }

    /**
     * <p>The Unix timestamp for the time when the task started.</p>
     */
    inline EcsTaskDetails& WithStartedAt(const Aws::Utils::DateTime& value) { SetStartedAt(value); return *this;}

    /**
     * <p>The Unix timestamp for the time when the task started.</p>
     */
    inline EcsTaskDetails& WithStartedAt(Aws::Utils::DateTime&& value) { SetStartedAt(std::move(value)); return *this;}


    /**
     * <p>Contains the tag specified when a task is started.</p>
     */
    inline const Aws::String& GetStartedBy() const{ return m_startedBy; }

    /**
     * <p>Contains the tag specified when a task is started.</p>
     */
    inline bool StartedByHasBeenSet() const { return m_startedByHasBeenSet; }

    /**
     * <p>Contains the tag specified when a task is started.</p>
     */
    inline void SetStartedBy(const Aws::String& value) { m_startedByHasBeenSet = true; m_startedBy = value; }

    /**
     * <p>Contains the tag specified when a task is started.</p>
     */
    inline void SetStartedBy(Aws::String&& value) { m_startedByHasBeenSet = true; m_startedBy = std::move(value); }

    /**
     * <p>Contains the tag specified when a task is started.</p>
     */
    inline void SetStartedBy(const char* value) { m_startedByHasBeenSet = true; m_startedBy.assign(value); }

    /**
     * <p>Contains the tag specified when a task is started.</p>
     */
    inline EcsTaskDetails& WithStartedBy(const Aws::String& value) { SetStartedBy(value); return *this;}

    /**
     * <p>Contains the tag specified when a task is started.</p>
     */
    inline EcsTaskDetails& WithStartedBy(Aws::String&& value) { SetStartedBy(std::move(value)); return *this;}

    /**
     * <p>Contains the tag specified when a task is started.</p>
     */
    inline EcsTaskDetails& WithStartedBy(const char* value) { SetStartedBy(value); return *this;}


    /**
     * <p>The tags of the ECS Task.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /**
     * <p>The tags of the ECS Task.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>The tags of the ECS Task.</p>
     */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>The tags of the ECS Task.</p>
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>The tags of the ECS Task.</p>
     */
    inline EcsTaskDetails& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>The tags of the ECS Task.</p>
     */
    inline EcsTaskDetails& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>The tags of the ECS Task.</p>
     */
    inline EcsTaskDetails& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>The tags of the ECS Task.</p>
     */
    inline EcsTaskDetails& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }


    /**
     * <p>The list of data volume definitions for the task.</p>
     */
    inline const Aws::Vector<Volume>& GetVolumes() const{ return m_volumes; }

    /**
     * <p>The list of data volume definitions for the task.</p>
     */
    inline bool VolumesHasBeenSet() const { return m_volumesHasBeenSet; }

    /**
     * <p>The list of data volume definitions for the task.</p>
     */
    inline void SetVolumes(const Aws::Vector<Volume>& value) { m_volumesHasBeenSet = true; m_volumes = value; }

    /**
     * <p>The list of data volume definitions for the task.</p>
     */
    inline void SetVolumes(Aws::Vector<Volume>&& value) { m_volumesHasBeenSet = true; m_volumes = std::move(value); }

    /**
     * <p>The list of data volume definitions for the task.</p>
     */
    inline EcsTaskDetails& WithVolumes(const Aws::Vector<Volume>& value) { SetVolumes(value); return *this;}

    /**
     * <p>The list of data volume definitions for the task.</p>
     */
    inline EcsTaskDetails& WithVolumes(Aws::Vector<Volume>&& value) { SetVolumes(std::move(value)); return *this;}

    /**
     * <p>The list of data volume definitions for the task.</p>
     */
    inline EcsTaskDetails& AddVolumes(const Volume& value) { m_volumesHasBeenSet = true; m_volumes.push_back(value); return *this; }

    /**
     * <p>The list of data volume definitions for the task.</p>
     */
    inline EcsTaskDetails& AddVolumes(Volume&& value) { m_volumesHasBeenSet = true; m_volumes.push_back(std::move(value)); return *this; }


    /**
     * <p>The containers that's associated with the task.</p>
     */
    inline const Aws::Vector<Container>& GetContainers() const{ return m_containers; }

    /**
     * <p>The containers that's associated with the task.</p>
     */
    inline bool ContainersHasBeenSet() const { return m_containersHasBeenSet; }

    /**
     * <p>The containers that's associated with the task.</p>
     */
    inline void SetContainers(const Aws::Vector<Container>& value) { m_containersHasBeenSet = true; m_containers = value; }

    /**
     * <p>The containers that's associated with the task.</p>
     */
    inline void SetContainers(Aws::Vector<Container>&& value) { m_containersHasBeenSet = true; m_containers = std::move(value); }

    /**
     * <p>The containers that's associated with the task.</p>
     */
    inline EcsTaskDetails& WithContainers(const Aws::Vector<Container>& value) { SetContainers(value); return *this;}

    /**
     * <p>The containers that's associated with the task.</p>
     */
    inline EcsTaskDetails& WithContainers(Aws::Vector<Container>&& value) { SetContainers(std::move(value)); return *this;}

    /**
     * <p>The containers that's associated with the task.</p>
     */
    inline EcsTaskDetails& AddContainers(const Container& value) { m_containersHasBeenSet = true; m_containers.push_back(value); return *this; }

    /**
     * <p>The containers that's associated with the task.</p>
     */
    inline EcsTaskDetails& AddContainers(Container&& value) { m_containersHasBeenSet = true; m_containers.push_back(std::move(value)); return *this; }


    /**
     * <p>The name of the task group that's associated with the task.</p>
     */
    inline const Aws::String& GetGroup() const{ return m_group; }

    /**
     * <p>The name of the task group that's associated with the task.</p>
     */
    inline bool GroupHasBeenSet() const { return m_groupHasBeenSet; }

    /**
     * <p>The name of the task group that's associated with the task.</p>
     */
    inline void SetGroup(const Aws::String& value) { m_groupHasBeenSet = true; m_group = value; }

    /**
     * <p>The name of the task group that's associated with the task.</p>
     */
    inline void SetGroup(Aws::String&& value) { m_groupHasBeenSet = true; m_group = std::move(value); }

    /**
     * <p>The name of the task group that's associated with the task.</p>
     */
    inline void SetGroup(const char* value) { m_groupHasBeenSet = true; m_group.assign(value); }

    /**
     * <p>The name of the task group that's associated with the task.</p>
     */
    inline EcsTaskDetails& WithGroup(const Aws::String& value) { SetGroup(value); return *this;}

    /**
     * <p>The name of the task group that's associated with the task.</p>
     */
    inline EcsTaskDetails& WithGroup(Aws::String&& value) { SetGroup(std::move(value)); return *this;}

    /**
     * <p>The name of the task group that's associated with the task.</p>
     */
    inline EcsTaskDetails& WithGroup(const char* value) { SetGroup(value); return *this;}

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
  };

} // namespace Model
} // namespace GuardDuty
} // namespace Aws
