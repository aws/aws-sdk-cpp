/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/panorama/Panorama_EXPORTS.h>
#include <aws/panorama/model/DeviceBrand.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/panorama/model/DeviceStatus.h>
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
namespace Panorama
{
namespace Model
{

  /**
   * <p>A device.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/panorama-2019-07-24/Device">AWS API
   * Reference</a></p>
   */
  class AWS_PANORAMA_API Device
  {
  public:
    Device();
    Device(Aws::Utils::Json::JsonView jsonValue);
    Device& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The device's maker.</p>
     */
    inline const DeviceBrand& GetBrand() const{ return m_brand; }

    /**
     * <p>The device's maker.</p>
     */
    inline bool BrandHasBeenSet() const { return m_brandHasBeenSet; }

    /**
     * <p>The device's maker.</p>
     */
    inline void SetBrand(const DeviceBrand& value) { m_brandHasBeenSet = true; m_brand = value; }

    /**
     * <p>The device's maker.</p>
     */
    inline void SetBrand(DeviceBrand&& value) { m_brandHasBeenSet = true; m_brand = std::move(value); }

    /**
     * <p>The device's maker.</p>
     */
    inline Device& WithBrand(const DeviceBrand& value) { SetBrand(value); return *this;}

    /**
     * <p>The device's maker.</p>
     */
    inline Device& WithBrand(DeviceBrand&& value) { SetBrand(std::move(value)); return *this;}


    /**
     * <p>When the device was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedTime() const{ return m_createdTime; }

    /**
     * <p>When the device was created.</p>
     */
    inline bool CreatedTimeHasBeenSet() const { return m_createdTimeHasBeenSet; }

    /**
     * <p>When the device was created.</p>
     */
    inline void SetCreatedTime(const Aws::Utils::DateTime& value) { m_createdTimeHasBeenSet = true; m_createdTime = value; }

    /**
     * <p>When the device was created.</p>
     */
    inline void SetCreatedTime(Aws::Utils::DateTime&& value) { m_createdTimeHasBeenSet = true; m_createdTime = std::move(value); }

    /**
     * <p>When the device was created.</p>
     */
    inline Device& WithCreatedTime(const Aws::Utils::DateTime& value) { SetCreatedTime(value); return *this;}

    /**
     * <p>When the device was created.</p>
     */
    inline Device& WithCreatedTime(Aws::Utils::DateTime&& value) { SetCreatedTime(std::move(value)); return *this;}


    /**
     * <p>The device's ID.</p>
     */
    inline const Aws::String& GetDeviceId() const{ return m_deviceId; }

    /**
     * <p>The device's ID.</p>
     */
    inline bool DeviceIdHasBeenSet() const { return m_deviceIdHasBeenSet; }

    /**
     * <p>The device's ID.</p>
     */
    inline void SetDeviceId(const Aws::String& value) { m_deviceIdHasBeenSet = true; m_deviceId = value; }

    /**
     * <p>The device's ID.</p>
     */
    inline void SetDeviceId(Aws::String&& value) { m_deviceIdHasBeenSet = true; m_deviceId = std::move(value); }

    /**
     * <p>The device's ID.</p>
     */
    inline void SetDeviceId(const char* value) { m_deviceIdHasBeenSet = true; m_deviceId.assign(value); }

    /**
     * <p>The device's ID.</p>
     */
    inline Device& WithDeviceId(const Aws::String& value) { SetDeviceId(value); return *this;}

    /**
     * <p>The device's ID.</p>
     */
    inline Device& WithDeviceId(Aws::String&& value) { SetDeviceId(std::move(value)); return *this;}

    /**
     * <p>The device's ID.</p>
     */
    inline Device& WithDeviceId(const char* value) { SetDeviceId(value); return *this;}


    /**
     * <p>When the device was updated.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdatedTime() const{ return m_lastUpdatedTime; }

    /**
     * <p>When the device was updated.</p>
     */
    inline bool LastUpdatedTimeHasBeenSet() const { return m_lastUpdatedTimeHasBeenSet; }

    /**
     * <p>When the device was updated.</p>
     */
    inline void SetLastUpdatedTime(const Aws::Utils::DateTime& value) { m_lastUpdatedTimeHasBeenSet = true; m_lastUpdatedTime = value; }

    /**
     * <p>When the device was updated.</p>
     */
    inline void SetLastUpdatedTime(Aws::Utils::DateTime&& value) { m_lastUpdatedTimeHasBeenSet = true; m_lastUpdatedTime = std::move(value); }

    /**
     * <p>When the device was updated.</p>
     */
    inline Device& WithLastUpdatedTime(const Aws::Utils::DateTime& value) { SetLastUpdatedTime(value); return *this;}

    /**
     * <p>When the device was updated.</p>
     */
    inline Device& WithLastUpdatedTime(Aws::Utils::DateTime&& value) { SetLastUpdatedTime(std::move(value)); return *this;}


    /**
     * <p>The device's lease expiration time.</p>
     */
    inline const Aws::Utils::DateTime& GetLeaseExpirationTime() const{ return m_leaseExpirationTime; }

    /**
     * <p>The device's lease expiration time.</p>
     */
    inline bool LeaseExpirationTimeHasBeenSet() const { return m_leaseExpirationTimeHasBeenSet; }

    /**
     * <p>The device's lease expiration time.</p>
     */
    inline void SetLeaseExpirationTime(const Aws::Utils::DateTime& value) { m_leaseExpirationTimeHasBeenSet = true; m_leaseExpirationTime = value; }

    /**
     * <p>The device's lease expiration time.</p>
     */
    inline void SetLeaseExpirationTime(Aws::Utils::DateTime&& value) { m_leaseExpirationTimeHasBeenSet = true; m_leaseExpirationTime = std::move(value); }

    /**
     * <p>The device's lease expiration time.</p>
     */
    inline Device& WithLeaseExpirationTime(const Aws::Utils::DateTime& value) { SetLeaseExpirationTime(value); return *this;}

    /**
     * <p>The device's lease expiration time.</p>
     */
    inline Device& WithLeaseExpirationTime(Aws::Utils::DateTime&& value) { SetLeaseExpirationTime(std::move(value)); return *this;}


    /**
     * <p>The device's name.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The device's name.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The device's name.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The device's name.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The device's name.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The device's name.</p>
     */
    inline Device& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The device's name.</p>
     */
    inline Device& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The device's name.</p>
     */
    inline Device& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The device's provisioning status.</p>
     */
    inline const DeviceStatus& GetProvisioningStatus() const{ return m_provisioningStatus; }

    /**
     * <p>The device's provisioning status.</p>
     */
    inline bool ProvisioningStatusHasBeenSet() const { return m_provisioningStatusHasBeenSet; }

    /**
     * <p>The device's provisioning status.</p>
     */
    inline void SetProvisioningStatus(const DeviceStatus& value) { m_provisioningStatusHasBeenSet = true; m_provisioningStatus = value; }

    /**
     * <p>The device's provisioning status.</p>
     */
    inline void SetProvisioningStatus(DeviceStatus&& value) { m_provisioningStatusHasBeenSet = true; m_provisioningStatus = std::move(value); }

    /**
     * <p>The device's provisioning status.</p>
     */
    inline Device& WithProvisioningStatus(const DeviceStatus& value) { SetProvisioningStatus(value); return *this;}

    /**
     * <p>The device's provisioning status.</p>
     */
    inline Device& WithProvisioningStatus(DeviceStatus&& value) { SetProvisioningStatus(std::move(value)); return *this;}

  private:

    DeviceBrand m_brand;
    bool m_brandHasBeenSet;

    Aws::Utils::DateTime m_createdTime;
    bool m_createdTimeHasBeenSet;

    Aws::String m_deviceId;
    bool m_deviceIdHasBeenSet;

    Aws::Utils::DateTime m_lastUpdatedTime;
    bool m_lastUpdatedTimeHasBeenSet;

    Aws::Utils::DateTime m_leaseExpirationTime;
    bool m_leaseExpirationTimeHasBeenSet;

    Aws::String m_name;
    bool m_nameHasBeenSet;

    DeviceStatus m_provisioningStatus;
    bool m_provisioningStatusHasBeenSet;
  };

} // namespace Model
} // namespace Panorama
} // namespace Aws
