/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/alexaforbusiness/AlexaForBusiness_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/alexaforbusiness/model/ConnectionStatus.h>
#include <aws/core/utils/DateTime.h>
#include <aws/alexaforbusiness/model/DeviceStatusDetail.h>
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
   * <p>Detailed information about a device's status.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/alexaforbusiness-2017-11-09/DeviceStatusInfo">AWS
   * API Reference</a></p>
   */
  class DeviceStatusInfo
  {
  public:
    AWS_ALEXAFORBUSINESS_API DeviceStatusInfo();
    AWS_ALEXAFORBUSINESS_API DeviceStatusInfo(Aws::Utils::Json::JsonView jsonValue);
    AWS_ALEXAFORBUSINESS_API DeviceStatusInfo& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ALEXAFORBUSINESS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>One or more device status detail descriptions.</p>
     */
    inline const Aws::Vector<DeviceStatusDetail>& GetDeviceStatusDetails() const{ return m_deviceStatusDetails; }

    /**
     * <p>One or more device status detail descriptions.</p>
     */
    inline bool DeviceStatusDetailsHasBeenSet() const { return m_deviceStatusDetailsHasBeenSet; }

    /**
     * <p>One or more device status detail descriptions.</p>
     */
    inline void SetDeviceStatusDetails(const Aws::Vector<DeviceStatusDetail>& value) { m_deviceStatusDetailsHasBeenSet = true; m_deviceStatusDetails = value; }

    /**
     * <p>One or more device status detail descriptions.</p>
     */
    inline void SetDeviceStatusDetails(Aws::Vector<DeviceStatusDetail>&& value) { m_deviceStatusDetailsHasBeenSet = true; m_deviceStatusDetails = std::move(value); }

    /**
     * <p>One or more device status detail descriptions.</p>
     */
    inline DeviceStatusInfo& WithDeviceStatusDetails(const Aws::Vector<DeviceStatusDetail>& value) { SetDeviceStatusDetails(value); return *this;}

    /**
     * <p>One or more device status detail descriptions.</p>
     */
    inline DeviceStatusInfo& WithDeviceStatusDetails(Aws::Vector<DeviceStatusDetail>&& value) { SetDeviceStatusDetails(std::move(value)); return *this;}

    /**
     * <p>One or more device status detail descriptions.</p>
     */
    inline DeviceStatusInfo& AddDeviceStatusDetails(const DeviceStatusDetail& value) { m_deviceStatusDetailsHasBeenSet = true; m_deviceStatusDetails.push_back(value); return *this; }

    /**
     * <p>One or more device status detail descriptions.</p>
     */
    inline DeviceStatusInfo& AddDeviceStatusDetails(DeviceStatusDetail&& value) { m_deviceStatusDetailsHasBeenSet = true; m_deviceStatusDetails.push_back(std::move(value)); return *this; }


    /**
     * <p>The latest available information about the connection status of a device.
     * </p>
     */
    inline const ConnectionStatus& GetConnectionStatus() const{ return m_connectionStatus; }

    /**
     * <p>The latest available information about the connection status of a device.
     * </p>
     */
    inline bool ConnectionStatusHasBeenSet() const { return m_connectionStatusHasBeenSet; }

    /**
     * <p>The latest available information about the connection status of a device.
     * </p>
     */
    inline void SetConnectionStatus(const ConnectionStatus& value) { m_connectionStatusHasBeenSet = true; m_connectionStatus = value; }

    /**
     * <p>The latest available information about the connection status of a device.
     * </p>
     */
    inline void SetConnectionStatus(ConnectionStatus&& value) { m_connectionStatusHasBeenSet = true; m_connectionStatus = std::move(value); }

    /**
     * <p>The latest available information about the connection status of a device.
     * </p>
     */
    inline DeviceStatusInfo& WithConnectionStatus(const ConnectionStatus& value) { SetConnectionStatus(value); return *this;}

    /**
     * <p>The latest available information about the connection status of a device.
     * </p>
     */
    inline DeviceStatusInfo& WithConnectionStatus(ConnectionStatus&& value) { SetConnectionStatus(std::move(value)); return *this;}


    /**
     * <p>The time (in epoch) when the device connection status changed.</p>
     */
    inline const Aws::Utils::DateTime& GetConnectionStatusUpdatedTime() const{ return m_connectionStatusUpdatedTime; }

    /**
     * <p>The time (in epoch) when the device connection status changed.</p>
     */
    inline bool ConnectionStatusUpdatedTimeHasBeenSet() const { return m_connectionStatusUpdatedTimeHasBeenSet; }

    /**
     * <p>The time (in epoch) when the device connection status changed.</p>
     */
    inline void SetConnectionStatusUpdatedTime(const Aws::Utils::DateTime& value) { m_connectionStatusUpdatedTimeHasBeenSet = true; m_connectionStatusUpdatedTime = value; }

    /**
     * <p>The time (in epoch) when the device connection status changed.</p>
     */
    inline void SetConnectionStatusUpdatedTime(Aws::Utils::DateTime&& value) { m_connectionStatusUpdatedTimeHasBeenSet = true; m_connectionStatusUpdatedTime = std::move(value); }

    /**
     * <p>The time (in epoch) when the device connection status changed.</p>
     */
    inline DeviceStatusInfo& WithConnectionStatusUpdatedTime(const Aws::Utils::DateTime& value) { SetConnectionStatusUpdatedTime(value); return *this;}

    /**
     * <p>The time (in epoch) when the device connection status changed.</p>
     */
    inline DeviceStatusInfo& WithConnectionStatusUpdatedTime(Aws::Utils::DateTime&& value) { SetConnectionStatusUpdatedTime(std::move(value)); return *this;}

  private:

    Aws::Vector<DeviceStatusDetail> m_deviceStatusDetails;
    bool m_deviceStatusDetailsHasBeenSet = false;

    ConnectionStatus m_connectionStatus;
    bool m_connectionStatusHasBeenSet = false;

    Aws::Utils::DateTime m_connectionStatusUpdatedTime;
    bool m_connectionStatusUpdatedTimeHasBeenSet = false;
  };

} // namespace Model
} // namespace AlexaForBusiness
} // namespace Aws
