/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotwireless/IoTWireless_EXPORTS.h>
#include <aws/iotwireless/model/LoRaWANMulticastMetadata.h>
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
   * <p>Wireless metadata that is to be sent to multicast group.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotwireless-2020-11-22/MulticastWirelessMetadata">AWS
   * API Reference</a></p>
   */
  class MulticastWirelessMetadata
  {
  public:
    AWS_IOTWIRELESS_API MulticastWirelessMetadata();
    AWS_IOTWIRELESS_API MulticastWirelessMetadata(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTWIRELESS_API MulticastWirelessMetadata& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTWIRELESS_API Aws::Utils::Json::JsonValue Jsonize() const;


    
    inline const LoRaWANMulticastMetadata& GetLoRaWAN() const{ return m_loRaWAN; }

    
    inline bool LoRaWANHasBeenSet() const { return m_loRaWANHasBeenSet; }

    
    inline void SetLoRaWAN(const LoRaWANMulticastMetadata& value) { m_loRaWANHasBeenSet = true; m_loRaWAN = value; }

    
    inline void SetLoRaWAN(LoRaWANMulticastMetadata&& value) { m_loRaWANHasBeenSet = true; m_loRaWAN = std::move(value); }

    
    inline MulticastWirelessMetadata& WithLoRaWAN(const LoRaWANMulticastMetadata& value) { SetLoRaWAN(value); return *this;}

    
    inline MulticastWirelessMetadata& WithLoRaWAN(LoRaWANMulticastMetadata&& value) { SetLoRaWAN(std::move(value)); return *this;}

  private:

    LoRaWANMulticastMetadata m_loRaWAN;
    bool m_loRaWANHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTWireless
} // namespace Aws
