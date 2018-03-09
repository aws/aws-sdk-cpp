﻿/*
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
  class AWS_EC2_API EbsBlockDevice
  {
  public:
    EbsBlockDevice();
    EbsBlockDevice(const Aws::Utils::Xml::XmlNode& xmlNode);
    EbsBlockDevice& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>Indicates whether the EBS volume is encrypted. Encrypted volumes can only be
     * attached to instances that support Amazon EBS encryption. If you are creating a
     * volume from a snapshot, you can't specify an encryption value. This is because
     * only blank volumes can be encrypted on creation.</p>
     */
    inline bool GetEncrypted() const{ return m_encrypted; }

    /**
     * <p>Indicates whether the EBS volume is encrypted. Encrypted volumes can only be
     * attached to instances that support Amazon EBS encryption. If you are creating a
     * volume from a snapshot, you can't specify an encryption value. This is because
     * only blank volumes can be encrypted on creation.</p>
     */
    inline void SetEncrypted(bool value) { m_encryptedHasBeenSet = true; m_encrypted = value; }

    /**
     * <p>Indicates whether the EBS volume is encrypted. Encrypted volumes can only be
     * attached to instances that support Amazon EBS encryption. If you are creating a
     * volume from a snapshot, you can't specify an encryption value. This is because
     * only blank volumes can be encrypted on creation.</p>
     */
    inline EbsBlockDevice& WithEncrypted(bool value) { SetEncrypted(value); return *this;}


    /**
     * <p>Indicates whether the EBS volume is deleted on instance termination.</p>
     */
    inline bool GetDeleteOnTermination() const{ return m_deleteOnTermination; }

    /**
     * <p>Indicates whether the EBS volume is deleted on instance termination.</p>
     */
    inline void SetDeleteOnTermination(bool value) { m_deleteOnTerminationHasBeenSet = true; m_deleteOnTermination = value; }

    /**
     * <p>Indicates whether the EBS volume is deleted on instance termination.</p>
     */
    inline EbsBlockDevice& WithDeleteOnTermination(bool value) { SetDeleteOnTermination(value); return *this;}


    /**
     * <p>The number of I/O operations per second (IOPS) that the volume supports. For
     * <code>io1</code>, this represents the number of IOPS that are provisioned for
     * the volume. For <code>gp2</code>, this represents the baseline performance of
     * the volume and the rate at which the volume accumulates I/O credits for
     * bursting. For more information about General Purpose SSD baseline performance,
     * I/O credits, and bursting, see <a
     * href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/EBSVolumeTypes.html">Amazon
     * EBS Volume Types</a> in the <i>Amazon Elastic Compute Cloud User Guide</i>.</p>
     * <p>Constraint: Range is 100-20000 IOPS for <code>io1</code> volumes and
     * 100-10000 IOPS for <code>gp2</code> volumes.</p> <p>Condition: This parameter is
     * required for requests to create <code>io1</code> volumes; it is not used in
     * requests to create <code>gp2</code>, <code>st1</code>, <code>sc1</code>, or
     * <code>standard</code> volumes.</p>
     */
    inline int GetIops() const{ return m_iops; }

    /**
     * <p>The number of I/O operations per second (IOPS) that the volume supports. For
     * <code>io1</code>, this represents the number of IOPS that are provisioned for
     * the volume. For <code>gp2</code>, this represents the baseline performance of
     * the volume and the rate at which the volume accumulates I/O credits for
     * bursting. For more information about General Purpose SSD baseline performance,
     * I/O credits, and bursting, see <a
     * href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/EBSVolumeTypes.html">Amazon
     * EBS Volume Types</a> in the <i>Amazon Elastic Compute Cloud User Guide</i>.</p>
     * <p>Constraint: Range is 100-20000 IOPS for <code>io1</code> volumes and
     * 100-10000 IOPS for <code>gp2</code> volumes.</p> <p>Condition: This parameter is
     * required for requests to create <code>io1</code> volumes; it is not used in
     * requests to create <code>gp2</code>, <code>st1</code>, <code>sc1</code>, or
     * <code>standard</code> volumes.</p>
     */
    inline void SetIops(int value) { m_iopsHasBeenSet = true; m_iops = value; }

    /**
     * <p>The number of I/O operations per second (IOPS) that the volume supports. For
     * <code>io1</code>, this represents the number of IOPS that are provisioned for
     * the volume. For <code>gp2</code>, this represents the baseline performance of
     * the volume and the rate at which the volume accumulates I/O credits for
     * bursting. For more information about General Purpose SSD baseline performance,
     * I/O credits, and bursting, see <a
     * href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/EBSVolumeTypes.html">Amazon
     * EBS Volume Types</a> in the <i>Amazon Elastic Compute Cloud User Guide</i>.</p>
     * <p>Constraint: Range is 100-20000 IOPS for <code>io1</code> volumes and
     * 100-10000 IOPS for <code>gp2</code> volumes.</p> <p>Condition: This parameter is
     * required for requests to create <code>io1</code> volumes; it is not used in
     * requests to create <code>gp2</code>, <code>st1</code>, <code>sc1</code>, or
     * <code>standard</code> volumes.</p>
     */
    inline EbsBlockDevice& WithIops(int value) { SetIops(value); return *this;}


    /**
     * <p>Identifier (key ID, key alias, ID ARN, or alias ARN) for a user-managed CMK
     * under which the EBS volume is encrypted.</p> <p>Note: This parameter is only
     * supported on <code>BlockDeviceMapping</code> objects called by <a
     * href="http://docs.aws.amazon.com/AWSEC2/latest/APIReference/API_RunInstances.html">RunInstances</a>,
     * <a
     * href="http://docs.aws.amazon.com/AWSEC2/latest/APIReference/API_RequestSpotFleet.html">RequestSpotFleet</a>,
     * and <a
     * href="http://docs.aws.amazon.com/AWSEC2/latest/APIReference/API_RequestSpotInstances.html">RequestSpotInstances</a>.</p>
     */
    inline const Aws::String& GetKmsKeyId() const{ return m_kmsKeyId; }

    /**
     * <p>Identifier (key ID, key alias, ID ARN, or alias ARN) for a user-managed CMK
     * under which the EBS volume is encrypted.</p> <p>Note: This parameter is only
     * supported on <code>BlockDeviceMapping</code> objects called by <a
     * href="http://docs.aws.amazon.com/AWSEC2/latest/APIReference/API_RunInstances.html">RunInstances</a>,
     * <a
     * href="http://docs.aws.amazon.com/AWSEC2/latest/APIReference/API_RequestSpotFleet.html">RequestSpotFleet</a>,
     * and <a
     * href="http://docs.aws.amazon.com/AWSEC2/latest/APIReference/API_RequestSpotInstances.html">RequestSpotInstances</a>.</p>
     */
    inline void SetKmsKeyId(const Aws::String& value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId = value; }

    /**
     * <p>Identifier (key ID, key alias, ID ARN, or alias ARN) for a user-managed CMK
     * under which the EBS volume is encrypted.</p> <p>Note: This parameter is only
     * supported on <code>BlockDeviceMapping</code> objects called by <a
     * href="http://docs.aws.amazon.com/AWSEC2/latest/APIReference/API_RunInstances.html">RunInstances</a>,
     * <a
     * href="http://docs.aws.amazon.com/AWSEC2/latest/APIReference/API_RequestSpotFleet.html">RequestSpotFleet</a>,
     * and <a
     * href="http://docs.aws.amazon.com/AWSEC2/latest/APIReference/API_RequestSpotInstances.html">RequestSpotInstances</a>.</p>
     */
    inline void SetKmsKeyId(Aws::String&& value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId = std::move(value); }

    /**
     * <p>Identifier (key ID, key alias, ID ARN, or alias ARN) for a user-managed CMK
     * under which the EBS volume is encrypted.</p> <p>Note: This parameter is only
     * supported on <code>BlockDeviceMapping</code> objects called by <a
     * href="http://docs.aws.amazon.com/AWSEC2/latest/APIReference/API_RunInstances.html">RunInstances</a>,
     * <a
     * href="http://docs.aws.amazon.com/AWSEC2/latest/APIReference/API_RequestSpotFleet.html">RequestSpotFleet</a>,
     * and <a
     * href="http://docs.aws.amazon.com/AWSEC2/latest/APIReference/API_RequestSpotInstances.html">RequestSpotInstances</a>.</p>
     */
    inline void SetKmsKeyId(const char* value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId.assign(value); }

    /**
     * <p>Identifier (key ID, key alias, ID ARN, or alias ARN) for a user-managed CMK
     * under which the EBS volume is encrypted.</p> <p>Note: This parameter is only
     * supported on <code>BlockDeviceMapping</code> objects called by <a
     * href="http://docs.aws.amazon.com/AWSEC2/latest/APIReference/API_RunInstances.html">RunInstances</a>,
     * <a
     * href="http://docs.aws.amazon.com/AWSEC2/latest/APIReference/API_RequestSpotFleet.html">RequestSpotFleet</a>,
     * and <a
     * href="http://docs.aws.amazon.com/AWSEC2/latest/APIReference/API_RequestSpotInstances.html">RequestSpotInstances</a>.</p>
     */
    inline EbsBlockDevice& WithKmsKeyId(const Aws::String& value) { SetKmsKeyId(value); return *this;}

    /**
     * <p>Identifier (key ID, key alias, ID ARN, or alias ARN) for a user-managed CMK
     * under which the EBS volume is encrypted.</p> <p>Note: This parameter is only
     * supported on <code>BlockDeviceMapping</code> objects called by <a
     * href="http://docs.aws.amazon.com/AWSEC2/latest/APIReference/API_RunInstances.html">RunInstances</a>,
     * <a
     * href="http://docs.aws.amazon.com/AWSEC2/latest/APIReference/API_RequestSpotFleet.html">RequestSpotFleet</a>,
     * and <a
     * href="http://docs.aws.amazon.com/AWSEC2/latest/APIReference/API_RequestSpotInstances.html">RequestSpotInstances</a>.</p>
     */
    inline EbsBlockDevice& WithKmsKeyId(Aws::String&& value) { SetKmsKeyId(std::move(value)); return *this;}

    /**
     * <p>Identifier (key ID, key alias, ID ARN, or alias ARN) for a user-managed CMK
     * under which the EBS volume is encrypted.</p> <p>Note: This parameter is only
     * supported on <code>BlockDeviceMapping</code> objects called by <a
     * href="http://docs.aws.amazon.com/AWSEC2/latest/APIReference/API_RunInstances.html">RunInstances</a>,
     * <a
     * href="http://docs.aws.amazon.com/AWSEC2/latest/APIReference/API_RequestSpotFleet.html">RequestSpotFleet</a>,
     * and <a
     * href="http://docs.aws.amazon.com/AWSEC2/latest/APIReference/API_RequestSpotInstances.html">RequestSpotInstances</a>.</p>
     */
    inline EbsBlockDevice& WithKmsKeyId(const char* value) { SetKmsKeyId(value); return *this;}


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
    inline EbsBlockDevice& WithSnapshotId(const Aws::String& value) { SetSnapshotId(value); return *this;}

    /**
     * <p>The ID of the snapshot.</p>
     */
    inline EbsBlockDevice& WithSnapshotId(Aws::String&& value) { SetSnapshotId(std::move(value)); return *this;}

    /**
     * <p>The ID of the snapshot.</p>
     */
    inline EbsBlockDevice& WithSnapshotId(const char* value) { SetSnapshotId(value); return *this;}


    /**
     * <p>The size of the volume, in GiB.</p> <p>Constraints: 1-16384 for General
     * Purpose SSD (<code>gp2</code>), 4-16384 for Provisioned IOPS SSD
     * (<code>io1</code>), 500-16384 for Throughput Optimized HDD (<code>st1</code>),
     * 500-16384 for Cold HDD (<code>sc1</code>), and 1-1024 for Magnetic
     * (<code>standard</code>) volumes. If you specify a snapshot, the volume size must
     * be equal to or larger than the snapshot size.</p> <p>Default: If you're creating
     * the volume from a snapshot and don't specify a volume size, the default is the
     * snapshot size.</p>
     */
    inline int GetVolumeSize() const{ return m_volumeSize; }

    /**
     * <p>The size of the volume, in GiB.</p> <p>Constraints: 1-16384 for General
     * Purpose SSD (<code>gp2</code>), 4-16384 for Provisioned IOPS SSD
     * (<code>io1</code>), 500-16384 for Throughput Optimized HDD (<code>st1</code>),
     * 500-16384 for Cold HDD (<code>sc1</code>), and 1-1024 for Magnetic
     * (<code>standard</code>) volumes. If you specify a snapshot, the volume size must
     * be equal to or larger than the snapshot size.</p> <p>Default: If you're creating
     * the volume from a snapshot and don't specify a volume size, the default is the
     * snapshot size.</p>
     */
    inline void SetVolumeSize(int value) { m_volumeSizeHasBeenSet = true; m_volumeSize = value; }

    /**
     * <p>The size of the volume, in GiB.</p> <p>Constraints: 1-16384 for General
     * Purpose SSD (<code>gp2</code>), 4-16384 for Provisioned IOPS SSD
     * (<code>io1</code>), 500-16384 for Throughput Optimized HDD (<code>st1</code>),
     * 500-16384 for Cold HDD (<code>sc1</code>), and 1-1024 for Magnetic
     * (<code>standard</code>) volumes. If you specify a snapshot, the volume size must
     * be equal to or larger than the snapshot size.</p> <p>Default: If you're creating
     * the volume from a snapshot and don't specify a volume size, the default is the
     * snapshot size.</p>
     */
    inline EbsBlockDevice& WithVolumeSize(int value) { SetVolumeSize(value); return *this;}


    /**
     * <p>The volume type: <code>gp2</code>, <code>io1</code>, <code>st1</code>,
     * <code>sc1</code>, or <code>standard</code>.</p> <p>Default:
     * <code>standard</code> </p>
     */
    inline const VolumeType& GetVolumeType() const{ return m_volumeType; }

    /**
     * <p>The volume type: <code>gp2</code>, <code>io1</code>, <code>st1</code>,
     * <code>sc1</code>, or <code>standard</code>.</p> <p>Default:
     * <code>standard</code> </p>
     */
    inline void SetVolumeType(const VolumeType& value) { m_volumeTypeHasBeenSet = true; m_volumeType = value; }

    /**
     * <p>The volume type: <code>gp2</code>, <code>io1</code>, <code>st1</code>,
     * <code>sc1</code>, or <code>standard</code>.</p> <p>Default:
     * <code>standard</code> </p>
     */
    inline void SetVolumeType(VolumeType&& value) { m_volumeTypeHasBeenSet = true; m_volumeType = std::move(value); }

    /**
     * <p>The volume type: <code>gp2</code>, <code>io1</code>, <code>st1</code>,
     * <code>sc1</code>, or <code>standard</code>.</p> <p>Default:
     * <code>standard</code> </p>
     */
    inline EbsBlockDevice& WithVolumeType(const VolumeType& value) { SetVolumeType(value); return *this;}

    /**
     * <p>The volume type: <code>gp2</code>, <code>io1</code>, <code>st1</code>,
     * <code>sc1</code>, or <code>standard</code>.</p> <p>Default:
     * <code>standard</code> </p>
     */
    inline EbsBlockDevice& WithVolumeType(VolumeType&& value) { SetVolumeType(std::move(value)); return *this;}

  private:

    bool m_encrypted;
    bool m_encryptedHasBeenSet;

    bool m_deleteOnTermination;
    bool m_deleteOnTerminationHasBeenSet;

    int m_iops;
    bool m_iopsHasBeenSet;

    Aws::String m_kmsKeyId;
    bool m_kmsKeyIdHasBeenSet;

    Aws::String m_snapshotId;
    bool m_snapshotIdHasBeenSet;

    int m_volumeSize;
    bool m_volumeSizeHasBeenSet;

    VolumeType m_volumeType;
    bool m_volumeTypeHasBeenSet;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
