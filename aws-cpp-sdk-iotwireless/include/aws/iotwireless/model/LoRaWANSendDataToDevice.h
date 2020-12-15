/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotwireless/IoTWireless_EXPORTS.h>

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
   * <p>LoRaWAN router info.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotwireless-2020-11-22/LoRaWANSendDataToDevice">AWS
   * API Reference</a></p>
   */
  class AWS_IOTWIRELESS_API LoRaWANSendDataToDevice
  {
  public:
    LoRaWANSendDataToDevice();
    LoRaWANSendDataToDevice(Aws::Utils::Json::JsonView jsonValue);
    LoRaWANSendDataToDevice& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The Fport value.</p>
     */
    inline int GetFPort() const{ return m_fPort; }

    /**
     * <p>The Fport value.</p>
     */
    inline bool FPortHasBeenSet() const { return m_fPortHasBeenSet; }

    /**
     * <p>The Fport value.</p>
     */
    inline void SetFPort(int value) { m_fPortHasBeenSet = true; m_fPort = value; }

    /**
     * <p>The Fport value.</p>
     */
    inline LoRaWANSendDataToDevice& WithFPort(int value) { SetFPort(value); return *this;}

  private:

    int m_fPort;
    bool m_fPortHasBeenSet;
  };

} // namespace Model
} // namespace IoTWireless
} // namespace Aws
