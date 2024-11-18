/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/ec2/EC2Request.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/model/VolumeType.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ec2/model/OperatorRequest.h>
#include <aws/ec2/model/TagSpecification.h>
#include <utility>
#include <aws/core/utils/UUID.h>

namespace Aws
{
namespace EC2
{
namespace Model
{

  /**
   */
  class CreateVolumeRequest : public EC2Request
  {
  public:
    AWS_EC2_API CreateVolumeRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateVolume"; }

    AWS_EC2_API Aws::String SerializePayload() const override;

  protected:
    AWS_EC2_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    ///@{
    /**
     * <p>The ID of the Availability Zone in which to create the volume. For example,
     * <code>us-east-1a</code>.</p>
     */
    inline const Aws::String& GetAvailabilityZone() const{ return m_availabilityZone; }
    inline bool AvailabilityZoneHasBeenSet() const { return m_availabilityZoneHasBeenSet; }
    inline void SetAvailabilityZone(const Aws::String& value) { m_availabilityZoneHasBeenSet = true; m_availabilityZone = value; }
    inline void SetAvailabilityZone(Aws::String&& value) { m_availabilityZoneHasBeenSet = true; m_availabilityZone = std::move(value); }
    inline void SetAvailabilityZone(const char* value) { m_availabilityZoneHasBeenSet = true; m_availabilityZone.assign(value); }
    inline CreateVolumeRequest& WithAvailabilityZone(const Aws::String& value) { SetAvailabilityZone(value); return *this;}
    inline CreateVolumeRequest& WithAvailabilityZone(Aws::String&& value) { SetAvailabilityZone(std::move(value)); return *this;}
    inline CreateVolumeRequest& WithAvailabilityZone(const char* value) { SetAvailabilityZone(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether the volume should be encrypted. The effect of setting the
     * encryption state to <code>true</code> depends on the volume origin (new or from
     * a snapshot), starting encryption state, ownership, and whether encryption by
     * default is enabled. For more information, see <a
     * href="https://docs.aws.amazon.com/ebs/latest/userguide/work-with-ebs-encr.html#encryption-by-default">Encryption
     * by default</a> in the <i>Amazon EBS User Guide</i>.</p> <p>Encrypted Amazon EBS
     * volumes must be attached to instances that support Amazon EBS encryption. For
     * more information, see <a
     * href="https://docs.aws.amazon.com/ebs/latest/userguide/ebs-encryption-requirements.html#ebs-encryption_supported_instances">Supported
     * instance types</a>.</p>
     */
    inline bool GetEncrypted() const{ return m_encrypted; }
    inline bool EncryptedHasBeenSet() const { return m_encryptedHasBeenSet; }
    inline void SetEncrypted(bool value) { m_encryptedHasBeenSet = true; m_encrypted = value; }
    inline CreateVolumeRequest& WithEncrypted(bool value) { SetEncrypted(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of I/O operations per second (IOPS). For <code>gp3</code>,
     * <code>io1</code>, and <code>io2</code> volumes, this represents the number of
     * IOPS that are provisioned for the volume. For <code>gp2</code> volumes, this
     * represents the baseline performance of the volume and the rate at which the
     * volume accumulates I/O credits for bursting.</p> <p>The following are the
     * supported values for each volume type:</p> <ul> <li> <p> <code>gp3</code>: 3,000
     * - 16,000 IOPS</p> </li> <li> <p> <code>io1</code>: 100 - 64,000 IOPS</p> </li>
     * <li> <p> <code>io2</code>: 100 - 256,000 IOPS</p> </li> </ul> <p>For
     * <code>io2</code> volumes, you can achieve up to 256,000 IOPS on <a
     * href="https://docs.aws.amazon.com/ec2/latest/instancetypes/ec2-nitro-instances.html">instances
     * built on the Nitro System</a>. On other instances, you can achieve performance
     * up to 32,000 IOPS.</p> <p>This parameter is required for <code>io1</code> and
     * <code>io2</code> volumes. The default for <code>gp3</code> volumes is 3,000
     * IOPS. This parameter is not supported for <code>gp2</code>, <code>st1</code>,
     * <code>sc1</code>, or <code>standard</code> volumes.</p>
     */
    inline int GetIops() const{ return m_iops; }
    inline bool IopsHasBeenSet() const { return m_iopsHasBeenSet; }
    inline void SetIops(int value) { m_iopsHasBeenSet = true; m_iops = value; }
    inline CreateVolumeRequest& WithIops(int value) { SetIops(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the KMS key to use for Amazon EBS encryption. If this
     * parameter is not specified, your KMS key for Amazon EBS is used. If
     * <code>KmsKeyId</code> is specified, the encrypted state must be
     * <code>true</code>.</p> <p>You can specify the KMS key using any of the
     * following:</p> <ul> <li> <p>Key ID. For example,
     * 1234abcd-12ab-34cd-56ef-1234567890ab.</p> </li> <li> <p>Key alias. For example,
     * alias/ExampleAlias.</p> </li> <li> <p>Key ARN. For example,
     * arn:aws:kms:us-east-1:012345678910:key/1234abcd-12ab-34cd-56ef-1234567890ab.</p>
     * </li> <li> <p>Alias ARN. For example,
     * arn:aws:kms:us-east-1:012345678910:alias/ExampleAlias.</p> </li> </ul> <p>Amazon
     * Web Services authenticates the KMS key asynchronously. Therefore, if you specify
     * an ID, alias, or ARN that is not valid, the action can appear to complete, but
     * eventually fails.</p>
     */
    inline const Aws::String& GetKmsKeyId() const{ return m_kmsKeyId; }
    inline bool KmsKeyIdHasBeenSet() const { return m_kmsKeyIdHasBeenSet; }
    inline void SetKmsKeyId(const Aws::String& value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId = value; }
    inline void SetKmsKeyId(Aws::String&& value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId = std::move(value); }
    inline void SetKmsKeyId(const char* value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId.assign(value); }
    inline CreateVolumeRequest& WithKmsKeyId(const Aws::String& value) { SetKmsKeyId(value); return *this;}
    inline CreateVolumeRequest& WithKmsKeyId(Aws::String&& value) { SetKmsKeyId(std::move(value)); return *this;}
    inline CreateVolumeRequest& WithKmsKeyId(const char* value) { SetKmsKeyId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the Outpost on which to create the
     * volume.</p> <p>If you intend to use a volume with an instance running on an
     * outpost, then you must create the volume on the same outpost as the instance.
     * You can't use a volume created in an Amazon Web Services Region with an instance
     * on an Amazon Web Services outpost, or the other way around.</p>
     */
    inline const Aws::String& GetOutpostArn() const{ return m_outpostArn; }
    inline bool OutpostArnHasBeenSet() const { return m_outpostArnHasBeenSet; }
    inline void SetOutpostArn(const Aws::String& value) { m_outpostArnHasBeenSet = true; m_outpostArn = value; }
    inline void SetOutpostArn(Aws::String&& value) { m_outpostArnHasBeenSet = true; m_outpostArn = std::move(value); }
    inline void SetOutpostArn(const char* value) { m_outpostArnHasBeenSet = true; m_outpostArn.assign(value); }
    inline CreateVolumeRequest& WithOutpostArn(const Aws::String& value) { SetOutpostArn(value); return *this;}
    inline CreateVolumeRequest& WithOutpostArn(Aws::String&& value) { SetOutpostArn(std::move(value)); return *this;}
    inline CreateVolumeRequest& WithOutpostArn(const char* value) { SetOutpostArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The size of the volume, in GiBs. You must specify either a snapshot ID or a
     * volume size. If you specify a snapshot, the default is the snapshot size. You
     * can specify a volume size that is equal to or larger than the snapshot size.</p>
     * <p>The following are the supported volumes sizes for each volume type:</p> <ul>
     * <li> <p> <code>gp2</code> and <code>gp3</code>: 1 - 16,384 GiB</p> </li> <li>
     * <p> <code>io1</code>: 4 - 16,384 GiB</p> </li> <li> <p> <code>io2</code>: 4 -
     * 65,536 GiB</p> </li> <li> <p> <code>st1</code> and <code>sc1</code>: 125 -
     * 16,384 GiB</p> </li> <li> <p> <code>standard</code>: 1 - 1024 GiB</p> </li>
     * </ul>
     */
    inline int GetSize() const{ return m_size; }
    inline bool SizeHasBeenSet() const { return m_sizeHasBeenSet; }
    inline void SetSize(int value) { m_sizeHasBeenSet = true; m_size = value; }
    inline CreateVolumeRequest& WithSize(int value) { SetSize(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The snapshot from which to create the volume. You must specify either a
     * snapshot ID or a volume size.</p>
     */
    inline const Aws::String& GetSnapshotId() const{ return m_snapshotId; }
    inline bool SnapshotIdHasBeenSet() const { return m_snapshotIdHasBeenSet; }
    inline void SetSnapshotId(const Aws::String& value) { m_snapshotIdHasBeenSet = true; m_snapshotId = value; }
    inline void SetSnapshotId(Aws::String&& value) { m_snapshotIdHasBeenSet = true; m_snapshotId = std::move(value); }
    inline void SetSnapshotId(const char* value) { m_snapshotIdHasBeenSet = true; m_snapshotId.assign(value); }
    inline CreateVolumeRequest& WithSnapshotId(const Aws::String& value) { SetSnapshotId(value); return *this;}
    inline CreateVolumeRequest& WithSnapshotId(Aws::String&& value) { SetSnapshotId(std::move(value)); return *this;}
    inline CreateVolumeRequest& WithSnapshotId(const char* value) { SetSnapshotId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The volume type. This parameter can be one of the following values:</p> <ul>
     * <li> <p>General Purpose SSD: <code>gp2</code> | <code>gp3</code> </p> </li> <li>
     * <p>Provisioned IOPS SSD: <code>io1</code> | <code>io2</code> </p> </li> <li>
     * <p>Throughput Optimized HDD: <code>st1</code> </p> </li> <li> <p>Cold HDD:
     * <code>sc1</code> </p> </li> <li> <p>Magnetic: <code>standard</code> </p> </li>
     * </ul>  <p>Throughput Optimized HDD (<code>st1</code>) and Cold HDD
     * (<code>sc1</code>) volumes can't be used as boot volumes.</p> 
     * <p>For more information, see <a
     * href="https://docs.aws.amazon.com/ebs/latest/userguide/ebs-volume-types.html">Amazon
     * EBS volume types</a> in the <i>Amazon EBS User Guide</i>.</p> <p>Default:
     * <code>gp2</code> </p>
     */
    inline const VolumeType& GetVolumeType() const{ return m_volumeType; }
    inline bool VolumeTypeHasBeenSet() const { return m_volumeTypeHasBeenSet; }
    inline void SetVolumeType(const VolumeType& value) { m_volumeTypeHasBeenSet = true; m_volumeType = value; }
    inline void SetVolumeType(VolumeType&& value) { m_volumeTypeHasBeenSet = true; m_volumeType = std::move(value); }
    inline CreateVolumeRequest& WithVolumeType(const VolumeType& value) { SetVolumeType(value); return *this;}
    inline CreateVolumeRequest& WithVolumeType(VolumeType&& value) { SetVolumeType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The tags to apply to the volume during creation.</p>
     */
    inline const Aws::Vector<TagSpecification>& GetTagSpecifications() const{ return m_tagSpecifications; }
    inline bool TagSpecificationsHasBeenSet() const { return m_tagSpecificationsHasBeenSet; }
    inline void SetTagSpecifications(const Aws::Vector<TagSpecification>& value) { m_tagSpecificationsHasBeenSet = true; m_tagSpecifications = value; }
    inline void SetTagSpecifications(Aws::Vector<TagSpecification>&& value) { m_tagSpecificationsHasBeenSet = true; m_tagSpecifications = std::move(value); }
    inline CreateVolumeRequest& WithTagSpecifications(const Aws::Vector<TagSpecification>& value) { SetTagSpecifications(value); return *this;}
    inline CreateVolumeRequest& WithTagSpecifications(Aws::Vector<TagSpecification>&& value) { SetTagSpecifications(std::move(value)); return *this;}
    inline CreateVolumeRequest& AddTagSpecifications(const TagSpecification& value) { m_tagSpecificationsHasBeenSet = true; m_tagSpecifications.push_back(value); return *this; }
    inline CreateVolumeRequest& AddTagSpecifications(TagSpecification&& value) { m_tagSpecificationsHasBeenSet = true; m_tagSpecifications.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Indicates whether to enable Amazon EBS Multi-Attach. If you enable
     * Multi-Attach, you can attach the volume to up to 16 <a
     * href="https://docs.aws.amazon.com/ec2/latest/instancetypes/ec2-nitro-instances.html">Instances
     * built on the Nitro System</a> in the same Availability Zone. This parameter is
     * supported with <code>io1</code> and <code>io2</code> volumes only. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/ebs/latest/userguide/ebs-volumes-multi.html">
     * Amazon EBS Multi-Attach</a> in the <i>Amazon EBS User Guide</i>.</p>
     */
    inline bool GetMultiAttachEnabled() const{ return m_multiAttachEnabled; }
    inline bool MultiAttachEnabledHasBeenSet() const { return m_multiAttachEnabledHasBeenSet; }
    inline void SetMultiAttachEnabled(bool value) { m_multiAttachEnabledHasBeenSet = true; m_multiAttachEnabled = value; }
    inline CreateVolumeRequest& WithMultiAttachEnabled(bool value) { SetMultiAttachEnabled(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The throughput to provision for a volume, with a maximum of 1,000 MiB/s.</p>
     * <p>This parameter is valid only for <code>gp3</code> volumes.</p> <p>Valid
     * Range: Minimum value of 125. Maximum value of 1000.</p>
     */
    inline int GetThroughput() const{ return m_throughput; }
    inline bool ThroughputHasBeenSet() const { return m_throughputHasBeenSet; }
    inline void SetThroughput(int value) { m_throughputHasBeenSet = true; m_throughput = value; }
    inline CreateVolumeRequest& WithThroughput(int value) { SetThroughput(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Unique, case-sensitive identifier that you provide to ensure the idempotency
     * of the request. For more information, see <a
     * href="https://docs.aws.amazon.com/ec2/latest/devguide/ec2-api-idempotency.html">Ensure
     * Idempotency</a>.</p>
     */
    inline const Aws::String& GetClientToken() const{ return m_clientToken; }
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
    inline void SetClientToken(const Aws::String& value) { m_clientTokenHasBeenSet = true; m_clientToken = value; }
    inline void SetClientToken(Aws::String&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::move(value); }
    inline void SetClientToken(const char* value) { m_clientTokenHasBeenSet = true; m_clientToken.assign(value); }
    inline CreateVolumeRequest& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}
    inline CreateVolumeRequest& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}
    inline CreateVolumeRequest& WithClientToken(const char* value) { SetClientToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Reserved for internal use.</p>
     */
    inline const OperatorRequest& GetOperator() const{ return m_operator; }
    inline bool OperatorHasBeenSet() const { return m_operatorHasBeenSet; }
    inline void SetOperator(const OperatorRequest& value) { m_operatorHasBeenSet = true; m_operator = value; }
    inline void SetOperator(OperatorRequest&& value) { m_operatorHasBeenSet = true; m_operator = std::move(value); }
    inline CreateVolumeRequest& WithOperator(const OperatorRequest& value) { SetOperator(value); return *this;}
    inline CreateVolumeRequest& WithOperator(OperatorRequest&& value) { SetOperator(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Checks whether you have the required permissions for the action, without
     * actually making the request, and provides an error response. If you have the
     * required permissions, the error response is <code>DryRunOperation</code>.
     * Otherwise, it is <code>UnauthorizedOperation</code>.</p>
     */
    inline bool GetDryRun() const{ return m_dryRun; }
    inline bool DryRunHasBeenSet() const { return m_dryRunHasBeenSet; }
    inline void SetDryRun(bool value) { m_dryRunHasBeenSet = true; m_dryRun = value; }
    inline CreateVolumeRequest& WithDryRun(bool value) { SetDryRun(value); return *this;}
    ///@}
  private:

    Aws::String m_availabilityZone;
    bool m_availabilityZoneHasBeenSet = false;

    bool m_encrypted;
    bool m_encryptedHasBeenSet = false;

    int m_iops;
    bool m_iopsHasBeenSet = false;

    Aws::String m_kmsKeyId;
    bool m_kmsKeyIdHasBeenSet = false;

    Aws::String m_outpostArn;
    bool m_outpostArnHasBeenSet = false;

    int m_size;
    bool m_sizeHasBeenSet = false;

    Aws::String m_snapshotId;
    bool m_snapshotIdHasBeenSet = false;

    VolumeType m_volumeType;
    bool m_volumeTypeHasBeenSet = false;

    Aws::Vector<TagSpecification> m_tagSpecifications;
    bool m_tagSpecificationsHasBeenSet = false;

    bool m_multiAttachEnabled;
    bool m_multiAttachEnabledHasBeenSet = false;

    int m_throughput;
    bool m_throughputHasBeenSet = false;

    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet = false;

    OperatorRequest m_operator;
    bool m_operatorHasBeenSet = false;

    bool m_dryRun;
    bool m_dryRunHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
