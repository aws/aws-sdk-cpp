/**
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
  class AWS_AUTOSCALING_API Ebs
  {
  public:
    Ebs();
    Ebs(const Aws::Utils::Xml::XmlNode& xmlNode);
    Ebs& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The snapshot ID of the volume to use.</p> <p>You must specify either a
     * <code>VolumeSize</code> or a <code>SnapshotId</code>.</p>
     */
    inline const Aws::String& GetSnapshotId() const{ return m_snapshotId; }

    /**
     * <p>The snapshot ID of the volume to use.</p> <p>You must specify either a
     * <code>VolumeSize</code> or a <code>SnapshotId</code>.</p>
     */
    inline bool SnapshotIdHasBeenSet() const { return m_snapshotIdHasBeenSet; }

    /**
     * <p>The snapshot ID of the volume to use.</p> <p>You must specify either a
     * <code>VolumeSize</code> or a <code>SnapshotId</code>.</p>
     */
    inline void SetSnapshotId(const Aws::String& value) { m_snapshotIdHasBeenSet = true; m_snapshotId = value; }

    /**
     * <p>The snapshot ID of the volume to use.</p> <p>You must specify either a
     * <code>VolumeSize</code> or a <code>SnapshotId</code>.</p>
     */
    inline void SetSnapshotId(Aws::String&& value) { m_snapshotIdHasBeenSet = true; m_snapshotId = std::move(value); }

    /**
     * <p>The snapshot ID of the volume to use.</p> <p>You must specify either a
     * <code>VolumeSize</code> or a <code>SnapshotId</code>.</p>
     */
    inline void SetSnapshotId(const char* value) { m_snapshotIdHasBeenSet = true; m_snapshotId.assign(value); }

    /**
     * <p>The snapshot ID of the volume to use.</p> <p>You must specify either a
     * <code>VolumeSize</code> or a <code>SnapshotId</code>.</p>
     */
    inline Ebs& WithSnapshotId(const Aws::String& value) { SetSnapshotId(value); return *this;}

    /**
     * <p>The snapshot ID of the volume to use.</p> <p>You must specify either a
     * <code>VolumeSize</code> or a <code>SnapshotId</code>.</p>
     */
    inline Ebs& WithSnapshotId(Aws::String&& value) { SetSnapshotId(std::move(value)); return *this;}

    /**
     * <p>The snapshot ID of the volume to use.</p> <p>You must specify either a
     * <code>VolumeSize</code> or a <code>SnapshotId</code>.</p>
     */
    inline Ebs& WithSnapshotId(const char* value) { SetSnapshotId(value); return *this;}


    /**
     * <p>The volume size, in Gibibytes (GiB).</p> <p>This can be a number from 1-1,024
     * for <code>standard</code>, 4-16,384 for <code>io1</code>, 1-16,384 for
     * <code>gp2</code>, and 500-16,384 for <code>st1</code> and <code>sc1</code>. If
     * you specify a snapshot, the volume size must be equal to or larger than the
     * snapshot size.</p> <p>Default: If you create a volume from a snapshot and you
     * don't specify a volume size, the default is the snapshot size.</p> <p>You must
     * specify either a <code>VolumeSize</code> or a <code>SnapshotId</code>. If you
     * specify both <code>SnapshotId</code> and <code>VolumeSize</code>, the volume
     * size must be equal or greater than the size of the snapshot.</p>
     */
    inline int GetVolumeSize() const{ return m_volumeSize; }

    /**
     * <p>The volume size, in Gibibytes (GiB).</p> <p>This can be a number from 1-1,024
     * for <code>standard</code>, 4-16,384 for <code>io1</code>, 1-16,384 for
     * <code>gp2</code>, and 500-16,384 for <code>st1</code> and <code>sc1</code>. If
     * you specify a snapshot, the volume size must be equal to or larger than the
     * snapshot size.</p> <p>Default: If you create a volume from a snapshot and you
     * don't specify a volume size, the default is the snapshot size.</p> <p>You must
     * specify either a <code>VolumeSize</code> or a <code>SnapshotId</code>. If you
     * specify both <code>SnapshotId</code> and <code>VolumeSize</code>, the volume
     * size must be equal or greater than the size of the snapshot.</p>
     */
    inline bool VolumeSizeHasBeenSet() const { return m_volumeSizeHasBeenSet; }

    /**
     * <p>The volume size, in Gibibytes (GiB).</p> <p>This can be a number from 1-1,024
     * for <code>standard</code>, 4-16,384 for <code>io1</code>, 1-16,384 for
     * <code>gp2</code>, and 500-16,384 for <code>st1</code> and <code>sc1</code>. If
     * you specify a snapshot, the volume size must be equal to or larger than the
     * snapshot size.</p> <p>Default: If you create a volume from a snapshot and you
     * don't specify a volume size, the default is the snapshot size.</p> <p>You must
     * specify either a <code>VolumeSize</code> or a <code>SnapshotId</code>. If you
     * specify both <code>SnapshotId</code> and <code>VolumeSize</code>, the volume
     * size must be equal or greater than the size of the snapshot.</p>
     */
    inline void SetVolumeSize(int value) { m_volumeSizeHasBeenSet = true; m_volumeSize = value; }

    /**
     * <p>The volume size, in Gibibytes (GiB).</p> <p>This can be a number from 1-1,024
     * for <code>standard</code>, 4-16,384 for <code>io1</code>, 1-16,384 for
     * <code>gp2</code>, and 500-16,384 for <code>st1</code> and <code>sc1</code>. If
     * you specify a snapshot, the volume size must be equal to or larger than the
     * snapshot size.</p> <p>Default: If you create a volume from a snapshot and you
     * don't specify a volume size, the default is the snapshot size.</p> <p>You must
     * specify either a <code>VolumeSize</code> or a <code>SnapshotId</code>. If you
     * specify both <code>SnapshotId</code> and <code>VolumeSize</code>, the volume
     * size must be equal or greater than the size of the snapshot.</p>
     */
    inline Ebs& WithVolumeSize(int value) { SetVolumeSize(value); return *this;}


    /**
     * <p>The volume type, which can be <code>standard</code> for Magnetic,
     * <code>io1</code> for Provisioned IOPS SSD, <code>gp2</code> for General Purpose
     * SSD, <code>st1</code> for Throughput Optimized HDD, or <code>sc1</code> for Cold
     * HDD. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/EBSVolumeTypes.html">Amazon
     * EBS Volume Types</a> in the <i>Amazon EC2 User Guide for Linux
     * Instances</i>.</p> <p>Valid Values: <code>standard</code> | <code>io1</code> |
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
     * Instances</i>.</p> <p>Valid Values: <code>standard</code> | <code>io1</code> |
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
     * Instances</i>.</p> <p>Valid Values: <code>standard</code> | <code>io1</code> |
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
     * Instances</i>.</p> <p>Valid Values: <code>standard</code> | <code>io1</code> |
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
     * Instances</i>.</p> <p>Valid Values: <code>standard</code> | <code>io1</code> |
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
     * Instances</i>.</p> <p>Valid Values: <code>standard</code> | <code>io1</code> |
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
     * Instances</i>.</p> <p>Valid Values: <code>standard</code> | <code>io1</code> |
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
     * Instances</i>.</p> <p>Valid Values: <code>standard</code> | <code>io1</code> |
     * <code>gp2</code> | <code>st1</code> | <code>sc1</code> </p>
     */
    inline Ebs& WithVolumeType(const char* value) { SetVolumeType(value); return *this;}


    /**
     * <p>Indicates whether the volume is deleted on instance termination. For Amazon
     * EC2 Auto Scaling, the default value is <code>true</code>.</p>
     */
    inline bool GetDeleteOnTermination() const{ return m_deleteOnTermination; }

    /**
     * <p>Indicates whether the volume is deleted on instance termination. For Amazon
     * EC2 Auto Scaling, the default value is <code>true</code>.</p>
     */
    inline bool DeleteOnTerminationHasBeenSet() const { return m_deleteOnTerminationHasBeenSet; }

    /**
     * <p>Indicates whether the volume is deleted on instance termination. For Amazon
     * EC2 Auto Scaling, the default value is <code>true</code>.</p>
     */
    inline void SetDeleteOnTermination(bool value) { m_deleteOnTerminationHasBeenSet = true; m_deleteOnTermination = value; }

    /**
     * <p>Indicates whether the volume is deleted on instance termination. For Amazon
     * EC2 Auto Scaling, the default value is <code>true</code>.</p>
     */
    inline Ebs& WithDeleteOnTermination(bool value) { SetDeleteOnTermination(value); return *this;}


    /**
     * <p>The number of I/O operations per second (IOPS) to provision for the volume.
     * The maximum ratio of IOPS to volume size (in GiB) is 50:1. For more information,
     * see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/EBSVolumeTypes.html">Amazon
     * EBS Volume Types</a> in the <i>Amazon EC2 User Guide for Linux
     * Instances</i>.</p> <p>Required when the volume type is <code>io1</code>. (Not
     * used with <code>standard</code>, <code>gp2</code>, <code>st1</code>, or
     * <code>sc1</code> volumes.) </p>
     */
    inline int GetIops() const{ return m_iops; }

    /**
     * <p>The number of I/O operations per second (IOPS) to provision for the volume.
     * The maximum ratio of IOPS to volume size (in GiB) is 50:1. For more information,
     * see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/EBSVolumeTypes.html">Amazon
     * EBS Volume Types</a> in the <i>Amazon EC2 User Guide for Linux
     * Instances</i>.</p> <p>Required when the volume type is <code>io1</code>. (Not
     * used with <code>standard</code>, <code>gp2</code>, <code>st1</code>, or
     * <code>sc1</code> volumes.) </p>
     */
    inline bool IopsHasBeenSet() const { return m_iopsHasBeenSet; }

    /**
     * <p>The number of I/O operations per second (IOPS) to provision for the volume.
     * The maximum ratio of IOPS to volume size (in GiB) is 50:1. For more information,
     * see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/EBSVolumeTypes.html">Amazon
     * EBS Volume Types</a> in the <i>Amazon EC2 User Guide for Linux
     * Instances</i>.</p> <p>Required when the volume type is <code>io1</code>. (Not
     * used with <code>standard</code>, <code>gp2</code>, <code>st1</code>, or
     * <code>sc1</code> volumes.) </p>
     */
    inline void SetIops(int value) { m_iopsHasBeenSet = true; m_iops = value; }

    /**
     * <p>The number of I/O operations per second (IOPS) to provision for the volume.
     * The maximum ratio of IOPS to volume size (in GiB) is 50:1. For more information,
     * see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/EBSVolumeTypes.html">Amazon
     * EBS Volume Types</a> in the <i>Amazon EC2 User Guide for Linux
     * Instances</i>.</p> <p>Required when the volume type is <code>io1</code>. (Not
     * used with <code>standard</code>, <code>gp2</code>, <code>st1</code>, or
     * <code>sc1</code> volumes.) </p>
     */
    inline Ebs& WithIops(int value) { SetIops(value); return *this;}


    /**
     * <p>Specifies whether the volume should be encrypted. Encrypted EBS volumes can
     * only be attached to instances that support Amazon EBS encryption. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/EBSEncryption.html#EBSEncryption_supported_instances">Supported
     * Instance Types</a>. If your AMI uses encrypted volumes, you can also only launch
     * it on supported instance types.</p>  <p>If you are creating a volume from
     * a snapshot, you cannot specify an encryption value. Volumes that are created
     * from encrypted snapshots are automatically encrypted, and volumes that are
     * created from unencrypted snapshots are automatically unencrypted. By default,
     * encrypted snapshots use the AWS managed CMK that is used for EBS encryption, but
     * you can specify a custom CMK when you create the snapshot. The ability to
     * encrypt a snapshot during copying also allows you to apply a new CMK to an
     * already-encrypted snapshot. Volumes restored from the resulting copy are only
     * accessible using the new CMK.</p> <p>Enabling <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/EBSEncryption.html#encryption-by-default">encryption
     * by default</a> results in all EBS volumes being encrypted with the AWS managed
     * CMK or a customer managed CMK, whether or not the snapshot was encrypted.</p>
     *  <p>For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/AMIEncryption.html">Using
     * Encryption with EBS-Backed AMIs</a> in the <i>Amazon EC2 User Guide for Linux
     * Instances</i> and <a
     * href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/key-policy-requirements-EBS-encryption.html">Required
     * CMK key policy for use with encrypted volumes</a> in the <i>Amazon EC2 Auto
     * Scaling User Guide</i>.</p>
     */
    inline bool GetEncrypted() const{ return m_encrypted; }

    /**
     * <p>Specifies whether the volume should be encrypted. Encrypted EBS volumes can
     * only be attached to instances that support Amazon EBS encryption. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/EBSEncryption.html#EBSEncryption_supported_instances">Supported
     * Instance Types</a>. If your AMI uses encrypted volumes, you can also only launch
     * it on supported instance types.</p>  <p>If you are creating a volume from
     * a snapshot, you cannot specify an encryption value. Volumes that are created
     * from encrypted snapshots are automatically encrypted, and volumes that are
     * created from unencrypted snapshots are automatically unencrypted. By default,
     * encrypted snapshots use the AWS managed CMK that is used for EBS encryption, but
     * you can specify a custom CMK when you create the snapshot. The ability to
     * encrypt a snapshot during copying also allows you to apply a new CMK to an
     * already-encrypted snapshot. Volumes restored from the resulting copy are only
     * accessible using the new CMK.</p> <p>Enabling <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/EBSEncryption.html#encryption-by-default">encryption
     * by default</a> results in all EBS volumes being encrypted with the AWS managed
     * CMK or a customer managed CMK, whether or not the snapshot was encrypted.</p>
     *  <p>For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/AMIEncryption.html">Using
     * Encryption with EBS-Backed AMIs</a> in the <i>Amazon EC2 User Guide for Linux
     * Instances</i> and <a
     * href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/key-policy-requirements-EBS-encryption.html">Required
     * CMK key policy for use with encrypted volumes</a> in the <i>Amazon EC2 Auto
     * Scaling User Guide</i>.</p>
     */
    inline bool EncryptedHasBeenSet() const { return m_encryptedHasBeenSet; }

    /**
     * <p>Specifies whether the volume should be encrypted. Encrypted EBS volumes can
     * only be attached to instances that support Amazon EBS encryption. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/EBSEncryption.html#EBSEncryption_supported_instances">Supported
     * Instance Types</a>. If your AMI uses encrypted volumes, you can also only launch
     * it on supported instance types.</p>  <p>If you are creating a volume from
     * a snapshot, you cannot specify an encryption value. Volumes that are created
     * from encrypted snapshots are automatically encrypted, and volumes that are
     * created from unencrypted snapshots are automatically unencrypted. By default,
     * encrypted snapshots use the AWS managed CMK that is used for EBS encryption, but
     * you can specify a custom CMK when you create the snapshot. The ability to
     * encrypt a snapshot during copying also allows you to apply a new CMK to an
     * already-encrypted snapshot. Volumes restored from the resulting copy are only
     * accessible using the new CMK.</p> <p>Enabling <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/EBSEncryption.html#encryption-by-default">encryption
     * by default</a> results in all EBS volumes being encrypted with the AWS managed
     * CMK or a customer managed CMK, whether or not the snapshot was encrypted.</p>
     *  <p>For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/AMIEncryption.html">Using
     * Encryption with EBS-Backed AMIs</a> in the <i>Amazon EC2 User Guide for Linux
     * Instances</i> and <a
     * href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/key-policy-requirements-EBS-encryption.html">Required
     * CMK key policy for use with encrypted volumes</a> in the <i>Amazon EC2 Auto
     * Scaling User Guide</i>.</p>
     */
    inline void SetEncrypted(bool value) { m_encryptedHasBeenSet = true; m_encrypted = value; }

    /**
     * <p>Specifies whether the volume should be encrypted. Encrypted EBS volumes can
     * only be attached to instances that support Amazon EBS encryption. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/EBSEncryption.html#EBSEncryption_supported_instances">Supported
     * Instance Types</a>. If your AMI uses encrypted volumes, you can also only launch
     * it on supported instance types.</p>  <p>If you are creating a volume from
     * a snapshot, you cannot specify an encryption value. Volumes that are created
     * from encrypted snapshots are automatically encrypted, and volumes that are
     * created from unencrypted snapshots are automatically unencrypted. By default,
     * encrypted snapshots use the AWS managed CMK that is used for EBS encryption, but
     * you can specify a custom CMK when you create the snapshot. The ability to
     * encrypt a snapshot during copying also allows you to apply a new CMK to an
     * already-encrypted snapshot. Volumes restored from the resulting copy are only
     * accessible using the new CMK.</p> <p>Enabling <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/EBSEncryption.html#encryption-by-default">encryption
     * by default</a> results in all EBS volumes being encrypted with the AWS managed
     * CMK or a customer managed CMK, whether or not the snapshot was encrypted.</p>
     *  <p>For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/AMIEncryption.html">Using
     * Encryption with EBS-Backed AMIs</a> in the <i>Amazon EC2 User Guide for Linux
     * Instances</i> and <a
     * href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/key-policy-requirements-EBS-encryption.html">Required
     * CMK key policy for use with encrypted volumes</a> in the <i>Amazon EC2 Auto
     * Scaling User Guide</i>.</p>
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
