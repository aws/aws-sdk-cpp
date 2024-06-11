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
    AWS_IOTWIRELESS_API WirelessMetadata();
    AWS_IOTWIRELESS_API WirelessMetadata(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTWIRELESS_API WirelessMetadata& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTWIRELESS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>LoRaWAN device info.</p>
     */
    inline const LoRaWANSendDataToDevice& GetLoRaWAN() const{ return m_loRaWAN; }
    inline bool LoRaWANHasBeenSet() const { return m_loRaWANHasBeenSet; }
    inline void SetLoRaWAN(const LoRaWANSendDataToDevice& value) { m_loRaWANHasBeenSet = true; m_loRaWAN = value; }
    inline void SetLoRaWAN(LoRaWANSendDataToDevice&& value) { m_loRaWANHasBeenSet = true; m_loRaWAN = std::move(value); }
    inline WirelessMetadata& WithLoRaWAN(const LoRaWANSendDataToDevice& value) { SetLoRaWAN(value); return *this;}
    inline WirelessMetadata& WithLoRaWAN(LoRaWANSendDataToDevice&& value) { SetLoRaWAN(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Sidewalk account credentials.</p>
     */
    inline const SidewalkSendDataToDevice& GetSidewalk() const{ return m_sidewalk; }
    inline bool SidewalkHasBeenSet() const { return m_sidewalkHasBeenSet; }
    inline void SetSidewalk(const SidewalkSendDataToDevice& value) { m_sidewalkHasBeenSet = true; m_sidewalk = value; }
    inline void SetSidewalk(SidewalkSendDataToDevice&& value) { m_sidewalkHasBeenSet = true; m_sidewalk = std::move(value); }
    inline WirelessMetadata& WithSidewalk(const SidewalkSendDataToDevice& value) { SetSidewalk(value); return *this;}
    inline WirelessMetadata& WithSidewalk(SidewalkSendDataToDevice&& value) { SetSidewalk(std::move(value)); return *this;}
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
