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
   * <p>Sidewalk object for creating a wireless device.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotwireless-2020-11-22/SidewalkCreateWirelessDevice">AWS
   * API Reference</a></p>
   */
  class SidewalkCreateWirelessDevice
  {
  public:
    AWS_IOTWIRELESS_API SidewalkCreateWirelessDevice();
    AWS_IOTWIRELESS_API SidewalkCreateWirelessDevice(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTWIRELESS_API SidewalkCreateWirelessDevice& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTWIRELESS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The ID of the Sidewalk device profile.</p>
     */
    inline const Aws::String& GetDeviceProfileId() const{ return m_deviceProfileId; }

    /**
     * <p>The ID of the Sidewalk device profile.</p>
     */
    inline bool DeviceProfileIdHasBeenSet() const { return m_deviceProfileIdHasBeenSet; }

    /**
     * <p>The ID of the Sidewalk device profile.</p>
     */
    inline void SetDeviceProfileId(const Aws::String& value) { m_deviceProfileIdHasBeenSet = true; m_deviceProfileId = value; }

    /**
     * <p>The ID of the Sidewalk device profile.</p>
     */
    inline void SetDeviceProfileId(Aws::String&& value) { m_deviceProfileIdHasBeenSet = true; m_deviceProfileId = std::move(value); }

    /**
     * <p>The ID of the Sidewalk device profile.</p>
     */
    inline void SetDeviceProfileId(const char* value) { m_deviceProfileIdHasBeenSet = true; m_deviceProfileId.assign(value); }

    /**
     * <p>The ID of the Sidewalk device profile.</p>
     */
    inline SidewalkCreateWirelessDevice& WithDeviceProfileId(const Aws::String& value) { SetDeviceProfileId(value); return *this;}

    /**
     * <p>The ID of the Sidewalk device profile.</p>
     */
    inline SidewalkCreateWirelessDevice& WithDeviceProfileId(Aws::String&& value) { SetDeviceProfileId(std::move(value)); return *this;}

    /**
     * <p>The ID of the Sidewalk device profile.</p>
     */
    inline SidewalkCreateWirelessDevice& WithDeviceProfileId(const char* value) { SetDeviceProfileId(value); return *this;}

  private:

    Aws::String m_deviceProfileId;
    bool m_deviceProfileIdHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTWireless
} // namespace Aws
