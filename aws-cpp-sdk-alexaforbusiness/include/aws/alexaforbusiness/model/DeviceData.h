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
#include <aws/alexaforbusiness/AlexaForBusiness_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/alexaforbusiness/model/DeviceStatus.h>
#include <aws/alexaforbusiness/model/DeviceStatusInfo.h>
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
   * <p>Device attributes.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/alexaforbusiness-2017-11-09/DeviceData">AWS
   * API Reference</a></p>
   */
  class AWS_ALEXAFORBUSINESS_API DeviceData
  {
  public:
    DeviceData();
    DeviceData(Aws::Utils::Json::JsonView jsonValue);
    DeviceData& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


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
    inline DeviceData& WithDeviceArn(const Aws::String& value) { SetDeviceArn(value); return *this;}

    /**
     * <p>The ARN of a device.</p>
     */
    inline DeviceData& WithDeviceArn(Aws::String&& value) { SetDeviceArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of a device.</p>
     */
    inline DeviceData& WithDeviceArn(const char* value) { SetDeviceArn(value); return *this;}


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
    inline DeviceData& WithDeviceSerialNumber(const Aws::String& value) { SetDeviceSerialNumber(value); return *this;}

    /**
     * <p>The serial number of a device.</p>
     */
    inline DeviceData& WithDeviceSerialNumber(Aws::String&& value) { SetDeviceSerialNumber(std::move(value)); return *this;}

    /**
     * <p>The serial number of a device.</p>
     */
    inline DeviceData& WithDeviceSerialNumber(const char* value) { SetDeviceSerialNumber(value); return *this;}


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
    inline DeviceData& WithDeviceType(const Aws::String& value) { SetDeviceType(value); return *this;}

    /**
     * <p>The type of a device.</p>
     */
    inline DeviceData& WithDeviceType(Aws::String&& value) { SetDeviceType(std::move(value)); return *this;}

    /**
     * <p>The type of a device.</p>
     */
    inline DeviceData& WithDeviceType(const char* value) { SetDeviceType(value); return *this;}


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
    inline DeviceData& WithDeviceName(const Aws::String& value) { SetDeviceName(value); return *this;}

    /**
     * <p>The name of a device.</p>
     */
    inline DeviceData& WithDeviceName(Aws::String&& value) { SetDeviceName(std::move(value)); return *this;}

    /**
     * <p>The name of a device.</p>
     */
    inline DeviceData& WithDeviceName(const char* value) { SetDeviceName(value); return *this;}


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
    inline DeviceData& WithSoftwareVersion(const Aws::String& value) { SetSoftwareVersion(value); return *this;}

    /**
     * <p>The software version of a device.</p>
     */
    inline DeviceData& WithSoftwareVersion(Aws::String&& value) { SetSoftwareVersion(std::move(value)); return *this;}

    /**
     * <p>The software version of a device.</p>
     */
    inline DeviceData& WithSoftwareVersion(const char* value) { SetSoftwareVersion(value); return *this;}


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
    inline DeviceData& WithMacAddress(const Aws::String& value) { SetMacAddress(value); return *this;}

    /**
     * <p>The MAC address of a device.</p>
     */
    inline DeviceData& WithMacAddress(Aws::String&& value) { SetMacAddress(std::move(value)); return *this;}

    /**
     * <p>The MAC address of a device.</p>
     */
    inline DeviceData& WithMacAddress(const char* value) { SetMacAddress(value); return *this;}


    /**
     * <p>The status of a device.</p>
     */
    inline const DeviceStatus& GetDeviceStatus() const{ return m_deviceStatus; }

    /**
     * <p>The status of a device.</p>
     */
    inline bool DeviceStatusHasBeenSet() const { return m_deviceStatusHasBeenSet; }

    /**
     * <p>The status of a device.</p>
     */
    inline void SetDeviceStatus(const DeviceStatus& value) { m_deviceStatusHasBeenSet = true; m_deviceStatus = value; }

    /**
     * <p>The status of a device.</p>
     */
    inline void SetDeviceStatus(DeviceStatus&& value) { m_deviceStatusHasBeenSet = true; m_deviceStatus = std::move(value); }

    /**
     * <p>The status of a device.</p>
     */
    inline DeviceData& WithDeviceStatus(const DeviceStatus& value) { SetDeviceStatus(value); return *this;}

    /**
     * <p>The status of a device.</p>
     */
    inline DeviceData& WithDeviceStatus(DeviceStatus&& value) { SetDeviceStatus(std::move(value)); return *this;}


    /**
     * <p>The ARN of the network profile associated with a device.</p>
     */
    inline const Aws::String& GetNetworkProfileArn() const{ return m_networkProfileArn; }

    /**
     * <p>The ARN of the network profile associated with a device.</p>
     */
    inline bool NetworkProfileArnHasBeenSet() const { return m_networkProfileArnHasBeenSet; }

    /**
     * <p>The ARN of the network profile associated with a device.</p>
     */
    inline void SetNetworkProfileArn(const Aws::String& value) { m_networkProfileArnHasBeenSet = true; m_networkProfileArn = value; }

    /**
     * <p>The ARN of the network profile associated with a device.</p>
     */
    inline void SetNetworkProfileArn(Aws::String&& value) { m_networkProfileArnHasBeenSet = true; m_networkProfileArn = std::move(value); }

    /**
     * <p>The ARN of the network profile associated with a device.</p>
     */
    inline void SetNetworkProfileArn(const char* value) { m_networkProfileArnHasBeenSet = true; m_networkProfileArn.assign(value); }

    /**
     * <p>The ARN of the network profile associated with a device.</p>
     */
    inline DeviceData& WithNetworkProfileArn(const Aws::String& value) { SetNetworkProfileArn(value); return *this;}

    /**
     * <p>The ARN of the network profile associated with a device.</p>
     */
    inline DeviceData& WithNetworkProfileArn(Aws::String&& value) { SetNetworkProfileArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the network profile associated with a device.</p>
     */
    inline DeviceData& WithNetworkProfileArn(const char* value) { SetNetworkProfileArn(value); return *this;}


    /**
     * <p>The name of the network profile associated with a device.</p>
     */
    inline const Aws::String& GetNetworkProfileName() const{ return m_networkProfileName; }

    /**
     * <p>The name of the network profile associated with a device.</p>
     */
    inline bool NetworkProfileNameHasBeenSet() const { return m_networkProfileNameHasBeenSet; }

    /**
     * <p>The name of the network profile associated with a device.</p>
     */
    inline void SetNetworkProfileName(const Aws::String& value) { m_networkProfileNameHasBeenSet = true; m_networkProfileName = value; }

    /**
     * <p>The name of the network profile associated with a device.</p>
     */
    inline void SetNetworkProfileName(Aws::String&& value) { m_networkProfileNameHasBeenSet = true; m_networkProfileName = std::move(value); }

    /**
     * <p>The name of the network profile associated with a device.</p>
     */
    inline void SetNetworkProfileName(const char* value) { m_networkProfileNameHasBeenSet = true; m_networkProfileName.assign(value); }

    /**
     * <p>The name of the network profile associated with a device.</p>
     */
    inline DeviceData& WithNetworkProfileName(const Aws::String& value) { SetNetworkProfileName(value); return *this;}

    /**
     * <p>The name of the network profile associated with a device.</p>
     */
    inline DeviceData& WithNetworkProfileName(Aws::String&& value) { SetNetworkProfileName(std::move(value)); return *this;}

    /**
     * <p>The name of the network profile associated with a device.</p>
     */
    inline DeviceData& WithNetworkProfileName(const char* value) { SetNetworkProfileName(value); return *this;}


    /**
     * <p>The room ARN associated with a device.</p>
     */
    inline const Aws::String& GetRoomArn() const{ return m_roomArn; }

    /**
     * <p>The room ARN associated with a device.</p>
     */
    inline bool RoomArnHasBeenSet() const { return m_roomArnHasBeenSet; }

    /**
     * <p>The room ARN associated with a device.</p>
     */
    inline void SetRoomArn(const Aws::String& value) { m_roomArnHasBeenSet = true; m_roomArn = value; }

    /**
     * <p>The room ARN associated with a device.</p>
     */
    inline void SetRoomArn(Aws::String&& value) { m_roomArnHasBeenSet = true; m_roomArn = std::move(value); }

    /**
     * <p>The room ARN associated with a device.</p>
     */
    inline void SetRoomArn(const char* value) { m_roomArnHasBeenSet = true; m_roomArn.assign(value); }

    /**
     * <p>The room ARN associated with a device.</p>
     */
    inline DeviceData& WithRoomArn(const Aws::String& value) { SetRoomArn(value); return *this;}

    /**
     * <p>The room ARN associated with a device.</p>
     */
    inline DeviceData& WithRoomArn(Aws::String&& value) { SetRoomArn(std::move(value)); return *this;}

    /**
     * <p>The room ARN associated with a device.</p>
     */
    inline DeviceData& WithRoomArn(const char* value) { SetRoomArn(value); return *this;}


    /**
     * <p>The name of the room associated with a device.</p>
     */
    inline const Aws::String& GetRoomName() const{ return m_roomName; }

    /**
     * <p>The name of the room associated with a device.</p>
     */
    inline bool RoomNameHasBeenSet() const { return m_roomNameHasBeenSet; }

    /**
     * <p>The name of the room associated with a device.</p>
     */
    inline void SetRoomName(const Aws::String& value) { m_roomNameHasBeenSet = true; m_roomName = value; }

    /**
     * <p>The name of the room associated with a device.</p>
     */
    inline void SetRoomName(Aws::String&& value) { m_roomNameHasBeenSet = true; m_roomName = std::move(value); }

    /**
     * <p>The name of the room associated with a device.</p>
     */
    inline void SetRoomName(const char* value) { m_roomNameHasBeenSet = true; m_roomName.assign(value); }

    /**
     * <p>The name of the room associated with a device.</p>
     */
    inline DeviceData& WithRoomName(const Aws::String& value) { SetRoomName(value); return *this;}

    /**
     * <p>The name of the room associated with a device.</p>
     */
    inline DeviceData& WithRoomName(Aws::String&& value) { SetRoomName(std::move(value)); return *this;}

    /**
     * <p>The name of the room associated with a device.</p>
     */
    inline DeviceData& WithRoomName(const char* value) { SetRoomName(value); return *this;}


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
    inline DeviceData& WithDeviceStatusInfo(const DeviceStatusInfo& value) { SetDeviceStatusInfo(value); return *this;}

    /**
     * <p>Detailed information about a device's status.</p>
     */
    inline DeviceData& WithDeviceStatusInfo(DeviceStatusInfo&& value) { SetDeviceStatusInfo(std::move(value)); return *this;}

  private:

    Aws::String m_deviceArn;
    bool m_deviceArnHasBeenSet;

    Aws::String m_deviceSerialNumber;
    bool m_deviceSerialNumberHasBeenSet;

    Aws::String m_deviceType;
    bool m_deviceTypeHasBeenSet;

    Aws::String m_deviceName;
    bool m_deviceNameHasBeenSet;

    Aws::String m_softwareVersion;
    bool m_softwareVersionHasBeenSet;

    Aws::String m_macAddress;
    bool m_macAddressHasBeenSet;

    DeviceStatus m_deviceStatus;
    bool m_deviceStatusHasBeenSet;

    Aws::String m_networkProfileArn;
    bool m_networkProfileArnHasBeenSet;

    Aws::String m_networkProfileName;
    bool m_networkProfileNameHasBeenSet;

    Aws::String m_roomArn;
    bool m_roomArnHasBeenSet;

    Aws::String m_roomName;
    bool m_roomNameHasBeenSet;

    DeviceStatusInfo m_deviceStatusInfo;
    bool m_deviceStatusInfoHasBeenSet;
  };

} // namespace Model
} // namespace AlexaForBusiness
} // namespace Aws
