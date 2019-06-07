/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ec2/model/SnapshotState.h>
#include <aws/core/utils/DateTime.h>
#include <aws/ec2/model/Tag.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Xml
{
  class XmlNode;
} // namespace Xml
} // namespace Utils
namespace EC2
{
namespace Model
{

  /**
   * <p>Information about a snapshot.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/SnapshotInfo">AWS
   * API Reference</a></p>
   */
  class AWS_EC2_API SnapshotInfo
  {
  public:
    SnapshotInfo();
    SnapshotInfo(const Aws::Utils::Xml::XmlNode& xmlNode);
    SnapshotInfo& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>Description specified by the CreateSnapshotRequest that has been applied to
     * all snapshots.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>Description specified by the CreateSnapshotRequest that has been applied to
     * all snapshots.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>Description specified by the CreateSnapshotRequest that has been applied to
     * all snapshots.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>Description specified by the CreateSnapshotRequest that has been applied to
     * all snapshots.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>Description specified by the CreateSnapshotRequest that has been applied to
     * all snapshots.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>Description specified by the CreateSnapshotRequest that has been applied to
     * all snapshots.</p>
     */
    inline SnapshotInfo& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>Description specified by the CreateSnapshotRequest that has been applied to
     * all snapshots.</p>
     */
    inline SnapshotInfo& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>Description specified by the CreateSnapshotRequest that has been applied to
     * all snapshots.</p>
     */
    inline SnapshotInfo& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>Tags associated with this snapshot.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /**
     * <p>Tags associated with this snapshot.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>Tags associated with this snapshot.</p>
     */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>Tags associated with this snapshot.</p>
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>Tags associated with this snapshot.</p>
     */
    inline SnapshotInfo& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>Tags associated with this snapshot.</p>
     */
    inline SnapshotInfo& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>Tags associated with this snapshot.</p>
     */
    inline SnapshotInfo& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>Tags associated with this snapshot.</p>
     */
    inline SnapshotInfo& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }


    /**
     * <p>Indicates whether the snapshot is encrypted.</p>
     */
    inline bool GetEncrypted() const{ return m_encrypted; }

    /**
     * <p>Indicates whether the snapshot is encrypted.</p>
     */
    inline bool EncryptedHasBeenSet() const { return m_encryptedHasBeenSet; }

    /**
     * <p>Indicates whether the snapshot is encrypted.</p>
     */
    inline void SetEncrypted(bool value) { m_encryptedHasBeenSet = true; m_encrypted = value; }

    /**
     * <p>Indicates whether the snapshot is encrypted.</p>
     */
    inline SnapshotInfo& WithEncrypted(bool value) { SetEncrypted(value); return *this;}


    /**
     * <p>Source volume from which this snapshot was created.</p>
     */
    inline const Aws::String& GetVolumeId() const{ return m_volumeId; }

    /**
     * <p>Source volume from which this snapshot was created.</p>
     */
    inline bool VolumeIdHasBeenSet() const { return m_volumeIdHasBeenSet; }

    /**
     * <p>Source volume from which this snapshot was created.</p>
     */
    inline void SetVolumeId(const Aws::String& value) { m_volumeIdHasBeenSet = true; m_volumeId = value; }

    /**
     * <p>Source volume from which this snapshot was created.</p>
     */
    inline void SetVolumeId(Aws::String&& value) { m_volumeIdHasBeenSet = true; m_volumeId = std::move(value); }

    /**
     * <p>Source volume from which this snapshot was created.</p>
     */
    inline void SetVolumeId(const char* value) { m_volumeIdHasBeenSet = true; m_volumeId.assign(value); }

    /**
     * <p>Source volume from which this snapshot was created.</p>
     */
    inline SnapshotInfo& WithVolumeId(const Aws::String& value) { SetVolumeId(value); return *this;}

    /**
     * <p>Source volume from which this snapshot was created.</p>
     */
    inline SnapshotInfo& WithVolumeId(Aws::String&& value) { SetVolumeId(std::move(value)); return *this;}

    /**
     * <p>Source volume from which this snapshot was created.</p>
     */
    inline SnapshotInfo& WithVolumeId(const char* value) { SetVolumeId(value); return *this;}


    /**
     * <p>Current state of the snapshot.</p>
     */
    inline const SnapshotState& GetState() const{ return m_state; }

    /**
     * <p>Current state of the snapshot.</p>
     */
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }

    /**
     * <p>Current state of the snapshot.</p>
     */
    inline void SetState(const SnapshotState& value) { m_stateHasBeenSet = true; m_state = value; }

    /**
     * <p>Current state of the snapshot.</p>
     */
    inline void SetState(SnapshotState&& value) { m_stateHasBeenSet = true; m_state = std::move(value); }

    /**
     * <p>Current state of the snapshot.</p>
     */
    inline SnapshotInfo& WithState(const SnapshotState& value) { SetState(value); return *this;}

    /**
     * <p>Current state of the snapshot.</p>
     */
    inline SnapshotInfo& WithState(SnapshotState&& value) { SetState(std::move(value)); return *this;}


    /**
     * <p>Size of the volume from which this snapshot was created.</p>
     */
    inline int GetVolumeSize() const{ return m_volumeSize; }

    /**
     * <p>Size of the volume from which this snapshot was created.</p>
     */
    inline bool VolumeSizeHasBeenSet() const { return m_volumeSizeHasBeenSet; }

    /**
     * <p>Size of the volume from which this snapshot was created.</p>
     */
    inline void SetVolumeSize(int value) { m_volumeSizeHasBeenSet = true; m_volumeSize = value; }

    /**
     * <p>Size of the volume from which this snapshot was created.</p>
     */
    inline SnapshotInfo& WithVolumeSize(int value) { SetVolumeSize(value); return *this;}


    /**
     * <p>Time this snapshot was started. This is the same for all snapshots initiated
     * by the same request.</p>
     */
    inline const Aws::Utils::DateTime& GetStartTime() const{ return m_startTime; }

    /**
     * <p>Time this snapshot was started. This is the same for all snapshots initiated
     * by the same request.</p>
     */
    inline bool StartTimeHasBeenSet() const { return m_startTimeHasBeenSet; }

    /**
     * <p>Time this snapshot was started. This is the same for all snapshots initiated
     * by the same request.</p>
     */
    inline void SetStartTime(const Aws::Utils::DateTime& value) { m_startTimeHasBeenSet = true; m_startTime = value; }

    /**
     * <p>Time this snapshot was started. This is the same for all snapshots initiated
     * by the same request.</p>
     */
    inline void SetStartTime(Aws::Utils::DateTime&& value) { m_startTimeHasBeenSet = true; m_startTime = std::move(value); }

    /**
     * <p>Time this snapshot was started. This is the same for all snapshots initiated
     * by the same request.</p>
     */
    inline SnapshotInfo& WithStartTime(const Aws::Utils::DateTime& value) { SetStartTime(value); return *this;}

    /**
     * <p>Time this snapshot was started. This is the same for all snapshots initiated
     * by the same request.</p>
     */
    inline SnapshotInfo& WithStartTime(Aws::Utils::DateTime&& value) { SetStartTime(std::move(value)); return *this;}


    /**
     * <p>Progress this snapshot has made towards completing.</p>
     */
    inline const Aws::String& GetProgress() const{ return m_progress; }

    /**
     * <p>Progress this snapshot has made towards completing.</p>
     */
    inline bool ProgressHasBeenSet() const { return m_progressHasBeenSet; }

    /**
     * <p>Progress this snapshot has made towards completing.</p>
     */
    inline void SetProgress(const Aws::String& value) { m_progressHasBeenSet = true; m_progress = value; }

    /**
     * <p>Progress this snapshot has made towards completing.</p>
     */
    inline void SetProgress(Aws::String&& value) { m_progressHasBeenSet = true; m_progress = std::move(value); }

    /**
     * <p>Progress this snapshot has made towards completing.</p>
     */
    inline void SetProgress(const char* value) { m_progressHasBeenSet = true; m_progress.assign(value); }

    /**
     * <p>Progress this snapshot has made towards completing.</p>
     */
    inline SnapshotInfo& WithProgress(const Aws::String& value) { SetProgress(value); return *this;}

    /**
     * <p>Progress this snapshot has made towards completing.</p>
     */
    inline SnapshotInfo& WithProgress(Aws::String&& value) { SetProgress(std::move(value)); return *this;}

    /**
     * <p>Progress this snapshot has made towards completing.</p>
     */
    inline SnapshotInfo& WithProgress(const char* value) { SetProgress(value); return *this;}


    /**
     * <p>Account id used when creating this snapshot.</p>
     */
    inline const Aws::String& GetOwnerId() const{ return m_ownerId; }

    /**
     * <p>Account id used when creating this snapshot.</p>
     */
    inline bool OwnerIdHasBeenSet() const { return m_ownerIdHasBeenSet; }

    /**
     * <p>Account id used when creating this snapshot.</p>
     */
    inline void SetOwnerId(const Aws::String& value) { m_ownerIdHasBeenSet = true; m_ownerId = value; }

    /**
     * <p>Account id used when creating this snapshot.</p>
     */
    inline void SetOwnerId(Aws::String&& value) { m_ownerIdHasBeenSet = true; m_ownerId = std::move(value); }

    /**
     * <p>Account id used when creating this snapshot.</p>
     */
    inline void SetOwnerId(const char* value) { m_ownerIdHasBeenSet = true; m_ownerId.assign(value); }

    /**
     * <p>Account id used when creating this snapshot.</p>
     */
    inline SnapshotInfo& WithOwnerId(const Aws::String& value) { SetOwnerId(value); return *this;}

    /**
     * <p>Account id used when creating this snapshot.</p>
     */
    inline SnapshotInfo& WithOwnerId(Aws::String&& value) { SetOwnerId(std::move(value)); return *this;}

    /**
     * <p>Account id used when creating this snapshot.</p>
     */
    inline SnapshotInfo& WithOwnerId(const char* value) { SetOwnerId(value); return *this;}


    /**
     * <p>Snapshot id that can be used to describe this snapshot.</p>
     */
    inline const Aws::String& GetSnapshotId() const{ return m_snapshotId; }

    /**
     * <p>Snapshot id that can be used to describe this snapshot.</p>
     */
    inline bool SnapshotIdHasBeenSet() const { return m_snapshotIdHasBeenSet; }

    /**
     * <p>Snapshot id that can be used to describe this snapshot.</p>
     */
    inline void SetSnapshotId(const Aws::String& value) { m_snapshotIdHasBeenSet = true; m_snapshotId = value; }

    /**
     * <p>Snapshot id that can be used to describe this snapshot.</p>
     */
    inline void SetSnapshotId(Aws::String&& value) { m_snapshotIdHasBeenSet = true; m_snapshotId = std::move(value); }

    /**
     * <p>Snapshot id that can be used to describe this snapshot.</p>
     */
    inline void SetSnapshotId(const char* value) { m_snapshotIdHasBeenSet = true; m_snapshotId.assign(value); }

    /**
     * <p>Snapshot id that can be used to describe this snapshot.</p>
     */
    inline SnapshotInfo& WithSnapshotId(const Aws::String& value) { SetSnapshotId(value); return *this;}

    /**
     * <p>Snapshot id that can be used to describe this snapshot.</p>
     */
    inline SnapshotInfo& WithSnapshotId(Aws::String&& value) { SetSnapshotId(std::move(value)); return *this;}

    /**
     * <p>Snapshot id that can be used to describe this snapshot.</p>
     */
    inline SnapshotInfo& WithSnapshotId(const char* value) { SetSnapshotId(value); return *this;}

  private:

    Aws::String m_description;
    bool m_descriptionHasBeenSet;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet;

    bool m_encrypted;
    bool m_encryptedHasBeenSet;

    Aws::String m_volumeId;
    bool m_volumeIdHasBeenSet;

    SnapshotState m_state;
    bool m_stateHasBeenSet;

    int m_volumeSize;
    bool m_volumeSizeHasBeenSet;

    Aws::Utils::DateTime m_startTime;
    bool m_startTimeHasBeenSet;

    Aws::String m_progress;
    bool m_progressHasBeenSet;

    Aws::String m_ownerId;
    bool m_ownerIdHasBeenSet;

    Aws::String m_snapshotId;
    bool m_snapshotIdHasBeenSet;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
