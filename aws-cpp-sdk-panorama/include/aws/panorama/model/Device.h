/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/panorama/Panorama_EXPORTS.h>
#include <aws/panorama/model/DeviceBrand.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/panorama/model/DeviceAggregatedStatus.h>
#include <aws/panorama/model/LatestDeviceJob.h>
#include <aws/panorama/model/DeviceStatus.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/panorama/model/DeviceType.h>
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
  class Device
  {
  public:
    AWS_PANORAMA_API Device();
    AWS_PANORAMA_API Device(Aws::Utils::Json::JsonView jsonValue);
    AWS_PANORAMA_API Device& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PANORAMA_API Aws::Utils::Json::JsonValue Jsonize() const;


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
     * <p>A device's current software.</p>
     */
    inline const Aws::String& GetCurrentSoftware() const{ return m_currentSoftware; }

    /**
     * <p>A device's current software.</p>
     */
    inline bool CurrentSoftwareHasBeenSet() const { return m_currentSoftwareHasBeenSet; }

    /**
     * <p>A device's current software.</p>
     */
    inline void SetCurrentSoftware(const Aws::String& value) { m_currentSoftwareHasBeenSet = true; m_currentSoftware = value; }

    /**
     * <p>A device's current software.</p>
     */
    inline void SetCurrentSoftware(Aws::String&& value) { m_currentSoftwareHasBeenSet = true; m_currentSoftware = std::move(value); }

    /**
     * <p>A device's current software.</p>
     */
    inline void SetCurrentSoftware(const char* value) { m_currentSoftwareHasBeenSet = true; m_currentSoftware.assign(value); }

    /**
     * <p>A device's current software.</p>
     */
    inline Device& WithCurrentSoftware(const Aws::String& value) { SetCurrentSoftware(value); return *this;}

    /**
     * <p>A device's current software.</p>
     */
    inline Device& WithCurrentSoftware(Aws::String&& value) { SetCurrentSoftware(std::move(value)); return *this;}

    /**
     * <p>A device's current software.</p>
     */
    inline Device& WithCurrentSoftware(const char* value) { SetCurrentSoftware(value); return *this;}


    /**
     * <p>A description for the device.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>A description for the device.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>A description for the device.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>A description for the device.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>A description for the device.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>A description for the device.</p>
     */
    inline Device& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>A description for the device.</p>
     */
    inline Device& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>A description for the device.</p>
     */
    inline Device& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>A device's aggregated status. Including the device's connection status,
     * provisioning status, and lease status.</p>
     */
    inline const DeviceAggregatedStatus& GetDeviceAggregatedStatus() const{ return m_deviceAggregatedStatus; }

    /**
     * <p>A device's aggregated status. Including the device's connection status,
     * provisioning status, and lease status.</p>
     */
    inline bool DeviceAggregatedStatusHasBeenSet() const { return m_deviceAggregatedStatusHasBeenSet; }

    /**
     * <p>A device's aggregated status. Including the device's connection status,
     * provisioning status, and lease status.</p>
     */
    inline void SetDeviceAggregatedStatus(const DeviceAggregatedStatus& value) { m_deviceAggregatedStatusHasBeenSet = true; m_deviceAggregatedStatus = value; }

    /**
     * <p>A device's aggregated status. Including the device's connection status,
     * provisioning status, and lease status.</p>
     */
    inline void SetDeviceAggregatedStatus(DeviceAggregatedStatus&& value) { m_deviceAggregatedStatusHasBeenSet = true; m_deviceAggregatedStatus = std::move(value); }

    /**
     * <p>A device's aggregated status. Including the device's connection status,
     * provisioning status, and lease status.</p>
     */
    inline Device& WithDeviceAggregatedStatus(const DeviceAggregatedStatus& value) { SetDeviceAggregatedStatus(value); return *this;}

    /**
     * <p>A device's aggregated status. Including the device's connection status,
     * provisioning status, and lease status.</p>
     */
    inline Device& WithDeviceAggregatedStatus(DeviceAggregatedStatus&& value) { SetDeviceAggregatedStatus(std::move(value)); return *this;}


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
     * <p>A device's latest job. Includes the target image version, and the update job
     * status.</p>
     */
    inline const LatestDeviceJob& GetLatestDeviceJob() const{ return m_latestDeviceJob; }

    /**
     * <p>A device's latest job. Includes the target image version, and the update job
     * status.</p>
     */
    inline bool LatestDeviceJobHasBeenSet() const { return m_latestDeviceJobHasBeenSet; }

    /**
     * <p>A device's latest job. Includes the target image version, and the update job
     * status.</p>
     */
    inline void SetLatestDeviceJob(const LatestDeviceJob& value) { m_latestDeviceJobHasBeenSet = true; m_latestDeviceJob = value; }

    /**
     * <p>A device's latest job. Includes the target image version, and the update job
     * status.</p>
     */
    inline void SetLatestDeviceJob(LatestDeviceJob&& value) { m_latestDeviceJobHasBeenSet = true; m_latestDeviceJob = std::move(value); }

    /**
     * <p>A device's latest job. Includes the target image version, and the update job
     * status.</p>
     */
    inline Device& WithLatestDeviceJob(const LatestDeviceJob& value) { SetLatestDeviceJob(value); return *this;}

    /**
     * <p>A device's latest job. Includes the target image version, and the update job
     * status.</p>
     */
    inline Device& WithLatestDeviceJob(LatestDeviceJob&& value) { SetLatestDeviceJob(std::move(value)); return *this;}


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


    /**
     * <p>The device's tags.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }

    /**
     * <p>The device's tags.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>The device's tags.</p>
     */
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>The device's tags.</p>
     */
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>The device's tags.</p>
     */
    inline Device& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}

    /**
     * <p>The device's tags.</p>
     */
    inline Device& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>The device's tags.</p>
     */
    inline Device& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

    /**
     * <p>The device's tags.</p>
     */
    inline Device& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>The device's tags.</p>
     */
    inline Device& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The device's tags.</p>
     */
    inline Device& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>The device's tags.</p>
     */
    inline Device& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The device's tags.</p>
     */
    inline Device& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>The device's tags.</p>
     */
    inline Device& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }


    /**
     * <p>The device's type.</p>
     */
    inline const DeviceType& GetType() const{ return m_type; }

    /**
     * <p>The device's type.</p>
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p>The device's type.</p>
     */
    inline void SetType(const DeviceType& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>The device's type.</p>
     */
    inline void SetType(DeviceType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p>The device's type.</p>
     */
    inline Device& WithType(const DeviceType& value) { SetType(value); return *this;}

    /**
     * <p>The device's type.</p>
     */
    inline Device& WithType(DeviceType&& value) { SetType(std::move(value)); return *this;}

  private:

    DeviceBrand m_brand;
    bool m_brandHasBeenSet = false;

    Aws::Utils::DateTime m_createdTime;
    bool m_createdTimeHasBeenSet = false;

    Aws::String m_currentSoftware;
    bool m_currentSoftwareHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    DeviceAggregatedStatus m_deviceAggregatedStatus;
    bool m_deviceAggregatedStatusHasBeenSet = false;

    Aws::String m_deviceId;
    bool m_deviceIdHasBeenSet = false;

    Aws::Utils::DateTime m_lastUpdatedTime;
    bool m_lastUpdatedTimeHasBeenSet = false;

    LatestDeviceJob m_latestDeviceJob;
    bool m_latestDeviceJobHasBeenSet = false;

    Aws::Utils::DateTime m_leaseExpirationTime;
    bool m_leaseExpirationTimeHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    DeviceStatus m_provisioningStatus;
    bool m_provisioningStatusHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;

    DeviceType m_type;
    bool m_typeHasBeenSet = false;
  };

} // namespace Model
} // namespace Panorama
} // namespace Aws
