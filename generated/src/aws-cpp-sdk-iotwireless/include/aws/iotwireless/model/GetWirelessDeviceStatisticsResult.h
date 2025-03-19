/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotwireless/IoTWireless_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iotwireless/model/LoRaWANDeviceMetadata.h>
#include <aws/iotwireless/model/SidewalkDeviceMetadata.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace IoTWireless
{
namespace Model
{
  class GetWirelessDeviceStatisticsResult
  {
  public:
    AWS_IOTWIRELESS_API GetWirelessDeviceStatisticsResult() = default;
    AWS_IOTWIRELESS_API GetWirelessDeviceStatisticsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOTWIRELESS_API GetWirelessDeviceStatisticsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The ID of the wireless device.</p>
     */
    inline const Aws::String& GetWirelessDeviceId() const { return m_wirelessDeviceId; }
    template<typename WirelessDeviceIdT = Aws::String>
    void SetWirelessDeviceId(WirelessDeviceIdT&& value) { m_wirelessDeviceIdHasBeenSet = true; m_wirelessDeviceId = std::forward<WirelessDeviceIdT>(value); }
    template<typename WirelessDeviceIdT = Aws::String>
    GetWirelessDeviceStatisticsResult& WithWirelessDeviceId(WirelessDeviceIdT&& value) { SetWirelessDeviceId(std::forward<WirelessDeviceIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time when the most recent uplink was received.</p> 
     * <p>This value is only valid for 3 months.</p> 
     */
    inline const Aws::String& GetLastUplinkReceivedAt() const { return m_lastUplinkReceivedAt; }
    template<typename LastUplinkReceivedAtT = Aws::String>
    void SetLastUplinkReceivedAt(LastUplinkReceivedAtT&& value) { m_lastUplinkReceivedAtHasBeenSet = true; m_lastUplinkReceivedAt = std::forward<LastUplinkReceivedAtT>(value); }
    template<typename LastUplinkReceivedAtT = Aws::String>
    GetWirelessDeviceStatisticsResult& WithLastUplinkReceivedAt(LastUplinkReceivedAtT&& value) { SetLastUplinkReceivedAt(std::forward<LastUplinkReceivedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the wireless device's operations.</p>
     */
    inline const LoRaWANDeviceMetadata& GetLoRaWAN() const { return m_loRaWAN; }
    template<typename LoRaWANT = LoRaWANDeviceMetadata>
    void SetLoRaWAN(LoRaWANT&& value) { m_loRaWANHasBeenSet = true; m_loRaWAN = std::forward<LoRaWANT>(value); }
    template<typename LoRaWANT = LoRaWANDeviceMetadata>
    GetWirelessDeviceStatisticsResult& WithLoRaWAN(LoRaWANT&& value) { SetLoRaWAN(std::forward<LoRaWANT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>MetaData for Sidewalk device.</p>
     */
    inline const SidewalkDeviceMetadata& GetSidewalk() const { return m_sidewalk; }
    template<typename SidewalkT = SidewalkDeviceMetadata>
    void SetSidewalk(SidewalkT&& value) { m_sidewalkHasBeenSet = true; m_sidewalk = std::forward<SidewalkT>(value); }
    template<typename SidewalkT = SidewalkDeviceMetadata>
    GetWirelessDeviceStatisticsResult& WithSidewalk(SidewalkT&& value) { SetSidewalk(std::forward<SidewalkT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetWirelessDeviceStatisticsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_wirelessDeviceId;
    bool m_wirelessDeviceIdHasBeenSet = false;

    Aws::String m_lastUplinkReceivedAt;
    bool m_lastUplinkReceivedAtHasBeenSet = false;

    LoRaWANDeviceMetadata m_loRaWAN;
    bool m_loRaWANHasBeenSet = false;

    SidewalkDeviceMetadata m_sidewalk;
    bool m_sidewalkHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTWireless
} // namespace Aws
