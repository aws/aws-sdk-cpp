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
  class AWS_EC2_API ScheduledInstancesEbs
  {
  public:
    ScheduledInstancesEbs();
    ScheduledInstancesEbs(const Aws::Utils::Xml::XmlNode& xmlNode);
    ScheduledInstancesEbs& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>Indicates whether the volume is deleted on instance termination.</p>
     */
    inline bool GetDeleteOnTermination() const{ return m_deleteOnTermination; }

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
    inline void SetEncrypted(bool value) { m_encryptedHasBeenSet = true; m_encrypted = value; }

    /**
     * <p>Indicates whether the volume is encrypted. You can attached encrypted volumes
     * only to instances that support them.</p>
     */
    inline ScheduledInstancesEbs& WithEncrypted(bool value) { SetEncrypted(value); return *this;}


    /**
     * <p>The number of I/O operations per second (IOPS) that the volume supports. For
     * io1 volumes, this represents the number of IOPS that are provisioned for the
     * volume. For <code>gp2</code> volumes, this represents the baseline performance
     * of the volume and the rate at which the volume accumulates I/O credits for
     * bursting. For more information about <code>gp2</code> baseline performance, I/O
     * credits, and bursting, see <a
     * href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/EBSVolumeTypes.html">Amazon
     * EBS Volume Types</a> in the <i>Amazon Elastic Compute Cloud User Guide</i>.</p>
     * <p>Constraint: Range is 100-20000 IOPS for <code>io1</code> volumes and
     * 100-10000 IOPS for <code>gp2</code> volumes.</p> <p>Condition: This parameter is
     * required for requests to create <code>io1</code>volumes; it is not used in
     * requests to create <code>gp2</code>, <code>st1</code>, <code>sc1</code>, or
     * <code>standard</code> volumes.</p>
     */
    inline int GetIops() const{ return m_iops; }

    /**
     * <p>The number of I/O operations per second (IOPS) that the volume supports. For
     * io1 volumes, this represents the number of IOPS that are provisioned for the
     * volume. For <code>gp2</code> volumes, this represents the baseline performance
     * of the volume and the rate at which the volume accumulates I/O credits for
     * bursting. For more information about <code>gp2</code> baseline performance, I/O
     * credits, and bursting, see <a
     * href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/EBSVolumeTypes.html">Amazon
     * EBS Volume Types</a> in the <i>Amazon Elastic Compute Cloud User Guide</i>.</p>
     * <p>Constraint: Range is 100-20000 IOPS for <code>io1</code> volumes and
     * 100-10000 IOPS for <code>gp2</code> volumes.</p> <p>Condition: This parameter is
     * required for requests to create <code>io1</code>volumes; it is not used in
     * requests to create <code>gp2</code>, <code>st1</code>, <code>sc1</code>, or
     * <code>standard</code> volumes.</p>
     */
    inline void SetIops(int value) { m_iopsHasBeenSet = true; m_iops = value; }

    /**
     * <p>The number of I/O operations per second (IOPS) that the volume supports. For
     * io1 volumes, this represents the number of IOPS that are provisioned for the
     * volume. For <code>gp2</code> volumes, this represents the baseline performance
     * of the volume and the rate at which the volume accumulates I/O credits for
     * bursting. For more information about <code>gp2</code> baseline performance, I/O
     * credits, and bursting, see <a
     * href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/EBSVolumeTypes.html">Amazon
     * EBS Volume Types</a> in the <i>Amazon Elastic Compute Cloud User Guide</i>.</p>
     * <p>Constraint: Range is 100-20000 IOPS for <code>io1</code> volumes and
     * 100-10000 IOPS for <code>gp2</code> volumes.</p> <p>Condition: This parameter is
     * required for requests to create <code>io1</code>volumes; it is not used in
     * requests to create <code>gp2</code>, <code>st1</code>, <code>sc1</code>, or
     * <code>standard</code> volumes.</p>
     */
    inline ScheduledInstancesEbs& WithIops(int value) { SetIops(value); return *this;}


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
    inline void SetVolumeSize(int value) { m_volumeSizeHasBeenSet = true; m_volumeSize = value; }

    /**
     * <p>The size of the volume, in GiB.</p> <p>Default: If you're creating the volume
     * from a snapshot and don't specify a volume size, the default is the snapshot
     * size.</p>
     */
    inline ScheduledInstancesEbs& WithVolumeSize(int value) { SetVolumeSize(value); return *this;}


    /**
     * <p>The volume type. <code>gp2</code> for General Purpose SSD, <code>io1</code>
     * for Provisioned IOPS SSD, Throughput Optimized HDD for <code>st1</code>, Cold
     * HDD for <code>sc1</code>, or <code>standard</code> for Magnetic.</p> <p>Default:
     * <code>standard</code> </p>
     */
    inline const Aws::String& GetVolumeType() const{ return m_volumeType; }

    /**
     * <p>The volume type. <code>gp2</code> for General Purpose SSD, <code>io1</code>
     * for Provisioned IOPS SSD, Throughput Optimized HDD for <code>st1</code>, Cold
     * HDD for <code>sc1</code>, or <code>standard</code> for Magnetic.</p> <p>Default:
     * <code>standard</code> </p>
     */
    inline void SetVolumeType(const Aws::String& value) { m_volumeTypeHasBeenSet = true; m_volumeType = value; }

    /**
     * <p>The volume type. <code>gp2</code> for General Purpose SSD, <code>io1</code>
     * for Provisioned IOPS SSD, Throughput Optimized HDD for <code>st1</code>, Cold
     * HDD for <code>sc1</code>, or <code>standard</code> for Magnetic.</p> <p>Default:
     * <code>standard</code> </p>
     */
    inline void SetVolumeType(Aws::String&& value) { m_volumeTypeHasBeenSet = true; m_volumeType = std::move(value); }

    /**
     * <p>The volume type. <code>gp2</code> for General Purpose SSD, <code>io1</code>
     * for Provisioned IOPS SSD, Throughput Optimized HDD for <code>st1</code>, Cold
     * HDD for <code>sc1</code>, or <code>standard</code> for Magnetic.</p> <p>Default:
     * <code>standard</code> </p>
     */
    inline void SetVolumeType(const char* value) { m_volumeTypeHasBeenSet = true; m_volumeType.assign(value); }

    /**
     * <p>The volume type. <code>gp2</code> for General Purpose SSD, <code>io1</code>
     * for Provisioned IOPS SSD, Throughput Optimized HDD for <code>st1</code>, Cold
     * HDD for <code>sc1</code>, or <code>standard</code> for Magnetic.</p> <p>Default:
     * <code>standard</code> </p>
     */
    inline ScheduledInstancesEbs& WithVolumeType(const Aws::String& value) { SetVolumeType(value); return *this;}

    /**
     * <p>The volume type. <code>gp2</code> for General Purpose SSD, <code>io1</code>
     * for Provisioned IOPS SSD, Throughput Optimized HDD for <code>st1</code>, Cold
     * HDD for <code>sc1</code>, or <code>standard</code> for Magnetic.</p> <p>Default:
     * <code>standard</code> </p>
     */
    inline ScheduledInstancesEbs& WithVolumeType(Aws::String&& value) { SetVolumeType(std::move(value)); return *this;}

    /**
     * <p>The volume type. <code>gp2</code> for General Purpose SSD, <code>io1</code>
     * for Provisioned IOPS SSD, Throughput Optimized HDD for <code>st1</code>, Cold
     * HDD for <code>sc1</code>, or <code>standard</code> for Magnetic.</p> <p>Default:
     * <code>standard</code> </p>
     */
    inline ScheduledInstancesEbs& WithVolumeType(const char* value) { SetVolumeType(value); return *this;}

  private:

    bool m_deleteOnTermination;
    bool m_deleteOnTerminationHasBeenSet;

    bool m_encrypted;
    bool m_encryptedHasBeenSet;

    int m_iops;
    bool m_iopsHasBeenSet;

    Aws::String m_snapshotId;
    bool m_snapshotIdHasBeenSet;

    int m_volumeSize;
    bool m_volumeSizeHasBeenSet;

    Aws::String m_volumeType;
    bool m_volumeTypeHasBeenSet;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
