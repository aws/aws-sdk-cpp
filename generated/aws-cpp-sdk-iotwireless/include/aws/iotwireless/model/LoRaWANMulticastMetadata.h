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
   * <p>The metadata information of the LoRaWAN multicast group.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotwireless-2020-11-22/LoRaWANMulticastMetadata">AWS
   * API Reference</a></p>
   */
  class AWS_IOTWIRELESS_API LoRaWANMulticastMetadata
  {
  public:
    LoRaWANMulticastMetadata();
    LoRaWANMulticastMetadata(Aws::Utils::Json::JsonView jsonValue);
    LoRaWANMulticastMetadata& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    
    inline int GetFPort() const{ return m_fPort; }

    
    inline bool FPortHasBeenSet() const { return m_fPortHasBeenSet; }

    
    inline void SetFPort(int value) { m_fPortHasBeenSet = true; m_fPort = value; }

    
    inline LoRaWANMulticastMetadata& WithFPort(int value) { SetFPort(value); return *this;}

  private:

    int m_fPort;
    bool m_fPortHasBeenSet;
  };

} // namespace Model
} // namespace IoTWireless
} // namespace Aws
