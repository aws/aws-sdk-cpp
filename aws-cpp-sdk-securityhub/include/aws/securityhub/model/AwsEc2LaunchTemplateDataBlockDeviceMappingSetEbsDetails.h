/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace SecurityHub
{
namespace Model
{

  /**
   * <p> Parameters for a block device for an Amazon Elastic Block Store (Amazon EBS)
   * volume in an Amazon EC2 launch template. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/AwsEc2LaunchTemplateDataBlockDeviceMappingSetEbsDetails">AWS
   * API Reference</a></p>
   */
  class AwsEc2LaunchTemplateDataBlockDeviceMappingSetEbsDetails
  {
  public:
    AWS_SECURITYHUB_API AwsEc2LaunchTemplateDataBlockDeviceMappingSetEbsDetails();
    AWS_SECURITYHUB_API AwsEc2LaunchTemplateDataBlockDeviceMappingSetEbsDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API AwsEc2LaunchTemplateDataBlockDeviceMappingSetEbsDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p> Indicates whether the EBS volume is deleted on instance termination. </p>
     */
    inline bool GetDeleteOnTermination() const{ return m_deleteOnTermination; }

    /**
     * <p> Indicates whether the EBS volume is deleted on instance termination. </p>
     */
    inline bool DeleteOnTerminationHasBeenSet() const { return m_deleteOnTerminationHasBeenSet; }

    /**
     * <p> Indicates whether the EBS volume is deleted on instance termination. </p>
     */
    inline void SetDeleteOnTermination(bool value) { m_deleteOnTerminationHasBeenSet = true; m_deleteOnTermination = value; }

    /**
     * <p> Indicates whether the EBS volume is deleted on instance termination. </p>
     */
    inline AwsEc2LaunchTemplateDataBlockDeviceMappingSetEbsDetails& WithDeleteOnTermination(bool value) { SetDeleteOnTermination(value); return *this;}


    /**
     * <p> Indicates whether the EBS volume is encrypted. Encrypted volumes can only be
     * attached to instances that support Amazon EBS encryption. If you're creating a
     * volume from a snapshot, you can't specify an encryption value. </p>
     */
    inline bool GetEncrypted() const{ return m_encrypted; }

    /**
     * <p> Indicates whether the EBS volume is encrypted. Encrypted volumes can only be
     * attached to instances that support Amazon EBS encryption. If you're creating a
     * volume from a snapshot, you can't specify an encryption value. </p>
     */
    inline bool EncryptedHasBeenSet() const { return m_encryptedHasBeenSet; }

    /**
     * <p> Indicates whether the EBS volume is encrypted. Encrypted volumes can only be
     * attached to instances that support Amazon EBS encryption. If you're creating a
     * volume from a snapshot, you can't specify an encryption value. </p>
     */
    inline void SetEncrypted(bool value) { m_encryptedHasBeenSet = true; m_encrypted = value; }

    /**
     * <p> Indicates whether the EBS volume is encrypted. Encrypted volumes can only be
     * attached to instances that support Amazon EBS encryption. If you're creating a
     * volume from a snapshot, you can't specify an encryption value. </p>
     */
    inline AwsEc2LaunchTemplateDataBlockDeviceMappingSetEbsDetails& WithEncrypted(bool value) { SetEncrypted(value); return *this;}


    /**
     * <p> The number of I/O operations per second (IOPS). </p>
     */
    inline int GetIops() const{ return m_iops; }

    /**
     * <p> The number of I/O operations per second (IOPS). </p>
     */
    inline bool IopsHasBeenSet() const { return m_iopsHasBeenSet; }

    /**
     * <p> The number of I/O operations per second (IOPS). </p>
     */
    inline void SetIops(int value) { m_iopsHasBeenSet = true; m_iops = value; }

    /**
     * <p> The number of I/O operations per second (IOPS). </p>
     */
    inline AwsEc2LaunchTemplateDataBlockDeviceMappingSetEbsDetails& WithIops(int value) { SetIops(value); return *this;}


    /**
     * <p> The Amazon Resource Name (ARN) of the symmetric Key Management Service (KMS)
     * customer managed key used for encryption. </p>
     */
    inline const Aws::String& GetKmsKeyId() const{ return m_kmsKeyId; }

    /**
     * <p> The Amazon Resource Name (ARN) of the symmetric Key Management Service (KMS)
     * customer managed key used for encryption. </p>
     */
    inline bool KmsKeyIdHasBeenSet() const { return m_kmsKeyIdHasBeenSet; }

    /**
     * <p> The Amazon Resource Name (ARN) of the symmetric Key Management Service (KMS)
     * customer managed key used for encryption. </p>
     */
    inline void SetKmsKeyId(const Aws::String& value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId = value; }

    /**
     * <p> The Amazon Resource Name (ARN) of the symmetric Key Management Service (KMS)
     * customer managed key used for encryption. </p>
     */
    inline void SetKmsKeyId(Aws::String&& value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId = std::move(value); }

    /**
     * <p> The Amazon Resource Name (ARN) of the symmetric Key Management Service (KMS)
     * customer managed key used for encryption. </p>
     */
    inline void SetKmsKeyId(const char* value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId.assign(value); }

    /**
     * <p> The Amazon Resource Name (ARN) of the symmetric Key Management Service (KMS)
     * customer managed key used for encryption. </p>
     */
    inline AwsEc2LaunchTemplateDataBlockDeviceMappingSetEbsDetails& WithKmsKeyId(const Aws::String& value) { SetKmsKeyId(value); return *this;}

    /**
     * <p> The Amazon Resource Name (ARN) of the symmetric Key Management Service (KMS)
     * customer managed key used for encryption. </p>
     */
    inline AwsEc2LaunchTemplateDataBlockDeviceMappingSetEbsDetails& WithKmsKeyId(Aws::String&& value) { SetKmsKeyId(std::move(value)); return *this;}

    /**
     * <p> The Amazon Resource Name (ARN) of the symmetric Key Management Service (KMS)
     * customer managed key used for encryption. </p>
     */
    inline AwsEc2LaunchTemplateDataBlockDeviceMappingSetEbsDetails& WithKmsKeyId(const char* value) { SetKmsKeyId(value); return *this;}


    /**
     * <p> The ID of the EBS snapshot. </p>
     */
    inline const Aws::String& GetSnapshotId() const{ return m_snapshotId; }

    /**
     * <p> The ID of the EBS snapshot. </p>
     */
    inline bool SnapshotIdHasBeenSet() const { return m_snapshotIdHasBeenSet; }

    /**
     * <p> The ID of the EBS snapshot. </p>
     */
    inline void SetSnapshotId(const Aws::String& value) { m_snapshotIdHasBeenSet = true; m_snapshotId = value; }

    /**
     * <p> The ID of the EBS snapshot. </p>
     */
    inline void SetSnapshotId(Aws::String&& value) { m_snapshotIdHasBeenSet = true; m_snapshotId = std::move(value); }

    /**
     * <p> The ID of the EBS snapshot. </p>
     */
    inline void SetSnapshotId(const char* value) { m_snapshotIdHasBeenSet = true; m_snapshotId.assign(value); }

    /**
     * <p> The ID of the EBS snapshot. </p>
     */
    inline AwsEc2LaunchTemplateDataBlockDeviceMappingSetEbsDetails& WithSnapshotId(const Aws::String& value) { SetSnapshotId(value); return *this;}

    /**
     * <p> The ID of the EBS snapshot. </p>
     */
    inline AwsEc2LaunchTemplateDataBlockDeviceMappingSetEbsDetails& WithSnapshotId(Aws::String&& value) { SetSnapshotId(std::move(value)); return *this;}

    /**
     * <p> The ID of the EBS snapshot. </p>
     */
    inline AwsEc2LaunchTemplateDataBlockDeviceMappingSetEbsDetails& WithSnapshotId(const char* value) { SetSnapshotId(value); return *this;}


    /**
     * <p> The throughput to provision for a gp3 volume, with a maximum of 1,000 MiB/s.
     * </p>
     */
    inline int GetThroughput() const{ return m_throughput; }

    /**
     * <p> The throughput to provision for a gp3 volume, with a maximum of 1,000 MiB/s.
     * </p>
     */
    inline bool ThroughputHasBeenSet() const { return m_throughputHasBeenSet; }

    /**
     * <p> The throughput to provision for a gp3 volume, with a maximum of 1,000 MiB/s.
     * </p>
     */
    inline void SetThroughput(int value) { m_throughputHasBeenSet = true; m_throughput = value; }

    /**
     * <p> The throughput to provision for a gp3 volume, with a maximum of 1,000 MiB/s.
     * </p>
     */
    inline AwsEc2LaunchTemplateDataBlockDeviceMappingSetEbsDetails& WithThroughput(int value) { SetThroughput(value); return *this;}


    /**
     * <p> The size of the volume, in GiBs. You must specify either a snapshot ID or a
     * volume size. </p>
     */
    inline int GetVolumeSize() const{ return m_volumeSize; }

    /**
     * <p> The size of the volume, in GiBs. You must specify either a snapshot ID or a
     * volume size. </p>
     */
    inline bool VolumeSizeHasBeenSet() const { return m_volumeSizeHasBeenSet; }

    /**
     * <p> The size of the volume, in GiBs. You must specify either a snapshot ID or a
     * volume size. </p>
     */
    inline void SetVolumeSize(int value) { m_volumeSizeHasBeenSet = true; m_volumeSize = value; }

    /**
     * <p> The size of the volume, in GiBs. You must specify either a snapshot ID or a
     * volume size. </p>
     */
    inline AwsEc2LaunchTemplateDataBlockDeviceMappingSetEbsDetails& WithVolumeSize(int value) { SetVolumeSize(value); return *this;}


    /**
     * <p> The volume type. </p>
     */
    inline const Aws::String& GetVolumeType() const{ return m_volumeType; }

    /**
     * <p> The volume type. </p>
     */
    inline bool VolumeTypeHasBeenSet() const { return m_volumeTypeHasBeenSet; }

    /**
     * <p> The volume type. </p>
     */
    inline void SetVolumeType(const Aws::String& value) { m_volumeTypeHasBeenSet = true; m_volumeType = value; }

    /**
     * <p> The volume type. </p>
     */
    inline void SetVolumeType(Aws::String&& value) { m_volumeTypeHasBeenSet = true; m_volumeType = std::move(value); }

    /**
     * <p> The volume type. </p>
     */
    inline void SetVolumeType(const char* value) { m_volumeTypeHasBeenSet = true; m_volumeType.assign(value); }

    /**
     * <p> The volume type. </p>
     */
    inline AwsEc2LaunchTemplateDataBlockDeviceMappingSetEbsDetails& WithVolumeType(const Aws::String& value) { SetVolumeType(value); return *this;}

    /**
     * <p> The volume type. </p>
     */
    inline AwsEc2LaunchTemplateDataBlockDeviceMappingSetEbsDetails& WithVolumeType(Aws::String&& value) { SetVolumeType(std::move(value)); return *this;}

    /**
     * <p> The volume type. </p>
     */
    inline AwsEc2LaunchTemplateDataBlockDeviceMappingSetEbsDetails& WithVolumeType(const char* value) { SetVolumeType(value); return *this;}

  private:

    bool m_deleteOnTermination;
    bool m_deleteOnTerminationHasBeenSet = false;

    bool m_encrypted;
    bool m_encryptedHasBeenSet = false;

    int m_iops;
    bool m_iopsHasBeenSet = false;

    Aws::String m_kmsKeyId;
    bool m_kmsKeyIdHasBeenSet = false;

    Aws::String m_snapshotId;
    bool m_snapshotIdHasBeenSet = false;

    int m_throughput;
    bool m_throughputHasBeenSet = false;

    int m_volumeSize;
    bool m_volumeSizeHasBeenSet = false;

    Aws::String m_volumeType;
    bool m_volumeTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
