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
   * <p>The parameters for a block device for an EBS volume.</p><p><h3>See Also:</h3>
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/LaunchTemplateEbsBlockDeviceRequest">AWS
   * API Reference</a></p>
   */
  class AWS_EC2_API LaunchTemplateEbsBlockDeviceRequest
  {
  public:
    LaunchTemplateEbsBlockDeviceRequest();
    LaunchTemplateEbsBlockDeviceRequest(const Aws::Utils::Xml::XmlNode& xmlNode);
    LaunchTemplateEbsBlockDeviceRequest& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>Indicates whether the EBS volume is encrypted. Encrypted volumes can only be
     * attached to instances that support Amazon EBS encryption. If you are creating a
     * volume from a snapshot, you can't specify an encryption value.</p>
     */
    inline bool GetEncrypted() const{ return m_encrypted; }

    /**
     * <p>Indicates whether the EBS volume is encrypted. Encrypted volumes can only be
     * attached to instances that support Amazon EBS encryption. If you are creating a
     * volume from a snapshot, you can't specify an encryption value.</p>
     */
    inline void SetEncrypted(bool value) { m_encryptedHasBeenSet = true; m_encrypted = value; }

    /**
     * <p>Indicates whether the EBS volume is encrypted. Encrypted volumes can only be
     * attached to instances that support Amazon EBS encryption. If you are creating a
     * volume from a snapshot, you can't specify an encryption value.</p>
     */
    inline LaunchTemplateEbsBlockDeviceRequest& WithEncrypted(bool value) { SetEncrypted(value); return *this;}


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
    inline LaunchTemplateEbsBlockDeviceRequest& WithDeleteOnTermination(bool value) { SetDeleteOnTermination(value); return *this;}


    /**
     * <p>The number of I/O operations per second (IOPS) that the volume supports. For
     * io1, this represents the number of IOPS that are provisioned for the volume. For
     * gp2, this represents the baseline performance of the volume and the rate at
     * which the volume accumulates I/O credits for bursting. For more information
     * about General Purpose SSD baseline performance, I/O credits, and bursting, see
     * Amazon EBS Volume Types in the Amazon Elastic Compute Cloud User Guide.</p>
     * <p>Condition: This parameter is required for requests to create io1 volumes; it
     * is not used in requests to create gp2, st1, sc1, or standard volumes.</p>
     */
    inline int GetIops() const{ return m_iops; }

    /**
     * <p>The number of I/O operations per second (IOPS) that the volume supports. For
     * io1, this represents the number of IOPS that are provisioned for the volume. For
     * gp2, this represents the baseline performance of the volume and the rate at
     * which the volume accumulates I/O credits for bursting. For more information
     * about General Purpose SSD baseline performance, I/O credits, and bursting, see
     * Amazon EBS Volume Types in the Amazon Elastic Compute Cloud User Guide.</p>
     * <p>Condition: This parameter is required for requests to create io1 volumes; it
     * is not used in requests to create gp2, st1, sc1, or standard volumes.</p>
     */
    inline void SetIops(int value) { m_iopsHasBeenSet = true; m_iops = value; }

    /**
     * <p>The number of I/O operations per second (IOPS) that the volume supports. For
     * io1, this represents the number of IOPS that are provisioned for the volume. For
     * gp2, this represents the baseline performance of the volume and the rate at
     * which the volume accumulates I/O credits for bursting. For more information
     * about General Purpose SSD baseline performance, I/O credits, and bursting, see
     * Amazon EBS Volume Types in the Amazon Elastic Compute Cloud User Guide.</p>
     * <p>Condition: This parameter is required for requests to create io1 volumes; it
     * is not used in requests to create gp2, st1, sc1, or standard volumes.</p>
     */
    inline LaunchTemplateEbsBlockDeviceRequest& WithIops(int value) { SetIops(value); return *this;}


    /**
     * <p>The ARN of the AWS Key Management Service (AWS KMS) CMK used for
     * encryption.</p>
     */
    inline const Aws::String& GetKmsKeyId() const{ return m_kmsKeyId; }

    /**
     * <p>The ARN of the AWS Key Management Service (AWS KMS) CMK used for
     * encryption.</p>
     */
    inline void SetKmsKeyId(const Aws::String& value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId = value; }

    /**
     * <p>The ARN of the AWS Key Management Service (AWS KMS) CMK used for
     * encryption.</p>
     */
    inline void SetKmsKeyId(Aws::String&& value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId = std::move(value); }

    /**
     * <p>The ARN of the AWS Key Management Service (AWS KMS) CMK used for
     * encryption.</p>
     */
    inline void SetKmsKeyId(const char* value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId.assign(value); }

    /**
     * <p>The ARN of the AWS Key Management Service (AWS KMS) CMK used for
     * encryption.</p>
     */
    inline LaunchTemplateEbsBlockDeviceRequest& WithKmsKeyId(const Aws::String& value) { SetKmsKeyId(value); return *this;}

    /**
     * <p>The ARN of the AWS Key Management Service (AWS KMS) CMK used for
     * encryption.</p>
     */
    inline LaunchTemplateEbsBlockDeviceRequest& WithKmsKeyId(Aws::String&& value) { SetKmsKeyId(std::move(value)); return *this;}

    /**
     * <p>The ARN of the AWS Key Management Service (AWS KMS) CMK used for
     * encryption.</p>
     */
    inline LaunchTemplateEbsBlockDeviceRequest& WithKmsKeyId(const char* value) { SetKmsKeyId(value); return *this;}


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
    inline LaunchTemplateEbsBlockDeviceRequest& WithSnapshotId(const Aws::String& value) { SetSnapshotId(value); return *this;}

    /**
     * <p>The ID of the snapshot.</p>
     */
    inline LaunchTemplateEbsBlockDeviceRequest& WithSnapshotId(Aws::String&& value) { SetSnapshotId(std::move(value)); return *this;}

    /**
     * <p>The ID of the snapshot.</p>
     */
    inline LaunchTemplateEbsBlockDeviceRequest& WithSnapshotId(const char* value) { SetSnapshotId(value); return *this;}


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
    inline LaunchTemplateEbsBlockDeviceRequest& WithVolumeSize(int value) { SetVolumeSize(value); return *this;}


    /**
     * <p>The volume type.</p>
     */
    inline const VolumeType& GetVolumeType() const{ return m_volumeType; }

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
    inline LaunchTemplateEbsBlockDeviceRequest& WithVolumeType(const VolumeType& value) { SetVolumeType(value); return *this;}

    /**
     * <p>The volume type.</p>
     */
    inline LaunchTemplateEbsBlockDeviceRequest& WithVolumeType(VolumeType&& value) { SetVolumeType(std::move(value)); return *this;}

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
