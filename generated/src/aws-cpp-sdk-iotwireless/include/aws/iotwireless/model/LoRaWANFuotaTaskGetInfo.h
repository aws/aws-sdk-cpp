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
    AWS_IOTWIRELESS_API LoRaWANFuotaTaskGetInfo() = default;
    AWS_IOTWIRELESS_API LoRaWANFuotaTaskGetInfo(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTWIRELESS_API LoRaWANFuotaTaskGetInfo& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTWIRELESS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    
    inline const Aws::String& GetRfRegion() const { return m_rfRegion; }
    inline bool RfRegionHasBeenSet() const { return m_rfRegionHasBeenSet; }
    template<typename RfRegionT = Aws::String>
    void SetRfRegion(RfRegionT&& value) { m_rfRegionHasBeenSet = true; m_rfRegion = std::forward<RfRegionT>(value); }
    template<typename RfRegionT = Aws::String>
    LoRaWANFuotaTaskGetInfo& WithRfRegion(RfRegionT&& value) { SetRfRegion(std::forward<RfRegionT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::Utils::DateTime& GetStartTime() const { return m_startTime; }
    inline bool StartTimeHasBeenSet() const { return m_startTimeHasBeenSet; }
    template<typename StartTimeT = Aws::Utils::DateTime>
    void SetStartTime(StartTimeT&& value) { m_startTimeHasBeenSet = true; m_startTime = std::forward<StartTimeT>(value); }
    template<typename StartTimeT = Aws::Utils::DateTime>
    LoRaWANFuotaTaskGetInfo& WithStartTime(StartTimeT&& value) { SetStartTime(std::forward<StartTimeT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_rfRegion;
    bool m_rfRegionHasBeenSet = false;

    Aws::Utils::DateTime m_startTime{};
    bool m_startTimeHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTWireless
} // namespace Aws
