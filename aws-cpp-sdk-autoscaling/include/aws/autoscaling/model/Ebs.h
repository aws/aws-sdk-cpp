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
#include <aws/autoscaling/AutoScaling_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace AutoScaling
{
namespace Model
{

  /**
   * <p>Describes an Amazon EBS volume. Used in combination with
   * <a>BlockDeviceMapping</a>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/autoscaling-2011-01-01/Ebs">AWS API
   * Reference</a></p>
   */
  class AWS_AUTOSCALING_API Ebs
  {
  public:
    Ebs();
    Ebs(const Aws::Utils::Xml::XmlNode& xmlNode);
    Ebs& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The ID of the snapshot. This parameter is optional if you specify a volume
     * size. </p>
     */
    inline const Aws::String& GetSnapshotId() const{ return m_snapshotId; }

    /**
     * <p>The ID of the snapshot. This parameter is optional if you specify a volume
     * size. </p>
     */
    inline bool SnapshotIdHasBeenSet() const { return m_snapshotIdHasBeenSet; }

    /**
     * <p>The ID of the snapshot. This parameter is optional if you specify a volume
     * size. </p>
     */
    inline void SetSnapshotId(const Aws::String& value) { m_snapshotIdHasBeenSet = true; m_snapshotId = value; }

    /**
     * <p>The ID of the snapshot. This parameter is optional if you specify a volume
     * size. </p>
     */
    inline void SetSnapshotId(Aws::String&& value) { m_snapshotIdHasBeenSet = true; m_snapshotId = std::move(value); }

    /**
     * <p>The ID of the snapshot. This parameter is optional if you specify a volume
     * size. </p>
     */
    inline void SetSnapshotId(const char* value) { m_snapshotIdHasBeenSet = true; m_snapshotId.assign(value); }

    /**
     * <p>The ID of the snapshot. This parameter is optional if you specify a volume
     * size. </p>
     */
    inline Ebs& WithSnapshotId(const Aws::String& value) { SetSnapshotId(value); return *this;}

    /**
     * <p>The ID of the snapshot. This parameter is optional if you specify a volume
     * size. </p>
     */
    inline Ebs& WithSnapshotId(Aws::String&& value) { SetSnapshotId(std::move(value)); return *this;}

    /**
     * <p>The ID of the snapshot. This parameter is optional if you specify a volume
     * size. </p>
     */
    inline Ebs& WithSnapshotId(const char* value) { SetSnapshotId(value); return *this;}


    /**
     * <p>The volume size, in GiB. </p> <p>Constraints: 1-1,024 for
     * <code>standard</code>, 4-16,384 for <code>io1</code>, 1-16,384 for
     * <code>gp2</code>, and 500-16,384 for <code>st1</code> and <code>sc1</code>. If
     * you specify a snapshot, the volume size must be equal to or larger than the
     * snapshot size.</p> <p>Default: If you create a volume from a snapshot and you
     * don't specify a volume size, the default is the snapshot size.</p> <note> <p>At
     * least one of VolumeSize or SnapshotId is required.</p> </note>
     */
    inline int GetVolumeSize() const{ return m_volumeSize; }

    /**
     * <p>The volume size, in GiB. </p> <p>Constraints: 1-1,024 for
     * <code>standard</code>, 4-16,384 for <code>io1</code>, 1-16,384 for
     * <code>gp2</code>, and 500-16,384 for <code>st1</code> and <code>sc1</code>. If
     * you specify a snapshot, the volume size must be equal to or larger than the
     * snapshot size.</p> <p>Default: If you create a volume from a snapshot and you
     * don't specify a volume size, the default is the snapshot size.</p> <note> <p>At
     * least one of VolumeSize or SnapshotId is required.</p> </note>
     */
    inline bool VolumeSizeHasBeenSet() const { return m_volumeSizeHasBeenSet; }

    /**
     * <p>The volume size, in GiB. </p> <p>Constraints: 1-1,024 for
     * <code>standard</code>, 4-16,384 for <code>io1</code>, 1-16,384 for
     * <code>gp2</code>, and 500-16,384 for <code>st1</code> and <code>sc1</code>. If
     * you specify a snapshot, the volume size must be equal to or larger than the
     * snapshot size.</p> <p>Default: If you create a volume from a snapshot and you
     * don't specify a volume size, the default is the snapshot size.</p> <note> <p>At
     * least one of VolumeSize or SnapshotId is required.</p> </note>
     */
    inline void SetVolumeSize(int value) { m_volumeSizeHasBeenSet = true; m_volumeSize = value; }

    /**
     * <p>The volume size, in GiB. </p> <p>Constraints: 1-1,024 for
     * <code>standard</code>, 4-16,384 for <code>io1</code>, 1-16,384 for
     * <code>gp2</code>, and 500-16,384 for <code>st1</code> and <code>sc1</code>. If
     * you specify a snapshot, the volume size must be equal to or larger than the
     * snapshot size.</p> <p>Default: If you create a volume from a snapshot and you
     * don't specify a volume size, the default is the snapshot size.</p> <note> <p>At
     * least one of VolumeSize or SnapshotId is required.</p> </note>
     */
    inline Ebs& WithVolumeSize(int value) { SetVolumeSize(value); return *this;}


    /**
     * <p>The volume type, which can be <code>standard</code> for Magnetic,
     * <code>io1</code> for Provisioned IOPS SSD, <code>gp2</code> for General Purpose
     * SSD, <code>st1</code> for Throughput Optimized HDD, or <code>sc1</code> for Cold
     * HDD. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/EBSVolumeTypes.html">Amazon
     * EBS Volume Types</a> in the <i>Amazon EC2 User Guide for Linux
     * Instances</i>.</p> <p>Valid values: <code>standard</code> | <code>io1</code> |
     * <code>gp2</code> | <code>st1</code> | <code>sc1</code> </p>
     */
    inline const Aws::String& GetVolumeType() const{ return m_volumeType; }

    /**
     * <p>The volume type, which can be <code>standard</code> for Magnetic,
     * <code>io1</code> for Provisioned IOPS SSD, <code>gp2</code> for General Purpose
     * SSD, <code>st1</code> for Throughput Optimized HDD, or <code>sc1</code> for Cold
     * HDD. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/EBSVolumeTypes.html">Amazon
     * EBS Volume Types</a> in the <i>Amazon EC2 User Guide for Linux
     * Instances</i>.</p> <p>Valid values: <code>standard</code> | <code>io1</code> |
     * <code>gp2</code> | <code>st1</code> | <code>sc1</code> </p>
     */
    inline bool VolumeTypeHasBeenSet() const { return m_volumeTypeHasBeenSet; }

    /**
     * <p>The volume type, which can be <code>standard</code> for Magnetic,
     * <code>io1</code> for Provisioned IOPS SSD, <code>gp2</code> for General Purpose
     * SSD, <code>st1</code> for Throughput Optimized HDD, or <code>sc1</code> for Cold
     * HDD. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/EBSVolumeTypes.html">Amazon
     * EBS Volume Types</a> in the <i>Amazon EC2 User Guide for Linux
     * Instances</i>.</p> <p>Valid values: <code>standard</code> | <code>io1</code> |
     * <code>gp2</code> | <code>st1</code> | <code>sc1</code> </p>
     */
    inline void SetVolumeType(const Aws::String& value) { m_volumeTypeHasBeenSet = true; m_volumeType = value; }

    /**
     * <p>The volume type, which can be <code>standard</code> for Magnetic,
     * <code>io1</code> for Provisioned IOPS SSD, <code>gp2</code> for General Purpose
     * SSD, <code>st1</code> for Throughput Optimized HDD, or <code>sc1</code> for Cold
     * HDD. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/EBSVolumeTypes.html">Amazon
     * EBS Volume Types</a> in the <i>Amazon EC2 User Guide for Linux
     * Instances</i>.</p> <p>Valid values: <code>standard</code> | <code>io1</code> |
     * <code>gp2</code> | <code>st1</code> | <code>sc1</code> </p>
     */
    inline void SetVolumeType(Aws::String&& value) { m_volumeTypeHasBeenSet = true; m_volumeType = std::move(value); }

    /**
     * <p>The volume type, which can be <code>standard</code> for Magnetic,
     * <code>io1</code> for Provisioned IOPS SSD, <code>gp2</code> for General Purpose
     * SSD, <code>st1</code> for Throughput Optimized HDD, or <code>sc1</code> for Cold
     * HDD. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/EBSVolumeTypes.html">Amazon
     * EBS Volume Types</a> in the <i>Amazon EC2 User Guide for Linux
     * Instances</i>.</p> <p>Valid values: <code>standard</code> | <code>io1</code> |
     * <code>gp2</code> | <code>st1</code> | <code>sc1</code> </p>
     */
    inline void SetVolumeType(const char* value) { m_volumeTypeHasBeenSet = true; m_volumeType.assign(value); }

    /**
     * <p>The volume type, which can be <code>standard</code> for Magnetic,
     * <code>io1</code> for Provisioned IOPS SSD, <code>gp2</code> for General Purpose
     * SSD, <code>st1</code> for Throughput Optimized HDD, or <code>sc1</code> for Cold
     * HDD. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/EBSVolumeTypes.html">Amazon
     * EBS Volume Types</a> in the <i>Amazon EC2 User Guide for Linux
     * Instances</i>.</p> <p>Valid values: <code>standard</code> | <code>io1</code> |
     * <code>gp2</code> | <code>st1</code> | <code>sc1</code> </p>
     */
    inline Ebs& WithVolumeType(const Aws::String& value) { SetVolumeType(value); return *this;}

    /**
     * <p>The volume type, which can be <code>standard</code> for Magnetic,
     * <code>io1</code> for Provisioned IOPS SSD, <code>gp2</code> for General Purpose
     * SSD, <code>st1</code> for Throughput Optimized HDD, or <code>sc1</code> for Cold
     * HDD. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/EBSVolumeTypes.html">Amazon
     * EBS Volume Types</a> in the <i>Amazon EC2 User Guide for Linux
     * Instances</i>.</p> <p>Valid values: <code>standard</code> | <code>io1</code> |
     * <code>gp2</code> | <code>st1</code> | <code>sc1</code> </p>
     */
    inline Ebs& WithVolumeType(Aws::String&& value) { SetVolumeType(std::move(value)); return *this;}

    /**
     * <p>The volume type, which can be <code>standard</code> for Magnetic,
     * <code>io1</code> for Provisioned IOPS SSD, <code>gp2</code> for General Purpose
     * SSD, <code>st1</code> for Throughput Optimized HDD, or <code>sc1</code> for Cold
     * HDD. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/EBSVolumeTypes.html">Amazon
     * EBS Volume Types</a> in the <i>Amazon EC2 User Guide for Linux
     * Instances</i>.</p> <p>Valid values: <code>standard</code> | <code>io1</code> |
     * <code>gp2</code> | <code>st1</code> | <code>sc1</code> </p>
     */
    inline Ebs& WithVolumeType(const char* value) { SetVolumeType(value); return *this;}


    /**
     * <p>Indicates whether the volume is deleted on instance termination. The default
     * value is <code>true</code>.</p>
     */
    inline bool GetDeleteOnTermination() const{ return m_deleteOnTermination; }

    /**
     * <p>Indicates whether the volume is deleted on instance termination. The default
     * value is <code>true</code>.</p>
     */
    inline bool DeleteOnTerminationHasBeenSet() const { return m_deleteOnTerminationHasBeenSet; }

    /**
     * <p>Indicates whether the volume is deleted on instance termination. The default
     * value is <code>true</code>.</p>
     */
    inline void SetDeleteOnTermination(bool value) { m_deleteOnTerminationHasBeenSet = true; m_deleteOnTermination = value; }

    /**
     * <p>Indicates whether the volume is deleted on instance termination. The default
     * value is <code>true</code>.</p>
     */
    inline Ebs& WithDeleteOnTermination(bool value) { SetDeleteOnTermination(value); return *this;}


    /**
     * <p>The number of I/O operations per second (IOPS) to provision for the volume.
     * For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/EBSVolumeTypes.html">Amazon
     * EBS Volume Types</a> in the <i>Amazon EC2 User Guide for Linux
     * Instances</i>.</p> <p>Conditional: This parameter is required when the volume
     * type is <code>io1</code>. (Not used with <code>standard</code>,
     * <code>gp2</code>, <code>st1</code>, or <code>sc1</code> volumes.) </p>
     */
    inline int GetIops() const{ return m_iops; }

    /**
     * <p>The number of I/O operations per second (IOPS) to provision for the volume.
     * For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/EBSVolumeTypes.html">Amazon
     * EBS Volume Types</a> in the <i>Amazon EC2 User Guide for Linux
     * Instances</i>.</p> <p>Conditional: This parameter is required when the volume
     * type is <code>io1</code>. (Not used with <code>standard</code>,
     * <code>gp2</code>, <code>st1</code>, or <code>sc1</code> volumes.) </p>
     */
    inline bool IopsHasBeenSet() const { return m_iopsHasBeenSet; }

    /**
     * <p>The number of I/O operations per second (IOPS) to provision for the volume.
     * For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/EBSVolumeTypes.html">Amazon
     * EBS Volume Types</a> in the <i>Amazon EC2 User Guide for Linux
     * Instances</i>.</p> <p>Conditional: This parameter is required when the volume
     * type is <code>io1</code>. (Not used with <code>standard</code>,
     * <code>gp2</code>, <code>st1</code>, or <code>sc1</code> volumes.) </p>
     */
    inline void SetIops(int value) { m_iopsHasBeenSet = true; m_iops = value; }

    /**
     * <p>The number of I/O operations per second (IOPS) to provision for the volume.
     * For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/EBSVolumeTypes.html">Amazon
     * EBS Volume Types</a> in the <i>Amazon EC2 User Guide for Linux
     * Instances</i>.</p> <p>Conditional: This parameter is required when the volume
     * type is <code>io1</code>. (Not used with <code>standard</code>,
     * <code>gp2</code>, <code>st1</code>, or <code>sc1</code> volumes.) </p>
     */
    inline Ebs& WithIops(int value) { SetIops(value); return *this;}


    /**
     * <p>Specifies whether the volume should be encrypted. Encrypted EBS volumes must
     * be attached to instances that support Amazon EBS encryption. Volumes that are
     * created from encrypted snapshots are automatically encrypted. There is no way to
     * create an encrypted volume from an unencrypted snapshot or an unencrypted volume
     * from an encrypted snapshot. If your AMI uses encrypted volumes, you can only
     * launch it on supported instance types. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/EBSEncryption.html">Amazon
     * EBS Encryption</a> in the <i>Amazon EC2 User Guide for Linux Instances</i>.</p>
     */
    inline bool GetEncrypted() const{ return m_encrypted; }

    /**
     * <p>Specifies whether the volume should be encrypted. Encrypted EBS volumes must
     * be attached to instances that support Amazon EBS encryption. Volumes that are
     * created from encrypted snapshots are automatically encrypted. There is no way to
     * create an encrypted volume from an unencrypted snapshot or an unencrypted volume
     * from an encrypted snapshot. If your AMI uses encrypted volumes, you can only
     * launch it on supported instance types. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/EBSEncryption.html">Amazon
     * EBS Encryption</a> in the <i>Amazon EC2 User Guide for Linux Instances</i>.</p>
     */
    inline bool EncryptedHasBeenSet() const { return m_encryptedHasBeenSet; }

    /**
     * <p>Specifies whether the volume should be encrypted. Encrypted EBS volumes must
     * be attached to instances that support Amazon EBS encryption. Volumes that are
     * created from encrypted snapshots are automatically encrypted. There is no way to
     * create an encrypted volume from an unencrypted snapshot or an unencrypted volume
     * from an encrypted snapshot. If your AMI uses encrypted volumes, you can only
     * launch it on supported instance types. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/EBSEncryption.html">Amazon
     * EBS Encryption</a> in the <i>Amazon EC2 User Guide for Linux Instances</i>.</p>
     */
    inline void SetEncrypted(bool value) { m_encryptedHasBeenSet = true; m_encrypted = value; }

    /**
     * <p>Specifies whether the volume should be encrypted. Encrypted EBS volumes must
     * be attached to instances that support Amazon EBS encryption. Volumes that are
     * created from encrypted snapshots are automatically encrypted. There is no way to
     * create an encrypted volume from an unencrypted snapshot or an unencrypted volume
     * from an encrypted snapshot. If your AMI uses encrypted volumes, you can only
     * launch it on supported instance types. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/EBSEncryption.html">Amazon
     * EBS Encryption</a> in the <i>Amazon EC2 User Guide for Linux Instances</i>.</p>
     */
    inline Ebs& WithEncrypted(bool value) { SetEncrypted(value); return *this;}

  private:

    Aws::String m_snapshotId;
    bool m_snapshotIdHasBeenSet;

    int m_volumeSize;
    bool m_volumeSizeHasBeenSet;

    Aws::String m_volumeType;
    bool m_volumeTypeHasBeenSet;

    bool m_deleteOnTermination;
    bool m_deleteOnTerminationHasBeenSet;

    int m_iops;
    bool m_iopsHasBeenSet;

    bool m_encrypted;
    bool m_encryptedHasBeenSet;
  };

} // namespace Model
} // namespace AutoScaling
} // namespace Aws
