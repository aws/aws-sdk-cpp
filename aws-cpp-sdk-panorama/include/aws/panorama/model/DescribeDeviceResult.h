/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/panorama/Panorama_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/panorama/model/DeviceBrand.h>
#include <aws/core/utils/DateTime.h>
#include <aws/panorama/model/NetworkStatus.h>
#include <aws/panorama/model/DeviceAggregatedStatus.h>
#include <aws/panorama/model/DeviceConnectionStatus.h>
#include <aws/panorama/model/LatestDeviceJob.h>
#include <aws/panorama/model/NetworkPayload.h>
#include <aws/panorama/model/DeviceStatus.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/panorama/model/DeviceType.h>
#include <aws/panorama/model/AlternateSoftwareMetadata.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace Panorama
{
namespace Model
{
  class DescribeDeviceResult
  {
  public:
    AWS_PANORAMA_API DescribeDeviceResult();
    AWS_PANORAMA_API DescribeDeviceResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_PANORAMA_API DescribeDeviceResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Beta software releases available for the device.</p>
     */
    inline const Aws::Vector<AlternateSoftwareMetadata>& GetAlternateSoftwares() const{ return m_alternateSoftwares; }

    /**
     * <p>Beta software releases available for the device.</p>
     */
    inline void SetAlternateSoftwares(const Aws::Vector<AlternateSoftwareMetadata>& value) { m_alternateSoftwares = value; }

    /**
     * <p>Beta software releases available for the device.</p>
     */
    inline void SetAlternateSoftwares(Aws::Vector<AlternateSoftwareMetadata>&& value) { m_alternateSoftwares = std::move(value); }

    /**
     * <p>Beta software releases available for the device.</p>
     */
    inline DescribeDeviceResult& WithAlternateSoftwares(const Aws::Vector<AlternateSoftwareMetadata>& value) { SetAlternateSoftwares(value); return *this;}

    /**
     * <p>Beta software releases available for the device.</p>
     */
    inline DescribeDeviceResult& WithAlternateSoftwares(Aws::Vector<AlternateSoftwareMetadata>&& value) { SetAlternateSoftwares(std::move(value)); return *this;}

    /**
     * <p>Beta software releases available for the device.</p>
     */
    inline DescribeDeviceResult& AddAlternateSoftwares(const AlternateSoftwareMetadata& value) { m_alternateSoftwares.push_back(value); return *this; }

    /**
     * <p>Beta software releases available for the device.</p>
     */
    inline DescribeDeviceResult& AddAlternateSoftwares(AlternateSoftwareMetadata&& value) { m_alternateSoftwares.push_back(std::move(value)); return *this; }


    /**
     * <p>The device's ARN.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p>The device's ARN.</p>
     */
    inline void SetArn(const Aws::String& value) { m_arn = value; }

    /**
     * <p>The device's ARN.</p>
     */
    inline void SetArn(Aws::String&& value) { m_arn = std::move(value); }

    /**
     * <p>The device's ARN.</p>
     */
    inline void SetArn(const char* value) { m_arn.assign(value); }

    /**
     * <p>The device's ARN.</p>
     */
    inline DescribeDeviceResult& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p>The device's ARN.</p>
     */
    inline DescribeDeviceResult& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p>The device's ARN.</p>
     */
    inline DescribeDeviceResult& WithArn(const char* value) { SetArn(value); return *this;}


    /**
     * <p>The device's maker.</p>
     */
    inline const DeviceBrand& GetBrand() const{ return m_brand; }

    /**
     * <p>The device's maker.</p>
     */
    inline void SetBrand(const DeviceBrand& value) { m_brand = value; }

    /**
     * <p>The device's maker.</p>
     */
    inline void SetBrand(DeviceBrand&& value) { m_brand = std::move(value); }

    /**
     * <p>The device's maker.</p>
     */
    inline DescribeDeviceResult& WithBrand(const DeviceBrand& value) { SetBrand(value); return *this;}

    /**
     * <p>The device's maker.</p>
     */
    inline DescribeDeviceResult& WithBrand(DeviceBrand&& value) { SetBrand(std::move(value)); return *this;}


    /**
     * <p>When the device was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedTime() const{ return m_createdTime; }

    /**
     * <p>When the device was created.</p>
     */
    inline void SetCreatedTime(const Aws::Utils::DateTime& value) { m_createdTime = value; }

    /**
     * <p>When the device was created.</p>
     */
    inline void SetCreatedTime(Aws::Utils::DateTime&& value) { m_createdTime = std::move(value); }

    /**
     * <p>When the device was created.</p>
     */
    inline DescribeDeviceResult& WithCreatedTime(const Aws::Utils::DateTime& value) { SetCreatedTime(value); return *this;}

    /**
     * <p>When the device was created.</p>
     */
    inline DescribeDeviceResult& WithCreatedTime(Aws::Utils::DateTime&& value) { SetCreatedTime(std::move(value)); return *this;}


    /**
     * <p>The device's networking status.</p>
     */
    inline const NetworkStatus& GetCurrentNetworkingStatus() const{ return m_currentNetworkingStatus; }

    /**
     * <p>The device's networking status.</p>
     */
    inline void SetCurrentNetworkingStatus(const NetworkStatus& value) { m_currentNetworkingStatus = value; }

    /**
     * <p>The device's networking status.</p>
     */
    inline void SetCurrentNetworkingStatus(NetworkStatus&& value) { m_currentNetworkingStatus = std::move(value); }

    /**
     * <p>The device's networking status.</p>
     */
    inline DescribeDeviceResult& WithCurrentNetworkingStatus(const NetworkStatus& value) { SetCurrentNetworkingStatus(value); return *this;}

    /**
     * <p>The device's networking status.</p>
     */
    inline DescribeDeviceResult& WithCurrentNetworkingStatus(NetworkStatus&& value) { SetCurrentNetworkingStatus(std::move(value)); return *this;}


    /**
     * <p>The device's current software version.</p>
     */
    inline const Aws::String& GetCurrentSoftware() const{ return m_currentSoftware; }

    /**
     * <p>The device's current software version.</p>
     */
    inline void SetCurrentSoftware(const Aws::String& value) { m_currentSoftware = value; }

    /**
     * <p>The device's current software version.</p>
     */
    inline void SetCurrentSoftware(Aws::String&& value) { m_currentSoftware = std::move(value); }

    /**
     * <p>The device's current software version.</p>
     */
    inline void SetCurrentSoftware(const char* value) { m_currentSoftware.assign(value); }

    /**
     * <p>The device's current software version.</p>
     */
    inline DescribeDeviceResult& WithCurrentSoftware(const Aws::String& value) { SetCurrentSoftware(value); return *this;}

    /**
     * <p>The device's current software version.</p>
     */
    inline DescribeDeviceResult& WithCurrentSoftware(Aws::String&& value) { SetCurrentSoftware(std::move(value)); return *this;}

    /**
     * <p>The device's current software version.</p>
     */
    inline DescribeDeviceResult& WithCurrentSoftware(const char* value) { SetCurrentSoftware(value); return *this;}


    /**
     * <p>The device's description.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>The device's description.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_description = value; }

    /**
     * <p>The device's description.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_description = std::move(value); }

    /**
     * <p>The device's description.</p>
     */
    inline void SetDescription(const char* value) { m_description.assign(value); }

    /**
     * <p>The device's description.</p>
     */
    inline DescribeDeviceResult& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The device's description.</p>
     */
    inline DescribeDeviceResult& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>The device's description.</p>
     */
    inline DescribeDeviceResult& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>A device's aggregated status. Including the device's connection status,
     * provisioning status, and lease status.</p>
     */
    inline const DeviceAggregatedStatus& GetDeviceAggregatedStatus() const{ return m_deviceAggregatedStatus; }

    /**
     * <p>A device's aggregated status. Including the device's connection status,
     * provisioning status, and lease status.</p>
     */
    inline void SetDeviceAggregatedStatus(const DeviceAggregatedStatus& value) { m_deviceAggregatedStatus = value; }

    /**
     * <p>A device's aggregated status. Including the device's connection status,
     * provisioning status, and lease status.</p>
     */
    inline void SetDeviceAggregatedStatus(DeviceAggregatedStatus&& value) { m_deviceAggregatedStatus = std::move(value); }

    /**
     * <p>A device's aggregated status. Including the device's connection status,
     * provisioning status, and lease status.</p>
     */
    inline DescribeDeviceResult& WithDeviceAggregatedStatus(const DeviceAggregatedStatus& value) { SetDeviceAggregatedStatus(value); return *this;}

    /**
     * <p>A device's aggregated status. Including the device's connection status,
     * provisioning status, and lease status.</p>
     */
    inline DescribeDeviceResult& WithDeviceAggregatedStatus(DeviceAggregatedStatus&& value) { SetDeviceAggregatedStatus(std::move(value)); return *this;}


    /**
     * <p>The device's connection status.</p>
     */
    inline const DeviceConnectionStatus& GetDeviceConnectionStatus() const{ return m_deviceConnectionStatus; }

    /**
     * <p>The device's connection status.</p>
     */
    inline void SetDeviceConnectionStatus(const DeviceConnectionStatus& value) { m_deviceConnectionStatus = value; }

    /**
     * <p>The device's connection status.</p>
     */
    inline void SetDeviceConnectionStatus(DeviceConnectionStatus&& value) { m_deviceConnectionStatus = std::move(value); }

    /**
     * <p>The device's connection status.</p>
     */
    inline DescribeDeviceResult& WithDeviceConnectionStatus(const DeviceConnectionStatus& value) { SetDeviceConnectionStatus(value); return *this;}

    /**
     * <p>The device's connection status.</p>
     */
    inline DescribeDeviceResult& WithDeviceConnectionStatus(DeviceConnectionStatus&& value) { SetDeviceConnectionStatus(std::move(value)); return *this;}


    /**
     * <p>The device's ID.</p>
     */
    inline const Aws::String& GetDeviceId() const{ return m_deviceId; }

    /**
     * <p>The device's ID.</p>
     */
    inline void SetDeviceId(const Aws::String& value) { m_deviceId = value; }

    /**
     * <p>The device's ID.</p>
     */
    inline void SetDeviceId(Aws::String&& value) { m_deviceId = std::move(value); }

    /**
     * <p>The device's ID.</p>
     */
    inline void SetDeviceId(const char* value) { m_deviceId.assign(value); }

    /**
     * <p>The device's ID.</p>
     */
    inline DescribeDeviceResult& WithDeviceId(const Aws::String& value) { SetDeviceId(value); return *this;}

    /**
     * <p>The device's ID.</p>
     */
    inline DescribeDeviceResult& WithDeviceId(Aws::String&& value) { SetDeviceId(std::move(value)); return *this;}

    /**
     * <p>The device's ID.</p>
     */
    inline DescribeDeviceResult& WithDeviceId(const char* value) { SetDeviceId(value); return *this;}


    /**
     * <p>The most recent beta software release.</p>
     */
    inline const Aws::String& GetLatestAlternateSoftware() const{ return m_latestAlternateSoftware; }

    /**
     * <p>The most recent beta software release.</p>
     */
    inline void SetLatestAlternateSoftware(const Aws::String& value) { m_latestAlternateSoftware = value; }

    /**
     * <p>The most recent beta software release.</p>
     */
    inline void SetLatestAlternateSoftware(Aws::String&& value) { m_latestAlternateSoftware = std::move(value); }

    /**
     * <p>The most recent beta software release.</p>
     */
    inline void SetLatestAlternateSoftware(const char* value) { m_latestAlternateSoftware.assign(value); }

    /**
     * <p>The most recent beta software release.</p>
     */
    inline DescribeDeviceResult& WithLatestAlternateSoftware(const Aws::String& value) { SetLatestAlternateSoftware(value); return *this;}

    /**
     * <p>The most recent beta software release.</p>
     */
    inline DescribeDeviceResult& WithLatestAlternateSoftware(Aws::String&& value) { SetLatestAlternateSoftware(std::move(value)); return *this;}

    /**
     * <p>The most recent beta software release.</p>
     */
    inline DescribeDeviceResult& WithLatestAlternateSoftware(const char* value) { SetLatestAlternateSoftware(value); return *this;}


    /**
     * <p>A device's latest job. Includes the target image version, and the job
     * status.</p>
     */
    inline const LatestDeviceJob& GetLatestDeviceJob() const{ return m_latestDeviceJob; }

    /**
     * <p>A device's latest job. Includes the target image version, and the job
     * status.</p>
     */
    inline void SetLatestDeviceJob(const LatestDeviceJob& value) { m_latestDeviceJob = value; }

    /**
     * <p>A device's latest job. Includes the target image version, and the job
     * status.</p>
     */
    inline void SetLatestDeviceJob(LatestDeviceJob&& value) { m_latestDeviceJob = std::move(value); }

    /**
     * <p>A device's latest job. Includes the target image version, and the job
     * status.</p>
     */
    inline DescribeDeviceResult& WithLatestDeviceJob(const LatestDeviceJob& value) { SetLatestDeviceJob(value); return *this;}

    /**
     * <p>A device's latest job. Includes the target image version, and the job
     * status.</p>
     */
    inline DescribeDeviceResult& WithLatestDeviceJob(LatestDeviceJob&& value) { SetLatestDeviceJob(std::move(value)); return *this;}


    /**
     * <p>The latest software version available for the device.</p>
     */
    inline const Aws::String& GetLatestSoftware() const{ return m_latestSoftware; }

    /**
     * <p>The latest software version available for the device.</p>
     */
    inline void SetLatestSoftware(const Aws::String& value) { m_latestSoftware = value; }

    /**
     * <p>The latest software version available for the device.</p>
     */
    inline void SetLatestSoftware(Aws::String&& value) { m_latestSoftware = std::move(value); }

    /**
     * <p>The latest software version available for the device.</p>
     */
    inline void SetLatestSoftware(const char* value) { m_latestSoftware.assign(value); }

    /**
     * <p>The latest software version available for the device.</p>
     */
    inline DescribeDeviceResult& WithLatestSoftware(const Aws::String& value) { SetLatestSoftware(value); return *this;}

    /**
     * <p>The latest software version available for the device.</p>
     */
    inline DescribeDeviceResult& WithLatestSoftware(Aws::String&& value) { SetLatestSoftware(std::move(value)); return *this;}

    /**
     * <p>The latest software version available for the device.</p>
     */
    inline DescribeDeviceResult& WithLatestSoftware(const char* value) { SetLatestSoftware(value); return *this;}


    /**
     * <p>The device's lease expiration time.</p>
     */
    inline const Aws::Utils::DateTime& GetLeaseExpirationTime() const{ return m_leaseExpirationTime; }

    /**
     * <p>The device's lease expiration time.</p>
     */
    inline void SetLeaseExpirationTime(const Aws::Utils::DateTime& value) { m_leaseExpirationTime = value; }

    /**
     * <p>The device's lease expiration time.</p>
     */
    inline void SetLeaseExpirationTime(Aws::Utils::DateTime&& value) { m_leaseExpirationTime = std::move(value); }

    /**
     * <p>The device's lease expiration time.</p>
     */
    inline DescribeDeviceResult& WithLeaseExpirationTime(const Aws::Utils::DateTime& value) { SetLeaseExpirationTime(value); return *this;}

    /**
     * <p>The device's lease expiration time.</p>
     */
    inline DescribeDeviceResult& WithLeaseExpirationTime(Aws::Utils::DateTime&& value) { SetLeaseExpirationTime(std::move(value)); return *this;}


    /**
     * <p>The device's name.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The device's name.</p>
     */
    inline void SetName(const Aws::String& value) { m_name = value; }

    /**
     * <p>The device's name.</p>
     */
    inline void SetName(Aws::String&& value) { m_name = std::move(value); }

    /**
     * <p>The device's name.</p>
     */
    inline void SetName(const char* value) { m_name.assign(value); }

    /**
     * <p>The device's name.</p>
     */
    inline DescribeDeviceResult& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The device's name.</p>
     */
    inline DescribeDeviceResult& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The device's name.</p>
     */
    inline DescribeDeviceResult& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The device's networking configuration.</p>
     */
    inline const NetworkPayload& GetNetworkingConfiguration() const{ return m_networkingConfiguration; }

    /**
     * <p>The device's networking configuration.</p>
     */
    inline void SetNetworkingConfiguration(const NetworkPayload& value) { m_networkingConfiguration = value; }

    /**
     * <p>The device's networking configuration.</p>
     */
    inline void SetNetworkingConfiguration(NetworkPayload&& value) { m_networkingConfiguration = std::move(value); }

    /**
     * <p>The device's networking configuration.</p>
     */
    inline DescribeDeviceResult& WithNetworkingConfiguration(const NetworkPayload& value) { SetNetworkingConfiguration(value); return *this;}

    /**
     * <p>The device's networking configuration.</p>
     */
    inline DescribeDeviceResult& WithNetworkingConfiguration(NetworkPayload&& value) { SetNetworkingConfiguration(std::move(value)); return *this;}


    /**
     * <p>The device's provisioning status.</p>
     */
    inline const DeviceStatus& GetProvisioningStatus() const{ return m_provisioningStatus; }

    /**
     * <p>The device's provisioning status.</p>
     */
    inline void SetProvisioningStatus(const DeviceStatus& value) { m_provisioningStatus = value; }

    /**
     * <p>The device's provisioning status.</p>
     */
    inline void SetProvisioningStatus(DeviceStatus&& value) { m_provisioningStatus = std::move(value); }

    /**
     * <p>The device's provisioning status.</p>
     */
    inline DescribeDeviceResult& WithProvisioningStatus(const DeviceStatus& value) { SetProvisioningStatus(value); return *this;}

    /**
     * <p>The device's provisioning status.</p>
     */
    inline DescribeDeviceResult& WithProvisioningStatus(DeviceStatus&& value) { SetProvisioningStatus(std::move(value)); return *this;}


    /**
     * <p>The device's serial number.</p>
     */
    inline const Aws::String& GetSerialNumber() const{ return m_serialNumber; }

    /**
     * <p>The device's serial number.</p>
     */
    inline void SetSerialNumber(const Aws::String& value) { m_serialNumber = value; }

    /**
     * <p>The device's serial number.</p>
     */
    inline void SetSerialNumber(Aws::String&& value) { m_serialNumber = std::move(value); }

    /**
     * <p>The device's serial number.</p>
     */
    inline void SetSerialNumber(const char* value) { m_serialNumber.assign(value); }

    /**
     * <p>The device's serial number.</p>
     */
    inline DescribeDeviceResult& WithSerialNumber(const Aws::String& value) { SetSerialNumber(value); return *this;}

    /**
     * <p>The device's serial number.</p>
     */
    inline DescribeDeviceResult& WithSerialNumber(Aws::String&& value) { SetSerialNumber(std::move(value)); return *this;}

    /**
     * <p>The device's serial number.</p>
     */
    inline DescribeDeviceResult& WithSerialNumber(const char* value) { SetSerialNumber(value); return *this;}


    /**
     * <p>The device's tags.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }

    /**
     * <p>The device's tags.</p>
     */
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tags = value; }

    /**
     * <p>The device's tags.</p>
     */
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tags = std::move(value); }

    /**
     * <p>The device's tags.</p>
     */
    inline DescribeDeviceResult& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}

    /**
     * <p>The device's tags.</p>
     */
    inline DescribeDeviceResult& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>The device's tags.</p>
     */
    inline DescribeDeviceResult& AddTags(const Aws::String& key, const Aws::String& value) { m_tags.emplace(key, value); return *this; }

    /**
     * <p>The device's tags.</p>
     */
    inline DescribeDeviceResult& AddTags(Aws::String&& key, const Aws::String& value) { m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>The device's tags.</p>
     */
    inline DescribeDeviceResult& AddTags(const Aws::String& key, Aws::String&& value) { m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The device's tags.</p>
     */
    inline DescribeDeviceResult& AddTags(Aws::String&& key, Aws::String&& value) { m_tags.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>The device's tags.</p>
     */
    inline DescribeDeviceResult& AddTags(const char* key, Aws::String&& value) { m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The device's tags.</p>
     */
    inline DescribeDeviceResult& AddTags(Aws::String&& key, const char* value) { m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>The device's tags.</p>
     */
    inline DescribeDeviceResult& AddTags(const char* key, const char* value) { m_tags.emplace(key, value); return *this; }


    /**
     * <p>The device's type.</p>
     */
    inline const DeviceType& GetType() const{ return m_type; }

    /**
     * <p>The device's type.</p>
     */
    inline void SetType(const DeviceType& value) { m_type = value; }

    /**
     * <p>The device's type.</p>
     */
    inline void SetType(DeviceType&& value) { m_type = std::move(value); }

    /**
     * <p>The device's type.</p>
     */
    inline DescribeDeviceResult& WithType(const DeviceType& value) { SetType(value); return *this;}

    /**
     * <p>The device's type.</p>
     */
    inline DescribeDeviceResult& WithType(DeviceType&& value) { SetType(std::move(value)); return *this;}

  private:

    Aws::Vector<AlternateSoftwareMetadata> m_alternateSoftwares;

    Aws::String m_arn;

    DeviceBrand m_brand;

    Aws::Utils::DateTime m_createdTime;

    NetworkStatus m_currentNetworkingStatus;

    Aws::String m_currentSoftware;

    Aws::String m_description;

    DeviceAggregatedStatus m_deviceAggregatedStatus;

    DeviceConnectionStatus m_deviceConnectionStatus;

    Aws::String m_deviceId;

    Aws::String m_latestAlternateSoftware;

    LatestDeviceJob m_latestDeviceJob;

    Aws::String m_latestSoftware;

    Aws::Utils::DateTime m_leaseExpirationTime;

    Aws::String m_name;

    NetworkPayload m_networkingConfiguration;

    DeviceStatus m_provisioningStatus;

    Aws::String m_serialNumber;

    Aws::Map<Aws::String, Aws::String> m_tags;

    DeviceType m_type;
  };

} // namespace Model
} // namespace Panorama
} // namespace Aws
