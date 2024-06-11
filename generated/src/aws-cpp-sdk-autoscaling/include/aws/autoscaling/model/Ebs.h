﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
   * <p>Describes information used to set up an Amazon EBS volume specified in a
   * block device mapping.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/autoscaling-2011-01-01/Ebs">AWS API
   * Reference</a></p>
   */
  class Ebs
  {
  public:
    AWS_AUTOSCALING_API Ebs();
    AWS_AUTOSCALING_API Ebs(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_AUTOSCALING_API Ebs& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_AUTOSCALING_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_AUTOSCALING_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The snapshot ID of the volume to use.</p> <p>You must specify either a
     * <code>VolumeSize</code> or a <code>SnapshotId</code>.</p>
     */
    inline const Aws::String& GetSnapshotId() const{ return m_snapshotId; }
    inline bool SnapshotIdHasBeenSet() const { return m_snapshotIdHasBeenSet; }
    inline void SetSnapshotId(const Aws::String& value) { m_snapshotIdHasBeenSet = true; m_snapshotId = value; }
    inline void SetSnapshotId(Aws::String&& value) { m_snapshotIdHasBeenSet = true; m_snapshotId = std::move(value); }
    inline void SetSnapshotId(const char* value) { m_snapshotIdHasBeenSet = true; m_snapshotId.assign(value); }
    inline Ebs& WithSnapshotId(const Aws::String& value) { SetSnapshotId(value); return *this;}
    inline Ebs& WithSnapshotId(Aws::String&& value) { SetSnapshotId(std::move(value)); return *this;}
    inline Ebs& WithSnapshotId(const char* value) { SetSnapshotId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The volume size, in GiBs. The following are the supported volumes sizes for
     * each volume type: </p> <ul> <li> <p> <code>gp2</code> and <code>gp3</code>:
     * 1-16,384</p> </li> <li> <p> <code>io1</code>: 4-16,384</p> </li> <li> <p>
     * <code>st1</code> and <code>sc1</code>: 125-16,384</p> </li> <li> <p>
     * <code>standard</code>: 1-1,024</p> </li> </ul> <p>You must specify either a
     * <code>SnapshotId</code> or a <code>VolumeSize</code>. If you specify both
     * <code>SnapshotId</code> and <code>VolumeSize</code>, the volume size must be
     * equal or greater than the size of the snapshot.</p>
     */
    inline int GetVolumeSize() const{ return m_volumeSize; }
    inline bool VolumeSizeHasBeenSet() const { return m_volumeSizeHasBeenSet; }
    inline void SetVolumeSize(int value) { m_volumeSizeHasBeenSet = true; m_volumeSize = value; }
    inline Ebs& WithVolumeSize(int value) { SetVolumeSize(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The volume type. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/EBSVolumeTypes.html">Amazon
     * EBS volume types</a> in the <i>Amazon EC2 User Guide for Linux
     * Instances</i>.</p> <p>Valid values: <code>standard</code> | <code>io1</code> |
     * <code>gp2</code> | <code>st1</code> | <code>sc1</code> | <code>gp3</code> </p>
     */
    inline const Aws::String& GetVolumeType() const{ return m_volumeType; }
    inline bool VolumeTypeHasBeenSet() const { return m_volumeTypeHasBeenSet; }
    inline void SetVolumeType(const Aws::String& value) { m_volumeTypeHasBeenSet = true; m_volumeType = value; }
    inline void SetVolumeType(Aws::String&& value) { m_volumeTypeHasBeenSet = true; m_volumeType = std::move(value); }
    inline void SetVolumeType(const char* value) { m_volumeTypeHasBeenSet = true; m_volumeType.assign(value); }
    inline Ebs& WithVolumeType(const Aws::String& value) { SetVolumeType(value); return *this;}
    inline Ebs& WithVolumeType(Aws::String&& value) { SetVolumeType(std::move(value)); return *this;}
    inline Ebs& WithVolumeType(const char* value) { SetVolumeType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether the volume is deleted on instance termination. For Amazon
     * EC2 Auto Scaling, the default value is <code>true</code>.</p>
     */
    inline bool GetDeleteOnTermination() const{ return m_deleteOnTermination; }
    inline bool DeleteOnTerminationHasBeenSet() const { return m_deleteOnTerminationHasBeenSet; }
    inline void SetDeleteOnTermination(bool value) { m_deleteOnTerminationHasBeenSet = true; m_deleteOnTermination = value; }
    inline Ebs& WithDeleteOnTermination(bool value) { SetDeleteOnTermination(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of input/output (I/O) operations per second (IOPS) to provision
     * for the volume. For <code>gp3</code> and <code>io1</code> volumes, this
     * represents the number of IOPS that are provisioned for the volume. For
     * <code>gp2</code> volumes, this represents the baseline performance of the volume
     * and the rate at which the volume accumulates I/O credits for bursting. </p>
     * <p>The following are the supported values for each volume type: </p> <ul> <li>
     * <p> <code>gp3</code>: 3,000-16,000 IOPS</p> </li> <li> <p> <code>io1</code>:
     * 100-64,000 IOPS</p> </li> </ul> <p>For <code>io1</code> volumes, we guarantee
     * 64,000 IOPS only for <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/instance-types.html#ec2-nitro-instances">Instances
     * built on the Nitro System</a>. Other instance families guarantee performance up
     * to 32,000 IOPS. </p> <p> <code>Iops</code> is supported when the volume type is
     * <code>gp3</code> or <code>io1</code> and required only when the volume type is
     * <code>io1</code>. (Not used with <code>standard</code>, <code>gp2</code>,
     * <code>st1</code>, or <code>sc1</code> volumes.) </p>
     */
    inline int GetIops() const{ return m_iops; }
    inline bool IopsHasBeenSet() const { return m_iopsHasBeenSet; }
    inline void SetIops(int value) { m_iopsHasBeenSet = true; m_iops = value; }
    inline Ebs& WithIops(int value) { SetIops(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether the volume should be encrypted. Encrypted EBS volumes can
     * only be attached to instances that support Amazon EBS encryption. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/EBSEncryption.html#EBSEncryption_supported_instances">Supported
     * instance types</a>. If your AMI uses encrypted volumes, you can also only launch
     * it on supported instance types.</p>  <p>If you are creating a volume from
     * a snapshot, you cannot create an unencrypted volume from an encrypted snapshot.
     * Also, you cannot specify a KMS key ID when using a launch configuration.</p>
     * <p>If you enable encryption by default, the EBS volumes that you create are
     * always encrypted, either using the Amazon Web Services managed KMS key or a
     * customer-managed KMS key, regardless of whether the snapshot was encrypted. </p>
     * <p>For more information, see <a
     * href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/ec2-auto-scaling-data-protection.html#encryption">Use
     * Amazon Web Services KMS keys to encrypt Amazon EBS volumes</a> in the <i>Amazon
     * EC2 Auto Scaling User Guide</i>.</p> 
     */
    inline bool GetEncrypted() const{ return m_encrypted; }
    inline bool EncryptedHasBeenSet() const { return m_encryptedHasBeenSet; }
    inline void SetEncrypted(bool value) { m_encryptedHasBeenSet = true; m_encrypted = value; }
    inline Ebs& WithEncrypted(bool value) { SetEncrypted(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The throughput (MiBps) to provision for a <code>gp3</code> volume.</p>
     */
    inline int GetThroughput() const{ return m_throughput; }
    inline bool ThroughputHasBeenSet() const { return m_throughputHasBeenSet; }
    inline void SetThroughput(int value) { m_throughputHasBeenSet = true; m_throughput = value; }
    inline Ebs& WithThroughput(int value) { SetThroughput(value); return *this;}
    ///@}
  private:

    Aws::String m_snapshotId;
    bool m_snapshotIdHasBeenSet = false;

    int m_volumeSize;
    bool m_volumeSizeHasBeenSet = false;

    Aws::String m_volumeType;
    bool m_volumeTypeHasBeenSet = false;

    bool m_deleteOnTermination;
    bool m_deleteOnTerminationHasBeenSet = false;

    int m_iops;
    bool m_iopsHasBeenSet = false;

    bool m_encrypted;
    bool m_encryptedHasBeenSet = false;

    int m_throughput;
    bool m_throughputHasBeenSet = false;
  };

} // namespace Model
} // namespace AutoScaling
} // namespace Aws
