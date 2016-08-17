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
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/ec2/EC2Request.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/model/VolumeType.h>

namespace Aws
{
namespace EC2
{
namespace Model
{

  /**
   * <p>Contains the parameters for CreateVolume.</p>
   */
  class AWS_EC2_API CreateVolumeRequest : public EC2Request
  {
  public:
    CreateVolumeRequest();
    Aws::String SerializePayload() const override;

    /**
     * <p>Checks whether you have the required permissions for the action, without
     * actually making the request, and provides an error response. If you have the
     * required permissions, the error response is <code>DryRunOperation</code>.
     * Otherwise, it is <code>UnauthorizedOperation</code>.</p>
     */
    inline bool GetDryRun() const{ return m_dryRun; }

    /**
     * <p>Checks whether you have the required permissions for the action, without
     * actually making the request, and provides an error response. If you have the
     * required permissions, the error response is <code>DryRunOperation</code>.
     * Otherwise, it is <code>UnauthorizedOperation</code>.</p>
     */
    inline void SetDryRun(bool value) { m_dryRunHasBeenSet = true; m_dryRun = value; }

    /**
     * <p>Checks whether you have the required permissions for the action, without
     * actually making the request, and provides an error response. If you have the
     * required permissions, the error response is <code>DryRunOperation</code>.
     * Otherwise, it is <code>UnauthorizedOperation</code>.</p>
     */
    inline CreateVolumeRequest& WithDryRun(bool value) { SetDryRun(value); return *this;}

    /**
     * <p>The size of the volume, in GiBs.</p> <p>Constraints: 1-16384 for
     * <code>gp2</code>, 4-16384 for <code>io1</code>, 500-16384 for <code>st1</code>,
     * 500-16384 for <code>sc1</code>, and 1-1024 for <code>standard</code>. If you
     * specify a snapshot, the volume size must be equal to or larger than the snapshot
     * size.</p> <p>Default: If you're creating the volume from a snapshot and don't
     * specify a volume size, the default is the snapshot size.</p>
     */
    inline int GetSize() const{ return m_size; }

    /**
     * <p>The size of the volume, in GiBs.</p> <p>Constraints: 1-16384 for
     * <code>gp2</code>, 4-16384 for <code>io1</code>, 500-16384 for <code>st1</code>,
     * 500-16384 for <code>sc1</code>, and 1-1024 for <code>standard</code>. If you
     * specify a snapshot, the volume size must be equal to or larger than the snapshot
     * size.</p> <p>Default: If you're creating the volume from a snapshot and don't
     * specify a volume size, the default is the snapshot size.</p>
     */
    inline void SetSize(int value) { m_sizeHasBeenSet = true; m_size = value; }

    /**
     * <p>The size of the volume, in GiBs.</p> <p>Constraints: 1-16384 for
     * <code>gp2</code>, 4-16384 for <code>io1</code>, 500-16384 for <code>st1</code>,
     * 500-16384 for <code>sc1</code>, and 1-1024 for <code>standard</code>. If you
     * specify a snapshot, the volume size must be equal to or larger than the snapshot
     * size.</p> <p>Default: If you're creating the volume from a snapshot and don't
     * specify a volume size, the default is the snapshot size.</p>
     */
    inline CreateVolumeRequest& WithSize(int value) { SetSize(value); return *this;}

    /**
     * <p>The snapshot from which to create the volume.</p>
     */
    inline const Aws::String& GetSnapshotId() const{ return m_snapshotId; }

    /**
     * <p>The snapshot from which to create the volume.</p>
     */
    inline void SetSnapshotId(const Aws::String& value) { m_snapshotIdHasBeenSet = true; m_snapshotId = value; }

    /**
     * <p>The snapshot from which to create the volume.</p>
     */
    inline void SetSnapshotId(Aws::String&& value) { m_snapshotIdHasBeenSet = true; m_snapshotId = value; }

    /**
     * <p>The snapshot from which to create the volume.</p>
     */
    inline void SetSnapshotId(const char* value) { m_snapshotIdHasBeenSet = true; m_snapshotId.assign(value); }

    /**
     * <p>The snapshot from which to create the volume.</p>
     */
    inline CreateVolumeRequest& WithSnapshotId(const Aws::String& value) { SetSnapshotId(value); return *this;}

    /**
     * <p>The snapshot from which to create the volume.</p>
     */
    inline CreateVolumeRequest& WithSnapshotId(Aws::String&& value) { SetSnapshotId(value); return *this;}

    /**
     * <p>The snapshot from which to create the volume.</p>
     */
    inline CreateVolumeRequest& WithSnapshotId(const char* value) { SetSnapshotId(value); return *this;}

    /**
     * <p>The Availability Zone in which to create the volume. Use
     * <a>DescribeAvailabilityZones</a> to list the Availability Zones that are
     * currently available to you.</p>
     */
    inline const Aws::String& GetAvailabilityZone() const{ return m_availabilityZone; }

    /**
     * <p>The Availability Zone in which to create the volume. Use
     * <a>DescribeAvailabilityZones</a> to list the Availability Zones that are
     * currently available to you.</p>
     */
    inline void SetAvailabilityZone(const Aws::String& value) { m_availabilityZoneHasBeenSet = true; m_availabilityZone = value; }

    /**
     * <p>The Availability Zone in which to create the volume. Use
     * <a>DescribeAvailabilityZones</a> to list the Availability Zones that are
     * currently available to you.</p>
     */
    inline void SetAvailabilityZone(Aws::String&& value) { m_availabilityZoneHasBeenSet = true; m_availabilityZone = value; }

    /**
     * <p>The Availability Zone in which to create the volume. Use
     * <a>DescribeAvailabilityZones</a> to list the Availability Zones that are
     * currently available to you.</p>
     */
    inline void SetAvailabilityZone(const char* value) { m_availabilityZoneHasBeenSet = true; m_availabilityZone.assign(value); }

    /**
     * <p>The Availability Zone in which to create the volume. Use
     * <a>DescribeAvailabilityZones</a> to list the Availability Zones that are
     * currently available to you.</p>
     */
    inline CreateVolumeRequest& WithAvailabilityZone(const Aws::String& value) { SetAvailabilityZone(value); return *this;}

    /**
     * <p>The Availability Zone in which to create the volume. Use
     * <a>DescribeAvailabilityZones</a> to list the Availability Zones that are
     * currently available to you.</p>
     */
    inline CreateVolumeRequest& WithAvailabilityZone(Aws::String&& value) { SetAvailabilityZone(value); return *this;}

    /**
     * <p>The Availability Zone in which to create the volume. Use
     * <a>DescribeAvailabilityZones</a> to list the Availability Zones that are
     * currently available to you.</p>
     */
    inline CreateVolumeRequest& WithAvailabilityZone(const char* value) { SetAvailabilityZone(value); return *this;}

    /**
     * <p>The volume type. This can be <code>gp2</code> for General Purpose SSD,
     * <code>io1</code> for Provisioned IOPS SSD, <code>st1</code> for Throughput
     * Optimized HDD, <code>sc1</code> for Cold HDD, or <code>standard</code> for
     * Magnetic volumes.</p> <p>Default: <code>standard</code></p>
     */
    inline const VolumeType& GetVolumeType() const{ return m_volumeType; }

    /**
     * <p>The volume type. This can be <code>gp2</code> for General Purpose SSD,
     * <code>io1</code> for Provisioned IOPS SSD, <code>st1</code> for Throughput
     * Optimized HDD, <code>sc1</code> for Cold HDD, or <code>standard</code> for
     * Magnetic volumes.</p> <p>Default: <code>standard</code></p>
     */
    inline void SetVolumeType(const VolumeType& value) { m_volumeTypeHasBeenSet = true; m_volumeType = value; }

    /**
     * <p>The volume type. This can be <code>gp2</code> for General Purpose SSD,
     * <code>io1</code> for Provisioned IOPS SSD, <code>st1</code> for Throughput
     * Optimized HDD, <code>sc1</code> for Cold HDD, or <code>standard</code> for
     * Magnetic volumes.</p> <p>Default: <code>standard</code></p>
     */
    inline void SetVolumeType(VolumeType&& value) { m_volumeTypeHasBeenSet = true; m_volumeType = value; }

    /**
     * <p>The volume type. This can be <code>gp2</code> for General Purpose SSD,
     * <code>io1</code> for Provisioned IOPS SSD, <code>st1</code> for Throughput
     * Optimized HDD, <code>sc1</code> for Cold HDD, or <code>standard</code> for
     * Magnetic volumes.</p> <p>Default: <code>standard</code></p>
     */
    inline CreateVolumeRequest& WithVolumeType(const VolumeType& value) { SetVolumeType(value); return *this;}

    /**
     * <p>The volume type. This can be <code>gp2</code> for General Purpose SSD,
     * <code>io1</code> for Provisioned IOPS SSD, <code>st1</code> for Throughput
     * Optimized HDD, <code>sc1</code> for Cold HDD, or <code>standard</code> for
     * Magnetic volumes.</p> <p>Default: <code>standard</code></p>
     */
    inline CreateVolumeRequest& WithVolumeType(VolumeType&& value) { SetVolumeType(value); return *this;}

    /**
     * <p>Only valid for Provisioned IOPS SSD volumes. The number of I/O operations per
     * second (IOPS) to provision for the volume, with a maximum ratio of 30
     * IOPS/GiB.</p> <p>Constraint: Range is 100 to 20000 for Provisioned IOPS SSD
     * volumes </p>
     */
    inline int GetIops() const{ return m_iops; }

    /**
     * <p>Only valid for Provisioned IOPS SSD volumes. The number of I/O operations per
     * second (IOPS) to provision for the volume, with a maximum ratio of 30
     * IOPS/GiB.</p> <p>Constraint: Range is 100 to 20000 for Provisioned IOPS SSD
     * volumes </p>
     */
    inline void SetIops(int value) { m_iopsHasBeenSet = true; m_iops = value; }

    /**
     * <p>Only valid for Provisioned IOPS SSD volumes. The number of I/O operations per
     * second (IOPS) to provision for the volume, with a maximum ratio of 30
     * IOPS/GiB.</p> <p>Constraint: Range is 100 to 20000 for Provisioned IOPS SSD
     * volumes </p>
     */
    inline CreateVolumeRequest& WithIops(int value) { SetIops(value); return *this;}

    /**
     * <p>Specifies whether the volume should be encrypted. Encrypted Amazon EBS
     * volumes may only be attached to instances that support Amazon EBS encryption.
     * Volumes that are created from encrypted snapshots are automatically encrypted.
     * There is no way to create an encrypted volume from an unencrypted snapshot or
     * vice versa. If your AMI uses encrypted volumes, you can only launch it on
     * supported instance types. For more information, see <a
     * href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/EBSEncryption.html">Amazon
     * EBS Encryption</a> in the <i>Amazon Elastic Compute Cloud User Guide</i>.</p>
     */
    inline bool GetEncrypted() const{ return m_encrypted; }

    /**
     * <p>Specifies whether the volume should be encrypted. Encrypted Amazon EBS
     * volumes may only be attached to instances that support Amazon EBS encryption.
     * Volumes that are created from encrypted snapshots are automatically encrypted.
     * There is no way to create an encrypted volume from an unencrypted snapshot or
     * vice versa. If your AMI uses encrypted volumes, you can only launch it on
     * supported instance types. For more information, see <a
     * href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/EBSEncryption.html">Amazon
     * EBS Encryption</a> in the <i>Amazon Elastic Compute Cloud User Guide</i>.</p>
     */
    inline void SetEncrypted(bool value) { m_encryptedHasBeenSet = true; m_encrypted = value; }

    /**
     * <p>Specifies whether the volume should be encrypted. Encrypted Amazon EBS
     * volumes may only be attached to instances that support Amazon EBS encryption.
     * Volumes that are created from encrypted snapshots are automatically encrypted.
     * There is no way to create an encrypted volume from an unencrypted snapshot or
     * vice versa. If your AMI uses encrypted volumes, you can only launch it on
     * supported instance types. For more information, see <a
     * href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/EBSEncryption.html">Amazon
     * EBS Encryption</a> in the <i>Amazon Elastic Compute Cloud User Guide</i>.</p>
     */
    inline CreateVolumeRequest& WithEncrypted(bool value) { SetEncrypted(value); return *this;}

    /**
     * <p>The full ARN of the AWS Key Management Service (AWS KMS) customer master key
     * (CMK) to use when creating the encrypted volume. This parameter is only required
     * if you want to use a non-default CMK; if this parameter is not specified, the
     * default CMK for EBS is used. The ARN contains the <code>arn:aws:kms</code>
     * namespace, followed by the region of the CMK, the AWS account ID of the CMK
     * owner, the <code>key</code> namespace, and then the CMK ID. For example,
     * arn:aws:kms:<i>us-east-1</i>:<i>012345678910</i>:key/<i>abcd1234-a123-456a-a12b-a123b4cd56ef</i>.
     * If a <code>KmsKeyId</code> is specified, the <code>Encrypted</code> flag must
     * also be set.</p>
     */
    inline const Aws::String& GetKmsKeyId() const{ return m_kmsKeyId; }

    /**
     * <p>The full ARN of the AWS Key Management Service (AWS KMS) customer master key
     * (CMK) to use when creating the encrypted volume. This parameter is only required
     * if you want to use a non-default CMK; if this parameter is not specified, the
     * default CMK for EBS is used. The ARN contains the <code>arn:aws:kms</code>
     * namespace, followed by the region of the CMK, the AWS account ID of the CMK
     * owner, the <code>key</code> namespace, and then the CMK ID. For example,
     * arn:aws:kms:<i>us-east-1</i>:<i>012345678910</i>:key/<i>abcd1234-a123-456a-a12b-a123b4cd56ef</i>.
     * If a <code>KmsKeyId</code> is specified, the <code>Encrypted</code> flag must
     * also be set.</p>
     */
    inline void SetKmsKeyId(const Aws::String& value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId = value; }

    /**
     * <p>The full ARN of the AWS Key Management Service (AWS KMS) customer master key
     * (CMK) to use when creating the encrypted volume. This parameter is only required
     * if you want to use a non-default CMK; if this parameter is not specified, the
     * default CMK for EBS is used. The ARN contains the <code>arn:aws:kms</code>
     * namespace, followed by the region of the CMK, the AWS account ID of the CMK
     * owner, the <code>key</code> namespace, and then the CMK ID. For example,
     * arn:aws:kms:<i>us-east-1</i>:<i>012345678910</i>:key/<i>abcd1234-a123-456a-a12b-a123b4cd56ef</i>.
     * If a <code>KmsKeyId</code> is specified, the <code>Encrypted</code> flag must
     * also be set.</p>
     */
    inline void SetKmsKeyId(Aws::String&& value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId = value; }

    /**
     * <p>The full ARN of the AWS Key Management Service (AWS KMS) customer master key
     * (CMK) to use when creating the encrypted volume. This parameter is only required
     * if you want to use a non-default CMK; if this parameter is not specified, the
     * default CMK for EBS is used. The ARN contains the <code>arn:aws:kms</code>
     * namespace, followed by the region of the CMK, the AWS account ID of the CMK
     * owner, the <code>key</code> namespace, and then the CMK ID. For example,
     * arn:aws:kms:<i>us-east-1</i>:<i>012345678910</i>:key/<i>abcd1234-a123-456a-a12b-a123b4cd56ef</i>.
     * If a <code>KmsKeyId</code> is specified, the <code>Encrypted</code> flag must
     * also be set.</p>
     */
    inline void SetKmsKeyId(const char* value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId.assign(value); }

    /**
     * <p>The full ARN of the AWS Key Management Service (AWS KMS) customer master key
     * (CMK) to use when creating the encrypted volume. This parameter is only required
     * if you want to use a non-default CMK; if this parameter is not specified, the
     * default CMK for EBS is used. The ARN contains the <code>arn:aws:kms</code>
     * namespace, followed by the region of the CMK, the AWS account ID of the CMK
     * owner, the <code>key</code> namespace, and then the CMK ID. For example,
     * arn:aws:kms:<i>us-east-1</i>:<i>012345678910</i>:key/<i>abcd1234-a123-456a-a12b-a123b4cd56ef</i>.
     * If a <code>KmsKeyId</code> is specified, the <code>Encrypted</code> flag must
     * also be set.</p>
     */
    inline CreateVolumeRequest& WithKmsKeyId(const Aws::String& value) { SetKmsKeyId(value); return *this;}

    /**
     * <p>The full ARN of the AWS Key Management Service (AWS KMS) customer master key
     * (CMK) to use when creating the encrypted volume. This parameter is only required
     * if you want to use a non-default CMK; if this parameter is not specified, the
     * default CMK for EBS is used. The ARN contains the <code>arn:aws:kms</code>
     * namespace, followed by the region of the CMK, the AWS account ID of the CMK
     * owner, the <code>key</code> namespace, and then the CMK ID. For example,
     * arn:aws:kms:<i>us-east-1</i>:<i>012345678910</i>:key/<i>abcd1234-a123-456a-a12b-a123b4cd56ef</i>.
     * If a <code>KmsKeyId</code> is specified, the <code>Encrypted</code> flag must
     * also be set.</p>
     */
    inline CreateVolumeRequest& WithKmsKeyId(Aws::String&& value) { SetKmsKeyId(value); return *this;}

    /**
     * <p>The full ARN of the AWS Key Management Service (AWS KMS) customer master key
     * (CMK) to use when creating the encrypted volume. This parameter is only required
     * if you want to use a non-default CMK; if this parameter is not specified, the
     * default CMK for EBS is used. The ARN contains the <code>arn:aws:kms</code>
     * namespace, followed by the region of the CMK, the AWS account ID of the CMK
     * owner, the <code>key</code> namespace, and then the CMK ID. For example,
     * arn:aws:kms:<i>us-east-1</i>:<i>012345678910</i>:key/<i>abcd1234-a123-456a-a12b-a123b4cd56ef</i>.
     * If a <code>KmsKeyId</code> is specified, the <code>Encrypted</code> flag must
     * also be set.</p>
     */
    inline CreateVolumeRequest& WithKmsKeyId(const char* value) { SetKmsKeyId(value); return *this;}

  private:
    bool m_dryRun;
    bool m_dryRunHasBeenSet;
    int m_size;
    bool m_sizeHasBeenSet;
    Aws::String m_snapshotId;
    bool m_snapshotIdHasBeenSet;
    Aws::String m_availabilityZone;
    bool m_availabilityZoneHasBeenSet;
    VolumeType m_volumeType;
    bool m_volumeTypeHasBeenSet;
    int m_iops;
    bool m_iopsHasBeenSet;
    bool m_encrypted;
    bool m_encryptedHasBeenSet;
    Aws::String m_kmsKeyId;
    bool m_kmsKeyIdHasBeenSet;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
