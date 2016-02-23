/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
   * <p>Describes an Amazon EBS volume.</p>
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
     * <p>The ID of the snapshot.</p>
     */
    inline const Aws::String& GetSnapshotId() const{ return m_snapshotId; }

    /**
     * <p>The ID of the snapshot.</p>
     */
    inline void SetSnapshotId(const Aws::String& value) { m_snapshotIdHasBeenSet = true; m_snapshotId = value; }

    /**
     * <p>The ID of the snapshot.</p>
     */
    inline void SetSnapshotId(Aws::String&& value) { m_snapshotIdHasBeenSet = true; m_snapshotId = value; }

    /**
     * <p>The ID of the snapshot.</p>
     */
    inline void SetSnapshotId(const char* value) { m_snapshotIdHasBeenSet = true; m_snapshotId.assign(value); }

    /**
     * <p>The ID of the snapshot.</p>
     */
    inline Ebs& WithSnapshotId(const Aws::String& value) { SetSnapshotId(value); return *this;}

    /**
     * <p>The ID of the snapshot.</p>
     */
    inline Ebs& WithSnapshotId(Aws::String&& value) { SetSnapshotId(value); return *this;}

    /**
     * <p>The ID of the snapshot.</p>
     */
    inline Ebs& WithSnapshotId(const char* value) { SetSnapshotId(value); return *this;}

    /**
     * <p>The volume size, in gigabytes.</p> <p>Valid values: If the volume type is
     * <code>io1</code>, the minimum size of the volume is 10 GiB. If you specify
     * <code>SnapshotId</code> and <code>VolumeSize</code>, <code>VolumeSize</code>
     * must be equal to or larger than the size of the snapshot.</p> <p>Default: If you
     * create a volume from a snapshot and you don't specify a volume size, the default
     * is the size of the snapshot.</p> <p>Required: Required when the volume type is
     * <code>io1</code>. </p>
     */
    inline long GetVolumeSize() const{ return m_volumeSize; }

    /**
     * <p>The volume size, in gigabytes.</p> <p>Valid values: If the volume type is
     * <code>io1</code>, the minimum size of the volume is 10 GiB. If you specify
     * <code>SnapshotId</code> and <code>VolumeSize</code>, <code>VolumeSize</code>
     * must be equal to or larger than the size of the snapshot.</p> <p>Default: If you
     * create a volume from a snapshot and you don't specify a volume size, the default
     * is the size of the snapshot.</p> <p>Required: Required when the volume type is
     * <code>io1</code>. </p>
     */
    inline void SetVolumeSize(long value) { m_volumeSizeHasBeenSet = true; m_volumeSize = value; }

    /**
     * <p>The volume size, in gigabytes.</p> <p>Valid values: If the volume type is
     * <code>io1</code>, the minimum size of the volume is 10 GiB. If you specify
     * <code>SnapshotId</code> and <code>VolumeSize</code>, <code>VolumeSize</code>
     * must be equal to or larger than the size of the snapshot.</p> <p>Default: If you
     * create a volume from a snapshot and you don't specify a volume size, the default
     * is the size of the snapshot.</p> <p>Required: Required when the volume type is
     * <code>io1</code>. </p>
     */
    inline Ebs& WithVolumeSize(long value) { SetVolumeSize(value); return *this;}

    /**
     * <p>The volume type.</p> <p>Valid values: <code>standard | io1 | gp2</code></p>
     * <p>Default: <code>standard</code></p>
     */
    inline const Aws::String& GetVolumeType() const{ return m_volumeType; }

    /**
     * <p>The volume type.</p> <p>Valid values: <code>standard | io1 | gp2</code></p>
     * <p>Default: <code>standard</code></p>
     */
    inline void SetVolumeType(const Aws::String& value) { m_volumeTypeHasBeenSet = true; m_volumeType = value; }

    /**
     * <p>The volume type.</p> <p>Valid values: <code>standard | io1 | gp2</code></p>
     * <p>Default: <code>standard</code></p>
     */
    inline void SetVolumeType(Aws::String&& value) { m_volumeTypeHasBeenSet = true; m_volumeType = value; }

    /**
     * <p>The volume type.</p> <p>Valid values: <code>standard | io1 | gp2</code></p>
     * <p>Default: <code>standard</code></p>
     */
    inline void SetVolumeType(const char* value) { m_volumeTypeHasBeenSet = true; m_volumeType.assign(value); }

    /**
     * <p>The volume type.</p> <p>Valid values: <code>standard | io1 | gp2</code></p>
     * <p>Default: <code>standard</code></p>
     */
    inline Ebs& WithVolumeType(const Aws::String& value) { SetVolumeType(value); return *this;}

    /**
     * <p>The volume type.</p> <p>Valid values: <code>standard | io1 | gp2</code></p>
     * <p>Default: <code>standard</code></p>
     */
    inline Ebs& WithVolumeType(Aws::String&& value) { SetVolumeType(value); return *this;}

    /**
     * <p>The volume type.</p> <p>Valid values: <code>standard | io1 | gp2</code></p>
     * <p>Default: <code>standard</code></p>
     */
    inline Ebs& WithVolumeType(const char* value) { SetVolumeType(value); return *this;}

    /**
     * <p>Indicates whether to delete the volume on instance termination.</p>
     * <p>Default: <code>true</code></p>
     */
    inline bool GetDeleteOnTermination() const{ return m_deleteOnTermination; }

    /**
     * <p>Indicates whether to delete the volume on instance termination.</p>
     * <p>Default: <code>true</code></p>
     */
    inline void SetDeleteOnTermination(bool value) { m_deleteOnTerminationHasBeenSet = true; m_deleteOnTermination = value; }

    /**
     * <p>Indicates whether to delete the volume on instance termination.</p>
     * <p>Default: <code>true</code></p>
     */
    inline Ebs& WithDeleteOnTermination(bool value) { SetDeleteOnTermination(value); return *this;}

    /**
     * <p>For Provisioned IOPS (SSD) volumes only. The number of I/O operations per
     * second (IOPS) to provision for the volume.</p> <p>Default: None</p>
     */
    inline long GetIops() const{ return m_iops; }

    /**
     * <p>For Provisioned IOPS (SSD) volumes only. The number of I/O operations per
     * second (IOPS) to provision for the volume.</p> <p>Default: None</p>
     */
    inline void SetIops(long value) { m_iopsHasBeenSet = true; m_iops = value; }

    /**
     * <p>For Provisioned IOPS (SSD) volumes only. The number of I/O operations per
     * second (IOPS) to provision for the volume.</p> <p>Default: None</p>
     */
    inline Ebs& WithIops(long value) { SetIops(value); return *this;}

    /**
     * <p>Indicates whether the volume should be encrypted. Encrypted EBS volumes must
     * be attached to instances that support Amazon EBS encryption. Volumes that are
     * created from encrypted snapshots are automatically encrypted. There is no way to
     * create an encrypted volume from an unencrypted snapshot or an unencrypted volume
     * from an encrypted snapshot. For more information, see <a
     * href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/EBSEncryption.html">Amazon
     * EBS Encryption</a> in the <i>Amazon Elastic Compute Cloud User Guide</i>.</p>
     */
    inline bool GetEncrypted() const{ return m_encrypted; }

    /**
     * <p>Indicates whether the volume should be encrypted. Encrypted EBS volumes must
     * be attached to instances that support Amazon EBS encryption. Volumes that are
     * created from encrypted snapshots are automatically encrypted. There is no way to
     * create an encrypted volume from an unencrypted snapshot or an unencrypted volume
     * from an encrypted snapshot. For more information, see <a
     * href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/EBSEncryption.html">Amazon
     * EBS Encryption</a> in the <i>Amazon Elastic Compute Cloud User Guide</i>.</p>
     */
    inline void SetEncrypted(bool value) { m_encryptedHasBeenSet = true; m_encrypted = value; }

    /**
     * <p>Indicates whether the volume should be encrypted. Encrypted EBS volumes must
     * be attached to instances that support Amazon EBS encryption. Volumes that are
     * created from encrypted snapshots are automatically encrypted. There is no way to
     * create an encrypted volume from an unencrypted snapshot or an unencrypted volume
     * from an encrypted snapshot. For more information, see <a
     * href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/EBSEncryption.html">Amazon
     * EBS Encryption</a> in the <i>Amazon Elastic Compute Cloud User Guide</i>.</p>
     */
    inline Ebs& WithEncrypted(bool value) { SetEncrypted(value); return *this;}

  private:
    Aws::String m_snapshotId;
    bool m_snapshotIdHasBeenSet;
    long m_volumeSize;
    bool m_volumeSizeHasBeenSet;
    Aws::String m_volumeType;
    bool m_volumeTypeHasBeenSet;
    bool m_deleteOnTermination;
    bool m_deleteOnTerminationHasBeenSet;
    long m_iops;
    bool m_iopsHasBeenSet;
    bool m_encrypted;
    bool m_encryptedHasBeenSet;
  };

} // namespace Model
} // namespace AutoScaling
} // namespace Aws
