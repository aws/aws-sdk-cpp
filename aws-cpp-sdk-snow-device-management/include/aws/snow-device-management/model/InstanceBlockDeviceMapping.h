/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/snow-device-management/SnowDeviceManagement_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/snow-device-management/model/EbsInstanceBlockDevice.h>
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
namespace SnowDeviceManagement
{
namespace Model
{

  /**
   * <p>The description of a block device mapping.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/snow-device-management-2021-08-04/InstanceBlockDeviceMapping">AWS
   * API Reference</a></p>
   */
  class InstanceBlockDeviceMapping
  {
  public:
    AWS_SNOWDEVICEMANAGEMENT_API InstanceBlockDeviceMapping();
    AWS_SNOWDEVICEMANAGEMENT_API InstanceBlockDeviceMapping(Aws::Utils::Json::JsonView jsonValue);
    AWS_SNOWDEVICEMANAGEMENT_API InstanceBlockDeviceMapping& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SNOWDEVICEMANAGEMENT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The block device name.</p>
     */
    inline const Aws::String& GetDeviceName() const{ return m_deviceName; }

    /**
     * <p>The block device name.</p>
     */
    inline bool DeviceNameHasBeenSet() const { return m_deviceNameHasBeenSet; }

    /**
     * <p>The block device name.</p>
     */
    inline void SetDeviceName(const Aws::String& value) { m_deviceNameHasBeenSet = true; m_deviceName = value; }

    /**
     * <p>The block device name.</p>
     */
    inline void SetDeviceName(Aws::String&& value) { m_deviceNameHasBeenSet = true; m_deviceName = std::move(value); }

    /**
     * <p>The block device name.</p>
     */
    inline void SetDeviceName(const char* value) { m_deviceNameHasBeenSet = true; m_deviceName.assign(value); }

    /**
     * <p>The block device name.</p>
     */
    inline InstanceBlockDeviceMapping& WithDeviceName(const Aws::String& value) { SetDeviceName(value); return *this;}

    /**
     * <p>The block device name.</p>
     */
    inline InstanceBlockDeviceMapping& WithDeviceName(Aws::String&& value) { SetDeviceName(std::move(value)); return *this;}

    /**
     * <p>The block device name.</p>
     */
    inline InstanceBlockDeviceMapping& WithDeviceName(const char* value) { SetDeviceName(value); return *this;}


    /**
     * <p>The parameters used to automatically set up Amazon Elastic Block Store
     * (Amazon EBS) volumes when the instance is launched. </p>
     */
    inline const EbsInstanceBlockDevice& GetEbs() const{ return m_ebs; }

    /**
     * <p>The parameters used to automatically set up Amazon Elastic Block Store
     * (Amazon EBS) volumes when the instance is launched. </p>
     */
    inline bool EbsHasBeenSet() const { return m_ebsHasBeenSet; }

    /**
     * <p>The parameters used to automatically set up Amazon Elastic Block Store
     * (Amazon EBS) volumes when the instance is launched. </p>
     */
    inline void SetEbs(const EbsInstanceBlockDevice& value) { m_ebsHasBeenSet = true; m_ebs = value; }

    /**
     * <p>The parameters used to automatically set up Amazon Elastic Block Store
     * (Amazon EBS) volumes when the instance is launched. </p>
     */
    inline void SetEbs(EbsInstanceBlockDevice&& value) { m_ebsHasBeenSet = true; m_ebs = std::move(value); }

    /**
     * <p>The parameters used to automatically set up Amazon Elastic Block Store
     * (Amazon EBS) volumes when the instance is launched. </p>
     */
    inline InstanceBlockDeviceMapping& WithEbs(const EbsInstanceBlockDevice& value) { SetEbs(value); return *this;}

    /**
     * <p>The parameters used to automatically set up Amazon Elastic Block Store
     * (Amazon EBS) volumes when the instance is launched. </p>
     */
    inline InstanceBlockDeviceMapping& WithEbs(EbsInstanceBlockDevice&& value) { SetEbs(std::move(value)); return *this;}

  private:

    Aws::String m_deviceName;
    bool m_deviceNameHasBeenSet = false;

    EbsInstanceBlockDevice m_ebs;
    bool m_ebsHasBeenSet = false;
  };

} // namespace Model
} // namespace SnowDeviceManagement
} // namespace Aws
