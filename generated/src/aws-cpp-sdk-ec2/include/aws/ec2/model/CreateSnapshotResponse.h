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
    AWS_EC2_API CreateSnapshotResponse();
    AWS_EC2_API CreateSnapshotResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_EC2_API CreateSnapshotResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>The Amazon Web Services owner alias, from an Amazon-maintained list
     * (<code>amazon</code>). This is not the user-configured Amazon Web Services
     * account alias set using the IAM console.</p>
     */
    inline const Aws::String& GetOwnerAlias() const{ return m_ownerAlias; }
    inline void SetOwnerAlias(const Aws::String& value) { m_ownerAlias = value; }
    inline void SetOwnerAlias(Aws::String&& value) { m_ownerAlias = std::move(value); }
    inline void SetOwnerAlias(const char* value) { m_ownerAlias.assign(value); }
    inline CreateSnapshotResponse& WithOwnerAlias(const Aws::String& value) { SetOwnerAlias(value); return *this;}
    inline CreateSnapshotResponse& WithOwnerAlias(Aws::String&& value) { SetOwnerAlias(std::move(value)); return *this;}
    inline CreateSnapshotResponse& WithOwnerAlias(const char* value) { SetOwnerAlias(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the Outpost on which the snapshot is stored. For more information,
     * see <a
     * href="https://docs.aws.amazon.com/ebs/latest/userguide/snapshots-outposts.html">Amazon
     * EBS local snapshots on Outposts</a> in the <i>Amazon EBS User Guide</i>.</p>
     */
    inline const Aws::String& GetOutpostArn() const{ return m_outpostArn; }
    inline void SetOutpostArn(const Aws::String& value) { m_outpostArn = value; }
    inline void SetOutpostArn(Aws::String&& value) { m_outpostArn = std::move(value); }
    inline void SetOutpostArn(const char* value) { m_outpostArn.assign(value); }
    inline CreateSnapshotResponse& WithOutpostArn(const Aws::String& value) { SetOutpostArn(value); return *this;}
    inline CreateSnapshotResponse& WithOutpostArn(Aws::String&& value) { SetOutpostArn(std::move(value)); return *this;}
    inline CreateSnapshotResponse& WithOutpostArn(const char* value) { SetOutpostArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Any tags assigned to the snapshot.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tags = value; }
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tags = std::move(value); }
    inline CreateSnapshotResponse& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}
    inline CreateSnapshotResponse& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}
    inline CreateSnapshotResponse& AddTags(const Tag& value) { m_tags.push_back(value); return *this; }
    inline CreateSnapshotResponse& AddTags(Tag&& value) { m_tags.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The storage tier in which the snapshot is stored. <code>standard</code>
     * indicates that the snapshot is stored in the standard snapshot storage tier and
     * that it is ready for use. <code>archive</code> indicates that the snapshot is
     * currently archived and that it must be restored before it can be used.</p>
     */
    inline const StorageTier& GetStorageTier() const{ return m_storageTier; }
    inline void SetStorageTier(const StorageTier& value) { m_storageTier = value; }
    inline void SetStorageTier(StorageTier&& value) { m_storageTier = std::move(value); }
    inline CreateSnapshotResponse& WithStorageTier(const StorageTier& value) { SetStorageTier(value); return *this;}
    inline CreateSnapshotResponse& WithStorageTier(StorageTier&& value) { SetStorageTier(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Only for archived snapshots that are temporarily restored. Indicates the date
     * and time when a temporarily restored snapshot will be automatically
     * re-archived.</p>
     */
    inline const Aws::Utils::DateTime& GetRestoreExpiryTime() const{ return m_restoreExpiryTime; }
    inline void SetRestoreExpiryTime(const Aws::Utils::DateTime& value) { m_restoreExpiryTime = value; }
    inline void SetRestoreExpiryTime(Aws::Utils::DateTime&& value) { m_restoreExpiryTime = std::move(value); }
    inline CreateSnapshotResponse& WithRestoreExpiryTime(const Aws::Utils::DateTime& value) { SetRestoreExpiryTime(value); return *this;}
    inline CreateSnapshotResponse& WithRestoreExpiryTime(Aws::Utils::DateTime&& value) { SetRestoreExpiryTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Reserved for future use.</p>
     */
    inline const SSEType& GetSseType() const{ return m_sseType; }
    inline void SetSseType(const SSEType& value) { m_sseType = value; }
    inline void SetSseType(SSEType&& value) { m_sseType = std::move(value); }
    inline CreateSnapshotResponse& WithSseType(const SSEType& value) { SetSseType(value); return *this;}
    inline CreateSnapshotResponse& WithSseType(SSEType&& value) { SetSseType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Availability Zone or Local Zone of the snapshot. For example,
     * <code>us-west-1a</code> (Availability Zone) or <code>us-west-2-lax-1a</code>
     * (Local Zone).</p>
     */
    inline const Aws::String& GetAvailabilityZone() const{ return m_availabilityZone; }
    inline void SetAvailabilityZone(const Aws::String& value) { m_availabilityZone = value; }
    inline void SetAvailabilityZone(Aws::String&& value) { m_availabilityZone = std::move(value); }
    inline void SetAvailabilityZone(const char* value) { m_availabilityZone.assign(value); }
    inline CreateSnapshotResponse& WithAvailabilityZone(const Aws::String& value) { SetAvailabilityZone(value); return *this;}
    inline CreateSnapshotResponse& WithAvailabilityZone(Aws::String&& value) { SetAvailabilityZone(std::move(value)); return *this;}
    inline CreateSnapshotResponse& WithAvailabilityZone(const char* value) { SetAvailabilityZone(value); return *this;}
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
    inline void SetTransferType(const TransferType& value) { m_transferType = value; }
    inline void SetTransferType(TransferType&& value) { m_transferType = std::move(value); }
    inline CreateSnapshotResponse& WithTransferType(const TransferType& value) { SetTransferType(value); return *this;}
    inline CreateSnapshotResponse& WithTransferType(TransferType&& value) { SetTransferType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     *  <p>Only for snapshot copies created with time-based snapshot copy
     * operations.</p>  <p>The completion duration requested for the time-based
     * snapshot copy operation.</p>
     */
    inline int GetCompletionDurationMinutes() const{ return m_completionDurationMinutes; }
    inline void SetCompletionDurationMinutes(int value) { m_completionDurationMinutes = value; }
    inline CreateSnapshotResponse& WithCompletionDurationMinutes(int value) { SetCompletionDurationMinutes(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time stamp when the snapshot was completed.</p>
     */
    inline const Aws::Utils::DateTime& GetCompletionTime() const{ return m_completionTime; }
    inline void SetCompletionTime(const Aws::Utils::DateTime& value) { m_completionTime = value; }
    inline void SetCompletionTime(Aws::Utils::DateTime&& value) { m_completionTime = std::move(value); }
    inline CreateSnapshotResponse& WithCompletionTime(const Aws::Utils::DateTime& value) { SetCompletionTime(value); return *this;}
    inline CreateSnapshotResponse& WithCompletionTime(Aws::Utils::DateTime&& value) { SetCompletionTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the snapshot. Each snapshot receives a unique identifier when it is
     * created.</p>
     */
    inline const Aws::String& GetSnapshotId() const{ return m_snapshotId; }
    inline void SetSnapshotId(const Aws::String& value) { m_snapshotId = value; }
    inline void SetSnapshotId(Aws::String&& value) { m_snapshotId = std::move(value); }
    inline void SetSnapshotId(const char* value) { m_snapshotId.assign(value); }
    inline CreateSnapshotResponse& WithSnapshotId(const Aws::String& value) { SetSnapshotId(value); return *this;}
    inline CreateSnapshotResponse& WithSnapshotId(Aws::String&& value) { SetSnapshotId(std::move(value)); return *this;}
    inline CreateSnapshotResponse& WithSnapshotId(const char* value) { SetSnapshotId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the volume that was used to create the snapshot. Snapshots created
     * by the <a>CopySnapshot</a> action have an arbitrary volume ID that should not be
     * used for any purpose.</p>
     */
    inline const Aws::String& GetVolumeId() const{ return m_volumeId; }
    inline void SetVolumeId(const Aws::String& value) { m_volumeId = value; }
    inline void SetVolumeId(Aws::String&& value) { m_volumeId = std::move(value); }
    inline void SetVolumeId(const char* value) { m_volumeId.assign(value); }
    inline CreateSnapshotResponse& WithVolumeId(const Aws::String& value) { SetVolumeId(value); return *this;}
    inline CreateSnapshotResponse& WithVolumeId(Aws::String&& value) { SetVolumeId(std::move(value)); return *this;}
    inline CreateSnapshotResponse& WithVolumeId(const char* value) { SetVolumeId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The snapshot state.</p>
     */
    inline const SnapshotState& GetState() const{ return m_state; }
    inline void SetState(const SnapshotState& value) { m_state = value; }
    inline void SetState(SnapshotState&& value) { m_state = std::move(value); }
    inline CreateSnapshotResponse& WithState(const SnapshotState& value) { SetState(value); return *this;}
    inline CreateSnapshotResponse& WithState(SnapshotState&& value) { SetState(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Encrypted Amazon EBS snapshots are copied asynchronously. If a snapshot copy
     * operation fails (for example, if the proper KMS permissions are not obtained)
     * this field displays error state details to help you diagnose why the error
     * occurred. This parameter is only returned by <a>DescribeSnapshots</a>.</p>
     */
    inline const Aws::String& GetStateMessage() const{ return m_stateMessage; }
    inline void SetStateMessage(const Aws::String& value) { m_stateMessage = value; }
    inline void SetStateMessage(Aws::String&& value) { m_stateMessage = std::move(value); }
    inline void SetStateMessage(const char* value) { m_stateMessage.assign(value); }
    inline CreateSnapshotResponse& WithStateMessage(const Aws::String& value) { SetStateMessage(value); return *this;}
    inline CreateSnapshotResponse& WithStateMessage(Aws::String&& value) { SetStateMessage(std::move(value)); return *this;}
    inline CreateSnapshotResponse& WithStateMessage(const char* value) { SetStateMessage(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time stamp when the snapshot was initiated.</p>
     */
    inline const Aws::Utils::DateTime& GetStartTime() const{ return m_startTime; }
    inline void SetStartTime(const Aws::Utils::DateTime& value) { m_startTime = value; }
    inline void SetStartTime(Aws::Utils::DateTime&& value) { m_startTime = std::move(value); }
    inline CreateSnapshotResponse& WithStartTime(const Aws::Utils::DateTime& value) { SetStartTime(value); return *this;}
    inline CreateSnapshotResponse& WithStartTime(Aws::Utils::DateTime&& value) { SetStartTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The progress of the snapshot, as a percentage.</p>
     */
    inline const Aws::String& GetProgress() const{ return m_progress; }
    inline void SetProgress(const Aws::String& value) { m_progress = value; }
    inline void SetProgress(Aws::String&& value) { m_progress = std::move(value); }
    inline void SetProgress(const char* value) { m_progress.assign(value); }
    inline CreateSnapshotResponse& WithProgress(const Aws::String& value) { SetProgress(value); return *this;}
    inline CreateSnapshotResponse& WithProgress(Aws::String&& value) { SetProgress(std::move(value)); return *this;}
    inline CreateSnapshotResponse& WithProgress(const char* value) { SetProgress(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the Amazon Web Services account that owns the EBS snapshot.</p>
     */
    inline const Aws::String& GetOwnerId() const{ return m_ownerId; }
    inline void SetOwnerId(const Aws::String& value) { m_ownerId = value; }
    inline void SetOwnerId(Aws::String&& value) { m_ownerId = std::move(value); }
    inline void SetOwnerId(const char* value) { m_ownerId.assign(value); }
    inline CreateSnapshotResponse& WithOwnerId(const Aws::String& value) { SetOwnerId(value); return *this;}
    inline CreateSnapshotResponse& WithOwnerId(Aws::String&& value) { SetOwnerId(std::move(value)); return *this;}
    inline CreateSnapshotResponse& WithOwnerId(const char* value) { SetOwnerId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description for the snapshot.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline void SetDescription(const Aws::String& value) { m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_description.assign(value); }
    inline CreateSnapshotResponse& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline CreateSnapshotResponse& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline CreateSnapshotResponse& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The size of the volume, in GiB.</p>
     */
    inline int GetVolumeSize() const{ return m_volumeSize; }
    inline void SetVolumeSize(int value) { m_volumeSize = value; }
    inline CreateSnapshotResponse& WithVolumeSize(int value) { SetVolumeSize(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether the snapshot is encrypted.</p>
     */
    inline bool GetEncrypted() const{ return m_encrypted; }
    inline void SetEncrypted(bool value) { m_encrypted = value; }
    inline CreateSnapshotResponse& WithEncrypted(bool value) { SetEncrypted(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the KMS key that was used to protect the
     * volume encryption key for the parent volume.</p>
     */
    inline const Aws::String& GetKmsKeyId() const{ return m_kmsKeyId; }
    inline void SetKmsKeyId(const Aws::String& value) { m_kmsKeyId = value; }
    inline void SetKmsKeyId(Aws::String&& value) { m_kmsKeyId = std::move(value); }
    inline void SetKmsKeyId(const char* value) { m_kmsKeyId.assign(value); }
    inline CreateSnapshotResponse& WithKmsKeyId(const Aws::String& value) { SetKmsKeyId(value); return *this;}
    inline CreateSnapshotResponse& WithKmsKeyId(Aws::String&& value) { SetKmsKeyId(std::move(value)); return *this;}
    inline CreateSnapshotResponse& WithKmsKeyId(const char* value) { SetKmsKeyId(value); return *this;}
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
    inline void SetDataEncryptionKeyId(const Aws::String& value) { m_dataEncryptionKeyId = value; }
    inline void SetDataEncryptionKeyId(Aws::String&& value) { m_dataEncryptionKeyId = std::move(value); }
    inline void SetDataEncryptionKeyId(const char* value) { m_dataEncryptionKeyId.assign(value); }
    inline CreateSnapshotResponse& WithDataEncryptionKeyId(const Aws::String& value) { SetDataEncryptionKeyId(value); return *this;}
    inline CreateSnapshotResponse& WithDataEncryptionKeyId(Aws::String&& value) { SetDataEncryptionKeyId(std::move(value)); return *this;}
    inline CreateSnapshotResponse& WithDataEncryptionKeyId(const char* value) { SetDataEncryptionKeyId(value); return *this;}
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }
    inline CreateSnapshotResponse& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}
    inline CreateSnapshotResponse& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_ownerAlias;

    Aws::String m_outpostArn;

    Aws::Vector<Tag> m_tags;

    StorageTier m_storageTier;

    Aws::Utils::DateTime m_restoreExpiryTime;

    SSEType m_sseType;

    Aws::String m_availabilityZone;

    TransferType m_transferType;

    int m_completionDurationMinutes;

    Aws::Utils::DateTime m_completionTime;

    Aws::String m_snapshotId;

    Aws::String m_volumeId;

    SnapshotState m_state;

    Aws::String m_stateMessage;

    Aws::Utils::DateTime m_startTime;

    Aws::String m_progress;

    Aws::String m_ownerId;

    Aws::String m_description;

    int m_volumeSize;

    bool m_encrypted;

    Aws::String m_kmsKeyId;

    Aws::String m_dataEncryptionKeyId;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
