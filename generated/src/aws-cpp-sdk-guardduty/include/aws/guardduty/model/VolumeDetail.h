﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/guardduty/GuardDuty_EXPORTS.h>
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
namespace GuardDuty
{
namespace Model
{

  /**
   * <p>Contains EBS volume details.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/VolumeDetail">AWS
   * API Reference</a></p>
   */
  class VolumeDetail
  {
  public:
    AWS_GUARDDUTY_API VolumeDetail();
    AWS_GUARDDUTY_API VolumeDetail(Aws::Utils::Json::JsonView jsonValue);
    AWS_GUARDDUTY_API VolumeDetail& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GUARDDUTY_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>EBS volume ARN information.</p>
     */
    inline const Aws::String& GetVolumeArn() const{ return m_volumeArn; }
    inline bool VolumeArnHasBeenSet() const { return m_volumeArnHasBeenSet; }
    inline void SetVolumeArn(const Aws::String& value) { m_volumeArnHasBeenSet = true; m_volumeArn = value; }
    inline void SetVolumeArn(Aws::String&& value) { m_volumeArnHasBeenSet = true; m_volumeArn = std::move(value); }
    inline void SetVolumeArn(const char* value) { m_volumeArnHasBeenSet = true; m_volumeArn.assign(value); }
    inline VolumeDetail& WithVolumeArn(const Aws::String& value) { SetVolumeArn(value); return *this;}
    inline VolumeDetail& WithVolumeArn(Aws::String&& value) { SetVolumeArn(std::move(value)); return *this;}
    inline VolumeDetail& WithVolumeArn(const char* value) { SetVolumeArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The EBS volume type.</p>
     */
    inline const Aws::String& GetVolumeType() const{ return m_volumeType; }
    inline bool VolumeTypeHasBeenSet() const { return m_volumeTypeHasBeenSet; }
    inline void SetVolumeType(const Aws::String& value) { m_volumeTypeHasBeenSet = true; m_volumeType = value; }
    inline void SetVolumeType(Aws::String&& value) { m_volumeTypeHasBeenSet = true; m_volumeType = std::move(value); }
    inline void SetVolumeType(const char* value) { m_volumeTypeHasBeenSet = true; m_volumeType.assign(value); }
    inline VolumeDetail& WithVolumeType(const Aws::String& value) { SetVolumeType(value); return *this;}
    inline VolumeDetail& WithVolumeType(Aws::String&& value) { SetVolumeType(std::move(value)); return *this;}
    inline VolumeDetail& WithVolumeType(const char* value) { SetVolumeType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The device name for the EBS volume.</p>
     */
    inline const Aws::String& GetDeviceName() const{ return m_deviceName; }
    inline bool DeviceNameHasBeenSet() const { return m_deviceNameHasBeenSet; }
    inline void SetDeviceName(const Aws::String& value) { m_deviceNameHasBeenSet = true; m_deviceName = value; }
    inline void SetDeviceName(Aws::String&& value) { m_deviceNameHasBeenSet = true; m_deviceName = std::move(value); }
    inline void SetDeviceName(const char* value) { m_deviceNameHasBeenSet = true; m_deviceName.assign(value); }
    inline VolumeDetail& WithDeviceName(const Aws::String& value) { SetDeviceName(value); return *this;}
    inline VolumeDetail& WithDeviceName(Aws::String&& value) { SetDeviceName(std::move(value)); return *this;}
    inline VolumeDetail& WithDeviceName(const char* value) { SetDeviceName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>EBS volume size in GB.</p>
     */
    inline int GetVolumeSizeInGB() const{ return m_volumeSizeInGB; }
    inline bool VolumeSizeInGBHasBeenSet() const { return m_volumeSizeInGBHasBeenSet; }
    inline void SetVolumeSizeInGB(int value) { m_volumeSizeInGBHasBeenSet = true; m_volumeSizeInGB = value; }
    inline VolumeDetail& WithVolumeSizeInGB(int value) { SetVolumeSizeInGB(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>EBS volume encryption type.</p>
     */
    inline const Aws::String& GetEncryptionType() const{ return m_encryptionType; }
    inline bool EncryptionTypeHasBeenSet() const { return m_encryptionTypeHasBeenSet; }
    inline void SetEncryptionType(const Aws::String& value) { m_encryptionTypeHasBeenSet = true; m_encryptionType = value; }
    inline void SetEncryptionType(Aws::String&& value) { m_encryptionTypeHasBeenSet = true; m_encryptionType = std::move(value); }
    inline void SetEncryptionType(const char* value) { m_encryptionTypeHasBeenSet = true; m_encryptionType.assign(value); }
    inline VolumeDetail& WithEncryptionType(const Aws::String& value) { SetEncryptionType(value); return *this;}
    inline VolumeDetail& WithEncryptionType(Aws::String&& value) { SetEncryptionType(std::move(value)); return *this;}
    inline VolumeDetail& WithEncryptionType(const char* value) { SetEncryptionType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Snapshot ARN of the EBS volume.</p>
     */
    inline const Aws::String& GetSnapshotArn() const{ return m_snapshotArn; }
    inline bool SnapshotArnHasBeenSet() const { return m_snapshotArnHasBeenSet; }
    inline void SetSnapshotArn(const Aws::String& value) { m_snapshotArnHasBeenSet = true; m_snapshotArn = value; }
    inline void SetSnapshotArn(Aws::String&& value) { m_snapshotArnHasBeenSet = true; m_snapshotArn = std::move(value); }
    inline void SetSnapshotArn(const char* value) { m_snapshotArnHasBeenSet = true; m_snapshotArn.assign(value); }
    inline VolumeDetail& WithSnapshotArn(const Aws::String& value) { SetSnapshotArn(value); return *this;}
    inline VolumeDetail& WithSnapshotArn(Aws::String&& value) { SetSnapshotArn(std::move(value)); return *this;}
    inline VolumeDetail& WithSnapshotArn(const char* value) { SetSnapshotArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>KMS key ARN used to encrypt the EBS volume.</p>
     */
    inline const Aws::String& GetKmsKeyArn() const{ return m_kmsKeyArn; }
    inline bool KmsKeyArnHasBeenSet() const { return m_kmsKeyArnHasBeenSet; }
    inline void SetKmsKeyArn(const Aws::String& value) { m_kmsKeyArnHasBeenSet = true; m_kmsKeyArn = value; }
    inline void SetKmsKeyArn(Aws::String&& value) { m_kmsKeyArnHasBeenSet = true; m_kmsKeyArn = std::move(value); }
    inline void SetKmsKeyArn(const char* value) { m_kmsKeyArnHasBeenSet = true; m_kmsKeyArn.assign(value); }
    inline VolumeDetail& WithKmsKeyArn(const Aws::String& value) { SetKmsKeyArn(value); return *this;}
    inline VolumeDetail& WithKmsKeyArn(Aws::String&& value) { SetKmsKeyArn(std::move(value)); return *this;}
    inline VolumeDetail& WithKmsKeyArn(const char* value) { SetKmsKeyArn(value); return *this;}
    ///@}
  private:

    Aws::String m_volumeArn;
    bool m_volumeArnHasBeenSet = false;

    Aws::String m_volumeType;
    bool m_volumeTypeHasBeenSet = false;

    Aws::String m_deviceName;
    bool m_deviceNameHasBeenSet = false;

    int m_volumeSizeInGB;
    bool m_volumeSizeInGBHasBeenSet = false;

    Aws::String m_encryptionType;
    bool m_encryptionTypeHasBeenSet = false;

    Aws::String m_snapshotArn;
    bool m_snapshotArnHasBeenSet = false;

    Aws::String m_kmsKeyArn;
    bool m_kmsKeyArnHasBeenSet = false;
  };

} // namespace Model
} // namespace GuardDuty
} // namespace Aws
