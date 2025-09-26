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
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/FleetEbsBlockDeviceRequest">AWS
   * API Reference</a></p>
   */
  class FleetEbsBlockDeviceRequest
  {
  public:
    AWS_EC2_API FleetEbsBlockDeviceRequest() = default;
    AWS_EC2_API FleetEbsBlockDeviceRequest(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API FleetEbsBlockDeviceRequest& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>Indicates whether the encryption state of an EBS volume is changed while
     * being restored from a backing snapshot. The effect of setting the encryption
     * state to <code>true</code> depends on the volume origin (new or from a
     * snapshot), starting encryption state, ownership, and whether encryption by
     * default is enabled. For more information, see <a
     * href="https://docs.aws.amazon.com/ebs/latest/userguide/ebs-encryption.html">Amazon
     * EBS encryption</a> in the <i>Amazon EBS User Guide</i>.</p> <p>In no case can
     * you remove encryption from an encrypted volume.</p> <p>Encrypted volumes can
     * only be attached to instances that support Amazon EBS encryption. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/ebs/latest/userguide/ebs-encryption-requirements.html#ebs-encryption_supported_instances">Supported
     * instance types</a>.</p> <p>This parameter is not returned by <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/API_DescribeImageAttribute">DescribeImageAttribute</a>.</p>
     * <p>For <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/API_CreateImage">CreateImage</a>
     * and <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/API_RegisterImage">RegisterImage</a>,
     * whether you can include this parameter, and the allowed values differ depending
     * on the type of block device mapping you are creating.</p> <ul> <li> <p>If you
     * are creating a block device mapping for a <b>new (empty) volume</b>, you can
     * include this parameter, and specify either <code>true</code> for an encrypted
     * volume, or <code>false</code> for an unencrypted volume. If you omit this
     * parameter, it defaults to <code>false</code> (unencrypted).</p> </li> <li> <p>If
     * you are creating a block device mapping from an <b>existing encrypted or
     * unencrypted snapshot</b>, you must omit this parameter. If you include this
     * parameter, the request will fail, regardless of the value that you specify.</p>
     * </li> <li> <p>If you are creating a block device mapping from an <b>existing
     * unencrypted volume</b>, you can include this parameter, but you must specify
     * <code>false</code>. If you specify <code>true</code>, the request will fail. In
     * this case, we recommend that you omit the parameter.</p> </li> <li> <p>If you
     * are creating a block device mapping from an <b>existing encrypted volume</b>,
     * you can include this parameter, and specify either <code>true</code> or
     * <code>false</code>. However, if you specify <code>false</code>, the parameter is
     * ignored and the block device mapping is always encrypted. In this case, we
     * recommend that you omit the parameter.</p> </li> </ul>
     */
    inline bool GetEncrypted() const { return m_encrypted; }
    inline bool EncryptedHasBeenSet() const { return m_encryptedHasBeenSet; }
    inline void SetEncrypted(bool value) { m_encryptedHasBeenSet = true; m_encrypted = value; }
    inline FleetEbsBlockDeviceRequest& WithEncrypted(bool value) { SetEncrypted(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether the EBS volume is deleted on instance termination. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/preserving-volumes-on-termination.html">Preserve
     * data when an instance is terminated</a> in the <i>Amazon EC2 User Guide</i>.</p>
     */
    inline bool GetDeleteOnTermination() const { return m_deleteOnTermination; }
    inline bool DeleteOnTerminationHasBeenSet() const { return m_deleteOnTerminationHasBeenSet; }
    inline void SetDeleteOnTermination(bool value) { m_deleteOnTerminationHasBeenSet = true; m_deleteOnTermination = value; }
    inline FleetEbsBlockDeviceRequest& WithDeleteOnTermination(bool value) { SetDeleteOnTermination(value); return *this;}
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
    inline FleetEbsBlockDeviceRequest& WithIops(int value) { SetIops(value); return *this;}
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
    inline FleetEbsBlockDeviceRequest& WithThroughput(int value) { SetThroughput(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Identifier (key ID, key alias, key ARN, or alias ARN) of the customer managed
     * KMS key to use for EBS encryption.</p> <p>This parameter is only supported on
     * <code>BlockDeviceMapping</code> objects called by <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/API_CreateFleet.html">CreateFleet</a>,
     * <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/API_RequestSpotInstances.html">RequestSpotInstances</a>,
     * and <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/API_RunInstances.html">RunInstances</a>.</p>
     */
    inline const Aws::String& GetKmsKeyId() const { return m_kmsKeyId; }
    inline bool KmsKeyIdHasBeenSet() const { return m_kmsKeyIdHasBeenSet; }
    template<typename KmsKeyIdT = Aws::String>
    void SetKmsKeyId(KmsKeyIdT&& value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId = std::forward<KmsKeyIdT>(value); }
    template<typename KmsKeyIdT = Aws::String>
    FleetEbsBlockDeviceRequest& WithKmsKeyId(KmsKeyIdT&& value) { SetKmsKeyId(std::forward<KmsKeyIdT>(value)); return *this;}
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
    FleetEbsBlockDeviceRequest& WithSnapshotId(SnapshotIdT&& value) { SetSnapshotId(std::forward<SnapshotIdT>(value)); return *this;}
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
    inline FleetEbsBlockDeviceRequest& WithVolumeSize(int value) { SetVolumeSize(value); return *this;}
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
    inline FleetEbsBlockDeviceRequest& WithVolumeType(VolumeType value) { SetVolumeType(value); return *this;}
    ///@}
  private:

    bool m_encrypted{false};
    bool m_encryptedHasBeenSet = false;

    bool m_deleteOnTermination{false};
    bool m_deleteOnTerminationHasBeenSet = false;

    int m_iops{0};
    bool m_iopsHasBeenSet = false;

    int m_throughput{0};
    bool m_throughputHasBeenSet = false;

    Aws::String m_kmsKeyId;
    bool m_kmsKeyIdHasBeenSet = false;

    Aws::String m_snapshotId;
    bool m_snapshotIdHasBeenSet = false;

    int m_volumeSize{0};
    bool m_volumeSizeHasBeenSet = false;

    VolumeType m_volumeType{VolumeType::NOT_SET};
    bool m_volumeTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
