/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/model/SnapshotState.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ec2/model/StorageTier.h>
#include <aws/core/utils/DateTime.h>
#include <aws/ec2/model/TieringOperationStatus.h>
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
   * <p>Provides information about a snapshot's storage tier.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/SnapshotTierStatus">AWS
   * API Reference</a></p>
   */
  class SnapshotTierStatus
  {
  public:
    AWS_EC2_API SnapshotTierStatus() = default;
    AWS_EC2_API SnapshotTierStatus(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API SnapshotTierStatus& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The ID of the snapshot.</p>
     */
    inline const Aws::String& GetSnapshotId() const { return m_snapshotId; }
    inline bool SnapshotIdHasBeenSet() const { return m_snapshotIdHasBeenSet; }
    template<typename SnapshotIdT = Aws::String>
    void SetSnapshotId(SnapshotIdT&& value) { m_snapshotIdHasBeenSet = true; m_snapshotId = std::forward<SnapshotIdT>(value); }
    template<typename SnapshotIdT = Aws::String>
    SnapshotTierStatus& WithSnapshotId(SnapshotIdT&& value) { SetSnapshotId(std::forward<SnapshotIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the volume from which the snapshot was created.</p>
     */
    inline const Aws::String& GetVolumeId() const { return m_volumeId; }
    inline bool VolumeIdHasBeenSet() const { return m_volumeIdHasBeenSet; }
    template<typename VolumeIdT = Aws::String>
    void SetVolumeId(VolumeIdT&& value) { m_volumeIdHasBeenSet = true; m_volumeId = std::forward<VolumeIdT>(value); }
    template<typename VolumeIdT = Aws::String>
    SnapshotTierStatus& WithVolumeId(VolumeIdT&& value) { SetVolumeId(std::forward<VolumeIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The state of the snapshot.</p>
     */
    inline SnapshotState GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(SnapshotState value) { m_statusHasBeenSet = true; m_status = value; }
    inline SnapshotTierStatus& WithStatus(SnapshotState value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the Amazon Web Services account that owns the snapshot.</p>
     */
    inline const Aws::String& GetOwnerId() const { return m_ownerId; }
    inline bool OwnerIdHasBeenSet() const { return m_ownerIdHasBeenSet; }
    template<typename OwnerIdT = Aws::String>
    void SetOwnerId(OwnerIdT&& value) { m_ownerIdHasBeenSet = true; m_ownerId = std::forward<OwnerIdT>(value); }
    template<typename OwnerIdT = Aws::String>
    SnapshotTierStatus& WithOwnerId(OwnerIdT&& value) { SetOwnerId(std::forward<OwnerIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The tags that are assigned to the snapshot.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Vector<Tag>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Vector<Tag>>
    SnapshotTierStatus& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsT = Tag>
    SnapshotTierStatus& AddTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags.emplace_back(std::forward<TagsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The storage tier in which the snapshot is stored. <code>standard</code>
     * indicates that the snapshot is stored in the standard snapshot storage tier and
     * that it is ready for use. <code>archive</code> indicates that the snapshot is
     * currently archived and that it must be restored before it can be used.</p>
     */
    inline StorageTier GetStorageTier() const { return m_storageTier; }
    inline bool StorageTierHasBeenSet() const { return m_storageTierHasBeenSet; }
    inline void SetStorageTier(StorageTier value) { m_storageTierHasBeenSet = true; m_storageTier = value; }
    inline SnapshotTierStatus& WithStorageTier(StorageTier value) { SetStorageTier(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time when the last archive or restore process was started.</p>
     */
    inline const Aws::Utils::DateTime& GetLastTieringStartTime() const { return m_lastTieringStartTime; }
    inline bool LastTieringStartTimeHasBeenSet() const { return m_lastTieringStartTimeHasBeenSet; }
    template<typename LastTieringStartTimeT = Aws::Utils::DateTime>
    void SetLastTieringStartTime(LastTieringStartTimeT&& value) { m_lastTieringStartTimeHasBeenSet = true; m_lastTieringStartTime = std::forward<LastTieringStartTimeT>(value); }
    template<typename LastTieringStartTimeT = Aws::Utils::DateTime>
    SnapshotTierStatus& WithLastTieringStartTime(LastTieringStartTimeT&& value) { SetLastTieringStartTime(std::forward<LastTieringStartTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The progress of the last archive or restore process, as a percentage.</p>
     */
    inline int GetLastTieringProgress() const { return m_lastTieringProgress; }
    inline bool LastTieringProgressHasBeenSet() const { return m_lastTieringProgressHasBeenSet; }
    inline void SetLastTieringProgress(int value) { m_lastTieringProgressHasBeenSet = true; m_lastTieringProgress = value; }
    inline SnapshotTierStatus& WithLastTieringProgress(int value) { SetLastTieringProgress(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the last archive or restore process.</p>
     */
    inline TieringOperationStatus GetLastTieringOperationStatus() const { return m_lastTieringOperationStatus; }
    inline bool LastTieringOperationStatusHasBeenSet() const { return m_lastTieringOperationStatusHasBeenSet; }
    inline void SetLastTieringOperationStatus(TieringOperationStatus value) { m_lastTieringOperationStatusHasBeenSet = true; m_lastTieringOperationStatus = value; }
    inline SnapshotTierStatus& WithLastTieringOperationStatus(TieringOperationStatus value) { SetLastTieringOperationStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A message describing the status of the last archive or restore process.</p>
     */
    inline const Aws::String& GetLastTieringOperationStatusDetail() const { return m_lastTieringOperationStatusDetail; }
    inline bool LastTieringOperationStatusDetailHasBeenSet() const { return m_lastTieringOperationStatusDetailHasBeenSet; }
    template<typename LastTieringOperationStatusDetailT = Aws::String>
    void SetLastTieringOperationStatusDetail(LastTieringOperationStatusDetailT&& value) { m_lastTieringOperationStatusDetailHasBeenSet = true; m_lastTieringOperationStatusDetail = std::forward<LastTieringOperationStatusDetailT>(value); }
    template<typename LastTieringOperationStatusDetailT = Aws::String>
    SnapshotTierStatus& WithLastTieringOperationStatusDetail(LastTieringOperationStatusDetailT&& value) { SetLastTieringOperationStatusDetail(std::forward<LastTieringOperationStatusDetailT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time when the last archive process was completed.</p>
     */
    inline const Aws::Utils::DateTime& GetArchivalCompleteTime() const { return m_archivalCompleteTime; }
    inline bool ArchivalCompleteTimeHasBeenSet() const { return m_archivalCompleteTimeHasBeenSet; }
    template<typename ArchivalCompleteTimeT = Aws::Utils::DateTime>
    void SetArchivalCompleteTime(ArchivalCompleteTimeT&& value) { m_archivalCompleteTimeHasBeenSet = true; m_archivalCompleteTime = std::forward<ArchivalCompleteTimeT>(value); }
    template<typename ArchivalCompleteTimeT = Aws::Utils::DateTime>
    SnapshotTierStatus& WithArchivalCompleteTime(ArchivalCompleteTimeT&& value) { SetArchivalCompleteTime(std::forward<ArchivalCompleteTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Only for archived snapshots that are temporarily restored. Indicates the date
     * and time when a temporarily restored snapshot will be automatically
     * re-archived.</p>
     */
    inline const Aws::Utils::DateTime& GetRestoreExpiryTime() const { return m_restoreExpiryTime; }
    inline bool RestoreExpiryTimeHasBeenSet() const { return m_restoreExpiryTimeHasBeenSet; }
    template<typename RestoreExpiryTimeT = Aws::Utils::DateTime>
    void SetRestoreExpiryTime(RestoreExpiryTimeT&& value) { m_restoreExpiryTimeHasBeenSet = true; m_restoreExpiryTime = std::forward<RestoreExpiryTimeT>(value); }
    template<typename RestoreExpiryTimeT = Aws::Utils::DateTime>
    SnapshotTierStatus& WithRestoreExpiryTime(RestoreExpiryTimeT&& value) { SetRestoreExpiryTime(std::forward<RestoreExpiryTimeT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_snapshotId;
    bool m_snapshotIdHasBeenSet = false;

    Aws::String m_volumeId;
    bool m_volumeIdHasBeenSet = false;

    SnapshotState m_status{SnapshotState::NOT_SET};
    bool m_statusHasBeenSet = false;

    Aws::String m_ownerId;
    bool m_ownerIdHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;

    StorageTier m_storageTier{StorageTier::NOT_SET};
    bool m_storageTierHasBeenSet = false;

    Aws::Utils::DateTime m_lastTieringStartTime{};
    bool m_lastTieringStartTimeHasBeenSet = false;

    int m_lastTieringProgress{0};
    bool m_lastTieringProgressHasBeenSet = false;

    TieringOperationStatus m_lastTieringOperationStatus{TieringOperationStatus::NOT_SET};
    bool m_lastTieringOperationStatusHasBeenSet = false;

    Aws::String m_lastTieringOperationStatusDetail;
    bool m_lastTieringOperationStatusDetailHasBeenSet = false;

    Aws::Utils::DateTime m_archivalCompleteTime{};
    bool m_archivalCompleteTimeHasBeenSet = false;

    Aws::Utils::DateTime m_restoreExpiryTime{};
    bool m_restoreExpiryTimeHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
