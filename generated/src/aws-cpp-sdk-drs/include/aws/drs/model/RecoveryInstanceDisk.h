/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/drs/Drs_EXPORTS.h>
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
namespace drs
{
namespace Model
{

  /**
   * <p>An object representing a block storage device on the Recovery
   * Instance.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/drs-2020-02-26/RecoveryInstanceDisk">AWS
   * API Reference</a></p>
   */
  class RecoveryInstanceDisk
  {
  public:
    AWS_DRS_API RecoveryInstanceDisk();
    AWS_DRS_API RecoveryInstanceDisk(Aws::Utils::Json::JsonView jsonValue);
    AWS_DRS_API RecoveryInstanceDisk& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DRS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The amount of storage on the disk in bytes.</p>
     */
    inline long long GetBytes() const{ return m_bytes; }

    /**
     * <p>The amount of storage on the disk in bytes.</p>
     */
    inline bool BytesHasBeenSet() const { return m_bytesHasBeenSet; }

    /**
     * <p>The amount of storage on the disk in bytes.</p>
     */
    inline void SetBytes(long long value) { m_bytesHasBeenSet = true; m_bytes = value; }

    /**
     * <p>The amount of storage on the disk in bytes.</p>
     */
    inline RecoveryInstanceDisk& WithBytes(long long value) { SetBytes(value); return *this;}


    /**
     * <p>The EBS Volume ID of this disk.</p>
     */
    inline const Aws::String& GetEbsVolumeID() const{ return m_ebsVolumeID; }

    /**
     * <p>The EBS Volume ID of this disk.</p>
     */
    inline bool EbsVolumeIDHasBeenSet() const { return m_ebsVolumeIDHasBeenSet; }

    /**
     * <p>The EBS Volume ID of this disk.</p>
     */
    inline void SetEbsVolumeID(const Aws::String& value) { m_ebsVolumeIDHasBeenSet = true; m_ebsVolumeID = value; }

    /**
     * <p>The EBS Volume ID of this disk.</p>
     */
    inline void SetEbsVolumeID(Aws::String&& value) { m_ebsVolumeIDHasBeenSet = true; m_ebsVolumeID = std::move(value); }

    /**
     * <p>The EBS Volume ID of this disk.</p>
     */
    inline void SetEbsVolumeID(const char* value) { m_ebsVolumeIDHasBeenSet = true; m_ebsVolumeID.assign(value); }

    /**
     * <p>The EBS Volume ID of this disk.</p>
     */
    inline RecoveryInstanceDisk& WithEbsVolumeID(const Aws::String& value) { SetEbsVolumeID(value); return *this;}

    /**
     * <p>The EBS Volume ID of this disk.</p>
     */
    inline RecoveryInstanceDisk& WithEbsVolumeID(Aws::String&& value) { SetEbsVolumeID(std::move(value)); return *this;}

    /**
     * <p>The EBS Volume ID of this disk.</p>
     */
    inline RecoveryInstanceDisk& WithEbsVolumeID(const char* value) { SetEbsVolumeID(value); return *this;}


    /**
     * <p>The internal device name of this disk. This is the name that is visible on
     * the machine itself and not from the EC2 console.</p>
     */
    inline const Aws::String& GetInternalDeviceName() const{ return m_internalDeviceName; }

    /**
     * <p>The internal device name of this disk. This is the name that is visible on
     * the machine itself and not from the EC2 console.</p>
     */
    inline bool InternalDeviceNameHasBeenSet() const { return m_internalDeviceNameHasBeenSet; }

    /**
     * <p>The internal device name of this disk. This is the name that is visible on
     * the machine itself and not from the EC2 console.</p>
     */
    inline void SetInternalDeviceName(const Aws::String& value) { m_internalDeviceNameHasBeenSet = true; m_internalDeviceName = value; }

    /**
     * <p>The internal device name of this disk. This is the name that is visible on
     * the machine itself and not from the EC2 console.</p>
     */
    inline void SetInternalDeviceName(Aws::String&& value) { m_internalDeviceNameHasBeenSet = true; m_internalDeviceName = std::move(value); }

    /**
     * <p>The internal device name of this disk. This is the name that is visible on
     * the machine itself and not from the EC2 console.</p>
     */
    inline void SetInternalDeviceName(const char* value) { m_internalDeviceNameHasBeenSet = true; m_internalDeviceName.assign(value); }

    /**
     * <p>The internal device name of this disk. This is the name that is visible on
     * the machine itself and not from the EC2 console.</p>
     */
    inline RecoveryInstanceDisk& WithInternalDeviceName(const Aws::String& value) { SetInternalDeviceName(value); return *this;}

    /**
     * <p>The internal device name of this disk. This is the name that is visible on
     * the machine itself and not from the EC2 console.</p>
     */
    inline RecoveryInstanceDisk& WithInternalDeviceName(Aws::String&& value) { SetInternalDeviceName(std::move(value)); return *this;}

    /**
     * <p>The internal device name of this disk. This is the name that is visible on
     * the machine itself and not from the EC2 console.</p>
     */
    inline RecoveryInstanceDisk& WithInternalDeviceName(const char* value) { SetInternalDeviceName(value); return *this;}

  private:

    long long m_bytes;
    bool m_bytesHasBeenSet = false;

    Aws::String m_ebsVolumeID;
    bool m_ebsVolumeIDHasBeenSet = false;

    Aws::String m_internalDeviceName;
    bool m_internalDeviceNameHasBeenSet = false;
  };

} // namespace Model
} // namespace drs
} // namespace Aws
