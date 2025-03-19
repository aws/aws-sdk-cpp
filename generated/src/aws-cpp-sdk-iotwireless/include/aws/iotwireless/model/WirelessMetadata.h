/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotwireless/IoTWireless_EXPORTS.h>
#include <aws/iotwireless/model/LoRaWANSendDataToDevice.h>
#include <aws/iotwireless/model/SidewalkSendDataToDevice.h>
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
   * <p>WirelessMetadata object.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotwireless-2020-11-22/WirelessMetadata">AWS
   * API Reference</a></p>
   */
  class WirelessMetadata
  {
  public:
    AWS_IOTWIRELESS_API WirelessMetadata() = default;
    AWS_IOTWIRELESS_API WirelessMetadata(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTWIRELESS_API WirelessMetadata& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTWIRELESS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>LoRaWAN device info.</p>
     */
    inline const LoRaWANSendDataToDevice& GetLoRaWAN() const { return m_loRaWAN; }
    inline bool LoRaWANHasBeenSet() const { return m_loRaWANHasBeenSet; }
    template<typename LoRaWANT = LoRaWANSendDataToDevice>
    void SetLoRaWAN(LoRaWANT&& value) { m_loRaWANHasBeenSet = true; m_loRaWAN = std::forward<LoRaWANT>(value); }
    template<typename LoRaWANT = LoRaWANSendDataToDevice>
    WirelessMetadata& WithLoRaWAN(LoRaWANT&& value) { SetLoRaWAN(std::forward<LoRaWANT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Sidewalk account credentials.</p>
     */
    inline const SidewalkSendDataToDevice& GetSidewalk() const { return m_sidewalk; }
    inline bool SidewalkHasBeenSet() const { return m_sidewalkHasBeenSet; }
    template<typename SidewalkT = SidewalkSendDataToDevice>
    void SetSidewalk(SidewalkT&& value) { m_sidewalkHasBeenSet = true; m_sidewalk = std::forward<SidewalkT>(value); }
    template<typename SidewalkT = SidewalkSendDataToDevice>
    WirelessMetadata& WithSidewalk(SidewalkT&& value) { SetSidewalk(std::forward<SidewalkT>(value)); return *this;}
    ///@}
  private:

    LoRaWANSendDataToDevice m_loRaWAN;
    bool m_loRaWANHasBeenSet = false;

    SidewalkSendDataToDevice m_sidewalk;
    bool m_sidewalkHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTWireless
} // namespace Aws
