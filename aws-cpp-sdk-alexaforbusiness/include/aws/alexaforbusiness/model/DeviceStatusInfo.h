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
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/alexaforbusiness/model/ConnectionStatus.h>
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
  class AWS_ALEXAFORBUSINESS_API DeviceStatusInfo
  {
  public:
    DeviceStatusInfo();
    DeviceStatusInfo(Aws::Utils::Json::JsonView jsonValue);
    DeviceStatusInfo& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


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

  private:

    Aws::Vector<DeviceStatusDetail> m_deviceStatusDetails;
    bool m_deviceStatusDetailsHasBeenSet;

    ConnectionStatus m_connectionStatus;
    bool m_connectionStatusHasBeenSet;
  };

} // namespace Model
} // namespace AlexaForBusiness
} // namespace Aws
