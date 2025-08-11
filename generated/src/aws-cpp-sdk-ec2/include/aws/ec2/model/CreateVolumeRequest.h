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
    AWS_EC2_API CreateVolumeRequest() = default;

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
     * <code>us-east-1a</code>.</p> <p>Either <code>AvailabilityZone</code> or
     * <code>AvailabilityZoneId</code> must be specified, but not both.</p>
     */
    inline const Aws::String& GetAvailabilityZone() const { return m_availabilityZone; }
    inline bool AvailabilityZoneHasBeenSet() const { return m_availabilityZoneHasBeenSet; }
    template<typename AvailabilityZoneT = Aws::String>
    void SetAvailabilityZone(AvailabilityZoneT&& value) { m_availabilityZoneHasBeenSet = true; m_availabilityZone = std::forward<AvailabilityZoneT>(value); }
    template<typename AvailabilityZoneT = Aws::String>
    CreateVolumeRequest& WithAvailabilityZone(AvailabilityZoneT&& value) { SetAvailabilityZone(std::forward<AvailabilityZoneT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the Availability Zone in which to create the volume. For example,
     * <code>use1-az1</code>.</p> <p>Either <code>AvailabilityZone</code> or
     * <code>AvailabilityZoneId</code> must be specified, but not both.</p>
     */
    inline const Aws::String& GetAvailabilityZoneId() const { return m_availabilityZoneId; }
    inline bool AvailabilityZoneIdHasBeenSet() const { return m_availabilityZoneIdHasBeenSet; }
    template<typename AvailabilityZoneIdT = Aws::String>
    void SetAvailabilityZoneId(AvailabilityZoneIdT&& value) { m_availabilityZoneIdHasBeenSet = true; m_availabilityZoneId = std::forward<AvailabilityZoneIdT>(value); }
    template<typename AvailabilityZoneIdT = Aws::String>
    CreateVolumeRequest& WithAvailabilityZoneId(AvailabilityZoneIdT&& value) { SetAvailabilityZoneId(std::forward<AvailabilityZoneIdT>(value)); return *this;}
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
    inline bool GetEncrypted() const { return m_encrypted; }
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
    inline int GetIops() const { return m_iops; }
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
    inline const Aws::String& GetKmsKeyId() const { return m_kmsKeyId; }
    inline bool KmsKeyIdHasBeenSet() const { return m_kmsKeyIdHasBeenSet; }
    template<typename KmsKeyIdT = Aws::String>
    void SetKmsKeyId(KmsKeyIdT&& value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId = std::forward<KmsKeyIdT>(value); }
    template<typename KmsKeyIdT = Aws::String>
    CreateVolumeRequest& WithKmsKeyId(KmsKeyIdT&& value) { SetKmsKeyId(std::forward<KmsKeyIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the Outpost on which to create the
     * volume.</p> <p>If you intend to use a volume with an instance running on an
     * outpost, then you must create the volume on the same outpost as the instance.
     * You can't use a volume created in an Amazon Web Services Region with an instance
     * on an Amazon Web Services outpost, or the other way around.</p>
     */
    inline const Aws::String& GetOutpostArn() const { return m_outpostArn; }
    inline bool OutpostArnHasBeenSet() const { return m_outpostArnHasBeenSet; }
    template<typename OutpostArnT = Aws::String>
    void SetOutpostArn(OutpostArnT&& value) { m_outpostArnHasBeenSet = true; m_outpostArn = std::forward<OutpostArnT>(value); }
    template<typename OutpostArnT = Aws::String>
    CreateVolumeRequest& WithOutpostArn(OutpostArnT&& value) { SetOutpostArn(std::forward<OutpostArnT>(value)); return *this;}
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
    inline int GetSize() const { return m_size; }
    inline bool SizeHasBeenSet() const { return m_sizeHasBeenSet; }
    inline void SetSize(int value) { m_sizeHasBeenSet = true; m_size = value; }
    inline CreateVolumeRequest& WithSize(int value) { SetSize(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The snapshot from which to create the volume. You must specify either a
     * snapshot ID or a volume size.</p>
     */
    inline const Aws::String& GetSnapshotId() const { return m_snapshotId; }
    inline bool SnapshotIdHasBeenSet() const { return m_snapshotIdHasBeenSet; }
    template<typename SnapshotIdT = Aws::String>
    void SetSnapshotId(SnapshotIdT&& value) { m_snapshotIdHasBeenSet = true; m_snapshotId = std::forward<SnapshotIdT>(value); }
    template<typename SnapshotIdT = Aws::String>
    CreateVolumeRequest& WithSnapshotId(SnapshotIdT&& value) { SetSnapshotId(std::forward<SnapshotIdT>(value)); return *this;}
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
    inline VolumeType GetVolumeType() const { return m_volumeType; }
    inline bool VolumeTypeHasBeenSet() const { return m_volumeTypeHasBeenSet; }
    inline void SetVolumeType(VolumeType value) { m_volumeTypeHasBeenSet = true; m_volumeType = value; }
    inline CreateVolumeRequest& WithVolumeType(VolumeType value) { SetVolumeType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The tags to apply to the volume during creation.</p>
     */
    inline const Aws::Vector<TagSpecification>& GetTagSpecifications() const { return m_tagSpecifications; }
    inline bool TagSpecificationsHasBeenSet() const { return m_tagSpecificationsHasBeenSet; }
    template<typename TagSpecificationsT = Aws::Vector<TagSpecification>>
    void SetTagSpecifications(TagSpecificationsT&& value) { m_tagSpecificationsHasBeenSet = true; m_tagSpecifications = std::forward<TagSpecificationsT>(value); }
    template<typename TagSpecificationsT = Aws::Vector<TagSpecification>>
    CreateVolumeRequest& WithTagSpecifications(TagSpecificationsT&& value) { SetTagSpecifications(std::forward<TagSpecificationsT>(value)); return *this;}
    template<typename TagSpecificationsT = TagSpecification>
    CreateVolumeRequest& AddTagSpecifications(TagSpecificationsT&& value) { m_tagSpecificationsHasBeenSet = true; m_tagSpecifications.emplace_back(std::forward<TagSpecificationsT>(value)); return *this; }
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
    inline bool GetMultiAttachEnabled() const { return m_multiAttachEnabled; }
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
    inline int GetThroughput() const { return m_throughput; }
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
    inline const Aws::String& GetClientToken() const { return m_clientToken; }
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
    template<typename ClientTokenT = Aws::String>
    void SetClientToken(ClientTokenT&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::forward<ClientTokenT>(value); }
    template<typename ClientTokenT = Aws::String>
    CreateVolumeRequest& WithClientToken(ClientTokenT&& value) { SetClientToken(std::forward<ClientTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the Amazon EBS Provisioned Rate for Volume Initialization (volume
     * initialization rate), in MiB/s, at which to download the snapshot blocks from
     * Amazon S3 to the volume. This is also known as <i>volume initialization</i>.
     * Specifying a volume initialization rate ensures that the volume is initialized
     * at a predictable and consistent rate after creation.</p> <p>This parameter is
     * supported only for volumes created from snapshots. Omit this parameter if:</p>
     * <ul> <li> <p>You want to create the volume using fast snapshot restore. You must
     * specify a snapshot that is enabled for fast snapshot restore. In this case, the
     * volume is fully initialized at creation.</p>  <p>If you specify a snapshot
     * that is enabled for fast snapshot restore and a volume initialization rate, the
     * volume will be initialized at the specified rate instead of fast snapshot
     * restore.</p>  </li> <li> <p>You want to create a volume that is
     * initialized at the default rate.</p> </li> </ul> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/ebs/latest/userguide/initalize-volume.html">
     * Initialize Amazon EBS volumes</a> in the <i>Amazon EC2 User Guide</i>.</p>
     * <p>Valid range: 100 - 300 MiB/s</p>
     */
    inline int GetVolumeInitializationRate() const { return m_volumeInitializationRate; }
    inline bool VolumeInitializationRateHasBeenSet() const { return m_volumeInitializationRateHasBeenSet; }
    inline void SetVolumeInitializationRate(int value) { m_volumeInitializationRateHasBeenSet = true; m_volumeInitializationRate = value; }
    inline CreateVolumeRequest& WithVolumeInitializationRate(int value) { SetVolumeInitializationRate(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Reserved for internal use.</p>
     */
    inline const OperatorRequest& GetOperator() const { return m_operator; }
    inline bool OperatorHasBeenSet() const { return m_operatorHasBeenSet; }
    template<typename OperatorT = OperatorRequest>
    void SetOperator(OperatorT&& value) { m_operatorHasBeenSet = true; m_operator = std::forward<OperatorT>(value); }
    template<typename OperatorT = OperatorRequest>
    CreateVolumeRequest& WithOperator(OperatorT&& value) { SetOperator(std::forward<OperatorT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Checks whether you have the required permissions for the action, without
     * actually making the request, and provides an error response. If you have the
     * required permissions, the error response is <code>DryRunOperation</code>.
     * Otherwise, it is <code>UnauthorizedOperation</code>.</p>
     */
    inline bool GetDryRun() const { return m_dryRun; }
    inline bool DryRunHasBeenSet() const { return m_dryRunHasBeenSet; }
    inline void SetDryRun(bool value) { m_dryRunHasBeenSet = true; m_dryRun = value; }
    inline CreateVolumeRequest& WithDryRun(bool value) { SetDryRun(value); return *this;}
    ///@}
  private:

    Aws::String m_availabilityZone;
    bool m_availabilityZoneHasBeenSet = false;

    Aws::String m_availabilityZoneId;
    bool m_availabilityZoneIdHasBeenSet = false;

    bool m_encrypted{false};
    bool m_encryptedHasBeenSet = false;

    int m_iops{0};
    bool m_iopsHasBeenSet = false;

    Aws::String m_kmsKeyId;
    bool m_kmsKeyIdHasBeenSet = false;

    Aws::String m_outpostArn;
    bool m_outpostArnHasBeenSet = false;

    int m_size{0};
    bool m_sizeHasBeenSet = false;

    Aws::String m_snapshotId;
    bool m_snapshotIdHasBeenSet = false;

    VolumeType m_volumeType{VolumeType::NOT_SET};
    bool m_volumeTypeHasBeenSet = false;

    Aws::Vector<TagSpecification> m_tagSpecifications;
    bool m_tagSpecificationsHasBeenSet = false;

    bool m_multiAttachEnabled{false};
    bool m_multiAttachEnabledHasBeenSet = false;

    int m_throughput{0};
    bool m_throughputHasBeenSet = false;

    Aws::String m_clientToken{Aws::Utils::UUID::PseudoRandomUUID()};
    bool m_clientTokenHasBeenSet = true;

    int m_volumeInitializationRate{0};
    bool m_volumeInitializationRateHasBeenSet = false;

    OperatorRequest m_operator;
    bool m_operatorHasBeenSet = false;

    bool m_dryRun{false};
    bool m_dryRunHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
