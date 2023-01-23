/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotwireless/IoTWireless_EXPORTS.h>
#include <aws/iotwireless/model/SupportedRfRegion.h>
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
   * <p>The LoRaWAN information used with a FUOTA task.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotwireless-2020-11-22/LoRaWANFuotaTask">AWS
   * API Reference</a></p>
   */
  class LoRaWANFuotaTask
  {
  public:
    AWS_IOTWIRELESS_API LoRaWANFuotaTask();
    AWS_IOTWIRELESS_API LoRaWANFuotaTask(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTWIRELESS_API LoRaWANFuotaTask& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTWIRELESS_API Aws::Utils::Json::JsonValue Jsonize() const;


    
    inline const SupportedRfRegion& GetRfRegion() const{ return m_rfRegion; }

    
    inline bool RfRegionHasBeenSet() const { return m_rfRegionHasBeenSet; }

    
    inline void SetRfRegion(const SupportedRfRegion& value) { m_rfRegionHasBeenSet = true; m_rfRegion = value; }

    
    inline void SetRfRegion(SupportedRfRegion&& value) { m_rfRegionHasBeenSet = true; m_rfRegion = std::move(value); }

    
    inline LoRaWANFuotaTask& WithRfRegion(const SupportedRfRegion& value) { SetRfRegion(value); return *this;}

    
    inline LoRaWANFuotaTask& WithRfRegion(SupportedRfRegion&& value) { SetRfRegion(std::move(value)); return *this;}

  private:

    SupportedRfRegion m_rfRegion;
    bool m_rfRegionHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTWireless
} // namespace Aws
