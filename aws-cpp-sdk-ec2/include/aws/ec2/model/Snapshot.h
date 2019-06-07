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
#include <aws/core/utils/DateTime.h>
#include <aws/ec2/model/SnapshotState.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
  class AWS_EC2_API Snapshot
  {
  public:
    Snapshot();
    Snapshot(const Aws::Utils::Xml::XmlNode& xmlNode);
    Snapshot& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The data encryption key identifier for the snapshot. This value is a unique
     * identifier that corresponds to the data encryption key that was used to encrypt
     * the original volume or snapshot copy. Because data encryption keys are inherited
     * by volumes created from snapshots, and vice versa, if snapshots share the same
     * data encryption key identifier, then they belong to the same volume/snapshot
     * lineage. This parameter is only returned by <a>DescribeSnapshots</a>.</p>
     */
    inline const Aws::String& GetDataEncryptionKeyId() const{ return m_dataEncryptionKeyId; }

    /**
     * <p>The data encryption key identifier for the snapshot. This value is a unique
     * identifier that corresponds to the data encryption key that was used to encrypt
     * the original volume or snapshot copy. Because data encryption keys are inherited
     * by volumes created from snapshots, and vice versa, if snapshots share the same
     * data encryption key identifier, then they belong to the same volume/snapshot
     * lineage. This parameter is only returned by <a>DescribeSnapshots</a>.</p>
     */
    inline bool DataEncryptionKeyIdHasBeenSet() const { return m_dataEncryptionKeyIdHasBeenSet; }

    /**
     * <p>The data encryption key identifier for the snapshot. This value is a unique
     * identifier that corresponds to the data encryption key that was used to encrypt
     * the original volume or snapshot copy. Because data encryption keys are inherited
     * by volumes created from snapshots, and vice versa, if snapshots share the same
     * data encryption key identifier, then they belong to the same volume/snapshot
     * lineage. This parameter is only returned by <a>DescribeSnapshots</a>.</p>
     */
    inline void SetDataEncryptionKeyId(const Aws::String& value) { m_dataEncryptionKeyIdHasBeenSet = true; m_dataEncryptionKeyId = value; }

    /**
     * <p>The data encryption key identifier for the snapshot. This value is a unique
     * identifier that corresponds to the data encryption key that was used to encrypt
     * the original volume or snapshot copy. Because data encryption keys are inherited
     * by volumes created from snapshots, and vice versa, if snapshots share the same
     * data encryption key identifier, then they belong to the same volume/snapshot
     * lineage. This parameter is only returned by <a>DescribeSnapshots</a>.</p>
     */
    inline void SetDataEncryptionKeyId(Aws::String&& value) { m_dataEncryptionKeyIdHasBeenSet = true; m_dataEncryptionKeyId = std::move(value); }

    /**
     * <p>The data encryption key identifier for the snapshot. This value is a unique
     * identifier that corresponds to the data encryption key that was used to encrypt
     * the original volume or snapshot copy. Because data encryption keys are inherited
     * by volumes created from snapshots, and vice versa, if snapshots share the same
     * data encryption key identifier, then they belong to the same volume/snapshot
     * lineage. This parameter is only returned by <a>DescribeSnapshots</a>.</p>
     */
    inline void SetDataEncryptionKeyId(const char* value) { m_dataEncryptionKeyIdHasBeenSet = true; m_dataEncryptionKeyId.assign(value); }

    /**
     * <p>The data encryption key identifier for the snapshot. This value is a unique
     * identifier that corresponds to the data encryption key that was used to encrypt
     * the original volume or snapshot copy. Because data encryption keys are inherited
     * by volumes created from snapshots, and vice versa, if snapshots share the same
     * data encryption key identifier, then they belong to the same volume/snapshot
     * lineage. This parameter is only returned by <a>DescribeSnapshots</a>.</p>
     */
    inline Snapshot& WithDataEncryptionKeyId(const Aws::String& value) { SetDataEncryptionKeyId(value); return *this;}

    /**
     * <p>The data encryption key identifier for the snapshot. This value is a unique
     * identifier that corresponds to the data encryption key that was used to encrypt
     * the original volume or snapshot copy. Because data encryption keys are inherited
     * by volumes created from snapshots, and vice versa, if snapshots share the same
     * data encryption key identifier, then they belong to the same volume/snapshot
     * lineage. This parameter is only returned by <a>DescribeSnapshots</a>.</p>
     */
    inline Snapshot& WithDataEncryptionKeyId(Aws::String&& value) { SetDataEncryptionKeyId(std::move(value)); return *this;}

    /**
     * <p>The data encryption key identifier for the snapshot. This value is a unique
     * identifier that corresponds to the data encryption key that was used to encrypt
     * the original volume or snapshot copy. Because data encryption keys are inherited
     * by volumes created from snapshots, and vice versa, if snapshots share the same
     * data encryption key identifier, then they belong to the same volume/snapshot
     * lineage. This parameter is only returned by <a>DescribeSnapshots</a>.</p>
     */
    inline Snapshot& WithDataEncryptionKeyId(const char* value) { SetDataEncryptionKeyId(value); return *this;}


    /**
     * <p>The description for the snapshot.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>The description for the snapshot.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>The description for the snapshot.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>The description for the snapshot.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>The description for the snapshot.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>The description for the snapshot.</p>
     */
    inline Snapshot& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The description for the snapshot.</p>
     */
    inline Snapshot& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>The description for the snapshot.</p>
     */
    inline Snapshot& WithDescription(const char* value) { SetDescription(value); return *this;}


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
    inline Snapshot& WithEncrypted(bool value) { SetEncrypted(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the AWS Key Management Service (AWS KMS)
     * customer master key (CMK) that was used to protect the volume encryption key for
     * the parent volume.</p>
     */
    inline const Aws::String& GetKmsKeyId() const{ return m_kmsKeyId; }

    /**
     * <p>The Amazon Resource Name (ARN) of the AWS Key Management Service (AWS KMS)
     * customer master key (CMK) that was used to protect the volume encryption key for
     * the parent volume.</p>
     */
    inline bool KmsKeyIdHasBeenSet() const { return m_kmsKeyIdHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the AWS Key Management Service (AWS KMS)
     * customer master key (CMK) that was used to protect the volume encryption key for
     * the parent volume.</p>
     */
    inline void SetKmsKeyId(const Aws::String& value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the AWS Key Management Service (AWS KMS)
     * customer master key (CMK) that was used to protect the volume encryption key for
     * the parent volume.</p>
     */
    inline void SetKmsKeyId(Aws::String&& value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the AWS Key Management Service (AWS KMS)
     * customer master key (CMK) that was used to protect the volume encryption key for
     * the parent volume.</p>
     */
    inline void SetKmsKeyId(const char* value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the AWS Key Management Service (AWS KMS)
     * customer master key (CMK) that was used to protect the volume encryption key for
     * the parent volume.</p>
     */
    inline Snapshot& WithKmsKeyId(const Aws::String& value) { SetKmsKeyId(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the AWS Key Management Service (AWS KMS)
     * customer master key (CMK) that was used to protect the volume encryption key for
     * the parent volume.</p>
     */
    inline Snapshot& WithKmsKeyId(Aws::String&& value) { SetKmsKeyId(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the AWS Key Management Service (AWS KMS)
     * customer master key (CMK) that was used to protect the volume encryption key for
     * the parent volume.</p>
     */
    inline Snapshot& WithKmsKeyId(const char* value) { SetKmsKeyId(value); return *this;}


    /**
     * <p>The AWS account ID of the EBS snapshot owner.</p>
     */
    inline const Aws::String& GetOwnerId() const{ return m_ownerId; }

    /**
     * <p>The AWS account ID of the EBS snapshot owner.</p>
     */
    inline bool OwnerIdHasBeenSet() const { return m_ownerIdHasBeenSet; }

    /**
     * <p>The AWS account ID of the EBS snapshot owner.</p>
     */
    inline void SetOwnerId(const Aws::String& value) { m_ownerIdHasBeenSet = true; m_ownerId = value; }

    /**
     * <p>The AWS account ID of the EBS snapshot owner.</p>
     */
    inline void SetOwnerId(Aws::String&& value) { m_ownerIdHasBeenSet = true; m_ownerId = std::move(value); }

    /**
     * <p>The AWS account ID of the EBS snapshot owner.</p>
     */
    inline void SetOwnerId(const char* value) { m_ownerIdHasBeenSet = true; m_ownerId.assign(value); }

    /**
     * <p>The AWS account ID of the EBS snapshot owner.</p>
     */
    inline Snapshot& WithOwnerId(const Aws::String& value) { SetOwnerId(value); return *this;}

    /**
     * <p>The AWS account ID of the EBS snapshot owner.</p>
     */
    inline Snapshot& WithOwnerId(Aws::String&& value) { SetOwnerId(std::move(value)); return *this;}

    /**
     * <p>The AWS account ID of the EBS snapshot owner.</p>
     */
    inline Snapshot& WithOwnerId(const char* value) { SetOwnerId(value); return *this;}


    /**
     * <p>The progress of the snapshot, as a percentage.</p>
     */
    inline const Aws::String& GetProgress() const{ return m_progress; }

    /**
     * <p>The progress of the snapshot, as a percentage.</p>
     */
    inline bool ProgressHasBeenSet() const { return m_progressHasBeenSet; }

    /**
     * <p>The progress of the snapshot, as a percentage.</p>
     */
    inline void SetProgress(const Aws::String& value) { m_progressHasBeenSet = true; m_progress = value; }

    /**
     * <p>The progress of the snapshot, as a percentage.</p>
     */
    inline void SetProgress(Aws::String&& value) { m_progressHasBeenSet = true; m_progress = std::move(value); }

    /**
     * <p>The progress of the snapshot, as a percentage.</p>
     */
    inline void SetProgress(const char* value) { m_progressHasBeenSet = true; m_progress.assign(value); }

    /**
     * <p>The progress of the snapshot, as a percentage.</p>
     */
    inline Snapshot& WithProgress(const Aws::String& value) { SetProgress(value); return *this;}

    /**
     * <p>The progress of the snapshot, as a percentage.</p>
     */
    inline Snapshot& WithProgress(Aws::String&& value) { SetProgress(std::move(value)); return *this;}

    /**
     * <p>The progress of the snapshot, as a percentage.</p>
     */
    inline Snapshot& WithProgress(const char* value) { SetProgress(value); return *this;}


    /**
     * <p>The ID of the snapshot. Each snapshot receives a unique identifier when it is
     * created.</p>
     */
    inline const Aws::String& GetSnapshotId() const{ return m_snapshotId; }

    /**
     * <p>The ID of the snapshot. Each snapshot receives a unique identifier when it is
     * created.</p>
     */
    inline bool SnapshotIdHasBeenSet() const { return m_snapshotIdHasBeenSet; }

    /**
     * <p>The ID of the snapshot. Each snapshot receives a unique identifier when it is
     * created.</p>
     */
    inline void SetSnapshotId(const Aws::String& value) { m_snapshotIdHasBeenSet = true; m_snapshotId = value; }

    /**
     * <p>The ID of the snapshot. Each snapshot receives a unique identifier when it is
     * created.</p>
     */
    inline void SetSnapshotId(Aws::String&& value) { m_snapshotIdHasBeenSet = true; m_snapshotId = std::move(value); }

    /**
     * <p>The ID of the snapshot. Each snapshot receives a unique identifier when it is
     * created.</p>
     */
    inline void SetSnapshotId(const char* value) { m_snapshotIdHasBeenSet = true; m_snapshotId.assign(value); }

    /**
     * <p>The ID of the snapshot. Each snapshot receives a unique identifier when it is
     * created.</p>
     */
    inline Snapshot& WithSnapshotId(const Aws::String& value) { SetSnapshotId(value); return *this;}

    /**
     * <p>The ID of the snapshot. Each snapshot receives a unique identifier when it is
     * created.</p>
     */
    inline Snapshot& WithSnapshotId(Aws::String&& value) { SetSnapshotId(std::move(value)); return *this;}

    /**
     * <p>The ID of the snapshot. Each snapshot receives a unique identifier when it is
     * created.</p>
     */
    inline Snapshot& WithSnapshotId(const char* value) { SetSnapshotId(value); return *this;}


    /**
     * <p>The time stamp when the snapshot was initiated.</p>
     */
    inline const Aws::Utils::DateTime& GetStartTime() const{ return m_startTime; }

    /**
     * <p>The time stamp when the snapshot was initiated.</p>
     */
    inline bool StartTimeHasBeenSet() const { return m_startTimeHasBeenSet; }

    /**
     * <p>The time stamp when the snapshot was initiated.</p>
     */
    inline void SetStartTime(const Aws::Utils::DateTime& value) { m_startTimeHasBeenSet = true; m_startTime = value; }

    /**
     * <p>The time stamp when the snapshot was initiated.</p>
     */
    inline void SetStartTime(Aws::Utils::DateTime&& value) { m_startTimeHasBeenSet = true; m_startTime = std::move(value); }

    /**
     * <p>The time stamp when the snapshot was initiated.</p>
     */
    inline Snapshot& WithStartTime(const Aws::Utils::DateTime& value) { SetStartTime(value); return *this;}

    /**
     * <p>The time stamp when the snapshot was initiated.</p>
     */
    inline Snapshot& WithStartTime(Aws::Utils::DateTime&& value) { SetStartTime(std::move(value)); return *this;}


    /**
     * <p>The snapshot state.</p>
     */
    inline const SnapshotState& GetState() const{ return m_state; }

    /**
     * <p>The snapshot state.</p>
     */
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }

    /**
     * <p>The snapshot state.</p>
     */
    inline void SetState(const SnapshotState& value) { m_stateHasBeenSet = true; m_state = value; }

    /**
     * <p>The snapshot state.</p>
     */
    inline void SetState(SnapshotState&& value) { m_stateHasBeenSet = true; m_state = std::move(value); }

    /**
     * <p>The snapshot state.</p>
     */
    inline Snapshot& WithState(const SnapshotState& value) { SetState(value); return *this;}

    /**
     * <p>The snapshot state.</p>
     */
    inline Snapshot& WithState(SnapshotState&& value) { SetState(std::move(value)); return *this;}


    /**
     * <p>Encrypted Amazon EBS snapshots are copied asynchronously. If a snapshot copy
     * operation fails (for example, if the proper AWS Key Management Service (AWS KMS)
     * permissions are not obtained) this field displays error state details to help
     * you diagnose why the error occurred. This parameter is only returned by
     * <a>DescribeSnapshots</a>.</p>
     */
    inline const Aws::String& GetStateMessage() const{ return m_stateMessage; }

    /**
     * <p>Encrypted Amazon EBS snapshots are copied asynchronously. If a snapshot copy
     * operation fails (for example, if the proper AWS Key Management Service (AWS KMS)
     * permissions are not obtained) this field displays error state details to help
     * you diagnose why the error occurred. This parameter is only returned by
     * <a>DescribeSnapshots</a>.</p>
     */
    inline bool StateMessageHasBeenSet() const { return m_stateMessageHasBeenSet; }

    /**
     * <p>Encrypted Amazon EBS snapshots are copied asynchronously. If a snapshot copy
     * operation fails (for example, if the proper AWS Key Management Service (AWS KMS)
     * permissions are not obtained) this field displays error state details to help
     * you diagnose why the error occurred. This parameter is only returned by
     * <a>DescribeSnapshots</a>.</p>
     */
    inline void SetStateMessage(const Aws::String& value) { m_stateMessageHasBeenSet = true; m_stateMessage = value; }

    /**
     * <p>Encrypted Amazon EBS snapshots are copied asynchronously. If a snapshot copy
     * operation fails (for example, if the proper AWS Key Management Service (AWS KMS)
     * permissions are not obtained) this field displays error state details to help
     * you diagnose why the error occurred. This parameter is only returned by
     * <a>DescribeSnapshots</a>.</p>
     */
    inline void SetStateMessage(Aws::String&& value) { m_stateMessageHasBeenSet = true; m_stateMessage = std::move(value); }

    /**
     * <p>Encrypted Amazon EBS snapshots are copied asynchronously. If a snapshot copy
     * operation fails (for example, if the proper AWS Key Management Service (AWS KMS)
     * permissions are not obtained) this field displays error state details to help
     * you diagnose why the error occurred. This parameter is only returned by
     * <a>DescribeSnapshots</a>.</p>
     */
    inline void SetStateMessage(const char* value) { m_stateMessageHasBeenSet = true; m_stateMessage.assign(value); }

    /**
     * <p>Encrypted Amazon EBS snapshots are copied asynchronously. If a snapshot copy
     * operation fails (for example, if the proper AWS Key Management Service (AWS KMS)
     * permissions are not obtained) this field displays error state details to help
     * you diagnose why the error occurred. This parameter is only returned by
     * <a>DescribeSnapshots</a>.</p>
     */
    inline Snapshot& WithStateMessage(const Aws::String& value) { SetStateMessage(value); return *this;}

    /**
     * <p>Encrypted Amazon EBS snapshots are copied asynchronously. If a snapshot copy
     * operation fails (for example, if the proper AWS Key Management Service (AWS KMS)
     * permissions are not obtained) this field displays error state details to help
     * you diagnose why the error occurred. This parameter is only returned by
     * <a>DescribeSnapshots</a>.</p>
     */
    inline Snapshot& WithStateMessage(Aws::String&& value) { SetStateMessage(std::move(value)); return *this;}

    /**
     * <p>Encrypted Amazon EBS snapshots are copied asynchronously. If a snapshot copy
     * operation fails (for example, if the proper AWS Key Management Service (AWS KMS)
     * permissions are not obtained) this field displays error state details to help
     * you diagnose why the error occurred. This parameter is only returned by
     * <a>DescribeSnapshots</a>.</p>
     */
    inline Snapshot& WithStateMessage(const char* value) { SetStateMessage(value); return *this;}


    /**
     * <p>The ID of the volume that was used to create the snapshot. Snapshots created
     * by the <a>CopySnapshot</a> action have an arbitrary volume ID that should not be
     * used for any purpose.</p>
     */
    inline const Aws::String& GetVolumeId() const{ return m_volumeId; }

    /**
     * <p>The ID of the volume that was used to create the snapshot. Snapshots created
     * by the <a>CopySnapshot</a> action have an arbitrary volume ID that should not be
     * used for any purpose.</p>
     */
    inline bool VolumeIdHasBeenSet() const { return m_volumeIdHasBeenSet; }

    /**
     * <p>The ID of the volume that was used to create the snapshot. Snapshots created
     * by the <a>CopySnapshot</a> action have an arbitrary volume ID that should not be
     * used for any purpose.</p>
     */
    inline void SetVolumeId(const Aws::String& value) { m_volumeIdHasBeenSet = true; m_volumeId = value; }

    /**
     * <p>The ID of the volume that was used to create the snapshot. Snapshots created
     * by the <a>CopySnapshot</a> action have an arbitrary volume ID that should not be
     * used for any purpose.</p>
     */
    inline void SetVolumeId(Aws::String&& value) { m_volumeIdHasBeenSet = true; m_volumeId = std::move(value); }

    /**
     * <p>The ID of the volume that was used to create the snapshot. Snapshots created
     * by the <a>CopySnapshot</a> action have an arbitrary volume ID that should not be
     * used for any purpose.</p>
     */
    inline void SetVolumeId(const char* value) { m_volumeIdHasBeenSet = true; m_volumeId.assign(value); }

    /**
     * <p>The ID of the volume that was used to create the snapshot. Snapshots created
     * by the <a>CopySnapshot</a> action have an arbitrary volume ID that should not be
     * used for any purpose.</p>
     */
    inline Snapshot& WithVolumeId(const Aws::String& value) { SetVolumeId(value); return *this;}

    /**
     * <p>The ID of the volume that was used to create the snapshot. Snapshots created
     * by the <a>CopySnapshot</a> action have an arbitrary volume ID that should not be
     * used for any purpose.</p>
     */
    inline Snapshot& WithVolumeId(Aws::String&& value) { SetVolumeId(std::move(value)); return *this;}

    /**
     * <p>The ID of the volume that was used to create the snapshot. Snapshots created
     * by the <a>CopySnapshot</a> action have an arbitrary volume ID that should not be
     * used for any purpose.</p>
     */
    inline Snapshot& WithVolumeId(const char* value) { SetVolumeId(value); return *this;}


    /**
     * <p>The size of the volume, in GiB.</p>
     */
    inline int GetVolumeSize() const{ return m_volumeSize; }

    /**
     * <p>The size of the volume, in GiB.</p>
     */
    inline bool VolumeSizeHasBeenSet() const { return m_volumeSizeHasBeenSet; }

    /**
     * <p>The size of the volume, in GiB.</p>
     */
    inline void SetVolumeSize(int value) { m_volumeSizeHasBeenSet = true; m_volumeSize = value; }

    /**
     * <p>The size of the volume, in GiB.</p>
     */
    inline Snapshot& WithVolumeSize(int value) { SetVolumeSize(value); return *this;}


    /**
     * <p> Value from an Amazon-maintained list (<code>amazon</code> |
     * <code>self</code> | <code>all</code> | <code>aws-marketplace</code> |
     * <code>microsoft</code>) of snapshot owners. Not to be confused with the
     * user-configured AWS account alias, which is set from the IAM console. </p>
     */
    inline const Aws::String& GetOwnerAlias() const{ return m_ownerAlias; }

    /**
     * <p> Value from an Amazon-maintained list (<code>amazon</code> |
     * <code>self</code> | <code>all</code> | <code>aws-marketplace</code> |
     * <code>microsoft</code>) of snapshot owners. Not to be confused with the
     * user-configured AWS account alias, which is set from the IAM console. </p>
     */
    inline bool OwnerAliasHasBeenSet() const { return m_ownerAliasHasBeenSet; }

    /**
     * <p> Value from an Amazon-maintained list (<code>amazon</code> |
     * <code>self</code> | <code>all</code> | <code>aws-marketplace</code> |
     * <code>microsoft</code>) of snapshot owners. Not to be confused with the
     * user-configured AWS account alias, which is set from the IAM console. </p>
     */
    inline void SetOwnerAlias(const Aws::String& value) { m_ownerAliasHasBeenSet = true; m_ownerAlias = value; }

    /**
     * <p> Value from an Amazon-maintained list (<code>amazon</code> |
     * <code>self</code> | <code>all</code> | <code>aws-marketplace</code> |
     * <code>microsoft</code>) of snapshot owners. Not to be confused with the
     * user-configured AWS account alias, which is set from the IAM console. </p>
     */
    inline void SetOwnerAlias(Aws::String&& value) { m_ownerAliasHasBeenSet = true; m_ownerAlias = std::move(value); }

    /**
     * <p> Value from an Amazon-maintained list (<code>amazon</code> |
     * <code>self</code> | <code>all</code> | <code>aws-marketplace</code> |
     * <code>microsoft</code>) of snapshot owners. Not to be confused with the
     * user-configured AWS account alias, which is set from the IAM console. </p>
     */
    inline void SetOwnerAlias(const char* value) { m_ownerAliasHasBeenSet = true; m_ownerAlias.assign(value); }

    /**
     * <p> Value from an Amazon-maintained list (<code>amazon</code> |
     * <code>self</code> | <code>all</code> | <code>aws-marketplace</code> |
     * <code>microsoft</code>) of snapshot owners. Not to be confused with the
     * user-configured AWS account alias, which is set from the IAM console. </p>
     */
    inline Snapshot& WithOwnerAlias(const Aws::String& value) { SetOwnerAlias(value); return *this;}

    /**
     * <p> Value from an Amazon-maintained list (<code>amazon</code> |
     * <code>self</code> | <code>all</code> | <code>aws-marketplace</code> |
     * <code>microsoft</code>) of snapshot owners. Not to be confused with the
     * user-configured AWS account alias, which is set from the IAM console. </p>
     */
    inline Snapshot& WithOwnerAlias(Aws::String&& value) { SetOwnerAlias(std::move(value)); return *this;}

    /**
     * <p> Value from an Amazon-maintained list (<code>amazon</code> |
     * <code>self</code> | <code>all</code> | <code>aws-marketplace</code> |
     * <code>microsoft</code>) of snapshot owners. Not to be confused with the
     * user-configured AWS account alias, which is set from the IAM console. </p>
     */
    inline Snapshot& WithOwnerAlias(const char* value) { SetOwnerAlias(value); return *this;}


    /**
     * <p>Any tags assigned to the snapshot.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /**
     * <p>Any tags assigned to the snapshot.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>Any tags assigned to the snapshot.</p>
     */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>Any tags assigned to the snapshot.</p>
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>Any tags assigned to the snapshot.</p>
     */
    inline Snapshot& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>Any tags assigned to the snapshot.</p>
     */
    inline Snapshot& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>Any tags assigned to the snapshot.</p>
     */
    inline Snapshot& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>Any tags assigned to the snapshot.</p>
     */
    inline Snapshot& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline bool ResponseMetadataHasBeenSet() const { return m_responseMetadataHasBeenSet; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadataHasBeenSet = true; m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadataHasBeenSet = true; m_responseMetadata = std::move(value); }

    
    inline Snapshot& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline Snapshot& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    Aws::String m_dataEncryptionKeyId;
    bool m_dataEncryptionKeyIdHasBeenSet;

    Aws::String m_description;
    bool m_descriptionHasBeenSet;

    bool m_encrypted;
    bool m_encryptedHasBeenSet;

    Aws::String m_kmsKeyId;
    bool m_kmsKeyIdHasBeenSet;

    Aws::String m_ownerId;
    bool m_ownerIdHasBeenSet;

    Aws::String m_progress;
    bool m_progressHasBeenSet;

    Aws::String m_snapshotId;
    bool m_snapshotIdHasBeenSet;

    Aws::Utils::DateTime m_startTime;
    bool m_startTimeHasBeenSet;

    SnapshotState m_state;
    bool m_stateHasBeenSet;

    Aws::String m_stateMessage;
    bool m_stateMessageHasBeenSet;

    Aws::String m_volumeId;
    bool m_volumeIdHasBeenSet;

    int m_volumeSize;
    bool m_volumeSizeHasBeenSet;

    Aws::String m_ownerAlias;
    bool m_ownerAliasHasBeenSet;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet;

    ResponseMetadata m_responseMetadata;
    bool m_responseMetadataHasBeenSet;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
