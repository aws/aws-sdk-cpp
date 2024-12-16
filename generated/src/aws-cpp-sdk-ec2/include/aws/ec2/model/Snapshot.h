/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ec2/model/StorageTier.h>
#include <aws/core/utils/DateTime.h>
#include <aws/ec2/model/SSEType.h>
#include <aws/ec2/model/TransferType.h>
#include <aws/ec2/model/SnapshotState.h>
#include <aws/ec2/model/ResponseMetadata.h>
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
   * <p>Describes a snapshot.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/Snapshot">AWS API
   * Reference</a></p>
   */
  class Snapshot
  {
  public:
    AWS_EC2_API Snapshot();
    AWS_EC2_API Snapshot(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API Snapshot& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The Amazon Web Services owner alias, from an Amazon-maintained list
     * (<code>amazon</code>). This is not the user-configured Amazon Web Services
     * account alias set using the IAM console.</p>
     */
    inline const Aws::String& GetOwnerAlias() const{ return m_ownerAlias; }
    inline bool OwnerAliasHasBeenSet() const { return m_ownerAliasHasBeenSet; }
    inline void SetOwnerAlias(const Aws::String& value) { m_ownerAliasHasBeenSet = true; m_ownerAlias = value; }
    inline void SetOwnerAlias(Aws::String&& value) { m_ownerAliasHasBeenSet = true; m_ownerAlias = std::move(value); }
    inline void SetOwnerAlias(const char* value) { m_ownerAliasHasBeenSet = true; m_ownerAlias.assign(value); }
    inline Snapshot& WithOwnerAlias(const Aws::String& value) { SetOwnerAlias(value); return *this;}
    inline Snapshot& WithOwnerAlias(Aws::String&& value) { SetOwnerAlias(std::move(value)); return *this;}
    inline Snapshot& WithOwnerAlias(const char* value) { SetOwnerAlias(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the Outpost on which the snapshot is stored. For more information,
     * see <a
     * href="https://docs.aws.amazon.com/ebs/latest/userguide/snapshots-outposts.html">Amazon
     * EBS local snapshots on Outposts</a> in the <i>Amazon EBS User Guide</i>.</p>
     */
    inline const Aws::String& GetOutpostArn() const{ return m_outpostArn; }
    inline bool OutpostArnHasBeenSet() const { return m_outpostArnHasBeenSet; }
    inline void SetOutpostArn(const Aws::String& value) { m_outpostArnHasBeenSet = true; m_outpostArn = value; }
    inline void SetOutpostArn(Aws::String&& value) { m_outpostArnHasBeenSet = true; m_outpostArn = std::move(value); }
    inline void SetOutpostArn(const char* value) { m_outpostArnHasBeenSet = true; m_outpostArn.assign(value); }
    inline Snapshot& WithOutpostArn(const Aws::String& value) { SetOutpostArn(value); return *this;}
    inline Snapshot& WithOutpostArn(Aws::String&& value) { SetOutpostArn(std::move(value)); return *this;}
    inline Snapshot& WithOutpostArn(const char* value) { SetOutpostArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Any tags assigned to the snapshot.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }
    inline Snapshot& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}
    inline Snapshot& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}
    inline Snapshot& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }
    inline Snapshot& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }
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
    inline Snapshot& WithStorageTier(const StorageTier& value) { SetStorageTier(value); return *this;}
    inline Snapshot& WithStorageTier(StorageTier&& value) { SetStorageTier(std::move(value)); return *this;}
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
    inline Snapshot& WithRestoreExpiryTime(const Aws::Utils::DateTime& value) { SetRestoreExpiryTime(value); return *this;}
    inline Snapshot& WithRestoreExpiryTime(Aws::Utils::DateTime&& value) { SetRestoreExpiryTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Reserved for future use.</p>
     */
    inline const SSEType& GetSseType() const{ return m_sseType; }
    inline bool SseTypeHasBeenSet() const { return m_sseTypeHasBeenSet; }
    inline void SetSseType(const SSEType& value) { m_sseTypeHasBeenSet = true; m_sseType = value; }
    inline void SetSseType(SSEType&& value) { m_sseTypeHasBeenSet = true; m_sseType = std::move(value); }
    inline Snapshot& WithSseType(const SSEType& value) { SetSseType(value); return *this;}
    inline Snapshot& WithSseType(SSEType&& value) { SetSseType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Availability Zone or Local Zone of the snapshot. For example,
     * <code>us-west-1a</code> (Availability Zone) or <code>us-west-2-lax-1a</code>
     * (Local Zone).</p>
     */
    inline const Aws::String& GetAvailabilityZone() const{ return m_availabilityZone; }
    inline bool AvailabilityZoneHasBeenSet() const { return m_availabilityZoneHasBeenSet; }
    inline void SetAvailabilityZone(const Aws::String& value) { m_availabilityZoneHasBeenSet = true; m_availabilityZone = value; }
    inline void SetAvailabilityZone(Aws::String&& value) { m_availabilityZoneHasBeenSet = true; m_availabilityZone = std::move(value); }
    inline void SetAvailabilityZone(const char* value) { m_availabilityZoneHasBeenSet = true; m_availabilityZone.assign(value); }
    inline Snapshot& WithAvailabilityZone(const Aws::String& value) { SetAvailabilityZone(value); return *this;}
    inline Snapshot& WithAvailabilityZone(Aws::String&& value) { SetAvailabilityZone(std::move(value)); return *this;}
    inline Snapshot& WithAvailabilityZone(const char* value) { SetAvailabilityZone(value); return *this;}
    ///@}

    ///@{
    /**
     *  <p>Only for snapshot copies.</p>  <p>Indicates whether the
     * snapshot copy was created with a standard or time-based snapshot copy operation.
     * Time-based snapshot copy operations complete within the completion duration
     * specified in the request. Standard snapshot copy operations are completed on a
     * best-effort basis.</p> <ul> <li> <p> <code>standard</code> - The snapshot copy
     * was created with a standard snapshot copy operation.</p> </li> <li> <p>
     * <code>time-based</code> - The snapshot copy was created with a time-based
     * snapshot copy operation.</p> </li> </ul>
     */
    inline const TransferType& GetTransferType() const{ return m_transferType; }
    inline bool TransferTypeHasBeenSet() const { return m_transferTypeHasBeenSet; }
    inline void SetTransferType(const TransferType& value) { m_transferTypeHasBeenSet = true; m_transferType = value; }
    inline void SetTransferType(TransferType&& value) { m_transferTypeHasBeenSet = true; m_transferType = std::move(value); }
    inline Snapshot& WithTransferType(const TransferType& value) { SetTransferType(value); return *this;}
    inline Snapshot& WithTransferType(TransferType&& value) { SetTransferType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     *  <p>Only for snapshot copies created with time-based snapshot copy
     * operations.</p>  <p>The completion duration requested for the time-based
     * snapshot copy operation.</p>
     */
    inline int GetCompletionDurationMinutes() const{ return m_completionDurationMinutes; }
    inline bool CompletionDurationMinutesHasBeenSet() const { return m_completionDurationMinutesHasBeenSet; }
    inline void SetCompletionDurationMinutes(int value) { m_completionDurationMinutesHasBeenSet = true; m_completionDurationMinutes = value; }
    inline Snapshot& WithCompletionDurationMinutes(int value) { SetCompletionDurationMinutes(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time stamp when the snapshot was completed.</p>
     */
    inline const Aws::Utils::DateTime& GetCompletionTime() const{ return m_completionTime; }
    inline bool CompletionTimeHasBeenSet() const { return m_completionTimeHasBeenSet; }
    inline void SetCompletionTime(const Aws::Utils::DateTime& value) { m_completionTimeHasBeenSet = true; m_completionTime = value; }
    inline void SetCompletionTime(Aws::Utils::DateTime&& value) { m_completionTimeHasBeenSet = true; m_completionTime = std::move(value); }
    inline Snapshot& WithCompletionTime(const Aws::Utils::DateTime& value) { SetCompletionTime(value); return *this;}
    inline Snapshot& WithCompletionTime(Aws::Utils::DateTime&& value) { SetCompletionTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the snapshot. Each snapshot receives a unique identifier when it is
     * created.</p>
     */
    inline const Aws::String& GetSnapshotId() const{ return m_snapshotId; }
    inline bool SnapshotIdHasBeenSet() const { return m_snapshotIdHasBeenSet; }
    inline void SetSnapshotId(const Aws::String& value) { m_snapshotIdHasBeenSet = true; m_snapshotId = value; }
    inline void SetSnapshotId(Aws::String&& value) { m_snapshotIdHasBeenSet = true; m_snapshotId = std::move(value); }
    inline void SetSnapshotId(const char* value) { m_snapshotIdHasBeenSet = true; m_snapshotId.assign(value); }
    inline Snapshot& WithSnapshotId(const Aws::String& value) { SetSnapshotId(value); return *this;}
    inline Snapshot& WithSnapshotId(Aws::String&& value) { SetSnapshotId(std::move(value)); return *this;}
    inline Snapshot& WithSnapshotId(const char* value) { SetSnapshotId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the volume that was used to create the snapshot. Snapshots created
     * by the <a>CopySnapshot</a> action have an arbitrary volume ID that should not be
     * used for any purpose.</p>
     */
    inline const Aws::String& GetVolumeId() const{ return m_volumeId; }
    inline bool VolumeIdHasBeenSet() const { return m_volumeIdHasBeenSet; }
    inline void SetVolumeId(const Aws::String& value) { m_volumeIdHasBeenSet = true; m_volumeId = value; }
    inline void SetVolumeId(Aws::String&& value) { m_volumeIdHasBeenSet = true; m_volumeId = std::move(value); }
    inline void SetVolumeId(const char* value) { m_volumeIdHasBeenSet = true; m_volumeId.assign(value); }
    inline Snapshot& WithVolumeId(const Aws::String& value) { SetVolumeId(value); return *this;}
    inline Snapshot& WithVolumeId(Aws::String&& value) { SetVolumeId(std::move(value)); return *this;}
    inline Snapshot& WithVolumeId(const char* value) { SetVolumeId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The snapshot state.</p>
     */
    inline const SnapshotState& GetState() const{ return m_state; }
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }
    inline void SetState(const SnapshotState& value) { m_stateHasBeenSet = true; m_state = value; }
    inline void SetState(SnapshotState&& value) { m_stateHasBeenSet = true; m_state = std::move(value); }
    inline Snapshot& WithState(const SnapshotState& value) { SetState(value); return *this;}
    inline Snapshot& WithState(SnapshotState&& value) { SetState(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Encrypted Amazon EBS snapshots are copied asynchronously. If a snapshot copy
     * operation fails (for example, if the proper KMS permissions are not obtained)
     * this field displays error state details to help you diagnose why the error
     * occurred. This parameter is only returned by <a>DescribeSnapshots</a>.</p>
     */
    inline const Aws::String& GetStateMessage() const{ return m_stateMessage; }
    inline bool StateMessageHasBeenSet() const { return m_stateMessageHasBeenSet; }
    inline void SetStateMessage(const Aws::String& value) { m_stateMessageHasBeenSet = true; m_stateMessage = value; }
    inline void SetStateMessage(Aws::String&& value) { m_stateMessageHasBeenSet = true; m_stateMessage = std::move(value); }
    inline void SetStateMessage(const char* value) { m_stateMessageHasBeenSet = true; m_stateMessage.assign(value); }
    inline Snapshot& WithStateMessage(const Aws::String& value) { SetStateMessage(value); return *this;}
    inline Snapshot& WithStateMessage(Aws::String&& value) { SetStateMessage(std::move(value)); return *this;}
    inline Snapshot& WithStateMessage(const char* value) { SetStateMessage(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time stamp when the snapshot was initiated.</p>
     */
    inline const Aws::Utils::DateTime& GetStartTime() const{ return m_startTime; }
    inline bool StartTimeHasBeenSet() const { return m_startTimeHasBeenSet; }
    inline void SetStartTime(const Aws::Utils::DateTime& value) { m_startTimeHasBeenSet = true; m_startTime = value; }
    inline void SetStartTime(Aws::Utils::DateTime&& value) { m_startTimeHasBeenSet = true; m_startTime = std::move(value); }
    inline Snapshot& WithStartTime(const Aws::Utils::DateTime& value) { SetStartTime(value); return *this;}
    inline Snapshot& WithStartTime(Aws::Utils::DateTime&& value) { SetStartTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The progress of the snapshot, as a percentage.</p>
     */
    inline const Aws::String& GetProgress() const{ return m_progress; }
    inline bool ProgressHasBeenSet() const { return m_progressHasBeenSet; }
    inline void SetProgress(const Aws::String& value) { m_progressHasBeenSet = true; m_progress = value; }
    inline void SetProgress(Aws::String&& value) { m_progressHasBeenSet = true; m_progress = std::move(value); }
    inline void SetProgress(const char* value) { m_progressHasBeenSet = true; m_progress.assign(value); }
    inline Snapshot& WithProgress(const Aws::String& value) { SetProgress(value); return *this;}
    inline Snapshot& WithProgress(Aws::String&& value) { SetProgress(std::move(value)); return *this;}
    inline Snapshot& WithProgress(const char* value) { SetProgress(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the Amazon Web Services account that owns the EBS snapshot.</p>
     */
    inline const Aws::String& GetOwnerId() const{ return m_ownerId; }
    inline bool OwnerIdHasBeenSet() const { return m_ownerIdHasBeenSet; }
    inline void SetOwnerId(const Aws::String& value) { m_ownerIdHasBeenSet = true; m_ownerId = value; }
    inline void SetOwnerId(Aws::String&& value) { m_ownerIdHasBeenSet = true; m_ownerId = std::move(value); }
    inline void SetOwnerId(const char* value) { m_ownerIdHasBeenSet = true; m_ownerId.assign(value); }
    inline Snapshot& WithOwnerId(const Aws::String& value) { SetOwnerId(value); return *this;}
    inline Snapshot& WithOwnerId(Aws::String&& value) { SetOwnerId(std::move(value)); return *this;}
    inline Snapshot& WithOwnerId(const char* value) { SetOwnerId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description for the snapshot.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline Snapshot& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline Snapshot& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline Snapshot& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The size of the volume, in GiB.</p>
     */
    inline int GetVolumeSize() const{ return m_volumeSize; }
    inline bool VolumeSizeHasBeenSet() const { return m_volumeSizeHasBeenSet; }
    inline void SetVolumeSize(int value) { m_volumeSizeHasBeenSet = true; m_volumeSize = value; }
    inline Snapshot& WithVolumeSize(int value) { SetVolumeSize(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether the snapshot is encrypted.</p>
     */
    inline bool GetEncrypted() const{ return m_encrypted; }
    inline bool EncryptedHasBeenSet() const { return m_encryptedHasBeenSet; }
    inline void SetEncrypted(bool value) { m_encryptedHasBeenSet = true; m_encrypted = value; }
    inline Snapshot& WithEncrypted(bool value) { SetEncrypted(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the KMS key that was used to protect the
     * volume encryption key for the parent volume.</p>
     */
    inline const Aws::String& GetKmsKeyId() const{ return m_kmsKeyId; }
    inline bool KmsKeyIdHasBeenSet() const { return m_kmsKeyIdHasBeenSet; }
    inline void SetKmsKeyId(const Aws::String& value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId = value; }
    inline void SetKmsKeyId(Aws::String&& value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId = std::move(value); }
    inline void SetKmsKeyId(const char* value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId.assign(value); }
    inline Snapshot& WithKmsKeyId(const Aws::String& value) { SetKmsKeyId(value); return *this;}
    inline Snapshot& WithKmsKeyId(Aws::String&& value) { SetKmsKeyId(std::move(value)); return *this;}
    inline Snapshot& WithKmsKeyId(const char* value) { SetKmsKeyId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The data encryption key identifier for the snapshot. This value is a unique
     * identifier that corresponds to the data encryption key that was used to encrypt
     * the original volume or snapshot copy. Because data encryption keys are inherited
     * by volumes created from snapshots, and vice versa, if snapshots share the same
     * data encryption key identifier, then they belong to the same volume/snapshot
     * lineage. This parameter is only returned by <a>DescribeSnapshots</a>.</p>
     */
    inline const Aws::String& GetDataEncryptionKeyId() const{ return m_dataEncryptionKeyId; }
    inline bool DataEncryptionKeyIdHasBeenSet() const { return m_dataEncryptionKeyIdHasBeenSet; }
    inline void SetDataEncryptionKeyId(const Aws::String& value) { m_dataEncryptionKeyIdHasBeenSet = true; m_dataEncryptionKeyId = value; }
    inline void SetDataEncryptionKeyId(Aws::String&& value) { m_dataEncryptionKeyIdHasBeenSet = true; m_dataEncryptionKeyId = std::move(value); }
    inline void SetDataEncryptionKeyId(const char* value) { m_dataEncryptionKeyIdHasBeenSet = true; m_dataEncryptionKeyId.assign(value); }
    inline Snapshot& WithDataEncryptionKeyId(const Aws::String& value) { SetDataEncryptionKeyId(value); return *this;}
    inline Snapshot& WithDataEncryptionKeyId(Aws::String&& value) { SetDataEncryptionKeyId(std::move(value)); return *this;}
    inline Snapshot& WithDataEncryptionKeyId(const char* value) { SetDataEncryptionKeyId(value); return *this;}
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }
    inline Snapshot& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}
    inline Snapshot& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_ownerAlias;
    bool m_ownerAliasHasBeenSet = false;

    Aws::String m_outpostArn;
    bool m_outpostArnHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;

    StorageTier m_storageTier;
    bool m_storageTierHasBeenSet = false;

    Aws::Utils::DateTime m_restoreExpiryTime;
    bool m_restoreExpiryTimeHasBeenSet = false;

    SSEType m_sseType;
    bool m_sseTypeHasBeenSet = false;

    Aws::String m_availabilityZone;
    bool m_availabilityZoneHasBeenSet = false;

    TransferType m_transferType;
    bool m_transferTypeHasBeenSet = false;

    int m_completionDurationMinutes;
    bool m_completionDurationMinutesHasBeenSet = false;

    Aws::Utils::DateTime m_completionTime;
    bool m_completionTimeHasBeenSet = false;

    Aws::String m_snapshotId;
    bool m_snapshotIdHasBeenSet = false;

    Aws::String m_volumeId;
    bool m_volumeIdHasBeenSet = false;

    SnapshotState m_state;
    bool m_stateHasBeenSet = false;

    Aws::String m_stateMessage;
    bool m_stateMessageHasBeenSet = false;

    Aws::Utils::DateTime m_startTime;
    bool m_startTimeHasBeenSet = false;

    Aws::String m_progress;
    bool m_progressHasBeenSet = false;

    Aws::String m_ownerId;
    bool m_ownerIdHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    int m_volumeSize;
    bool m_volumeSizeHasBeenSet = false;

    bool m_encrypted;
    bool m_encryptedHasBeenSet = false;

    Aws::String m_kmsKeyId;
    bool m_kmsKeyIdHasBeenSet = false;

    Aws::String m_dataEncryptionKeyId;
    bool m_dataEncryptionKeyIdHasBeenSet = false;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
