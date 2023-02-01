/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
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
namespace EC2
{
namespace Model
{

  /**
   * <p>Describes an EBS volume for a Scheduled Instance.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/ScheduledInstancesEbs">AWS
   * API Reference</a></p>
   */
  class ScheduledInstancesEbs
  {
  public:
    AWS_EC2_API ScheduledInstancesEbs();
    AWS_EC2_API ScheduledInstancesEbs(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API ScheduledInstancesEbs& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>Indicates whether the volume is deleted on instance termination.</p>
     */
    inline bool GetDeleteOnTermination() const{ return m_deleteOnTermination; }

    /**
     * <p>Indicates whether the volume is deleted on instance termination.</p>
     */
    inline bool DeleteOnTerminationHasBeenSet() const { return m_deleteOnTerminationHasBeenSet; }

    /**
     * <p>Indicates whether the volume is deleted on instance termination.</p>
     */
    inline void SetDeleteOnTermination(bool value) { m_deleteOnTerminationHasBeenSet = true; m_deleteOnTermination = value; }

    /**
     * <p>Indicates whether the volume is deleted on instance termination.</p>
     */
    inline ScheduledInstancesEbs& WithDeleteOnTermination(bool value) { SetDeleteOnTermination(value); return *this;}


    /**
     * <p>Indicates whether the volume is encrypted. You can attached encrypted volumes
     * only to instances that support them.</p>
     */
    inline bool GetEncrypted() const{ return m_encrypted; }

    /**
     * <p>Indicates whether the volume is encrypted. You can attached encrypted volumes
     * only to instances that support them.</p>
     */
    inline bool EncryptedHasBeenSet() const { return m_encryptedHasBeenSet; }

    /**
     * <p>Indicates whether the volume is encrypted. You can attached encrypted volumes
     * only to instances that support them.</p>
     */
    inline void SetEncrypted(bool value) { m_encryptedHasBeenSet = true; m_encrypted = value; }

    /**
     * <p>Indicates whether the volume is encrypted. You can attached encrypted volumes
     * only to instances that support them.</p>
     */
    inline ScheduledInstancesEbs& WithEncrypted(bool value) { SetEncrypted(value); return *this;}


    /**
     * <p>The number of I/O operations per second (IOPS) to provision for an
     * <code>io1</code> or <code>io2</code> volume, with a maximum ratio of 50 IOPS/GiB
     * for <code>io1</code>, and 500 IOPS/GiB for <code>io2</code>. Range is 100 to
     * 64,000 IOPS for volumes in most Regions. Maximum IOPS of 64,000 is guaranteed
     * only on <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/instance-types.html#ec2-nitro-instances">instances
     * built on the Nitro System</a>. Other instance families guarantee performance up
     * to 32,000 IOPS. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/EBSVolumeTypes.html">Amazon
     * EBS volume types</a> in the <i>Amazon EC2 User Guide</i>.</p> <p>This parameter
     * is valid only for Provisioned IOPS SSD (<code>io1</code> and <code>io2</code>)
     * volumes.</p>
     */
    inline int GetIops() const{ return m_iops; }

    /**
     * <p>The number of I/O operations per second (IOPS) to provision for an
     * <code>io1</code> or <code>io2</code> volume, with a maximum ratio of 50 IOPS/GiB
     * for <code>io1</code>, and 500 IOPS/GiB for <code>io2</code>. Range is 100 to
     * 64,000 IOPS for volumes in most Regions. Maximum IOPS of 64,000 is guaranteed
     * only on <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/instance-types.html#ec2-nitro-instances">instances
     * built on the Nitro System</a>. Other instance families guarantee performance up
     * to 32,000 IOPS. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/EBSVolumeTypes.html">Amazon
     * EBS volume types</a> in the <i>Amazon EC2 User Guide</i>.</p> <p>This parameter
     * is valid only for Provisioned IOPS SSD (<code>io1</code> and <code>io2</code>)
     * volumes.</p>
     */
    inline bool IopsHasBeenSet() const { return m_iopsHasBeenSet; }

    /**
     * <p>The number of I/O operations per second (IOPS) to provision for an
     * <code>io1</code> or <code>io2</code> volume, with a maximum ratio of 50 IOPS/GiB
     * for <code>io1</code>, and 500 IOPS/GiB for <code>io2</code>. Range is 100 to
     * 64,000 IOPS for volumes in most Regions. Maximum IOPS of 64,000 is guaranteed
     * only on <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/instance-types.html#ec2-nitro-instances">instances
     * built on the Nitro System</a>. Other instance families guarantee performance up
     * to 32,000 IOPS. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/EBSVolumeTypes.html">Amazon
     * EBS volume types</a> in the <i>Amazon EC2 User Guide</i>.</p> <p>This parameter
     * is valid only for Provisioned IOPS SSD (<code>io1</code> and <code>io2</code>)
     * volumes.</p>
     */
    inline void SetIops(int value) { m_iopsHasBeenSet = true; m_iops = value; }

    /**
     * <p>The number of I/O operations per second (IOPS) to provision for an
     * <code>io1</code> or <code>io2</code> volume, with a maximum ratio of 50 IOPS/GiB
     * for <code>io1</code>, and 500 IOPS/GiB for <code>io2</code>. Range is 100 to
     * 64,000 IOPS for volumes in most Regions. Maximum IOPS of 64,000 is guaranteed
     * only on <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/instance-types.html#ec2-nitro-instances">instances
     * built on the Nitro System</a>. Other instance families guarantee performance up
     * to 32,000 IOPS. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/EBSVolumeTypes.html">Amazon
     * EBS volume types</a> in the <i>Amazon EC2 User Guide</i>.</p> <p>This parameter
     * is valid only for Provisioned IOPS SSD (<code>io1</code> and <code>io2</code>)
     * volumes.</p>
     */
    inline ScheduledInstancesEbs& WithIops(int value) { SetIops(value); return *this;}


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
    inline ScheduledInstancesEbs& WithSnapshotId(const Aws::String& value) { SetSnapshotId(value); return *this;}

    /**
     * <p>The ID of the snapshot.</p>
     */
    inline ScheduledInstancesEbs& WithSnapshotId(Aws::String&& value) { SetSnapshotId(std::move(value)); return *this;}

    /**
     * <p>The ID of the snapshot.</p>
     */
    inline ScheduledInstancesEbs& WithSnapshotId(const char* value) { SetSnapshotId(value); return *this;}


    /**
     * <p>The size of the volume, in GiB.</p> <p>Default: If you're creating the volume
     * from a snapshot and don't specify a volume size, the default is the snapshot
     * size.</p>
     */
    inline int GetVolumeSize() const{ return m_volumeSize; }

    /**
     * <p>The size of the volume, in GiB.</p> <p>Default: If you're creating the volume
     * from a snapshot and don't specify a volume size, the default is the snapshot
     * size.</p>
     */
    inline bool VolumeSizeHasBeenSet() const { return m_volumeSizeHasBeenSet; }

    /**
     * <p>The size of the volume, in GiB.</p> <p>Default: If you're creating the volume
     * from a snapshot and don't specify a volume size, the default is the snapshot
     * size.</p>
     */
    inline void SetVolumeSize(int value) { m_volumeSizeHasBeenSet = true; m_volumeSize = value; }

    /**
     * <p>The size of the volume, in GiB.</p> <p>Default: If you're creating the volume
     * from a snapshot and don't specify a volume size, the default is the snapshot
     * size.</p>
     */
    inline ScheduledInstancesEbs& WithVolumeSize(int value) { SetVolumeSize(value); return *this;}


    /**
     * <p>The volume type. <code>gp2</code> for General Purpose SSD, <code>io1</code>
     * or <code> io2</code> for Provisioned IOPS SSD, Throughput Optimized HDD for
     * <code>st1</code>, Cold HDD for <code>sc1</code>, or <code>standard</code> for
     * Magnetic.</p> <p>Default: <code>gp2</code> </p>
     */
    inline const Aws::String& GetVolumeType() const{ return m_volumeType; }

    /**
     * <p>The volume type. <code>gp2</code> for General Purpose SSD, <code>io1</code>
     * or <code> io2</code> for Provisioned IOPS SSD, Throughput Optimized HDD for
     * <code>st1</code>, Cold HDD for <code>sc1</code>, or <code>standard</code> for
     * Magnetic.</p> <p>Default: <code>gp2</code> </p>
     */
    inline bool VolumeTypeHasBeenSet() const { return m_volumeTypeHasBeenSet; }

    /**
     * <p>The volume type. <code>gp2</code> for General Purpose SSD, <code>io1</code>
     * or <code> io2</code> for Provisioned IOPS SSD, Throughput Optimized HDD for
     * <code>st1</code>, Cold HDD for <code>sc1</code>, or <code>standard</code> for
     * Magnetic.</p> <p>Default: <code>gp2</code> </p>
     */
    inline void SetVolumeType(const Aws::String& value) { m_volumeTypeHasBeenSet = true; m_volumeType = value; }

    /**
     * <p>The volume type. <code>gp2</code> for General Purpose SSD, <code>io1</code>
     * or <code> io2</code> for Provisioned IOPS SSD, Throughput Optimized HDD for
     * <code>st1</code>, Cold HDD for <code>sc1</code>, or <code>standard</code> for
     * Magnetic.</p> <p>Default: <code>gp2</code> </p>
     */
    inline void SetVolumeType(Aws::String&& value) { m_volumeTypeHasBeenSet = true; m_volumeType = std::move(value); }

    /**
     * <p>The volume type. <code>gp2</code> for General Purpose SSD, <code>io1</code>
     * or <code> io2</code> for Provisioned IOPS SSD, Throughput Optimized HDD for
     * <code>st1</code>, Cold HDD for <code>sc1</code>, or <code>standard</code> for
     * Magnetic.</p> <p>Default: <code>gp2</code> </p>
     */
    inline void SetVolumeType(const char* value) { m_volumeTypeHasBeenSet = true; m_volumeType.assign(value); }

    /**
     * <p>The volume type. <code>gp2</code> for General Purpose SSD, <code>io1</code>
     * or <code> io2</code> for Provisioned IOPS SSD, Throughput Optimized HDD for
     * <code>st1</code>, Cold HDD for <code>sc1</code>, or <code>standard</code> for
     * Magnetic.</p> <p>Default: <code>gp2</code> </p>
     */
    inline ScheduledInstancesEbs& WithVolumeType(const Aws::String& value) { SetVolumeType(value); return *this;}

    /**
     * <p>The volume type. <code>gp2</code> for General Purpose SSD, <code>io1</code>
     * or <code> io2</code> for Provisioned IOPS SSD, Throughput Optimized HDD for
     * <code>st1</code>, Cold HDD for <code>sc1</code>, or <code>standard</code> for
     * Magnetic.</p> <p>Default: <code>gp2</code> </p>
     */
    inline ScheduledInstancesEbs& WithVolumeType(Aws::String&& value) { SetVolumeType(std::move(value)); return *this;}

    /**
     * <p>The volume type. <code>gp2</code> for General Purpose SSD, <code>io1</code>
     * or <code> io2</code> for Provisioned IOPS SSD, Throughput Optimized HDD for
     * <code>st1</code>, Cold HDD for <code>sc1</code>, or <code>standard</code> for
     * Magnetic.</p> <p>Default: <code>gp2</code> </p>
     */
    inline ScheduledInstancesEbs& WithVolumeType(const char* value) { SetVolumeType(value); return *this;}

  private:

    bool m_deleteOnTermination;
    bool m_deleteOnTerminationHasBeenSet = false;

    bool m_encrypted;
    bool m_encryptedHasBeenSet = false;

    int m_iops;
    bool m_iopsHasBeenSet = false;

    Aws::String m_snapshotId;
    bool m_snapshotIdHasBeenSet = false;

    int m_volumeSize;
    bool m_volumeSizeHasBeenSet = false;

    Aws::String m_volumeType;
    bool m_volumeTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
