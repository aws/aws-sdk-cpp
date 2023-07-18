﻿/**
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
   * <p>Describes a block device for an EBS volume.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/LaunchTemplateEbsBlockDevice">AWS
   * API Reference</a></p>
   */
  class AWS_EC2_API LaunchTemplateEbsBlockDevice
  {
  public:
    LaunchTemplateEbsBlockDevice();
    LaunchTemplateEbsBlockDevice(const Aws::Utils::Xml::XmlNode& xmlNode);
    LaunchTemplateEbsBlockDevice& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>Indicates whether the EBS volume is encrypted.</p>
     */
    inline bool GetEncrypted() const{ return m_encrypted; }

    /**
     * <p>Indicates whether the EBS volume is encrypted.</p>
     */
    inline bool EncryptedHasBeenSet() const { return m_encryptedHasBeenSet; }

    /**
     * <p>Indicates whether the EBS volume is encrypted.</p>
     */
    inline void SetEncrypted(bool value) { m_encryptedHasBeenSet = true; m_encrypted = value; }

    /**
     * <p>Indicates whether the EBS volume is encrypted.</p>
     */
    inline LaunchTemplateEbsBlockDevice& WithEncrypted(bool value) { SetEncrypted(value); return *this;}


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
    inline LaunchTemplateEbsBlockDevice& WithDeleteOnTermination(bool value) { SetDeleteOnTermination(value); return *this;}


    /**
     * <p>The number of I/O operations per second (IOPS) that the volume supports. </p>
     */
    inline int GetIops() const{ return m_iops; }

    /**
     * <p>The number of I/O operations per second (IOPS) that the volume supports. </p>
     */
    inline bool IopsHasBeenSet() const { return m_iopsHasBeenSet; }

    /**
     * <p>The number of I/O operations per second (IOPS) that the volume supports. </p>
     */
    inline void SetIops(int value) { m_iopsHasBeenSet = true; m_iops = value; }

    /**
     * <p>The number of I/O operations per second (IOPS) that the volume supports. </p>
     */
    inline LaunchTemplateEbsBlockDevice& WithIops(int value) { SetIops(value); return *this;}


    /**
     * <p>The ARN of the Key Management Service (KMS) CMK used for encryption.</p>
     */
    inline const Aws::String& GetKmsKeyId() const{ return m_kmsKeyId; }

    /**
     * <p>The ARN of the Key Management Service (KMS) CMK used for encryption.</p>
     */
    inline bool KmsKeyIdHasBeenSet() const { return m_kmsKeyIdHasBeenSet; }

    /**
     * <p>The ARN of the Key Management Service (KMS) CMK used for encryption.</p>
     */
    inline void SetKmsKeyId(const Aws::String& value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId = value; }

    /**
     * <p>The ARN of the Key Management Service (KMS) CMK used for encryption.</p>
     */
    inline void SetKmsKeyId(Aws::String&& value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId = std::move(value); }

    /**
     * <p>The ARN of the Key Management Service (KMS) CMK used for encryption.</p>
     */
    inline void SetKmsKeyId(const char* value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId.assign(value); }

    /**
     * <p>The ARN of the Key Management Service (KMS) CMK used for encryption.</p>
     */
    inline LaunchTemplateEbsBlockDevice& WithKmsKeyId(const Aws::String& value) { SetKmsKeyId(value); return *this;}

    /**
     * <p>The ARN of the Key Management Service (KMS) CMK used for encryption.</p>
     */
    inline LaunchTemplateEbsBlockDevice& WithKmsKeyId(Aws::String&& value) { SetKmsKeyId(std::move(value)); return *this;}

    /**
     * <p>The ARN of the Key Management Service (KMS) CMK used for encryption.</p>
     */
    inline LaunchTemplateEbsBlockDevice& WithKmsKeyId(const char* value) { SetKmsKeyId(value); return *this;}


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
    inline LaunchTemplateEbsBlockDevice& WithSnapshotId(const Aws::String& value) { SetSnapshotId(value); return *this;}

    /**
     * <p>The ID of the snapshot.</p>
     */
    inline LaunchTemplateEbsBlockDevice& WithSnapshotId(Aws::String&& value) { SetSnapshotId(std::move(value)); return *this;}

    /**
     * <p>The ID of the snapshot.</p>
     */
    inline LaunchTemplateEbsBlockDevice& WithSnapshotId(const char* value) { SetSnapshotId(value); return *this;}


    /**
     * <p>The size of the volume, in GiB.</p>
     */
    inline int GetVolumeSize() const{ return m_volumeSize; }

    /**
     * <p>The size of the volume, in GiB.</p>
     */
    inline bool VolumeSizeHasBeenSet() const { return m_volumeSizeHasBeenSet; }

    /**
     * <p>The size of the volume, in GiB.</p>
     */
    inline void SetVolumeSize(int value) { m_volumeSizeHasBeenSet = true; m_volumeSize = value; }

    /**
     * <p>The size of the volume, in GiB.</p>
     */
    inline LaunchTemplateEbsBlockDevice& WithVolumeSize(int value) { SetVolumeSize(value); return *this;}


    /**
     * <p>The volume type.</p>
     */
    inline const VolumeType& GetVolumeType() const{ return m_volumeType; }

    /**
     * <p>The volume type.</p>
     */
    inline bool VolumeTypeHasBeenSet() const { return m_volumeTypeHasBeenSet; }

    /**
     * <p>The volume type.</p>
     */
    inline void SetVolumeType(const VolumeType& value) { m_volumeTypeHasBeenSet = true; m_volumeType = value; }

    /**
     * <p>The volume type.</p>
     */
    inline void SetVolumeType(VolumeType&& value) { m_volumeTypeHasBeenSet = true; m_volumeType = std::move(value); }

    /**
     * <p>The volume type.</p>
     */
    inline LaunchTemplateEbsBlockDevice& WithVolumeType(const VolumeType& value) { SetVolumeType(value); return *this;}

    /**
     * <p>The volume type.</p>
     */
    inline LaunchTemplateEbsBlockDevice& WithVolumeType(VolumeType&& value) { SetVolumeType(std::move(value)); return *this;}


    /**
     * <p>The throughput that the volume supports, in MiB/s.</p>
     */
    inline int GetThroughput() const{ return m_throughput; }

    /**
     * <p>The throughput that the volume supports, in MiB/s.</p>
     */
    inline bool ThroughputHasBeenSet() const { return m_throughputHasBeenSet; }

    /**
     * <p>The throughput that the volume supports, in MiB/s.</p>
     */
    inline void SetThroughput(int value) { m_throughputHasBeenSet = true; m_throughput = value; }

    /**
     * <p>The throughput that the volume supports, in MiB/s.</p>
     */
    inline LaunchTemplateEbsBlockDevice& WithThroughput(int value) { SetThroughput(value); return *this;}

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

    int m_throughput;
    bool m_throughputHasBeenSet;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
