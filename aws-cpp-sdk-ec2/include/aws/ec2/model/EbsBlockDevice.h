/*
* Copyright 2010-2015 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/ec2/model/VolumeType.h>

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
  /*
    <p>Describes a block device for an EBS volume.</p>
  */
  class AWS_EC2_API EbsBlockDevice
  {
  public:
    EbsBlockDevice();
    EbsBlockDevice(const Aws::Utils::Xml::XmlNode& xmlNode);
    EbsBlockDevice& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    void OutputToStream(Aws::OStream& oStream, const char* location) const;

    /*
     <p>The ID of the snapshot.</p>
    */
    inline const Aws::String& GetSnapshotId() const{ return m_snapshotId; }

    /*
     <p>The ID of the snapshot.</p>
    */
    inline void SetSnapshotId(const Aws::String& value) { m_snapshotIdHasBeenSet = true; m_snapshotId = value; }

    /*
     <p>The ID of the snapshot.</p>
    */
    inline void SetSnapshotId(Aws::String&& value) { m_snapshotIdHasBeenSet = true; m_snapshotId = value; }

    /*
     <p>The ID of the snapshot.</p>
    */
    inline void SetSnapshotId(const char* value) { m_snapshotIdHasBeenSet = true; m_snapshotId.assign(value); }

    /*
     <p>The ID of the snapshot.</p>
    */
    inline EbsBlockDevice& WithSnapshotId(const Aws::String& value) { SetSnapshotId(value); return *this;}

    /*
     <p>The ID of the snapshot.</p>
    */
    inline EbsBlockDevice& WithSnapshotId(Aws::String&& value) { SetSnapshotId(value); return *this;}

    /*
     <p>The ID of the snapshot.</p>
    */
    inline EbsBlockDevice& WithSnapshotId(const char* value) { SetSnapshotId(value); return *this;}

    /*
     <p>The size of the volume, in GiB.</p> <p>Constraints: <code>1-1024</code> for <code>standard</code> volumes, <code>1-16384</code> for <code>gp2</code> volumes, and <code>4-16384</code> for <code>io1</code> volumes. If you specify a snapshot, the volume size must be equal to or larger than the snapshot size.</p> <p>Default: If you're creating the volume from a snapshot and don't specify a volume size, the default is the snapshot size.</p>
    */
    inline long GetVolumeSize() const{ return m_volumeSize; }

    /*
     <p>The size of the volume, in GiB.</p> <p>Constraints: <code>1-1024</code> for <code>standard</code> volumes, <code>1-16384</code> for <code>gp2</code> volumes, and <code>4-16384</code> for <code>io1</code> volumes. If you specify a snapshot, the volume size must be equal to or larger than the snapshot size.</p> <p>Default: If you're creating the volume from a snapshot and don't specify a volume size, the default is the snapshot size.</p>
    */
    inline void SetVolumeSize(long value) { m_volumeSizeHasBeenSet = true; m_volumeSize = value; }

    /*
     <p>The size of the volume, in GiB.</p> <p>Constraints: <code>1-1024</code> for <code>standard</code> volumes, <code>1-16384</code> for <code>gp2</code> volumes, and <code>4-16384</code> for <code>io1</code> volumes. If you specify a snapshot, the volume size must be equal to or larger than the snapshot size.</p> <p>Default: If you're creating the volume from a snapshot and don't specify a volume size, the default is the snapshot size.</p>
    */
    inline EbsBlockDevice& WithVolumeSize(long value) { SetVolumeSize(value); return *this;}

    /*
     <p>Indicates whether the EBS volume is deleted on instance termination.</p>
    */
    inline bool GetDeleteOnTermination() const{ return m_deleteOnTermination; }

    /*
     <p>Indicates whether the EBS volume is deleted on instance termination.</p>
    */
    inline void SetDeleteOnTermination(bool value) { m_deleteOnTerminationHasBeenSet = true; m_deleteOnTermination = value; }

    /*
     <p>Indicates whether the EBS volume is deleted on instance termination.</p>
    */
    inline EbsBlockDevice& WithDeleteOnTermination(bool value) { SetDeleteOnTermination(value); return *this;}

    /*
     <p>The volume type. <code>gp2</code> for General Purpose (SSD) volumes, <code>io1</code> for Provisioned IOPS (SSD) volumes, and <code>standard</code> for Magnetic volumes.</p> <p>Default: <code>standard</code></p>
    */
    inline const VolumeType& GetVolumeType() const{ return m_volumeType; }

    /*
     <p>The volume type. <code>gp2</code> for General Purpose (SSD) volumes, <code>io1</code> for Provisioned IOPS (SSD) volumes, and <code>standard</code> for Magnetic volumes.</p> <p>Default: <code>standard</code></p>
    */
    inline void SetVolumeType(const VolumeType& value) { m_volumeTypeHasBeenSet = true; m_volumeType = value; }

    /*
     <p>The volume type. <code>gp2</code> for General Purpose (SSD) volumes, <code>io1</code> for Provisioned IOPS (SSD) volumes, and <code>standard</code> for Magnetic volumes.</p> <p>Default: <code>standard</code></p>
    */
    inline void SetVolumeType(VolumeType&& value) { m_volumeTypeHasBeenSet = true; m_volumeType = value; }

    /*
     <p>The volume type. <code>gp2</code> for General Purpose (SSD) volumes, <code>io1</code> for Provisioned IOPS (SSD) volumes, and <code>standard</code> for Magnetic volumes.</p> <p>Default: <code>standard</code></p>
    */
    inline EbsBlockDevice& WithVolumeType(const VolumeType& value) { SetVolumeType(value); return *this;}

    /*
     <p>The volume type. <code>gp2</code> for General Purpose (SSD) volumes, <code>io1</code> for Provisioned IOPS (SSD) volumes, and <code>standard</code> for Magnetic volumes.</p> <p>Default: <code>standard</code></p>
    */
    inline EbsBlockDevice& WithVolumeType(VolumeType&& value) { SetVolumeType(value); return *this;}

    /*
     <p>The number of I/O operations per second (IOPS) that the volume supports. For Provisioned IOPS (SSD) volumes, this represents the number of IOPS that are provisioned for the volume. For General Purpose (SSD) volumes, this represents the baseline performance of the volume and the rate at which the volume accumulates I/O credits for bursting. For more information on General Purpose (SSD) baseline performance, I/O credits, and bursting, see <a href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/EBSVolumeTypes.html">Amazon EBS Volume Types</a> in the <i>Amazon Elastic Compute Cloud User Guide</i>.</p> <p>Constraint: Range is 100 to 20000 for Provisioned IOPS (SSD) volumes and 3 to 10000 for General Purpose (SSD) volumes.</p> <p>Condition: This parameter is required for requests to create <code>io1</code> volumes; it is not used in requests to create <code>standard</code> or <code>gp2</code> volumes.</p>
    */
    inline long GetIops() const{ return m_iops; }

    /*
     <p>The number of I/O operations per second (IOPS) that the volume supports. For Provisioned IOPS (SSD) volumes, this represents the number of IOPS that are provisioned for the volume. For General Purpose (SSD) volumes, this represents the baseline performance of the volume and the rate at which the volume accumulates I/O credits for bursting. For more information on General Purpose (SSD) baseline performance, I/O credits, and bursting, see <a href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/EBSVolumeTypes.html">Amazon EBS Volume Types</a> in the <i>Amazon Elastic Compute Cloud User Guide</i>.</p> <p>Constraint: Range is 100 to 20000 for Provisioned IOPS (SSD) volumes and 3 to 10000 for General Purpose (SSD) volumes.</p> <p>Condition: This parameter is required for requests to create <code>io1</code> volumes; it is not used in requests to create <code>standard</code> or <code>gp2</code> volumes.</p>
    */
    inline void SetIops(long value) { m_iopsHasBeenSet = true; m_iops = value; }

    /*
     <p>The number of I/O operations per second (IOPS) that the volume supports. For Provisioned IOPS (SSD) volumes, this represents the number of IOPS that are provisioned for the volume. For General Purpose (SSD) volumes, this represents the baseline performance of the volume and the rate at which the volume accumulates I/O credits for bursting. For more information on General Purpose (SSD) baseline performance, I/O credits, and bursting, see <a href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/EBSVolumeTypes.html">Amazon EBS Volume Types</a> in the <i>Amazon Elastic Compute Cloud User Guide</i>.</p> <p>Constraint: Range is 100 to 20000 for Provisioned IOPS (SSD) volumes and 3 to 10000 for General Purpose (SSD) volumes.</p> <p>Condition: This parameter is required for requests to create <code>io1</code> volumes; it is not used in requests to create <code>standard</code> or <code>gp2</code> volumes.</p>
    */
    inline EbsBlockDevice& WithIops(long value) { SetIops(value); return *this;}

    /*
     <p>Indicates whether the EBS volume is encrypted. Encrypted Amazon EBS volumes may only be attached to instances that support Amazon EBS encryption.</p>
    */
    inline bool GetEncrypted() const{ return m_encrypted; }

    /*
     <p>Indicates whether the EBS volume is encrypted. Encrypted Amazon EBS volumes may only be attached to instances that support Amazon EBS encryption.</p>
    */
    inline void SetEncrypted(bool value) { m_encryptedHasBeenSet = true; m_encrypted = value; }

    /*
     <p>Indicates whether the EBS volume is encrypted. Encrypted Amazon EBS volumes may only be attached to instances that support Amazon EBS encryption.</p>
    */
    inline EbsBlockDevice& WithEncrypted(bool value) { SetEncrypted(value); return *this;}

  private:
    Aws::String m_snapshotId;
    bool m_snapshotIdHasBeenSet;
    long m_volumeSize;
    bool m_volumeSizeHasBeenSet;
    bool m_deleteOnTermination;
    bool m_deleteOnTerminationHasBeenSet;
    VolumeType m_volumeType;
    bool m_volumeTypeHasBeenSet;
    long m_iops;
    bool m_iopsHasBeenSet;
    bool m_encrypted;
    bool m_encryptedHasBeenSet;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
