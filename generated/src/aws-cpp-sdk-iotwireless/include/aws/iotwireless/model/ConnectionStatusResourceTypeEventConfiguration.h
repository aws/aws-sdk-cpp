/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotwireless/IoTWireless_EXPORTS.h>
#include <aws/iotwireless/model/LoRaWANConnectionStatusResourceTypeEventConfiguration.h>
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
   * <p>Connection status resource type event configuration object for enabling or
   * disabling topic.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotwireless-2020-11-22/ConnectionStatusResourceTypeEventConfiguration">AWS
   * API Reference</a></p>
   */
  class ConnectionStatusResourceTypeEventConfiguration
  {
  public:
    AWS_IOTWIRELESS_API ConnectionStatusResourceTypeEventConfiguration() = default;
    AWS_IOTWIRELESS_API ConnectionStatusResourceTypeEventConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTWIRELESS_API ConnectionStatusResourceTypeEventConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTWIRELESS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Connection status resource type event configuration object for enabling or
     * disabling LoRaWAN related event topics.</p>
     */
    inline const LoRaWANConnectionStatusResourceTypeEventConfiguration& GetLoRaWAN() const { return m_loRaWAN; }
    inline bool LoRaWANHasBeenSet() const { return m_loRaWANHasBeenSet; }
    template<typename LoRaWANT = LoRaWANConnectionStatusResourceTypeEventConfiguration>
    void SetLoRaWAN(LoRaWANT&& value) { m_loRaWANHasBeenSet = true; m_loRaWAN = std::forward<LoRaWANT>(value); }
    template<typename LoRaWANT = LoRaWANConnectionStatusResourceTypeEventConfiguration>
    ConnectionStatusResourceTypeEventConfiguration& WithLoRaWAN(LoRaWANT&& value) { SetLoRaWAN(std::forward<LoRaWANT>(value)); return *this;}
    ///@}
  private:

    LoRaWANConnectionStatusResourceTypeEventConfiguration m_loRaWAN;
    bool m_loRaWANHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTWireless
} // namespace Aws
