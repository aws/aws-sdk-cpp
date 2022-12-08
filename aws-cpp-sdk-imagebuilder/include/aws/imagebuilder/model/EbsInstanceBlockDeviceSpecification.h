/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/imagebuilder/Imagebuilder_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/imagebuilder/model/EbsVolumeType.h>
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
namespace imagebuilder
{
namespace Model
{

  /**
   * <p>Amazon EBS-specific block device mapping specifications.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/imagebuilder-2019-12-02/EbsInstanceBlockDeviceSpecification">AWS
   * API Reference</a></p>
   */
  class EbsInstanceBlockDeviceSpecification
  {
  public:
    AWS_IMAGEBUILDER_API EbsInstanceBlockDeviceSpecification();
    AWS_IMAGEBUILDER_API EbsInstanceBlockDeviceSpecification(Aws::Utils::Json::JsonView jsonValue);
    AWS_IMAGEBUILDER_API EbsInstanceBlockDeviceSpecification& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IMAGEBUILDER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Use to configure device encryption.</p>
     */
    inline bool GetEncrypted() const{ return m_encrypted; }

    /**
     * <p>Use to configure device encryption.</p>
     */
    inline bool EncryptedHasBeenSet() const { return m_encryptedHasBeenSet; }

    /**
     * <p>Use to configure device encryption.</p>
     */
    inline void SetEncrypted(bool value) { m_encryptedHasBeenSet = true; m_encrypted = value; }

    /**
     * <p>Use to configure device encryption.</p>
     */
    inline EbsInstanceBlockDeviceSpecification& WithEncrypted(bool value) { SetEncrypted(value); return *this;}


    /**
     * <p>Use to configure delete on termination of the associated device.</p>
     */
    inline bool GetDeleteOnTermination() const{ return m_deleteOnTermination; }

    /**
     * <p>Use to configure delete on termination of the associated device.</p>
     */
    inline bool DeleteOnTerminationHasBeenSet() const { return m_deleteOnTerminationHasBeenSet; }

    /**
     * <p>Use to configure delete on termination of the associated device.</p>
     */
    inline void SetDeleteOnTermination(bool value) { m_deleteOnTerminationHasBeenSet = true; m_deleteOnTermination = value; }

    /**
     * <p>Use to configure delete on termination of the associated device.</p>
     */
    inline EbsInstanceBlockDeviceSpecification& WithDeleteOnTermination(bool value) { SetDeleteOnTermination(value); return *this;}


    /**
     * <p>Use to configure device IOPS.</p>
     */
    inline int GetIops() const{ return m_iops; }

    /**
     * <p>Use to configure device IOPS.</p>
     */
    inline bool IopsHasBeenSet() const { return m_iopsHasBeenSet; }

    /**
     * <p>Use to configure device IOPS.</p>
     */
    inline void SetIops(int value) { m_iopsHasBeenSet = true; m_iops = value; }

    /**
     * <p>Use to configure device IOPS.</p>
     */
    inline EbsInstanceBlockDeviceSpecification& WithIops(int value) { SetIops(value); return *this;}


    /**
     * <p>Use to configure the KMS key to use when encrypting the device.</p>
     */
    inline const Aws::String& GetKmsKeyId() const{ return m_kmsKeyId; }

    /**
     * <p>Use to configure the KMS key to use when encrypting the device.</p>
     */
    inline bool KmsKeyIdHasBeenSet() const { return m_kmsKeyIdHasBeenSet; }

    /**
     * <p>Use to configure the KMS key to use when encrypting the device.</p>
     */
    inline void SetKmsKeyId(const Aws::String& value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId = value; }

    /**
     * <p>Use to configure the KMS key to use when encrypting the device.</p>
     */
    inline void SetKmsKeyId(Aws::String&& value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId = std::move(value); }

    /**
     * <p>Use to configure the KMS key to use when encrypting the device.</p>
     */
    inline void SetKmsKeyId(const char* value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId.assign(value); }

    /**
     * <p>Use to configure the KMS key to use when encrypting the device.</p>
     */
    inline EbsInstanceBlockDeviceSpecification& WithKmsKeyId(const Aws::String& value) { SetKmsKeyId(value); return *this;}

    /**
     * <p>Use to configure the KMS key to use when encrypting the device.</p>
     */
    inline EbsInstanceBlockDeviceSpecification& WithKmsKeyId(Aws::String&& value) { SetKmsKeyId(std::move(value)); return *this;}

    /**
     * <p>Use to configure the KMS key to use when encrypting the device.</p>
     */
    inline EbsInstanceBlockDeviceSpecification& WithKmsKeyId(const char* value) { SetKmsKeyId(value); return *this;}


    /**
     * <p>The snapshot that defines the device contents.</p>
     */
    inline const Aws::String& GetSnapshotId() const{ return m_snapshotId; }

    /**
     * <p>The snapshot that defines the device contents.</p>
     */
    inline bool SnapshotIdHasBeenSet() const { return m_snapshotIdHasBeenSet; }

    /**
     * <p>The snapshot that defines the device contents.</p>
     */
    inline void SetSnapshotId(const Aws::String& value) { m_snapshotIdHasBeenSet = true; m_snapshotId = value; }

    /**
     * <p>The snapshot that defines the device contents.</p>
     */
    inline void SetSnapshotId(Aws::String&& value) { m_snapshotIdHasBeenSet = true; m_snapshotId = std::move(value); }

    /**
     * <p>The snapshot that defines the device contents.</p>
     */
    inline void SetSnapshotId(const char* value) { m_snapshotIdHasBeenSet = true; m_snapshotId.assign(value); }

    /**
     * <p>The snapshot that defines the device contents.</p>
     */
    inline EbsInstanceBlockDeviceSpecification& WithSnapshotId(const Aws::String& value) { SetSnapshotId(value); return *this;}

    /**
     * <p>The snapshot that defines the device contents.</p>
     */
    inline EbsInstanceBlockDeviceSpecification& WithSnapshotId(Aws::String&& value) { SetSnapshotId(std::move(value)); return *this;}

    /**
     * <p>The snapshot that defines the device contents.</p>
     */
    inline EbsInstanceBlockDeviceSpecification& WithSnapshotId(const char* value) { SetSnapshotId(value); return *this;}


    /**
     * <p>Use to override the device's volume size.</p>
     */
    inline int GetVolumeSize() const{ return m_volumeSize; }

    /**
     * <p>Use to override the device's volume size.</p>
     */
    inline bool VolumeSizeHasBeenSet() const { return m_volumeSizeHasBeenSet; }

    /**
     * <p>Use to override the device's volume size.</p>
     */
    inline void SetVolumeSize(int value) { m_volumeSizeHasBeenSet = true; m_volumeSize = value; }

    /**
     * <p>Use to override the device's volume size.</p>
     */
    inline EbsInstanceBlockDeviceSpecification& WithVolumeSize(int value) { SetVolumeSize(value); return *this;}


    /**
     * <p>Use to override the device's volume type.</p>
     */
    inline const EbsVolumeType& GetVolumeType() const{ return m_volumeType; }

    /**
     * <p>Use to override the device's volume type.</p>
     */
    inline bool VolumeTypeHasBeenSet() const { return m_volumeTypeHasBeenSet; }

    /**
     * <p>Use to override the device's volume type.</p>
     */
    inline void SetVolumeType(const EbsVolumeType& value) { m_volumeTypeHasBeenSet = true; m_volumeType = value; }

    /**
     * <p>Use to override the device's volume type.</p>
     */
    inline void SetVolumeType(EbsVolumeType&& value) { m_volumeTypeHasBeenSet = true; m_volumeType = std::move(value); }

    /**
     * <p>Use to override the device's volume type.</p>
     */
    inline EbsInstanceBlockDeviceSpecification& WithVolumeType(const EbsVolumeType& value) { SetVolumeType(value); return *this;}

    /**
     * <p>Use to override the device's volume type.</p>
     */
    inline EbsInstanceBlockDeviceSpecification& WithVolumeType(EbsVolumeType&& value) { SetVolumeType(std::move(value)); return *this;}


    /**
     * <p> <b>For GP3 volumes only</b> – The throughput in MiB/s that the volume
     * supports. </p>
     */
    inline int GetThroughput() const{ return m_throughput; }

    /**
     * <p> <b>For GP3 volumes only</b> – The throughput in MiB/s that the volume
     * supports. </p>
     */
    inline bool ThroughputHasBeenSet() const { return m_throughputHasBeenSet; }

    /**
     * <p> <b>For GP3 volumes only</b> – The throughput in MiB/s that the volume
     * supports. </p>
     */
    inline void SetThroughput(int value) { m_throughputHasBeenSet = true; m_throughput = value; }

    /**
     * <p> <b>For GP3 volumes only</b> – The throughput in MiB/s that the volume
     * supports. </p>
     */
    inline EbsInstanceBlockDeviceSpecification& WithThroughput(int value) { SetThroughput(value); return *this;}

  private:

    bool m_encrypted;
    bool m_encryptedHasBeenSet = false;

    bool m_deleteOnTermination;
    bool m_deleteOnTerminationHasBeenSet = false;

    int m_iops;
    bool m_iopsHasBeenSet = false;

    Aws::String m_kmsKeyId;
    bool m_kmsKeyIdHasBeenSet = false;

    Aws::String m_snapshotId;
    bool m_snapshotIdHasBeenSet = false;

    int m_volumeSize;
    bool m_volumeSizeHasBeenSet = false;

    EbsVolumeType m_volumeType;
    bool m_volumeTypeHasBeenSet = false;

    int m_throughput;
    bool m_throughputHasBeenSet = false;
  };

} // namespace Model
} // namespace imagebuilder
} // namespace Aws
