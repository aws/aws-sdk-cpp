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
    AWS_EC2_API SnapshotTierStatus();
    AWS_EC2_API SnapshotTierStatus(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API SnapshotTierStatus& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The ID of the snapshot.</p>
     */
    inline const Aws::String& GetSnapshotId() const{ return m_snapshotId; }
    inline bool SnapshotIdHasBeenSet() const { return m_snapshotIdHasBeenSet; }
    inline void SetSnapshotId(const Aws::String& value) { m_snapshotIdHasBeenSet = true; m_snapshotId = value; }
    inline void SetSnapshotId(Aws::String&& value) { m_snapshotIdHasBeenSet = true; m_snapshotId = std::move(value); }
    inline void SetSnapshotId(const char* value) { m_snapshotIdHasBeenSet = true; m_snapshotId.assign(value); }
    inline SnapshotTierStatus& WithSnapshotId(const Aws::String& value) { SetSnapshotId(value); return *this;}
    inline SnapshotTierStatus& WithSnapshotId(Aws::String&& value) { SetSnapshotId(std::move(value)); return *this;}
    inline SnapshotTierStatus& WithSnapshotId(const char* value) { SetSnapshotId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the volume from which the snapshot was created.</p>
     */
    inline const Aws::String& GetVolumeId() const{ return m_volumeId; }
    inline bool VolumeIdHasBeenSet() const { return m_volumeIdHasBeenSet; }
    inline void SetVolumeId(const Aws::String& value) { m_volumeIdHasBeenSet = true; m_volumeId = value; }
    inline void SetVolumeId(Aws::String&& value) { m_volumeIdHasBeenSet = true; m_volumeId = std::move(value); }
    inline void SetVolumeId(const char* value) { m_volumeIdHasBeenSet = true; m_volumeId.assign(value); }
    inline SnapshotTierStatus& WithVolumeId(const Aws::String& value) { SetVolumeId(value); return *this;}
    inline SnapshotTierStatus& WithVolumeId(Aws::String&& value) { SetVolumeId(std::move(value)); return *this;}
    inline SnapshotTierStatus& WithVolumeId(const char* value) { SetVolumeId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The state of the snapshot.</p>
     */
    inline const SnapshotState& GetStatus() const{ return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(const SnapshotState& value) { m_statusHasBeenSet = true; m_status = value; }
    inline void SetStatus(SnapshotState&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }
    inline SnapshotTierStatus& WithStatus(const SnapshotState& value) { SetStatus(value); return *this;}
    inline SnapshotTierStatus& WithStatus(SnapshotState&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the Amazon Web Services account that owns the snapshot.</p>
     */
    inline const Aws::String& GetOwnerId() const{ return m_ownerId; }
    inline bool OwnerIdHasBeenSet() const { return m_ownerIdHasBeenSet; }
    inline void SetOwnerId(const Aws::String& value) { m_ownerIdHasBeenSet = true; m_ownerId = value; }
    inline void SetOwnerId(Aws::String&& value) { m_ownerIdHasBeenSet = true; m_ownerId = std::move(value); }
    inline void SetOwnerId(const char* value) { m_ownerIdHasBeenSet = true; m_ownerId.assign(value); }
    inline SnapshotTierStatus& WithOwnerId(const Aws::String& value) { SetOwnerId(value); return *this;}
    inline SnapshotTierStatus& WithOwnerId(Aws::String&& value) { SetOwnerId(std::move(value)); return *this;}
    inline SnapshotTierStatus& WithOwnerId(const char* value) { SetOwnerId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The tags that are assigned to the snapshot.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }
    inline SnapshotTierStatus& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}
    inline SnapshotTierStatus& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}
    inline SnapshotTierStatus& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }
    inline SnapshotTierStatus& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The storage tier in which the snapshot is stored. <code>standard</code>
     * indicates that the snapshot is stored in the standard snapshot storage tier and
     * that it is ready for use. <code>archive</code> indicates that the snapshot is
     * currently archived and that it must be restored before it can be used.</p>
     */
    inline const StorageTier& GetStorageTier() const{ return m_storageTier; }
    inline bool StorageTierHasBeenSet() const { return m_storageTierHasBeenSet; }
    inline void SetStorageTier(const StorageTier& value) { m_storageTierHasBeenSet = true; m_storageTier = value; }
    inline void SetStorageTier(StorageTier&& value) { m_storageTierHasBeenSet = true; m_storageTier = std::move(value); }
    inline SnapshotTierStatus& WithStorageTier(const StorageTier& value) { SetStorageTier(value); return *this;}
    inline SnapshotTierStatus& WithStorageTier(StorageTier&& value) { SetStorageTier(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time when the last archive or restore process was started.</p>
     */
    inline const Aws::Utils::DateTime& GetLastTieringStartTime() const{ return m_lastTieringStartTime; }
    inline bool LastTieringStartTimeHasBeenSet() const { return m_lastTieringStartTimeHasBeenSet; }
    inline void SetLastTieringStartTime(const Aws::Utils::DateTime& value) { m_lastTieringStartTimeHasBeenSet = true; m_lastTieringStartTime = value; }
    inline void SetLastTieringStartTime(Aws::Utils::DateTime&& value) { m_lastTieringStartTimeHasBeenSet = true; m_lastTieringStartTime = std::move(value); }
    inline SnapshotTierStatus& WithLastTieringStartTime(const Aws::Utils::DateTime& value) { SetLastTieringStartTime(value); return *this;}
    inline SnapshotTierStatus& WithLastTieringStartTime(Aws::Utils::DateTime&& value) { SetLastTieringStartTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The progress of the last archive or restore process, as a percentage.</p>
     */
    inline int GetLastTieringProgress() const{ return m_lastTieringProgress; }
    inline bool LastTieringProgressHasBeenSet() const { return m_lastTieringProgressHasBeenSet; }
    inline void SetLastTieringProgress(int value) { m_lastTieringProgressHasBeenSet = true; m_lastTieringProgress = value; }
    inline SnapshotTierStatus& WithLastTieringProgress(int value) { SetLastTieringProgress(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the last archive or restore process.</p>
     */
    inline const TieringOperationStatus& GetLastTieringOperationStatus() const{ return m_lastTieringOperationStatus; }
    inline bool LastTieringOperationStatusHasBeenSet() const { return m_lastTieringOperationStatusHasBeenSet; }
    inline void SetLastTieringOperationStatus(const TieringOperationStatus& value) { m_lastTieringOperationStatusHasBeenSet = true; m_lastTieringOperationStatus = value; }
    inline void SetLastTieringOperationStatus(TieringOperationStatus&& value) { m_lastTieringOperationStatusHasBeenSet = true; m_lastTieringOperationStatus = std::move(value); }
    inline SnapshotTierStatus& WithLastTieringOperationStatus(const TieringOperationStatus& value) { SetLastTieringOperationStatus(value); return *this;}
    inline SnapshotTierStatus& WithLastTieringOperationStatus(TieringOperationStatus&& value) { SetLastTieringOperationStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A message describing the status of the last archive or restore process.</p>
     */
    inline const Aws::String& GetLastTieringOperationStatusDetail() const{ return m_lastTieringOperationStatusDetail; }
    inline bool LastTieringOperationStatusDetailHasBeenSet() const { return m_lastTieringOperationStatusDetailHasBeenSet; }
    inline void SetLastTieringOperationStatusDetail(const Aws::String& value) { m_lastTieringOperationStatusDetailHasBeenSet = true; m_lastTieringOperationStatusDetail = value; }
    inline void SetLastTieringOperationStatusDetail(Aws::String&& value) { m_lastTieringOperationStatusDetailHasBeenSet = true; m_lastTieringOperationStatusDetail = std::move(value); }
    inline void SetLastTieringOperationStatusDetail(const char* value) { m_lastTieringOperationStatusDetailHasBeenSet = true; m_lastTieringOperationStatusDetail.assign(value); }
    inline SnapshotTierStatus& WithLastTieringOperationStatusDetail(const Aws::String& value) { SetLastTieringOperationStatusDetail(value); return *this;}
    inline SnapshotTierStatus& WithLastTieringOperationStatusDetail(Aws::String&& value) { SetLastTieringOperationStatusDetail(std::move(value)); return *this;}
    inline SnapshotTierStatus& WithLastTieringOperationStatusDetail(const char* value) { SetLastTieringOperationStatusDetail(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time when the last archive process was completed.</p>
     */
    inline const Aws::Utils::DateTime& GetArchivalCompleteTime() const{ return m_archivalCompleteTime; }
    inline bool ArchivalCompleteTimeHasBeenSet() const { return m_archivalCompleteTimeHasBeenSet; }
    inline void SetArchivalCompleteTime(const Aws::Utils::DateTime& value) { m_archivalCompleteTimeHasBeenSet = true; m_archivalCompleteTime = value; }
    inline void SetArchivalCompleteTime(Aws::Utils::DateTime&& value) { m_archivalCompleteTimeHasBeenSet = true; m_archivalCompleteTime = std::move(value); }
    inline SnapshotTierStatus& WithArchivalCompleteTime(const Aws::Utils::DateTime& value) { SetArchivalCompleteTime(value); return *this;}
    inline SnapshotTierStatus& WithArchivalCompleteTime(Aws::Utils::DateTime&& value) { SetArchivalCompleteTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Only for archived snapshots that are temporarily restored. Indicates the date
     * and time when a temporarily restored snapshot will be automatically
     * re-archived.</p>
     */
    inline const Aws::Utils::DateTime& GetRestoreExpiryTime() const{ return m_restoreExpiryTime; }
    inline bool RestoreExpiryTimeHasBeenSet() const { return m_restoreExpiryTimeHasBeenSet; }
    inline void SetRestoreExpiryTime(const Aws::Utils::DateTime& value) { m_restoreExpiryTimeHasBeenSet = true; m_restoreExpiryTime = value; }
    inline void SetRestoreExpiryTime(Aws::Utils::DateTime&& value) { m_restoreExpiryTimeHasBeenSet = true; m_restoreExpiryTime = std::move(value); }
    inline SnapshotTierStatus& WithRestoreExpiryTime(const Aws::Utils::DateTime& value) { SetRestoreExpiryTime(value); return *this;}
    inline SnapshotTierStatus& WithRestoreExpiryTime(Aws::Utils::DateTime&& value) { SetRestoreExpiryTime(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_snapshotId;
    bool m_snapshotIdHasBeenSet = false;

    Aws::String m_volumeId;
    bool m_volumeIdHasBeenSet = false;

    SnapshotState m_status;
    bool m_statusHasBeenSet = false;

    Aws::String m_ownerId;
    bool m_ownerIdHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;

    StorageTier m_storageTier;
    bool m_storageTierHasBeenSet = false;

    Aws::Utils::DateTime m_lastTieringStartTime;
    bool m_lastTieringStartTimeHasBeenSet = false;

    int m_lastTieringProgress;
    bool m_lastTieringProgressHasBeenSet = false;

    TieringOperationStatus m_lastTieringOperationStatus;
    bool m_lastTieringOperationStatusHasBeenSet = false;

    Aws::String m_lastTieringOperationStatusDetail;
    bool m_lastTieringOperationStatusDetailHasBeenSet = false;

    Aws::Utils::DateTime m_archivalCompleteTime;
    bool m_archivalCompleteTimeHasBeenSet = false;

    Aws::Utils::DateTime m_restoreExpiryTime;
    bool m_restoreExpiryTimeHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
