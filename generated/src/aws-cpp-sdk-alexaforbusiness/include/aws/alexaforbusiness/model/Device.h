/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/alexaforbusiness/AlexaForBusiness_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/alexaforbusiness/model/DeviceStatus.h>
#include <aws/alexaforbusiness/model/DeviceStatusInfo.h>
#include <aws/alexaforbusiness/model/DeviceNetworkProfileInfo.h>
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
namespace AlexaForBusiness
{
namespace Model
{

  /**
   * <p>A device with attributes.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/alexaforbusiness-2017-11-09/Device">AWS
   * API Reference</a></p>
   */
  class Device
  {
  public:
    AWS_ALEXAFORBUSINESS_API Device();
    AWS_ALEXAFORBUSINESS_API Device(Aws::Utils::Json::JsonView jsonValue);
    AWS_ALEXAFORBUSINESS_API Device& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ALEXAFORBUSINESS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The ARN of a device.</p>
     */
    inline const Aws::String& GetDeviceArn() const{ return m_deviceArn; }

    /**
     * <p>The ARN of a device.</p>
     */
    inline bool DeviceArnHasBeenSet() const { return m_deviceArnHasBeenSet; }

    /**
     * <p>The ARN of a device.</p>
     */
    inline void SetDeviceArn(const Aws::String& value) { m_deviceArnHasBeenSet = true; m_deviceArn = value; }

    /**
     * <p>The ARN of a device.</p>
     */
    inline void SetDeviceArn(Aws::String&& value) { m_deviceArnHasBeenSet = true; m_deviceArn = std::move(value); }

    /**
     * <p>The ARN of a device.</p>
     */
    inline void SetDeviceArn(const char* value) { m_deviceArnHasBeenSet = true; m_deviceArn.assign(value); }

    /**
     * <p>The ARN of a device.</p>
     */
    inline Device& WithDeviceArn(const Aws::String& value) { SetDeviceArn(value); return *this;}

    /**
     * <p>The ARN of a device.</p>
     */
    inline Device& WithDeviceArn(Aws::String&& value) { SetDeviceArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of a device.</p>
     */
    inline Device& WithDeviceArn(const char* value) { SetDeviceArn(value); return *this;}


    /**
     * <p>The serial number of a device.</p>
     */
    inline const Aws::String& GetDeviceSerialNumber() const{ return m_deviceSerialNumber; }

    /**
     * <p>The serial number of a device.</p>
     */
    inline bool DeviceSerialNumberHasBeenSet() const { return m_deviceSerialNumberHasBeenSet; }

    /**
     * <p>The serial number of a device.</p>
     */
    inline void SetDeviceSerialNumber(const Aws::String& value) { m_deviceSerialNumberHasBeenSet = true; m_deviceSerialNumber = value; }

    /**
     * <p>The serial number of a device.</p>
     */
    inline void SetDeviceSerialNumber(Aws::String&& value) { m_deviceSerialNumberHasBeenSet = true; m_deviceSerialNumber = std::move(value); }

    /**
     * <p>The serial number of a device.</p>
     */
    inline void SetDeviceSerialNumber(const char* value) { m_deviceSerialNumberHasBeenSet = true; m_deviceSerialNumber.assign(value); }

    /**
     * <p>The serial number of a device.</p>
     */
    inline Device& WithDeviceSerialNumber(const Aws::String& value) { SetDeviceSerialNumber(value); return *this;}

    /**
     * <p>The serial number of a device.</p>
     */
    inline Device& WithDeviceSerialNumber(Aws::String&& value) { SetDeviceSerialNumber(std::move(value)); return *this;}

    /**
     * <p>The serial number of a device.</p>
     */
    inline Device& WithDeviceSerialNumber(const char* value) { SetDeviceSerialNumber(value); return *this;}


    /**
     * <p>The type of a device.</p>
     */
    inline const Aws::String& GetDeviceType() const{ return m_deviceType; }

    /**
     * <p>The type of a device.</p>
     */
    inline bool DeviceTypeHasBeenSet() const { return m_deviceTypeHasBeenSet; }

    /**
     * <p>The type of a device.</p>
     */
    inline void SetDeviceType(const Aws::String& value) { m_deviceTypeHasBeenSet = true; m_deviceType = value; }

    /**
     * <p>The type of a device.</p>
     */
    inline void SetDeviceType(Aws::String&& value) { m_deviceTypeHasBeenSet = true; m_deviceType = std::move(value); }

    /**
     * <p>The type of a device.</p>
     */
    inline void SetDeviceType(const char* value) { m_deviceTypeHasBeenSet = true; m_deviceType.assign(value); }

    /**
     * <p>The type of a device.</p>
     */
    inline Device& WithDeviceType(const Aws::String& value) { SetDeviceType(value); return *this;}

    /**
     * <p>The type of a device.</p>
     */
    inline Device& WithDeviceType(Aws::String&& value) { SetDeviceType(std::move(value)); return *this;}

    /**
     * <p>The type of a device.</p>
     */
    inline Device& WithDeviceType(const char* value) { SetDeviceType(value); return *this;}


    /**
     * <p>The name of a device.</p>
     */
    inline const Aws::String& GetDeviceName() const{ return m_deviceName; }

    /**
     * <p>The name of a device.</p>
     */
    inline bool DeviceNameHasBeenSet() const { return m_deviceNameHasBeenSet; }

    /**
     * <p>The name of a device.</p>
     */
    inline void SetDeviceName(const Aws::String& value) { m_deviceNameHasBeenSet = true; m_deviceName = value; }

    /**
     * <p>The name of a device.</p>
     */
    inline void SetDeviceName(Aws::String&& value) { m_deviceNameHasBeenSet = true; m_deviceName = std::move(value); }

    /**
     * <p>The name of a device.</p>
     */
    inline void SetDeviceName(const char* value) { m_deviceNameHasBeenSet = true; m_deviceName.assign(value); }

    /**
     * <p>The name of a device.</p>
     */
    inline Device& WithDeviceName(const Aws::String& value) { SetDeviceName(value); return *this;}

    /**
     * <p>The name of a device.</p>
     */
    inline Device& WithDeviceName(Aws::String&& value) { SetDeviceName(std::move(value)); return *this;}

    /**
     * <p>The name of a device.</p>
     */
    inline Device& WithDeviceName(const char* value) { SetDeviceName(value); return *this;}


    /**
     * <p>The software version of a device.</p>
     */
    inline const Aws::String& GetSoftwareVersion() const{ return m_softwareVersion; }

    /**
     * <p>The software version of a device.</p>
     */
    inline bool SoftwareVersionHasBeenSet() const { return m_softwareVersionHasBeenSet; }

    /**
     * <p>The software version of a device.</p>
     */
    inline void SetSoftwareVersion(const Aws::String& value) { m_softwareVersionHasBeenSet = true; m_softwareVersion = value; }

    /**
     * <p>The software version of a device.</p>
     */
    inline void SetSoftwareVersion(Aws::String&& value) { m_softwareVersionHasBeenSet = true; m_softwareVersion = std::move(value); }

    /**
     * <p>The software version of a device.</p>
     */
    inline void SetSoftwareVersion(const char* value) { m_softwareVersionHasBeenSet = true; m_softwareVersion.assign(value); }

    /**
     * <p>The software version of a device.</p>
     */
    inline Device& WithSoftwareVersion(const Aws::String& value) { SetSoftwareVersion(value); return *this;}

    /**
     * <p>The software version of a device.</p>
     */
    inline Device& WithSoftwareVersion(Aws::String&& value) { SetSoftwareVersion(std::move(value)); return *this;}

    /**
     * <p>The software version of a device.</p>
     */
    inline Device& WithSoftwareVersion(const char* value) { SetSoftwareVersion(value); return *this;}


    /**
     * <p>The MAC address of a device.</p>
     */
    inline const Aws::String& GetMacAddress() const{ return m_macAddress; }

    /**
     * <p>The MAC address of a device.</p>
     */
    inline bool MacAddressHasBeenSet() const { return m_macAddressHasBeenSet; }

    /**
     * <p>The MAC address of a device.</p>
     */
    inline void SetMacAddress(const Aws::String& value) { m_macAddressHasBeenSet = true; m_macAddress = value; }

    /**
     * <p>The MAC address of a device.</p>
     */
    inline void SetMacAddress(Aws::String&& value) { m_macAddressHasBeenSet = true; m_macAddress = std::move(value); }

    /**
     * <p>The MAC address of a device.</p>
     */
    inline void SetMacAddress(const char* value) { m_macAddressHasBeenSet = true; m_macAddress.assign(value); }

    /**
     * <p>The MAC address of a device.</p>
     */
    inline Device& WithMacAddress(const Aws::String& value) { SetMacAddress(value); return *this;}

    /**
     * <p>The MAC address of a device.</p>
     */
    inline Device& WithMacAddress(Aws::String&& value) { SetMacAddress(std::move(value)); return *this;}

    /**
     * <p>The MAC address of a device.</p>
     */
    inline Device& WithMacAddress(const char* value) { SetMacAddress(value); return *this;}


    /**
     * <p>The room ARN of a device.</p>
     */
    inline const Aws::String& GetRoomArn() const{ return m_roomArn; }

    /**
     * <p>The room ARN of a device.</p>
     */
    inline bool RoomArnHasBeenSet() const { return m_roomArnHasBeenSet; }

    /**
     * <p>The room ARN of a device.</p>
     */
    inline void SetRoomArn(const Aws::String& value) { m_roomArnHasBeenSet = true; m_roomArn = value; }

    /**
     * <p>The room ARN of a device.</p>
     */
    inline void SetRoomArn(Aws::String&& value) { m_roomArnHasBeenSet = true; m_roomArn = std::move(value); }

    /**
     * <p>The room ARN of a device.</p>
     */
    inline void SetRoomArn(const char* value) { m_roomArnHasBeenSet = true; m_roomArn.assign(value); }

    /**
     * <p>The room ARN of a device.</p>
     */
    inline Device& WithRoomArn(const Aws::String& value) { SetRoomArn(value); return *this;}

    /**
     * <p>The room ARN of a device.</p>
     */
    inline Device& WithRoomArn(Aws::String&& value) { SetRoomArn(std::move(value)); return *this;}

    /**
     * <p>The room ARN of a device.</p>
     */
    inline Device& WithRoomArn(const char* value) { SetRoomArn(value); return *this;}


    /**
     * <p>The status of a device. If the status is not READY, check the
     * DeviceStatusInfo value for details.</p>
     */
    inline const DeviceStatus& GetDeviceStatus() const{ return m_deviceStatus; }

    /**
     * <p>The status of a device. If the status is not READY, check the
     * DeviceStatusInfo value for details.</p>
     */
    inline bool DeviceStatusHasBeenSet() const { return m_deviceStatusHasBeenSet; }

    /**
     * <p>The status of a device. If the status is not READY, check the
     * DeviceStatusInfo value for details.</p>
     */
    inline void SetDeviceStatus(const DeviceStatus& value) { m_deviceStatusHasBeenSet = true; m_deviceStatus = value; }

    /**
     * <p>The status of a device. If the status is not READY, check the
     * DeviceStatusInfo value for details.</p>
     */
    inline void SetDeviceStatus(DeviceStatus&& value) { m_deviceStatusHasBeenSet = true; m_deviceStatus = std::move(value); }

    /**
     * <p>The status of a device. If the status is not READY, check the
     * DeviceStatusInfo value for details.</p>
     */
    inline Device& WithDeviceStatus(const DeviceStatus& value) { SetDeviceStatus(value); return *this;}

    /**
     * <p>The status of a device. If the status is not READY, check the
     * DeviceStatusInfo value for details.</p>
     */
    inline Device& WithDeviceStatus(DeviceStatus&& value) { SetDeviceStatus(std::move(value)); return *this;}


    /**
     * <p>Detailed information about a device's status.</p>
     */
    inline const DeviceStatusInfo& GetDeviceStatusInfo() const{ return m_deviceStatusInfo; }

    /**
     * <p>Detailed information about a device's status.</p>
     */
    inline bool DeviceStatusInfoHasBeenSet() const { return m_deviceStatusInfoHasBeenSet; }

    /**
     * <p>Detailed information about a device's status.</p>
     */
    inline void SetDeviceStatusInfo(const DeviceStatusInfo& value) { m_deviceStatusInfoHasBeenSet = true; m_deviceStatusInfo = value; }

    /**
     * <p>Detailed information about a device's status.</p>
     */
    inline void SetDeviceStatusInfo(DeviceStatusInfo&& value) { m_deviceStatusInfoHasBeenSet = true; m_deviceStatusInfo = std::move(value); }

    /**
     * <p>Detailed information about a device's status.</p>
     */
    inline Device& WithDeviceStatusInfo(const DeviceStatusInfo& value) { SetDeviceStatusInfo(value); return *this;}

    /**
     * <p>Detailed information about a device's status.</p>
     */
    inline Device& WithDeviceStatusInfo(DeviceStatusInfo&& value) { SetDeviceStatusInfo(std::move(value)); return *this;}


    /**
     * <p>Detailed information about a device's network profile.</p>
     */
    inline const DeviceNetworkProfileInfo& GetNetworkProfileInfo() const{ return m_networkProfileInfo; }

    /**
     * <p>Detailed information about a device's network profile.</p>
     */
    inline bool NetworkProfileInfoHasBeenSet() const { return m_networkProfileInfoHasBeenSet; }

    /**
     * <p>Detailed information about a device's network profile.</p>
     */
    inline void SetNetworkProfileInfo(const DeviceNetworkProfileInfo& value) { m_networkProfileInfoHasBeenSet = true; m_networkProfileInfo = value; }

    /**
     * <p>Detailed information about a device's network profile.</p>
     */
    inline void SetNetworkProfileInfo(DeviceNetworkProfileInfo&& value) { m_networkProfileInfoHasBeenSet = true; m_networkProfileInfo = std::move(value); }

    /**
     * <p>Detailed information about a device's network profile.</p>
     */
    inline Device& WithNetworkProfileInfo(const DeviceNetworkProfileInfo& value) { SetNetworkProfileInfo(value); return *this;}

    /**
     * <p>Detailed information about a device's network profile.</p>
     */
    inline Device& WithNetworkProfileInfo(DeviceNetworkProfileInfo&& value) { SetNetworkProfileInfo(std::move(value)); return *this;}

  private:

    Aws::String m_deviceArn;
    bool m_deviceArnHasBeenSet = false;

    Aws::String m_deviceSerialNumber;
    bool m_deviceSerialNumberHasBeenSet = false;

    Aws::String m_deviceType;
    bool m_deviceTypeHasBeenSet = false;

    Aws::String m_deviceName;
    bool m_deviceNameHasBeenSet = false;

    Aws::String m_softwareVersion;
    bool m_softwareVersionHasBeenSet = false;

    Aws::String m_macAddress;
    bool m_macAddressHasBeenSet = false;

    Aws::String m_roomArn;
    bool m_roomArnHasBeenSet = false;

    DeviceStatus m_deviceStatus;
    bool m_deviceStatusHasBeenSet = false;

    DeviceStatusInfo m_deviceStatusInfo;
    bool m_deviceStatusInfoHasBeenSet = false;

    DeviceNetworkProfileInfo m_networkProfileInfo;
    bool m_networkProfileInfoHasBeenSet = false;
  };

} // namespace Model
} // namespace AlexaForBusiness
} // namespace Aws
