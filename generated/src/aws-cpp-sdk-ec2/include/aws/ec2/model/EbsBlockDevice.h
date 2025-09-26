/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/model/VolumeType.h>
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
   * <p>Describes a block device for an EBS volume.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/EbsBlockDevice">AWS
   * API Reference</a></p>
   */
  class EbsBlockDevice
  {
  public:
    AWS_EC2_API EbsBlockDevice() = default;
    AWS_EC2_API EbsBlockDevice(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API EbsBlockDevice& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>Indicates whether the EBS volume is deleted on instance termination. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/terminating-instances.html#preserving-volumes-on-termination">Preserving
     * Amazon EBS volumes on instance termination</a> in the <i>Amazon EC2 User
     * Guide</i>.</p>
     */
    inline bool GetDeleteOnTermination() const { return m_deleteOnTermination; }
    inline bool DeleteOnTerminationHasBeenSet() const { return m_deleteOnTerminationHasBeenSet; }
    inline void SetDeleteOnTermination(bool value) { m_deleteOnTerminationHasBeenSet = true; m_deleteOnTermination = value; }
    inline EbsBlockDevice& WithDeleteOnTermination(bool value) { SetDeleteOnTermination(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of I/O operations per second (IOPS). For <code>gp3</code>,
     * <code>io1</code>, and <code>io2</code> volumes, this represents the number of
     * IOPS that are provisioned for the volume. For <code>gp2</code> volumes, this
     * represents the baseline performance of the volume and the rate at which the
     * volume accumulates I/O credits for bursting.</p> <p>The following are the
     * supported values for each volume type:</p> <ul> <li> <p> <code>gp3</code>: 3,000
     * - 80,000 IOPS</p> </li> <li> <p> <code>io1</code>: 100 - 64,000 IOPS</p> </li>
     * <li> <p> <code>io2</code>: 100 - 256,000 IOPS</p> </li> </ul> <p>For
     * <code>io2</code> volumes, you can achieve up to 256,000 IOPS on <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/instance-types.html#ec2-nitro-instances">instances
     * built on the Nitro System</a>. On other instances, you can achieve performance
     * up to 32,000 IOPS.</p> <p>This parameter is required for <code>io1</code> and
     * <code>io2</code> volumes. The default for <code>gp3</code> volumes is 3,000
     * IOPS.</p>
     */
    inline int GetIops() const { return m_iops; }
    inline bool IopsHasBeenSet() const { return m_iopsHasBeenSet; }
    inline void SetIops(int value) { m_iopsHasBeenSet = true; m_iops = value; }
    inline EbsBlockDevice& WithIops(int value) { SetIops(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the snapshot.</p>
     */
    inline const Aws::String& GetSnapshotId() const { return m_snapshotId; }
    inline bool SnapshotIdHasBeenSet() const { return m_snapshotIdHasBeenSet; }
    template<typename SnapshotIdT = Aws::String>
    void SetSnapshotId(SnapshotIdT&& value) { m_snapshotIdHasBeenSet = true; m_snapshotId = std::forward<SnapshotIdT>(value); }
    template<typename SnapshotIdT = Aws::String>
    EbsBlockDevice& WithSnapshotId(SnapshotIdT&& value) { SetSnapshotId(std::forward<SnapshotIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The size of the volume, in GiBs. You must specify either a snapshot ID or a
     * volume size. If you specify a snapshot, the default is the snapshot size. You
     * can specify a volume size that is equal to or larger than the snapshot size.</p>
     * <p>The following are the supported sizes for each volume type:</p> <ul> <li> <p>
     * <code>gp2</code>: 1 - 16,384 GiB</p> </li> <li> <p> <code>gp3</code>: 1 - 65,536
     * GiB</p> </li> <li> <p> <code>io1</code>: 4 - 16,384 GiB</p> </li> <li> <p>
     * <code>io2</code>: 4 - 65,536 GiB</p> </li> <li> <p> <code>st1</code> and
     * <code>sc1</code>: 125 - 16,384 GiB</p> </li> <li> <p> <code>standard</code>: 1 -
     * 1024 GiB</p> </li> </ul>
     */
    inline int GetVolumeSize() const { return m_volumeSize; }
    inline bool VolumeSizeHasBeenSet() const { return m_volumeSizeHasBeenSet; }
    inline void SetVolumeSize(int value) { m_volumeSizeHasBeenSet = true; m_volumeSize = value; }
    inline EbsBlockDevice& WithVolumeSize(int value) { SetVolumeSize(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The volume type. For more information, see <a
     * href="https://docs.aws.amazon.com/ebs/latest/userguide/ebs-volume-types.html">Amazon
     * EBS volume types</a> in the <i>Amazon EBS User Guide</i>.</p>
     */
    inline VolumeType GetVolumeType() const { return m_volumeType; }
    inline bool VolumeTypeHasBeenSet() const { return m_volumeTypeHasBeenSet; }
    inline void SetVolumeType(VolumeType value) { m_volumeTypeHasBeenSet = true; m_volumeType = value; }
    inline EbsBlockDevice& WithVolumeType(VolumeType value) { SetVolumeType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Identifier (key ID, key alias, key ARN, or alias ARN) of the customer managed
     * KMS key to use for EBS encryption.</p> <p>This parameter is only supported on
     * <code>BlockDeviceMapping</code> objects called by <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/API_RunInstances.html">RunInstances</a>,
     * <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/API_RequestSpotFleet.html">RequestSpotFleet</a>,
     * and <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/API_RequestSpotInstances.html">RequestSpotInstances</a>.</p>
     */
    inline const Aws::String& GetKmsKeyId() const { return m_kmsKeyId; }
    inline bool KmsKeyIdHasBeenSet() const { return m_kmsKeyIdHasBeenSet; }
    template<typename KmsKeyIdT = Aws::String>
    void SetKmsKeyId(KmsKeyIdT&& value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId = std::forward<KmsKeyIdT>(value); }
    template<typename KmsKeyIdT = Aws::String>
    EbsBlockDevice& WithKmsKeyId(KmsKeyIdT&& value) { SetKmsKeyId(std::forward<KmsKeyIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The throughput that the volume supports, in MiB/s.</p> <p>This parameter is
     * valid only for <code>gp3</code> volumes.</p> <p>Valid Range: Minimum value of
     * 125. Maximum value of 2,000.</p>
     */
    inline int GetThroughput() const { return m_throughput; }
    inline bool ThroughputHasBeenSet() const { return m_throughputHasBeenSet; }
    inline void SetThroughput(int value) { m_throughputHasBeenSet = true; m_throughput = value; }
    inline EbsBlockDevice& WithThroughput(int value) { SetThroughput(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the Outpost on which the snapshot is stored.</p> <p>This parameter
     * is not supported when using <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/API_CreateImage.html">CreateImage</a>.</p>
     */
    inline const Aws::String& GetOutpostArn() const { return m_outpostArn; }
    inline bool OutpostArnHasBeenSet() const { return m_outpostArnHasBeenSet; }
    template<typename OutpostArnT = Aws::String>
    void SetOutpostArn(OutpostArnT&& value) { m_outpostArnHasBeenSet = true; m_outpostArn = std::forward<OutpostArnT>(value); }
    template<typename OutpostArnT = Aws::String>
    EbsBlockDevice& WithOutpostArn(OutpostArnT&& value) { SetOutpostArn(std::forward<OutpostArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Availability Zone where the EBS volume will be created (for example,
     * <code>us-east-1a</code>).</p> <p>Either <code>AvailabilityZone</code> or
     * <code>AvailabilityZoneId</code> can be specified, but not both. If neither is
     * specified, Amazon EC2 automatically selects an Availability Zone within the
     * Region.</p> <p>This parameter is not supported when using <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/API_CreateFleet.html">CreateFleet</a>,
     * <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/API_CreateImage.html">CreateImage</a>,
     * <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/API_DescribeImages.html">DescribeImages</a>,
     * <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/API_RequestSpotFleet.html">RequestSpotFleet</a>,
     * <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/API_RequestSpotInstances.html">RequestSpotInstances</a>,
     * and <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/API_RunInstances.html">RunInstances</a>.</p>
     */
    inline const Aws::String& GetAvailabilityZone() const { return m_availabilityZone; }
    inline bool AvailabilityZoneHasBeenSet() const { return m_availabilityZoneHasBeenSet; }
    template<typename AvailabilityZoneT = Aws::String>
    void SetAvailabilityZone(AvailabilityZoneT&& value) { m_availabilityZoneHasBeenSet = true; m_availabilityZone = std::forward<AvailabilityZoneT>(value); }
    template<typename AvailabilityZoneT = Aws::String>
    EbsBlockDevice& WithAvailabilityZone(AvailabilityZoneT&& value) { SetAvailabilityZone(std::forward<AvailabilityZoneT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether the encryption state of an EBS volume is changed while
     * being restored from a backing snapshot. The effect of setting the encryption
     * state to <code>true</code> depends on the volume origin (new or from a
     * snapshot), starting encryption state, ownership, and whether encryption by
     * default is enabled. For more information, see <a
     * href="https://docs.aws.amazon.com/ebs/latest/userguide/ebs-encryption.html#encryption-parameters">Amazon
     * EBS encryption</a> in the <i>Amazon EBS User Guide</i>.</p> <p>In no case can
     * you remove encryption from an encrypted volume.</p> <p>Encrypted volumes can
     * only be attached to instances that support Amazon EBS encryption. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/ebs/latest/userguide/ebs-encryption-requirements.html#ebs-encryption_supported_instances">Supported
     * instance types</a>.</p> <p>This parameter is not returned by
     * <a>DescribeImageAttribute</a>.</p> <p>For <a>CreateImage</a> and
     * <a>RegisterImage</a>, whether you can include this parameter, and the allowed
     * values differ depending on the type of block device mapping you are
     * creating.</p> <ul> <li> <p>If you are creating a block device mapping for a
     * <b>new (empty) volume</b>, you can include this parameter, and specify either
     * <code>true</code> for an encrypted volume, or <code>false</code> for an
     * unencrypted volume. If you omit this parameter, it defaults to
     * <code>false</code> (unencrypted).</p> </li> <li> <p>If you are creating a block
     * device mapping from an <b>existing encrypted or unencrypted snapshot</b>, you
     * must omit this parameter. If you include this parameter, the request will fail,
     * regardless of the value that you specify.</p> </li> <li> <p>If you are creating
     * a block device mapping from an <b>existing unencrypted volume</b>, you can
     * include this parameter, but you must specify <code>false</code>. If you specify
     * <code>true</code>, the request will fail. In this case, we recommend that you
     * omit the parameter.</p> </li> <li> <p>If you are creating a block device mapping
     * from an <b>existing encrypted volume</b>, you can include this parameter, and
     * specify either <code>true</code> or <code>false</code>. However, if you specify
     * <code>false</code>, the parameter is ignored and the block device mapping is
     * always encrypted. In this case, we recommend that you omit the parameter.</p>
     * </li> </ul>
     */
    inline bool GetEncrypted() const { return m_encrypted; }
    inline bool EncryptedHasBeenSet() const { return m_encryptedHasBeenSet; }
    inline void SetEncrypted(bool value) { m_encryptedHasBeenSet = true; m_encrypted = value; }
    inline EbsBlockDevice& WithEncrypted(bool value) { SetEncrypted(value); return *this;}
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
     * <p>This parameter is not supported when using <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/API_CreateImage.html">CreateImage</a>.</p>
     * <p>Valid range: 100 - 300 MiB/s</p>
     */
    inline int GetVolumeInitializationRate() const { return m_volumeInitializationRate; }
    inline bool VolumeInitializationRateHasBeenSet() const { return m_volumeInitializationRateHasBeenSet; }
    inline void SetVolumeInitializationRate(int value) { m_volumeInitializationRateHasBeenSet = true; m_volumeInitializationRate = value; }
    inline EbsBlockDevice& WithVolumeInitializationRate(int value) { SetVolumeInitializationRate(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the Availability Zone where the EBS volume will be created (for
     * example, <code>use1-az1</code>).</p> <p>Either <code>AvailabilityZone</code> or
     * <code>AvailabilityZoneId</code> can be specified, but not both. If neither is
     * specified, Amazon EC2 automatically selects an Availability Zone within the
     * Region.</p> <p>This parameter is not supported when using <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/API_CreateFleet.html">CreateFleet</a>,
     * <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/API_CreateImage.html">CreateImage</a>,
     * <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/API_DescribeImages.html">DescribeImages</a>,
     * <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/API_RequestSpotFleet.html">RequestSpotFleet</a>,
     * <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/API_RequestSpotInstances.html">RequestSpotInstances</a>,
     * and <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/API_RunInstances.html">RunInstances</a>.</p>
     */
    inline const Aws::String& GetAvailabilityZoneId() const { return m_availabilityZoneId; }
    inline bool AvailabilityZoneIdHasBeenSet() const { return m_availabilityZoneIdHasBeenSet; }
    template<typename AvailabilityZoneIdT = Aws::String>
    void SetAvailabilityZoneId(AvailabilityZoneIdT&& value) { m_availabilityZoneIdHasBeenSet = true; m_availabilityZoneId = std::forward<AvailabilityZoneIdT>(value); }
    template<typename AvailabilityZoneIdT = Aws::String>
    EbsBlockDevice& WithAvailabilityZoneId(AvailabilityZoneIdT&& value) { SetAvailabilityZoneId(std::forward<AvailabilityZoneIdT>(value)); return *this;}
    ///@}
  private:

    bool m_deleteOnTermination{false};
    bool m_deleteOnTerminationHasBeenSet = false;

    int m_iops{0};
    bool m_iopsHasBeenSet = false;

    Aws::String m_snapshotId;
    bool m_snapshotIdHasBeenSet = false;

    int m_volumeSize{0};
    bool m_volumeSizeHasBeenSet = false;

    VolumeType m_volumeType{VolumeType::NOT_SET};
    bool m_volumeTypeHasBeenSet = false;

    Aws::String m_kmsKeyId;
    bool m_kmsKeyIdHasBeenSet = false;

    int m_throughput{0};
    bool m_throughputHasBeenSet = false;

    Aws::String m_outpostArn;
    bool m_outpostArnHasBeenSet = false;

    Aws::String m_availabilityZone;
    bool m_availabilityZoneHasBeenSet = false;

    bool m_encrypted{false};
    bool m_encryptedHasBeenSet = false;

    int m_volumeInitializationRate{0};
    bool m_volumeInitializationRateHasBeenSet = false;

    Aws::String m_availabilityZoneId;
    bool m_availabilityZoneIdHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
