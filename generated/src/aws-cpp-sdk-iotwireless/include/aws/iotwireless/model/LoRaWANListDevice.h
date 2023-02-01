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
   * <p>LoRaWAN object for list functions.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotwireless-2020-11-22/LoRaWANListDevice">AWS
   * API Reference</a></p>
   */
  class LoRaWANListDevice
  {
  public:
    AWS_IOTWIRELESS_API LoRaWANListDevice();
    AWS_IOTWIRELESS_API LoRaWANListDevice(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTWIRELESS_API LoRaWANListDevice& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTWIRELESS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The DevEUI value.</p>
     */
    inline const Aws::String& GetDevEui() const{ return m_devEui; }

    /**
     * <p>The DevEUI value.</p>
     */
    inline bool DevEuiHasBeenSet() const { return m_devEuiHasBeenSet; }

    /**
     * <p>The DevEUI value.</p>
     */
    inline void SetDevEui(const Aws::String& value) { m_devEuiHasBeenSet = true; m_devEui = value; }

    /**
     * <p>The DevEUI value.</p>
     */
    inline void SetDevEui(Aws::String&& value) { m_devEuiHasBeenSet = true; m_devEui = std::move(value); }

    /**
     * <p>The DevEUI value.</p>
     */
    inline void SetDevEui(const char* value) { m_devEuiHasBeenSet = true; m_devEui.assign(value); }

    /**
     * <p>The DevEUI value.</p>
     */
    inline LoRaWANListDevice& WithDevEui(const Aws::String& value) { SetDevEui(value); return *this;}

    /**
     * <p>The DevEUI value.</p>
     */
    inline LoRaWANListDevice& WithDevEui(Aws::String&& value) { SetDevEui(std::move(value)); return *this;}

    /**
     * <p>The DevEUI value.</p>
     */
    inline LoRaWANListDevice& WithDevEui(const char* value) { SetDevEui(value); return *this;}

  private:

    Aws::String m_devEui;
    bool m_devEuiHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTWireless
} // namespace Aws
