/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotwireless/IoTWireless_EXPORTS.h>
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
namespace IoTWireless
{
namespace Model
{

  /**
   * <p>LoRaWAN object for update functions.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotwireless-2020-11-22/LoRaWANUpdateDevice">AWS
   * API Reference</a></p>
   */
  class AWS_IOTWIRELESS_API LoRaWANUpdateDevice
  {
  public:
    LoRaWANUpdateDevice();
    LoRaWANUpdateDevice(Aws::Utils::Json::JsonView jsonValue);
    LoRaWANUpdateDevice& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The ID of the device profile for the wireless device.</p>
     */
    inline const Aws::String& GetDeviceProfileId() const{ return m_deviceProfileId; }

    /**
     * <p>The ID of the device profile for the wireless device.</p>
     */
    inline bool DeviceProfileIdHasBeenSet() const { return m_deviceProfileIdHasBeenSet; }

    /**
     * <p>The ID of the device profile for the wireless device.</p>
     */
    inline void SetDeviceProfileId(const Aws::String& value) { m_deviceProfileIdHasBeenSet = true; m_deviceProfileId = value; }

    /**
     * <p>The ID of the device profile for the wireless device.</p>
     */
    inline void SetDeviceProfileId(Aws::String&& value) { m_deviceProfileIdHasBeenSet = true; m_deviceProfileId = std::move(value); }

    /**
     * <p>The ID of the device profile for the wireless device.</p>
     */
    inline void SetDeviceProfileId(const char* value) { m_deviceProfileIdHasBeenSet = true; m_deviceProfileId.assign(value); }

    /**
     * <p>The ID of the device profile for the wireless device.</p>
     */
    inline LoRaWANUpdateDevice& WithDeviceProfileId(const Aws::String& value) { SetDeviceProfileId(value); return *this;}

    /**
     * <p>The ID of the device profile for the wireless device.</p>
     */
    inline LoRaWANUpdateDevice& WithDeviceProfileId(Aws::String&& value) { SetDeviceProfileId(std::move(value)); return *this;}

    /**
     * <p>The ID of the device profile for the wireless device.</p>
     */
    inline LoRaWANUpdateDevice& WithDeviceProfileId(const char* value) { SetDeviceProfileId(value); return *this;}


    /**
     * <p>The ID of the service profile.</p>
     */
    inline const Aws::String& GetServiceProfileId() const{ return m_serviceProfileId; }

    /**
     * <p>The ID of the service profile.</p>
     */
    inline bool ServiceProfileIdHasBeenSet() const { return m_serviceProfileIdHasBeenSet; }

    /**
     * <p>The ID of the service profile.</p>
     */
    inline void SetServiceProfileId(const Aws::String& value) { m_serviceProfileIdHasBeenSet = true; m_serviceProfileId = value; }

    /**
     * <p>The ID of the service profile.</p>
     */
    inline void SetServiceProfileId(Aws::String&& value) { m_serviceProfileIdHasBeenSet = true; m_serviceProfileId = std::move(value); }

    /**
     * <p>The ID of the service profile.</p>
     */
    inline void SetServiceProfileId(const char* value) { m_serviceProfileIdHasBeenSet = true; m_serviceProfileId.assign(value); }

    /**
     * <p>The ID of the service profile.</p>
     */
    inline LoRaWANUpdateDevice& WithServiceProfileId(const Aws::String& value) { SetServiceProfileId(value); return *this;}

    /**
     * <p>The ID of the service profile.</p>
     */
    inline LoRaWANUpdateDevice& WithServiceProfileId(Aws::String&& value) { SetServiceProfileId(std::move(value)); return *this;}

    /**
     * <p>The ID of the service profile.</p>
     */
    inline LoRaWANUpdateDevice& WithServiceProfileId(const char* value) { SetServiceProfileId(value); return *this;}

  private:

    Aws::String m_deviceProfileId;
    bool m_deviceProfileIdHasBeenSet;

    Aws::String m_serviceProfileId;
    bool m_serviceProfileIdHasBeenSet;
  };

} // namespace Model
} // namespace IoTWireless
} // namespace Aws
