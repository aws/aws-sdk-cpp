/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/ec2/model/SnapshotState.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ec2/model/StorageTier.h>
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
    inline void SetDataEncryptionKeyId(const Aws::String& value) { m_dataEncryptionKeyId = value; }

    /**
     * <p>The data encryption key identifier for the snapshot. This value is a unique
     * identifier that corresponds to the data encryption key that was used to encrypt
     * the original volume or snapshot copy. Because data encryption keys are inherited
     * by volumes created from snapshots, and vice versa, if snapshots share the same
     * data encryption key identifier, then they belong to the same volume/snapshot
     * lineage. This parameter is only returned by <a>DescribeSnapshots</a>.</p>
     */
    inline void SetDataEncryptionKeyId(Aws::String&& value) { m_dataEncryptionKeyId = std::move(value); }

    /**
     * <p>The data encryption key identifier for the snapshot. This value is a unique
     * identifier that corresponds to the data encryption key that was used to encrypt
     * the original volume or snapshot copy. Because data encryption keys are inherited
     * by volumes created from snapshots, and vice versa, if snapshots share the same
     * data encryption key identifier, then they belong to the same volume/snapshot
     * lineage. This parameter is only returned by <a>DescribeSnapshots</a>.</p>
     */
    inline void SetDataEncryptionKeyId(const char* value) { m_dataEncryptionKeyId.assign(value); }

    /**
     * <p>The data encryption key identifier for the snapshot. This value is a unique
     * identifier that corresponds to the data encryption key that was used to encrypt
     * the original volume or snapshot copy. Because data encryption keys are inherited
     * by volumes created from snapshots, and vice versa, if snapshots share the same
     * data encryption key identifier, then they belong to the same volume/snapshot
     * lineage. This parameter is only returned by <a>DescribeSnapshots</a>.</p>
     */
    inline CreateSnapshotResponse& WithDataEncryptionKeyId(const Aws::String& value) { SetDataEncryptionKeyId(value); return *this;}

    /**
     * <p>The data encryption key identifier for the snapshot. This value is a unique
     * identifier that corresponds to the data encryption key that was used to encrypt
     * the original volume or snapshot copy. Because data encryption keys are inherited
     * by volumes created from snapshots, and vice versa, if snapshots share the same
     * data encryption key identifier, then they belong to the same volume/snapshot
     * lineage. This parameter is only returned by <a>DescribeSnapshots</a>.</p>
     */
    inline CreateSnapshotResponse& WithDataEncryptionKeyId(Aws::String&& value) { SetDataEncryptionKeyId(std::move(value)); return *this;}

    /**
     * <p>The data encryption key identifier for the snapshot. This value is a unique
     * identifier that corresponds to the data encryption key that was used to encrypt
     * the original volume or snapshot copy. Because data encryption keys are inherited
     * by volumes created from snapshots, and vice versa, if snapshots share the same
     * data encryption key identifier, then they belong to the same volume/snapshot
     * lineage. This parameter is only returned by <a>DescribeSnapshots</a>.</p>
     */
    inline CreateSnapshotResponse& WithDataEncryptionKeyId(const char* value) { SetDataEncryptionKeyId(value); return *this;}


    /**
     * <p>The description for the snapshot.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>The description for the snapshot.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_description = value; }

    /**
     * <p>The description for the snapshot.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_description = std::move(value); }

    /**
     * <p>The description for the snapshot.</p>
     */
    inline void SetDescription(const char* value) { m_description.assign(value); }

    /**
     * <p>The description for the snapshot.</p>
     */
    inline CreateSnapshotResponse& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The description for the snapshot.</p>
     */
    inline CreateSnapshotResponse& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>The description for the snapshot.</p>
     */
    inline CreateSnapshotResponse& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>Indicates whether the snapshot is encrypted.</p>
     */
    inline bool GetEncrypted() const{ return m_encrypted; }

    /**
     * <p>Indicates whether the snapshot is encrypted.</p>
     */
    inline void SetEncrypted(bool value) { m_encrypted = value; }

    /**
     * <p>Indicates whether the snapshot is encrypted.</p>
     */
    inline CreateSnapshotResponse& WithEncrypted(bool value) { SetEncrypted(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the Key Management Service (KMS) KMS key
     * that was used to protect the volume encryption key for the parent volume.</p>
     */
    inline const Aws::String& GetKmsKeyId() const{ return m_kmsKeyId; }

    /**
     * <p>The Amazon Resource Name (ARN) of the Key Management Service (KMS) KMS key
     * that was used to protect the volume encryption key for the parent volume.</p>
     */
    inline void SetKmsKeyId(const Aws::String& value) { m_kmsKeyId = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the Key Management Service (KMS) KMS key
     * that was used to protect the volume encryption key for the parent volume.</p>
     */
    inline void SetKmsKeyId(Aws::String&& value) { m_kmsKeyId = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the Key Management Service (KMS) KMS key
     * that was used to protect the volume encryption key for the parent volume.</p>
     */
    inline void SetKmsKeyId(const char* value) { m_kmsKeyId.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the Key Management Service (KMS) KMS key
     * that was used to protect the volume encryption key for the parent volume.</p>
     */
    inline CreateSnapshotResponse& WithKmsKeyId(const Aws::String& value) { SetKmsKeyId(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the Key Management Service (KMS) KMS key
     * that was used to protect the volume encryption key for the parent volume.</p>
     */
    inline CreateSnapshotResponse& WithKmsKeyId(Aws::String&& value) { SetKmsKeyId(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the Key Management Service (KMS) KMS key
     * that was used to protect the volume encryption key for the parent volume.</p>
     */
    inline CreateSnapshotResponse& WithKmsKeyId(const char* value) { SetKmsKeyId(value); return *this;}


    /**
     * <p>The ID of the Amazon Web Services account that owns the EBS snapshot.</p>
     */
    inline const Aws::String& GetOwnerId() const{ return m_ownerId; }

    /**
     * <p>The ID of the Amazon Web Services account that owns the EBS snapshot.</p>
     */
    inline void SetOwnerId(const Aws::String& value) { m_ownerId = value; }

    /**
     * <p>The ID of the Amazon Web Services account that owns the EBS snapshot.</p>
     */
    inline void SetOwnerId(Aws::String&& value) { m_ownerId = std::move(value); }

    /**
     * <p>The ID of the Amazon Web Services account that owns the EBS snapshot.</p>
     */
    inline void SetOwnerId(const char* value) { m_ownerId.assign(value); }

    /**
     * <p>The ID of the Amazon Web Services account that owns the EBS snapshot.</p>
     */
    inline CreateSnapshotResponse& WithOwnerId(const Aws::String& value) { SetOwnerId(value); return *this;}

    /**
     * <p>The ID of the Amazon Web Services account that owns the EBS snapshot.</p>
     */
    inline CreateSnapshotResponse& WithOwnerId(Aws::String&& value) { SetOwnerId(std::move(value)); return *this;}

    /**
     * <p>The ID of the Amazon Web Services account that owns the EBS snapshot.</p>
     */
    inline CreateSnapshotResponse& WithOwnerId(const char* value) { SetOwnerId(value); return *this;}


    /**
     * <p>The progress of the snapshot, as a percentage.</p>
     */
    inline const Aws::String& GetProgress() const{ return m_progress; }

    /**
     * <p>The progress of the snapshot, as a percentage.</p>
     */
    inline void SetProgress(const Aws::String& value) { m_progress = value; }

    /**
     * <p>The progress of the snapshot, as a percentage.</p>
     */
    inline void SetProgress(Aws::String&& value) { m_progress = std::move(value); }

    /**
     * <p>The progress of the snapshot, as a percentage.</p>
     */
    inline void SetProgress(const char* value) { m_progress.assign(value); }

    /**
     * <p>The progress of the snapshot, as a percentage.</p>
     */
    inline CreateSnapshotResponse& WithProgress(const Aws::String& value) { SetProgress(value); return *this;}

    /**
     * <p>The progress of the snapshot, as a percentage.</p>
     */
    inline CreateSnapshotResponse& WithProgress(Aws::String&& value) { SetProgress(std::move(value)); return *this;}

    /**
     * <p>The progress of the snapshot, as a percentage.</p>
     */
    inline CreateSnapshotResponse& WithProgress(const char* value) { SetProgress(value); return *this;}


    /**
     * <p>The ID of the snapshot. Each snapshot receives a unique identifier when it is
     * created.</p>
     */
    inline const Aws::String& GetSnapshotId() const{ return m_snapshotId; }

    /**
     * <p>The ID of the snapshot. Each snapshot receives a unique identifier when it is
     * created.</p>
     */
    inline void SetSnapshotId(const Aws::String& value) { m_snapshotId = value; }

    /**
     * <p>The ID of the snapshot. Each snapshot receives a unique identifier when it is
     * created.</p>
     */
    inline void SetSnapshotId(Aws::String&& value) { m_snapshotId = std::move(value); }

    /**
     * <p>The ID of the snapshot. Each snapshot receives a unique identifier when it is
     * created.</p>
     */
    inline void SetSnapshotId(const char* value) { m_snapshotId.assign(value); }

    /**
     * <p>The ID of the snapshot. Each snapshot receives a unique identifier when it is
     * created.</p>
     */
    inline CreateSnapshotResponse& WithSnapshotId(const Aws::String& value) { SetSnapshotId(value); return *this;}

    /**
     * <p>The ID of the snapshot. Each snapshot receives a unique identifier when it is
     * created.</p>
     */
    inline CreateSnapshotResponse& WithSnapshotId(Aws::String&& value) { SetSnapshotId(std::move(value)); return *this;}

    /**
     * <p>The ID of the snapshot. Each snapshot receives a unique identifier when it is
     * created.</p>
     */
    inline CreateSnapshotResponse& WithSnapshotId(const char* value) { SetSnapshotId(value); return *this;}


    /**
     * <p>The time stamp when the snapshot was initiated.</p>
     */
    inline const Aws::Utils::DateTime& GetStartTime() const{ return m_startTime; }

    /**
     * <p>The time stamp when the snapshot was initiated.</p>
     */
    inline void SetStartTime(const Aws::Utils::DateTime& value) { m_startTime = value; }

    /**
     * <p>The time stamp when the snapshot was initiated.</p>
     */
    inline void SetStartTime(Aws::Utils::DateTime&& value) { m_startTime = std::move(value); }

    /**
     * <p>The time stamp when the snapshot was initiated.</p>
     */
    inline CreateSnapshotResponse& WithStartTime(const Aws::Utils::DateTime& value) { SetStartTime(value); return *this;}

    /**
     * <p>The time stamp when the snapshot was initiated.</p>
     */
    inline CreateSnapshotResponse& WithStartTime(Aws::Utils::DateTime&& value) { SetStartTime(std::move(value)); return *this;}


    /**
     * <p>The snapshot state.</p>
     */
    inline const SnapshotState& GetState() const{ return m_state; }

    /**
     * <p>The snapshot state.</p>
     */
    inline void SetState(const SnapshotState& value) { m_state = value; }

    /**
     * <p>The snapshot state.</p>
     */
    inline void SetState(SnapshotState&& value) { m_state = std::move(value); }

    /**
     * <p>The snapshot state.</p>
     */
    inline CreateSnapshotResponse& WithState(const SnapshotState& value) { SetState(value); return *this;}

    /**
     * <p>The snapshot state.</p>
     */
    inline CreateSnapshotResponse& WithState(SnapshotState&& value) { SetState(std::move(value)); return *this;}


    /**
     * <p>Encrypted Amazon EBS snapshots are copied asynchronously. If a snapshot copy
     * operation fails (for example, if the proper Key Management Service (KMS)
     * permissions are not obtained) this field displays error state details to help
     * you diagnose why the error occurred. This parameter is only returned by
     * <a>DescribeSnapshots</a>.</p>
     */
    inline const Aws::String& GetStateMessage() const{ return m_stateMessage; }

    /**
     * <p>Encrypted Amazon EBS snapshots are copied asynchronously. If a snapshot copy
     * operation fails (for example, if the proper Key Management Service (KMS)
     * permissions are not obtained) this field displays error state details to help
     * you diagnose why the error occurred. This parameter is only returned by
     * <a>DescribeSnapshots</a>.</p>
     */
    inline void SetStateMessage(const Aws::String& value) { m_stateMessage = value; }

    /**
     * <p>Encrypted Amazon EBS snapshots are copied asynchronously. If a snapshot copy
     * operation fails (for example, if the proper Key Management Service (KMS)
     * permissions are not obtained) this field displays error state details to help
     * you diagnose why the error occurred. This parameter is only returned by
     * <a>DescribeSnapshots</a>.</p>
     */
    inline void SetStateMessage(Aws::String&& value) { m_stateMessage = std::move(value); }

    /**
     * <p>Encrypted Amazon EBS snapshots are copied asynchronously. If a snapshot copy
     * operation fails (for example, if the proper Key Management Service (KMS)
     * permissions are not obtained) this field displays error state details to help
     * you diagnose why the error occurred. This parameter is only returned by
     * <a>DescribeSnapshots</a>.</p>
     */
    inline void SetStateMessage(const char* value) { m_stateMessage.assign(value); }

    /**
     * <p>Encrypted Amazon EBS snapshots are copied asynchronously. If a snapshot copy
     * operation fails (for example, if the proper Key Management Service (KMS)
     * permissions are not obtained) this field displays error state details to help
     * you diagnose why the error occurred. This parameter is only returned by
     * <a>DescribeSnapshots</a>.</p>
     */
    inline CreateSnapshotResponse& WithStateMessage(const Aws::String& value) { SetStateMessage(value); return *this;}

    /**
     * <p>Encrypted Amazon EBS snapshots are copied asynchronously. If a snapshot copy
     * operation fails (for example, if the proper Key Management Service (KMS)
     * permissions are not obtained) this field displays error state details to help
     * you diagnose why the error occurred. This parameter is only returned by
     * <a>DescribeSnapshots</a>.</p>
     */
    inline CreateSnapshotResponse& WithStateMessage(Aws::String&& value) { SetStateMessage(std::move(value)); return *this;}

    /**
     * <p>Encrypted Amazon EBS snapshots are copied asynchronously. If a snapshot copy
     * operation fails (for example, if the proper Key Management Service (KMS)
     * permissions are not obtained) this field displays error state details to help
     * you diagnose why the error occurred. This parameter is only returned by
     * <a>DescribeSnapshots</a>.</p>
     */
    inline CreateSnapshotResponse& WithStateMessage(const char* value) { SetStateMessage(value); return *this;}


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
    inline void SetVolumeId(const Aws::String& value) { m_volumeId = value; }

    /**
     * <p>The ID of the volume that was used to create the snapshot. Snapshots created
     * by the <a>CopySnapshot</a> action have an arbitrary volume ID that should not be
     * used for any purpose.</p>
     */
    inline void SetVolumeId(Aws::String&& value) { m_volumeId = std::move(value); }

    /**
     * <p>The ID of the volume that was used to create the snapshot. Snapshots created
     * by the <a>CopySnapshot</a> action have an arbitrary volume ID that should not be
     * used for any purpose.</p>
     */
    inline void SetVolumeId(const char* value) { m_volumeId.assign(value); }

    /**
     * <p>The ID of the volume that was used to create the snapshot. Snapshots created
     * by the <a>CopySnapshot</a> action have an arbitrary volume ID that should not be
     * used for any purpose.</p>
     */
    inline CreateSnapshotResponse& WithVolumeId(const Aws::String& value) { SetVolumeId(value); return *this;}

    /**
     * <p>The ID of the volume that was used to create the snapshot. Snapshots created
     * by the <a>CopySnapshot</a> action have an arbitrary volume ID that should not be
     * used for any purpose.</p>
     */
    inline CreateSnapshotResponse& WithVolumeId(Aws::String&& value) { SetVolumeId(std::move(value)); return *this;}

    /**
     * <p>The ID of the volume that was used to create the snapshot. Snapshots created
     * by the <a>CopySnapshot</a> action have an arbitrary volume ID that should not be
     * used for any purpose.</p>
     */
    inline CreateSnapshotResponse& WithVolumeId(const char* value) { SetVolumeId(value); return *this;}


    /**
     * <p>The size of the volume, in GiB.</p>
     */
    inline int GetVolumeSize() const{ return m_volumeSize; }

    /**
     * <p>The size of the volume, in GiB.</p>
     */
    inline void SetVolumeSize(int value) { m_volumeSize = value; }

    /**
     * <p>The size of the volume, in GiB.</p>
     */
    inline CreateSnapshotResponse& WithVolumeSize(int value) { SetVolumeSize(value); return *this;}


    /**
     * <p>The Amazon Web Services owner alias, from an Amazon-maintained list
     * (<code>amazon</code>). This is not the user-configured Amazon Web Services
     * account alias set using the IAM console.</p>
     */
    inline const Aws::String& GetOwnerAlias() const{ return m_ownerAlias; }

    /**
     * <p>The Amazon Web Services owner alias, from an Amazon-maintained list
     * (<code>amazon</code>). This is not the user-configured Amazon Web Services
     * account alias set using the IAM console.</p>
     */
    inline void SetOwnerAlias(const Aws::String& value) { m_ownerAlias = value; }

    /**
     * <p>The Amazon Web Services owner alias, from an Amazon-maintained list
     * (<code>amazon</code>). This is not the user-configured Amazon Web Services
     * account alias set using the IAM console.</p>
     */
    inline void SetOwnerAlias(Aws::String&& value) { m_ownerAlias = std::move(value); }

    /**
     * <p>The Amazon Web Services owner alias, from an Amazon-maintained list
     * (<code>amazon</code>). This is not the user-configured Amazon Web Services
     * account alias set using the IAM console.</p>
     */
    inline void SetOwnerAlias(const char* value) { m_ownerAlias.assign(value); }

    /**
     * <p>The Amazon Web Services owner alias, from an Amazon-maintained list
     * (<code>amazon</code>). This is not the user-configured Amazon Web Services
     * account alias set using the IAM console.</p>
     */
    inline CreateSnapshotResponse& WithOwnerAlias(const Aws::String& value) { SetOwnerAlias(value); return *this;}

    /**
     * <p>The Amazon Web Services owner alias, from an Amazon-maintained list
     * (<code>amazon</code>). This is not the user-configured Amazon Web Services
     * account alias set using the IAM console.</p>
     */
    inline CreateSnapshotResponse& WithOwnerAlias(Aws::String&& value) { SetOwnerAlias(std::move(value)); return *this;}

    /**
     * <p>The Amazon Web Services owner alias, from an Amazon-maintained list
     * (<code>amazon</code>). This is not the user-configured Amazon Web Services
     * account alias set using the IAM console.</p>
     */
    inline CreateSnapshotResponse& WithOwnerAlias(const char* value) { SetOwnerAlias(value); return *this;}


    /**
     * <p>The ARN of the Outpost on which the snapshot is stored. For more information,
     * see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/snapshots-outposts.html">Amazon
     * EBS local snapshots on Outposts</a> in the <i>Amazon Elastic Compute Cloud User
     * Guide</i>.</p>
     */
    inline const Aws::String& GetOutpostArn() const{ return m_outpostArn; }

    /**
     * <p>The ARN of the Outpost on which the snapshot is stored. For more information,
     * see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/snapshots-outposts.html">Amazon
     * EBS local snapshots on Outposts</a> in the <i>Amazon Elastic Compute Cloud User
     * Guide</i>.</p>
     */
    inline void SetOutpostArn(const Aws::String& value) { m_outpostArn = value; }

    /**
     * <p>The ARN of the Outpost on which the snapshot is stored. For more information,
     * see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/snapshots-outposts.html">Amazon
     * EBS local snapshots on Outposts</a> in the <i>Amazon Elastic Compute Cloud User
     * Guide</i>.</p>
     */
    inline void SetOutpostArn(Aws::String&& value) { m_outpostArn = std::move(value); }

    /**
     * <p>The ARN of the Outpost on which the snapshot is stored. For more information,
     * see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/snapshots-outposts.html">Amazon
     * EBS local snapshots on Outposts</a> in the <i>Amazon Elastic Compute Cloud User
     * Guide</i>.</p>
     */
    inline void SetOutpostArn(const char* value) { m_outpostArn.assign(value); }

    /**
     * <p>The ARN of the Outpost on which the snapshot is stored. For more information,
     * see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/snapshots-outposts.html">Amazon
     * EBS local snapshots on Outposts</a> in the <i>Amazon Elastic Compute Cloud User
     * Guide</i>.</p>
     */
    inline CreateSnapshotResponse& WithOutpostArn(const Aws::String& value) { SetOutpostArn(value); return *this;}

    /**
     * <p>The ARN of the Outpost on which the snapshot is stored. For more information,
     * see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/snapshots-outposts.html">Amazon
     * EBS local snapshots on Outposts</a> in the <i>Amazon Elastic Compute Cloud User
     * Guide</i>.</p>
     */
    inline CreateSnapshotResponse& WithOutpostArn(Aws::String&& value) { SetOutpostArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the Outpost on which the snapshot is stored. For more information,
     * see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/snapshots-outposts.html">Amazon
     * EBS local snapshots on Outposts</a> in the <i>Amazon Elastic Compute Cloud User
     * Guide</i>.</p>
     */
    inline CreateSnapshotResponse& WithOutpostArn(const char* value) { SetOutpostArn(value); return *this;}


    /**
     * <p>Any tags assigned to the snapshot.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /**
     * <p>Any tags assigned to the snapshot.</p>
     */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tags = value; }

    /**
     * <p>Any tags assigned to the snapshot.</p>
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tags = std::move(value); }

    /**
     * <p>Any tags assigned to the snapshot.</p>
     */
    inline CreateSnapshotResponse& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>Any tags assigned to the snapshot.</p>
     */
    inline CreateSnapshotResponse& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>Any tags assigned to the snapshot.</p>
     */
    inline CreateSnapshotResponse& AddTags(const Tag& value) { m_tags.push_back(value); return *this; }

    /**
     * <p>Any tags assigned to the snapshot.</p>
     */
    inline CreateSnapshotResponse& AddTags(Tag&& value) { m_tags.push_back(std::move(value)); return *this; }


    /**
     * <p>The storage tier in which the snapshot is stored. <code>standard</code>
     * indicates that the snapshot is stored in the standard snapshot storage tier and
     * that it is ready for use. <code>archive</code> indicates that the snapshot is
     * currently archived and that it must be restored before it can be used.</p>
     */
    inline const StorageTier& GetStorageTier() const{ return m_storageTier; }

    /**
     * <p>The storage tier in which the snapshot is stored. <code>standard</code>
     * indicates that the snapshot is stored in the standard snapshot storage tier and
     * that it is ready for use. <code>archive</code> indicates that the snapshot is
     * currently archived and that it must be restored before it can be used.</p>
     */
    inline void SetStorageTier(const StorageTier& value) { m_storageTier = value; }

    /**
     * <p>The storage tier in which the snapshot is stored. <code>standard</code>
     * indicates that the snapshot is stored in the standard snapshot storage tier and
     * that it is ready for use. <code>archive</code> indicates that the snapshot is
     * currently archived and that it must be restored before it can be used.</p>
     */
    inline void SetStorageTier(StorageTier&& value) { m_storageTier = std::move(value); }

    /**
     * <p>The storage tier in which the snapshot is stored. <code>standard</code>
     * indicates that the snapshot is stored in the standard snapshot storage tier and
     * that it is ready for use. <code>archive</code> indicates that the snapshot is
     * currently archived and that it must be restored before it can be used.</p>
     */
    inline CreateSnapshotResponse& WithStorageTier(const StorageTier& value) { SetStorageTier(value); return *this;}

    /**
     * <p>The storage tier in which the snapshot is stored. <code>standard</code>
     * indicates that the snapshot is stored in the standard snapshot storage tier and
     * that it is ready for use. <code>archive</code> indicates that the snapshot is
     * currently archived and that it must be restored before it can be used.</p>
     */
    inline CreateSnapshotResponse& WithStorageTier(StorageTier&& value) { SetStorageTier(std::move(value)); return *this;}


    /**
     * <p>Only for archived snapshots that are temporarily restored. Indicates the date
     * and time when a temporarily restored snapshot will be automatically
     * re-archived.</p>
     */
    inline const Aws::Utils::DateTime& GetRestoreExpiryTime() const{ return m_restoreExpiryTime; }

    /**
     * <p>Only for archived snapshots that are temporarily restored. Indicates the date
     * and time when a temporarily restored snapshot will be automatically
     * re-archived.</p>
     */
    inline void SetRestoreExpiryTime(const Aws::Utils::DateTime& value) { m_restoreExpiryTime = value; }

    /**
     * <p>Only for archived snapshots that are temporarily restored. Indicates the date
     * and time when a temporarily restored snapshot will be automatically
     * re-archived.</p>
     */
    inline void SetRestoreExpiryTime(Aws::Utils::DateTime&& value) { m_restoreExpiryTime = std::move(value); }

    /**
     * <p>Only for archived snapshots that are temporarily restored. Indicates the date
     * and time when a temporarily restored snapshot will be automatically
     * re-archived.</p>
     */
    inline CreateSnapshotResponse& WithRestoreExpiryTime(const Aws::Utils::DateTime& value) { SetRestoreExpiryTime(value); return *this;}

    /**
     * <p>Only for archived snapshots that are temporarily restored. Indicates the date
     * and time when a temporarily restored snapshot will be automatically
     * re-archived.</p>
     */
    inline CreateSnapshotResponse& WithRestoreExpiryTime(Aws::Utils::DateTime&& value) { SetRestoreExpiryTime(std::move(value)); return *this;}


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }

    
    inline CreateSnapshotResponse& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline CreateSnapshotResponse& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    Aws::String m_dataEncryptionKeyId;

    Aws::String m_description;

    bool m_encrypted;

    Aws::String m_kmsKeyId;

    Aws::String m_ownerId;

    Aws::String m_progress;

    Aws::String m_snapshotId;

    Aws::Utils::DateTime m_startTime;

    SnapshotState m_state;

    Aws::String m_stateMessage;

    Aws::String m_volumeId;

    int m_volumeSize;

    Aws::String m_ownerAlias;

    Aws::String m_outpostArn;

    Aws::Vector<Tag> m_tags;

    StorageTier m_storageTier;

    Aws::Utils::DateTime m_restoreExpiryTime;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
