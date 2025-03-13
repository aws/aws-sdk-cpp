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
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/EbsBlockDeviceResponse">AWS
   * API Reference</a></p>
   */
  class EbsBlockDeviceResponse
  {
  public:
    AWS_EC2_API EbsBlockDeviceResponse() = default;
    AWS_EC2_API EbsBlockDeviceResponse(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API EbsBlockDeviceResponse& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>Indicates whether the volume is encrypted.</p>
     */
    inline bool GetEncrypted() const { return m_encrypted; }
    inline bool EncryptedHasBeenSet() const { return m_encryptedHasBeenSet; }
    inline void SetEncrypted(bool value) { m_encryptedHasBeenSet = true; m_encrypted = value; }
    inline EbsBlockDeviceResponse& WithEncrypted(bool value) { SetEncrypted(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether the volume is deleted on instance termination.</p>
     */
    inline bool GetDeleteOnTermination() const { return m_deleteOnTermination; }
    inline bool DeleteOnTerminationHasBeenSet() const { return m_deleteOnTerminationHasBeenSet; }
    inline void SetDeleteOnTermination(bool value) { m_deleteOnTerminationHasBeenSet = true; m_deleteOnTermination = value; }
    inline EbsBlockDeviceResponse& WithDeleteOnTermination(bool value) { SetDeleteOnTermination(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of I/O operations per second (IOPS). For <code>gp3</code>,
     * <code>io1</code>, and <code>io2</code> volumes, this represents the number of
     * IOPS that are provisioned for the volume. For <code>gp2</code> volumes, this
     * represents the baseline performance of the volume and the rate at which the
     * volume accumulates I/O credits for bursting.</p>
     */
    inline int GetIops() const { return m_iops; }
    inline bool IopsHasBeenSet() const { return m_iopsHasBeenSet; }
    inline void SetIops(int value) { m_iopsHasBeenSet = true; m_iops = value; }
    inline EbsBlockDeviceResponse& WithIops(int value) { SetIops(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The throughput that the volume supports, in MiB/s.</p>
     */
    inline int GetThroughput() const { return m_throughput; }
    inline bool ThroughputHasBeenSet() const { return m_throughputHasBeenSet; }
    inline void SetThroughput(int value) { m_throughputHasBeenSet = true; m_throughput = value; }
    inline EbsBlockDeviceResponse& WithThroughput(int value) { SetThroughput(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Identifier (key ID, key alias, key ARN, or alias ARN) of the customer managed
     * KMS key to use for EBS encryption.</p>
     */
    inline const Aws::String& GetKmsKeyId() const { return m_kmsKeyId; }
    inline bool KmsKeyIdHasBeenSet() const { return m_kmsKeyIdHasBeenSet; }
    template<typename KmsKeyIdT = Aws::String>
    void SetKmsKeyId(KmsKeyIdT&& value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId = std::forward<KmsKeyIdT>(value); }
    template<typename KmsKeyIdT = Aws::String>
    EbsBlockDeviceResponse& WithKmsKeyId(KmsKeyIdT&& value) { SetKmsKeyId(std::forward<KmsKeyIdT>(value)); return *this;}
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
    EbsBlockDeviceResponse& WithSnapshotId(SnapshotIdT&& value) { SetSnapshotId(std::forward<SnapshotIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The size of the volume, in GiBs.</p>
     */
    inline int GetVolumeSize() const { return m_volumeSize; }
    inline bool VolumeSizeHasBeenSet() const { return m_volumeSizeHasBeenSet; }
    inline void SetVolumeSize(int value) { m_volumeSizeHasBeenSet = true; m_volumeSize = value; }
    inline EbsBlockDeviceResponse& WithVolumeSize(int value) { SetVolumeSize(value); return *this;}
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
    inline EbsBlockDeviceResponse& WithVolumeType(VolumeType value) { SetVolumeType(value); return *this;}
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
