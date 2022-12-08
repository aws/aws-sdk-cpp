/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotwireless/IoTWireless_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
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
   * <p>The LoRaWAN information returned from getting a FUOTA task.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotwireless-2020-11-22/LoRaWANFuotaTaskGetInfo">AWS
   * API Reference</a></p>
   */
  class LoRaWANFuotaTaskGetInfo
  {
  public:
    AWS_IOTWIRELESS_API LoRaWANFuotaTaskGetInfo();
    AWS_IOTWIRELESS_API LoRaWANFuotaTaskGetInfo(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTWIRELESS_API LoRaWANFuotaTaskGetInfo& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTWIRELESS_API Aws::Utils::Json::JsonValue Jsonize() const;


    
    inline const Aws::String& GetRfRegion() const{ return m_rfRegion; }

    
    inline bool RfRegionHasBeenSet() const { return m_rfRegionHasBeenSet; }

    
    inline void SetRfRegion(const Aws::String& value) { m_rfRegionHasBeenSet = true; m_rfRegion = value; }

    
    inline void SetRfRegion(Aws::String&& value) { m_rfRegionHasBeenSet = true; m_rfRegion = std::move(value); }

    
    inline void SetRfRegion(const char* value) { m_rfRegionHasBeenSet = true; m_rfRegion.assign(value); }

    
    inline LoRaWANFuotaTaskGetInfo& WithRfRegion(const Aws::String& value) { SetRfRegion(value); return *this;}

    
    inline LoRaWANFuotaTaskGetInfo& WithRfRegion(Aws::String&& value) { SetRfRegion(std::move(value)); return *this;}

    
    inline LoRaWANFuotaTaskGetInfo& WithRfRegion(const char* value) { SetRfRegion(value); return *this;}


    
    inline const Aws::Utils::DateTime& GetStartTime() const{ return m_startTime; }

    
    inline bool StartTimeHasBeenSet() const { return m_startTimeHasBeenSet; }

    
    inline void SetStartTime(const Aws::Utils::DateTime& value) { m_startTimeHasBeenSet = true; m_startTime = value; }

    
    inline void SetStartTime(Aws::Utils::DateTime&& value) { m_startTimeHasBeenSet = true; m_startTime = std::move(value); }

    
    inline LoRaWANFuotaTaskGetInfo& WithStartTime(const Aws::Utils::DateTime& value) { SetStartTime(value); return *this;}

    
    inline LoRaWANFuotaTaskGetInfo& WithStartTime(Aws::Utils::DateTime&& value) { SetStartTime(std::move(value)); return *this;}

  private:

    Aws::String m_rfRegion;
    bool m_rfRegionHasBeenSet = false;

    Aws::Utils::DateTime m_startTime;
    bool m_startTimeHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTWireless
} // namespace Aws
