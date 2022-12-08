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
   * <p>The parameters for a block device for an EBS volume.</p><p><h3>See Also:</h3>
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/LaunchTemplateEbsBlockDeviceRequest">AWS
   * API Reference</a></p>
   */
  class LaunchTemplateEbsBlockDeviceRequest
  {
  public:
    AWS_EC2_API LaunchTemplateEbsBlockDeviceRequest();
    AWS_EC2_API LaunchTemplateEbsBlockDeviceRequest(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API LaunchTemplateEbsBlockDeviceRequest& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>Indicates whether the EBS volume is encrypted. Encrypted volumes can only be
     * attached to instances that support Amazon EBS encryption. If you are creating a
     * volume from a snapshot, you can't specify an encryption value.</p>
     */
    inline bool GetEncrypted() const{ return m_encrypted; }

    /**
     * <p>Indicates whether the EBS volume is encrypted. Encrypted volumes can only be
     * attached to instances that support Amazon EBS encryption. If you are creating a
     * volume from a snapshot, you can't specify an encryption value.</p>
     */
    inline bool EncryptedHasBeenSet() const { return m_encryptedHasBeenSet; }

    /**
     * <p>Indicates whether the EBS volume is encrypted. Encrypted volumes can only be
     * attached to instances that support Amazon EBS encryption. If you are creating a
     * volume from a snapshot, you can't specify an encryption value.</p>
     */
    inline void SetEncrypted(bool value) { m_encryptedHasBeenSet = true; m_encrypted = value; }

    /**
     * <p>Indicates whether the EBS volume is encrypted. Encrypted volumes can only be
     * attached to instances that support Amazon EBS encryption. If you are creating a
     * volume from a snapshot, you can't specify an encryption value.</p>
     */
    inline LaunchTemplateEbsBlockDeviceRequest& WithEncrypted(bool value) { SetEncrypted(value); return *this;}


    /**
     * <p>Indicates whether the EBS volume is deleted on instance termination.</p>
     */
    inline bool GetDeleteOnTermination() const{ return m_deleteOnTermination; }

    /**
     * <p>Indicates whether the EBS volume is deleted on instance termination.</p>
     */
    inline bool DeleteOnTerminationHasBeenSet() const { return m_deleteOnTerminationHasBeenSet; }

    /**
     * <p>Indicates whether the EBS volume is deleted on instance termination.</p>
     */
    inline void SetDeleteOnTermination(bool value) { m_deleteOnTerminationHasBeenSet = true; m_deleteOnTermination = value; }

    /**
     * <p>Indicates whether the EBS volume is deleted on instance termination.</p>
     */
    inline LaunchTemplateEbsBlockDeviceRequest& WithDeleteOnTermination(bool value) { SetDeleteOnTermination(value); return *this;}


    /**
     * <p>The number of I/O operations per second (IOPS). For <code>gp3</code>,
     * <code>io1</code>, and <code>io2</code> volumes, this represents the number of
     * IOPS that are provisioned for the volume. For <code>gp2</code> volumes, this
     * represents the baseline performance of the volume and the rate at which the
     * volume accumulates I/O credits for bursting.</p> <p>The following are the
     * supported values for each volume type:</p> <ul> <li> <p> <code>gp3</code>:
     * 3,000-16,000 IOPS</p> </li> <li> <p> <code>io1</code>: 100-64,000 IOPS</p> </li>
     * <li> <p> <code>io2</code>: 100-64,000 IOPS</p> </li> </ul> <p>For
     * <code>io1</code> and <code>io2</code> volumes, we guarantee 64,000 IOPS only for
     * <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/instance-types.html#ec2-nitro-instances">Instances
     * built on the Nitro System</a>. Other instance families guarantee performance up
     * to 32,000 IOPS.</p> <p>This parameter is supported for <code>io1</code>,
     * <code>io2</code>, and <code>gp3</code> volumes only. This parameter is not
     * supported for <code>gp2</code>, <code>st1</code>, <code>sc1</code>, or
     * <code>standard</code> volumes.</p>
     */
    inline int GetIops() const{ return m_iops; }

    /**
     * <p>The number of I/O operations per second (IOPS). For <code>gp3</code>,
     * <code>io1</code>, and <code>io2</code> volumes, this represents the number of
     * IOPS that are provisioned for the volume. For <code>gp2</code> volumes, this
     * represents the baseline performance of the volume and the rate at which the
     * volume accumulates I/O credits for bursting.</p> <p>The following are the
     * supported values for each volume type:</p> <ul> <li> <p> <code>gp3</code>:
     * 3,000-16,000 IOPS</p> </li> <li> <p> <code>io1</code>: 100-64,000 IOPS</p> </li>
     * <li> <p> <code>io2</code>: 100-64,000 IOPS</p> </li> </ul> <p>For
     * <code>io1</code> and <code>io2</code> volumes, we guarantee 64,000 IOPS only for
     * <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/instance-types.html#ec2-nitro-instances">Instances
     * built on the Nitro System</a>. Other instance families guarantee performance up
     * to 32,000 IOPS.</p> <p>This parameter is supported for <code>io1</code>,
     * <code>io2</code>, and <code>gp3</code> volumes only. This parameter is not
     * supported for <code>gp2</code>, <code>st1</code>, <code>sc1</code>, or
     * <code>standard</code> volumes.</p>
     */
    inline bool IopsHasBeenSet() const { return m_iopsHasBeenSet; }

    /**
     * <p>The number of I/O operations per second (IOPS). For <code>gp3</code>,
     * <code>io1</code>, and <code>io2</code> volumes, this represents the number of
     * IOPS that are provisioned for the volume. For <code>gp2</code> volumes, this
     * represents the baseline performance of the volume and the rate at which the
     * volume accumulates I/O credits for bursting.</p> <p>The following are the
     * supported values for each volume type:</p> <ul> <li> <p> <code>gp3</code>:
     * 3,000-16,000 IOPS</p> </li> <li> <p> <code>io1</code>: 100-64,000 IOPS</p> </li>
     * <li> <p> <code>io2</code>: 100-64,000 IOPS</p> </li> </ul> <p>For
     * <code>io1</code> and <code>io2</code> volumes, we guarantee 64,000 IOPS only for
     * <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/instance-types.html#ec2-nitro-instances">Instances
     * built on the Nitro System</a>. Other instance families guarantee performance up
     * to 32,000 IOPS.</p> <p>This parameter is supported for <code>io1</code>,
     * <code>io2</code>, and <code>gp3</code> volumes only. This parameter is not
     * supported for <code>gp2</code>, <code>st1</code>, <code>sc1</code>, or
     * <code>standard</code> volumes.</p>
     */
    inline void SetIops(int value) { m_iopsHasBeenSet = true; m_iops = value; }

    /**
     * <p>The number of I/O operations per second (IOPS). For <code>gp3</code>,
     * <code>io1</code>, and <code>io2</code> volumes, this represents the number of
     * IOPS that are provisioned for the volume. For <code>gp2</code> volumes, this
     * represents the baseline performance of the volume and the rate at which the
     * volume accumulates I/O credits for bursting.</p> <p>The following are the
     * supported values for each volume type:</p> <ul> <li> <p> <code>gp3</code>:
     * 3,000-16,000 IOPS</p> </li> <li> <p> <code>io1</code>: 100-64,000 IOPS</p> </li>
     * <li> <p> <code>io2</code>: 100-64,000 IOPS</p> </li> </ul> <p>For
     * <code>io1</code> and <code>io2</code> volumes, we guarantee 64,000 IOPS only for
     * <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/instance-types.html#ec2-nitro-instances">Instances
     * built on the Nitro System</a>. Other instance families guarantee performance up
     * to 32,000 IOPS.</p> <p>This parameter is supported for <code>io1</code>,
     * <code>io2</code>, and <code>gp3</code> volumes only. This parameter is not
     * supported for <code>gp2</code>, <code>st1</code>, <code>sc1</code>, or
     * <code>standard</code> volumes.</p>
     */
    inline LaunchTemplateEbsBlockDeviceRequest& WithIops(int value) { SetIops(value); return *this;}


    /**
     * <p>The ARN of the symmetric Key Management Service (KMS) CMK used for
     * encryption.</p>
     */
    inline const Aws::String& GetKmsKeyId() const{ return m_kmsKeyId; }

    /**
     * <p>The ARN of the symmetric Key Management Service (KMS) CMK used for
     * encryption.</p>
     */
    inline bool KmsKeyIdHasBeenSet() const { return m_kmsKeyIdHasBeenSet; }

    /**
     * <p>The ARN of the symmetric Key Management Service (KMS) CMK used for
     * encryption.</p>
     */
    inline void SetKmsKeyId(const Aws::String& value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId = value; }

    /**
     * <p>The ARN of the symmetric Key Management Service (KMS) CMK used for
     * encryption.</p>
     */
    inline void SetKmsKeyId(Aws::String&& value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId = std::move(value); }

    /**
     * <p>The ARN of the symmetric Key Management Service (KMS) CMK used for
     * encryption.</p>
     */
    inline void SetKmsKeyId(const char* value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId.assign(value); }

    /**
     * <p>The ARN of the symmetric Key Management Service (KMS) CMK used for
     * encryption.</p>
     */
    inline LaunchTemplateEbsBlockDeviceRequest& WithKmsKeyId(const Aws::String& value) { SetKmsKeyId(value); return *this;}

    /**
     * <p>The ARN of the symmetric Key Management Service (KMS) CMK used for
     * encryption.</p>
     */
    inline LaunchTemplateEbsBlockDeviceRequest& WithKmsKeyId(Aws::String&& value) { SetKmsKeyId(std::move(value)); return *this;}

    /**
     * <p>The ARN of the symmetric Key Management Service (KMS) CMK used for
     * encryption.</p>
     */
    inline LaunchTemplateEbsBlockDeviceRequest& WithKmsKeyId(const char* value) { SetKmsKeyId(value); return *this;}


    /**
     * <p>The ID of the snapshot.</p>
     */
    inline const Aws::String& GetSnapshotId() const{ return m_snapshotId; }

    /**
     * <p>The ID of the snapshot.</p>
     */
    inline bool SnapshotIdHasBeenSet() const { return m_snapshotIdHasBeenSet; }

    /**
     * <p>The ID of the snapshot.</p>
     */
    inline void SetSnapshotId(const Aws::String& value) { m_snapshotIdHasBeenSet = true; m_snapshotId = value; }

    /**
     * <p>The ID of the snapshot.</p>
     */
    inline void SetSnapshotId(Aws::String&& value) { m_snapshotIdHasBeenSet = true; m_snapshotId = std::move(value); }

    /**
     * <p>The ID of the snapshot.</p>
     */
    inline void SetSnapshotId(const char* value) { m_snapshotIdHasBeenSet = true; m_snapshotId.assign(value); }

    /**
     * <p>The ID of the snapshot.</p>
     */
    inline LaunchTemplateEbsBlockDeviceRequest& WithSnapshotId(const Aws::String& value) { SetSnapshotId(value); return *this;}

    /**
     * <p>The ID of the snapshot.</p>
     */
    inline LaunchTemplateEbsBlockDeviceRequest& WithSnapshotId(Aws::String&& value) { SetSnapshotId(std::move(value)); return *this;}

    /**
     * <p>The ID of the snapshot.</p>
     */
    inline LaunchTemplateEbsBlockDeviceRequest& WithSnapshotId(const char* value) { SetSnapshotId(value); return *this;}


    /**
     * <p>The size of the volume, in GiBs. You must specify either a snapshot ID or a
     * volume size. The following are the supported volumes sizes for each volume
     * type:</p> <ul> <li> <p> <code>gp2</code> and <code>gp3</code>: 1-16,384</p>
     * </li> <li> <p> <code>io1</code> and <code>io2</code>: 4-16,384</p> </li> <li>
     * <p> <code>st1</code> and <code>sc1</code>: 125-16,384</p> </li> <li> <p>
     * <code>standard</code>: 1-1,024</p> </li> </ul>
     */
    inline int GetVolumeSize() const{ return m_volumeSize; }

    /**
     * <p>The size of the volume, in GiBs. You must specify either a snapshot ID or a
     * volume size. The following are the supported volumes sizes for each volume
     * type:</p> <ul> <li> <p> <code>gp2</code> and <code>gp3</code>: 1-16,384</p>
     * </li> <li> <p> <code>io1</code> and <code>io2</code>: 4-16,384</p> </li> <li>
     * <p> <code>st1</code> and <code>sc1</code>: 125-16,384</p> </li> <li> <p>
     * <code>standard</code>: 1-1,024</p> </li> </ul>
     */
    inline bool VolumeSizeHasBeenSet() const { return m_volumeSizeHasBeenSet; }

    /**
     * <p>The size of the volume, in GiBs. You must specify either a snapshot ID or a
     * volume size. The following are the supported volumes sizes for each volume
     * type:</p> <ul> <li> <p> <code>gp2</code> and <code>gp3</code>: 1-16,384</p>
     * </li> <li> <p> <code>io1</code> and <code>io2</code>: 4-16,384</p> </li> <li>
     * <p> <code>st1</code> and <code>sc1</code>: 125-16,384</p> </li> <li> <p>
     * <code>standard</code>: 1-1,024</p> </li> </ul>
     */
    inline void SetVolumeSize(int value) { m_volumeSizeHasBeenSet = true; m_volumeSize = value; }

    /**
     * <p>The size of the volume, in GiBs. You must specify either a snapshot ID or a
     * volume size. The following are the supported volumes sizes for each volume
     * type:</p> <ul> <li> <p> <code>gp2</code> and <code>gp3</code>: 1-16,384</p>
     * </li> <li> <p> <code>io1</code> and <code>io2</code>: 4-16,384</p> </li> <li>
     * <p> <code>st1</code> and <code>sc1</code>: 125-16,384</p> </li> <li> <p>
     * <code>standard</code>: 1-1,024</p> </li> </ul>
     */
    inline LaunchTemplateEbsBlockDeviceRequest& WithVolumeSize(int value) { SetVolumeSize(value); return *this;}


    /**
     * <p>The volume type. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/EBSVolumeTypes.html">Amazon
     * EBS volume types</a> in the <i>Amazon Elastic Compute Cloud User Guide</i>.</p>
     */
    inline const VolumeType& GetVolumeType() const{ return m_volumeType; }

    /**
     * <p>The volume type. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/EBSVolumeTypes.html">Amazon
     * EBS volume types</a> in the <i>Amazon Elastic Compute Cloud User Guide</i>.</p>
     */
    inline bool VolumeTypeHasBeenSet() const { return m_volumeTypeHasBeenSet; }

    /**
     * <p>The volume type. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/EBSVolumeTypes.html">Amazon
     * EBS volume types</a> in the <i>Amazon Elastic Compute Cloud User Guide</i>.</p>
     */
    inline void SetVolumeType(const VolumeType& value) { m_volumeTypeHasBeenSet = true; m_volumeType = value; }

    /**
     * <p>The volume type. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/EBSVolumeTypes.html">Amazon
     * EBS volume types</a> in the <i>Amazon Elastic Compute Cloud User Guide</i>.</p>
     */
    inline void SetVolumeType(VolumeType&& value) { m_volumeTypeHasBeenSet = true; m_volumeType = std::move(value); }

    /**
     * <p>The volume type. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/EBSVolumeTypes.html">Amazon
     * EBS volume types</a> in the <i>Amazon Elastic Compute Cloud User Guide</i>.</p>
     */
    inline LaunchTemplateEbsBlockDeviceRequest& WithVolumeType(const VolumeType& value) { SetVolumeType(value); return *this;}

    /**
     * <p>The volume type. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/EBSVolumeTypes.html">Amazon
     * EBS volume types</a> in the <i>Amazon Elastic Compute Cloud User Guide</i>.</p>
     */
    inline LaunchTemplateEbsBlockDeviceRequest& WithVolumeType(VolumeType&& value) { SetVolumeType(std::move(value)); return *this;}


    /**
     * <p>The throughput to provision for a <code>gp3</code> volume, with a maximum of
     * 1,000 MiB/s.</p> <p>Valid Range: Minimum value of 125. Maximum value of
     * 1000.</p>
     */
    inline int GetThroughput() const{ return m_throughput; }

    /**
     * <p>The throughput to provision for a <code>gp3</code> volume, with a maximum of
     * 1,000 MiB/s.</p> <p>Valid Range: Minimum value of 125. Maximum value of
     * 1000.</p>
     */
    inline bool ThroughputHasBeenSet() const { return m_throughputHasBeenSet; }

    /**
     * <p>The throughput to provision for a <code>gp3</code> volume, with a maximum of
     * 1,000 MiB/s.</p> <p>Valid Range: Minimum value of 125. Maximum value of
     * 1000.</p>
     */
    inline void SetThroughput(int value) { m_throughputHasBeenSet = true; m_throughput = value; }

    /**
     * <p>The throughput to provision for a <code>gp3</code> volume, with a maximum of
     * 1,000 MiB/s.</p> <p>Valid Range: Minimum value of 125. Maximum value of
     * 1000.</p>
     */
    inline LaunchTemplateEbsBlockDeviceRequest& WithThroughput(int value) { SetThroughput(value); return *this;}

  private:

    bool m_encrypted;
    bool m_encryptedHasBeenSet = false;

    bool m_deleteOnTermination;
    bool m_deleteOnTerminationHasBeenSet = false;

    int m_iops;
    bool m_iopsHasBeenSet = false;

    Aws::String m_kmsKeyId;
    bool m_kmsKeyIdHasBeenSet = false;

    Aws::String m_snapshotId;
    bool m_snapshotIdHasBeenSet = false;

    int m_volumeSize;
    bool m_volumeSizeHasBeenSet = false;

    VolumeType m_volumeType;
    bool m_volumeTypeHasBeenSet = false;

    int m_throughput;
    bool m_throughputHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
