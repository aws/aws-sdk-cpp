/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
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
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Xml
{
  class XmlDocument;
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
  class CreateSnapshotResponse
  {
  public:
    AWS_EC2_API CreateSnapshotResponse() = default;
    AWS_EC2_API CreateSnapshotResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_EC2_API CreateSnapshotResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>The Amazon Web Services owner alias, from an Amazon-maintained list
     * (<code>amazon</code>). This is not the user-configured Amazon Web Services
     * account alias set using the IAM console.</p>
     */
    inline const Aws::String& GetOwnerAlias() const { return m_ownerAlias; }
    template<typename OwnerAliasT = Aws::String>
    void SetOwnerAlias(OwnerAliasT&& value) { m_ownerAliasHasBeenSet = true; m_ownerAlias = std::forward<OwnerAliasT>(value); }
    template<typename OwnerAliasT = Aws::String>
    CreateSnapshotResponse& WithOwnerAlias(OwnerAliasT&& value) { SetOwnerAlias(std::forward<OwnerAliasT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the Outpost on which the snapshot is stored. For more information,
     * see <a
     * href="https://docs.aws.amazon.com/ebs/latest/userguide/snapshots-outposts.html">Amazon
     * EBS local snapshots on Outposts</a> in the <i>Amazon EBS User Guide</i>.</p>
     */
    inline const Aws::String& GetOutpostArn() const { return m_outpostArn; }
    template<typename OutpostArnT = Aws::String>
    void SetOutpostArn(OutpostArnT&& value) { m_outpostArnHasBeenSet = true; m_outpostArn = std::forward<OutpostArnT>(value); }
    template<typename OutpostArnT = Aws::String>
    CreateSnapshotResponse& WithOutpostArn(OutpostArnT&& value) { SetOutpostArn(std::forward<OutpostArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Any tags assigned to the snapshot.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const { return m_tags; }
    template<typename TagsT = Aws::Vector<Tag>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Vector<Tag>>
    CreateSnapshotResponse& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsT = Tag>
    CreateSnapshotResponse& AddTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags.emplace_back(std::forward<TagsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The storage tier in which the snapshot is stored. <code>standard</code>
     * indicates that the snapshot is stored in the standard snapshot storage tier and
     * that it is ready for use. <code>archive</code> indicates that the snapshot is
     * currently archived and that it must be restored before it can be used.</p>
     */
    inline StorageTier GetStorageTier() const { return m_storageTier; }
    inline void SetStorageTier(StorageTier value) { m_storageTierHasBeenSet = true; m_storageTier = value; }
    inline CreateSnapshotResponse& WithStorageTier(StorageTier value) { SetStorageTier(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Only for archived snapshots that are temporarily restored. Indicates the date
     * and time when a temporarily restored snapshot will be automatically
     * re-archived.</p>
     */
    inline const Aws::Utils::DateTime& GetRestoreExpiryTime() const { return m_restoreExpiryTime; }
    template<typename RestoreExpiryTimeT = Aws::Utils::DateTime>
    void SetRestoreExpiryTime(RestoreExpiryTimeT&& value) { m_restoreExpiryTimeHasBeenSet = true; m_restoreExpiryTime = std::forward<RestoreExpiryTimeT>(value); }
    template<typename RestoreExpiryTimeT = Aws::Utils::DateTime>
    CreateSnapshotResponse& WithRestoreExpiryTime(RestoreExpiryTimeT&& value) { SetRestoreExpiryTime(std::forward<RestoreExpiryTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Reserved for future use.</p>
     */
    inline SSEType GetSseType() const { return m_sseType; }
    inline void SetSseType(SSEType value) { m_sseTypeHasBeenSet = true; m_sseType = value; }
    inline CreateSnapshotResponse& WithSseType(SSEType value) { SetSseType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Availability Zone or Local Zone of the snapshot. For example,
     * <code>us-west-1a</code> (Availability Zone) or <code>us-west-2-lax-1a</code>
     * (Local Zone).</p>
     */
    inline const Aws::String& GetAvailabilityZone() const { return m_availabilityZone; }
    template<typename AvailabilityZoneT = Aws::String>
    void SetAvailabilityZone(AvailabilityZoneT&& value) { m_availabilityZoneHasBeenSet = true; m_availabilityZone = std::forward<AvailabilityZoneT>(value); }
    template<typename AvailabilityZoneT = Aws::String>
    CreateSnapshotResponse& WithAvailabilityZone(AvailabilityZoneT&& value) { SetAvailabilityZone(std::forward<AvailabilityZoneT>(value)); return *this;}
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
    inline TransferType GetTransferType() const { return m_transferType; }
    inline void SetTransferType(TransferType value) { m_transferTypeHasBeenSet = true; m_transferType = value; }
    inline CreateSnapshotResponse& WithTransferType(TransferType value) { SetTransferType(value); return *this;}
    ///@}

    ///@{
    /**
     *  <p>Only for snapshot copies created with time-based snapshot copy
     * operations.</p>  <p>The completion duration requested for the time-based
     * snapshot copy operation.</p>
     */
    inline int GetCompletionDurationMinutes() const { return m_completionDurationMinutes; }
    inline void SetCompletionDurationMinutes(int value) { m_completionDurationMinutesHasBeenSet = true; m_completionDurationMinutes = value; }
    inline CreateSnapshotResponse& WithCompletionDurationMinutes(int value) { SetCompletionDurationMinutes(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time stamp when the snapshot was completed.</p>
     */
    inline const Aws::Utils::DateTime& GetCompletionTime() const { return m_completionTime; }
    template<typename CompletionTimeT = Aws::Utils::DateTime>
    void SetCompletionTime(CompletionTimeT&& value) { m_completionTimeHasBeenSet = true; m_completionTime = std::forward<CompletionTimeT>(value); }
    template<typename CompletionTimeT = Aws::Utils::DateTime>
    CreateSnapshotResponse& WithCompletionTime(CompletionTimeT&& value) { SetCompletionTime(std::forward<CompletionTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The full size of the snapshot, in bytes.</p>  <p>This is
     * <b>not</b> the incremental size of the snapshot. This is the full snapshot size
     * and represents the size of all the blocks that were written to the source volume
     * at the time the snapshot was created.</p> 
     */
    inline long long GetFullSnapshotSizeInBytes() const { return m_fullSnapshotSizeInBytes; }
    inline void SetFullSnapshotSizeInBytes(long long value) { m_fullSnapshotSizeInBytesHasBeenSet = true; m_fullSnapshotSizeInBytes = value; }
    inline CreateSnapshotResponse& WithFullSnapshotSizeInBytes(long long value) { SetFullSnapshotSizeInBytes(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the snapshot. Each snapshot receives a unique identifier when it is
     * created.</p>
     */
    inline const Aws::String& GetSnapshotId() const { return m_snapshotId; }
    template<typename SnapshotIdT = Aws::String>
    void SetSnapshotId(SnapshotIdT&& value) { m_snapshotIdHasBeenSet = true; m_snapshotId = std::forward<SnapshotIdT>(value); }
    template<typename SnapshotIdT = Aws::String>
    CreateSnapshotResponse& WithSnapshotId(SnapshotIdT&& value) { SetSnapshotId(std::forward<SnapshotIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the volume that was used to create the snapshot. Snapshots created
     * by a copy snapshot operation have an arbitrary volume ID that you should not use
     * for any purpose.</p>
     */
    inline const Aws::String& GetVolumeId() const { return m_volumeId; }
    template<typename VolumeIdT = Aws::String>
    void SetVolumeId(VolumeIdT&& value) { m_volumeIdHasBeenSet = true; m_volumeId = std::forward<VolumeIdT>(value); }
    template<typename VolumeIdT = Aws::String>
    CreateSnapshotResponse& WithVolumeId(VolumeIdT&& value) { SetVolumeId(std::forward<VolumeIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The snapshot state.</p>
     */
    inline SnapshotState GetState() const { return m_state; }
    inline void SetState(SnapshotState value) { m_stateHasBeenSet = true; m_state = value; }
    inline CreateSnapshotResponse& WithState(SnapshotState value) { SetState(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Encrypted Amazon EBS snapshots are copied asynchronously. If a snapshot copy
     * operation fails (for example, if the proper KMS permissions are not obtained)
     * this field displays error state details to help you diagnose why the error
     * occurred. This parameter is only returned by <a>DescribeSnapshots</a>.</p>
     */
    inline const Aws::String& GetStateMessage() const { return m_stateMessage; }
    template<typename StateMessageT = Aws::String>
    void SetStateMessage(StateMessageT&& value) { m_stateMessageHasBeenSet = true; m_stateMessage = std::forward<StateMessageT>(value); }
    template<typename StateMessageT = Aws::String>
    CreateSnapshotResponse& WithStateMessage(StateMessageT&& value) { SetStateMessage(std::forward<StateMessageT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time stamp when the snapshot was initiated.</p>
     */
    inline const Aws::Utils::DateTime& GetStartTime() const { return m_startTime; }
    template<typename StartTimeT = Aws::Utils::DateTime>
    void SetStartTime(StartTimeT&& value) { m_startTimeHasBeenSet = true; m_startTime = std::forward<StartTimeT>(value); }
    template<typename StartTimeT = Aws::Utils::DateTime>
    CreateSnapshotResponse& WithStartTime(StartTimeT&& value) { SetStartTime(std::forward<StartTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The progress of the snapshot, as a percentage.</p>
     */
    inline const Aws::String& GetProgress() const { return m_progress; }
    template<typename ProgressT = Aws::String>
    void SetProgress(ProgressT&& value) { m_progressHasBeenSet = true; m_progress = std::forward<ProgressT>(value); }
    template<typename ProgressT = Aws::String>
    CreateSnapshotResponse& WithProgress(ProgressT&& value) { SetProgress(std::forward<ProgressT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the Amazon Web Services account that owns the EBS snapshot.</p>
     */
    inline const Aws::String& GetOwnerId() const { return m_ownerId; }
    template<typename OwnerIdT = Aws::String>
    void SetOwnerId(OwnerIdT&& value) { m_ownerIdHasBeenSet = true; m_ownerId = std::forward<OwnerIdT>(value); }
    template<typename OwnerIdT = Aws::String>
    CreateSnapshotResponse& WithOwnerId(OwnerIdT&& value) { SetOwnerId(std::forward<OwnerIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description for the snapshot.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    CreateSnapshotResponse& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The size of the volume, in GiB.</p>
     */
    inline int GetVolumeSize() const { return m_volumeSize; }
    inline void SetVolumeSize(int value) { m_volumeSizeHasBeenSet = true; m_volumeSize = value; }
    inline CreateSnapshotResponse& WithVolumeSize(int value) { SetVolumeSize(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether the snapshot is encrypted.</p>
     */
    inline bool GetEncrypted() const { return m_encrypted; }
    inline void SetEncrypted(bool value) { m_encryptedHasBeenSet = true; m_encrypted = value; }
    inline CreateSnapshotResponse& WithEncrypted(bool value) { SetEncrypted(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the KMS key that was used to protect the
     * volume encryption key for the parent volume.</p>
     */
    inline const Aws::String& GetKmsKeyId() const { return m_kmsKeyId; }
    template<typename KmsKeyIdT = Aws::String>
    void SetKmsKeyId(KmsKeyIdT&& value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId = std::forward<KmsKeyIdT>(value); }
    template<typename KmsKeyIdT = Aws::String>
    CreateSnapshotResponse& WithKmsKeyId(KmsKeyIdT&& value) { SetKmsKeyId(std::forward<KmsKeyIdT>(value)); return *this;}
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
    inline const Aws::String& GetDataEncryptionKeyId() const { return m_dataEncryptionKeyId; }
    template<typename DataEncryptionKeyIdT = Aws::String>
    void SetDataEncryptionKeyId(DataEncryptionKeyIdT&& value) { m_dataEncryptionKeyIdHasBeenSet = true; m_dataEncryptionKeyId = std::forward<DataEncryptionKeyIdT>(value); }
    template<typename DataEncryptionKeyIdT = Aws::String>
    CreateSnapshotResponse& WithDataEncryptionKeyId(DataEncryptionKeyIdT&& value) { SetDataEncryptionKeyId(std::forward<DataEncryptionKeyIdT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const { return m_responseMetadata; }
    template<typename ResponseMetadataT = ResponseMetadata>
    void SetResponseMetadata(ResponseMetadataT&& value) { m_responseMetadataHasBeenSet = true; m_responseMetadata = std::forward<ResponseMetadataT>(value); }
    template<typename ResponseMetadataT = ResponseMetadata>
    CreateSnapshotResponse& WithResponseMetadata(ResponseMetadataT&& value) { SetResponseMetadata(std::forward<ResponseMetadataT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_ownerAlias;
    bool m_ownerAliasHasBeenSet = false;

    Aws::String m_outpostArn;
    bool m_outpostArnHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;

    StorageTier m_storageTier{StorageTier::NOT_SET};
    bool m_storageTierHasBeenSet = false;

    Aws::Utils::DateTime m_restoreExpiryTime{};
    bool m_restoreExpiryTimeHasBeenSet = false;

    SSEType m_sseType{SSEType::NOT_SET};
    bool m_sseTypeHasBeenSet = false;

    Aws::String m_availabilityZone;
    bool m_availabilityZoneHasBeenSet = false;

    TransferType m_transferType{TransferType::NOT_SET};
    bool m_transferTypeHasBeenSet = false;

    int m_completionDurationMinutes{0};
    bool m_completionDurationMinutesHasBeenSet = false;

    Aws::Utils::DateTime m_completionTime{};
    bool m_completionTimeHasBeenSet = false;

    long long m_fullSnapshotSizeInBytes{0};
    bool m_fullSnapshotSizeInBytesHasBeenSet = false;

    Aws::String m_snapshotId;
    bool m_snapshotIdHasBeenSet = false;

    Aws::String m_volumeId;
    bool m_volumeIdHasBeenSet = false;

    SnapshotState m_state{SnapshotState::NOT_SET};
    bool m_stateHasBeenSet = false;

    Aws::String m_stateMessage;
    bool m_stateMessageHasBeenSet = false;

    Aws::Utils::DateTime m_startTime{};
    bool m_startTimeHasBeenSet = false;

    Aws::String m_progress;
    bool m_progressHasBeenSet = false;

    Aws::String m_ownerId;
    bool m_ownerIdHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    int m_volumeSize{0};
    bool m_volumeSizeHasBeenSet = false;

    bool m_encrypted{false};
    bool m_encryptedHasBeenSet = false;

    Aws::String m_kmsKeyId;
    bool m_kmsKeyIdHasBeenSet = false;

    Aws::String m_dataEncryptionKeyId;
    bool m_dataEncryptionKeyIdHasBeenSet = false;

    ResponseMetadata m_responseMetadata;
    bool m_responseMetadataHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
