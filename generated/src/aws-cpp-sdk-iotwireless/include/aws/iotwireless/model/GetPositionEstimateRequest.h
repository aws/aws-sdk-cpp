/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotwireless/IoTWireless_EXPORTS.h>
#include <aws/iotwireless/IoTWirelessRequest.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/iotwireless/model/CellTowers.h>
#include <aws/iotwireless/model/Ip.h>
#include <aws/iotwireless/model/Gnss.h>
#include <aws/core/utils/DateTime.h>
#include <aws/iotwireless/model/WiFiAccessPoint.h>
#include <utility>

namespace Aws
{
namespace IoTWireless
{
namespace Model
{

  /**
   */
  class GetPositionEstimateRequest : public IoTWirelessRequest
  {
  public:
    AWS_IOTWIRELESS_API GetPositionEstimateRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetPositionEstimate"; }

    AWS_IOTWIRELESS_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>Retrieves an estimated device position by resolving WLAN measurement data.
     * The position is resolved using HERE's Wi-Fi based solver.</p>
     */
    inline const Aws::Vector<WiFiAccessPoint>& GetWiFiAccessPoints() const { return m_wiFiAccessPoints; }
    inline bool WiFiAccessPointsHasBeenSet() const { return m_wiFiAccessPointsHasBeenSet; }
    template<typename WiFiAccessPointsT = Aws::Vector<WiFiAccessPoint>>
    void SetWiFiAccessPoints(WiFiAccessPointsT&& value) { m_wiFiAccessPointsHasBeenSet = true; m_wiFiAccessPoints = std::forward<WiFiAccessPointsT>(value); }
    template<typename WiFiAccessPointsT = Aws::Vector<WiFiAccessPoint>>
    GetPositionEstimateRequest& WithWiFiAccessPoints(WiFiAccessPointsT&& value) { SetWiFiAccessPoints(std::forward<WiFiAccessPointsT>(value)); return *this;}
    template<typename WiFiAccessPointsT = WiFiAccessPoint>
    GetPositionEstimateRequest& AddWiFiAccessPoints(WiFiAccessPointsT&& value) { m_wiFiAccessPointsHasBeenSet = true; m_wiFiAccessPoints.emplace_back(std::forward<WiFiAccessPointsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Retrieves an estimated device position by resolving measurement data from
     * cellular radio towers. The position is resolved using HERE's cellular-based
     * solver.</p>
     */
    inline const CellTowers& GetCellTowers() const { return m_cellTowers; }
    inline bool CellTowersHasBeenSet() const { return m_cellTowersHasBeenSet; }
    template<typename CellTowersT = CellTowers>
    void SetCellTowers(CellTowersT&& value) { m_cellTowersHasBeenSet = true; m_cellTowers = std::forward<CellTowersT>(value); }
    template<typename CellTowersT = CellTowers>
    GetPositionEstimateRequest& WithCellTowers(CellTowersT&& value) { SetCellTowers(std::forward<CellTowersT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Retrieves an estimated device position by resolving the IP address
     * information from the device. The position is resolved using MaxMind's IP-based
     * solver.</p>
     */
    inline const Ip& GetIp() const { return m_ip; }
    inline bool IpHasBeenSet() const { return m_ipHasBeenSet; }
    template<typename IpT = Ip>
    void SetIp(IpT&& value) { m_ipHasBeenSet = true; m_ip = std::forward<IpT>(value); }
    template<typename IpT = Ip>
    GetPositionEstimateRequest& WithIp(IpT&& value) { SetIp(std::forward<IpT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Retrieves an estimated device position by resolving the global navigation
     * satellite system (GNSS) scan data. The position is resolved using the GNSS
     * solver powered by LoRa Cloud.</p>
     */
    inline const Gnss& GetGnss() const { return m_gnss; }
    inline bool GnssHasBeenSet() const { return m_gnssHasBeenSet; }
    template<typename GnssT = Gnss>
    void SetGnss(GnssT&& value) { m_gnssHasBeenSet = true; m_gnss = std::forward<GnssT>(value); }
    template<typename GnssT = Gnss>
    GetPositionEstimateRequest& WithGnss(GnssT&& value) { SetGnss(std::forward<GnssT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Optional information that specifies the time when the position information
     * will be resolved. It uses the Unix timestamp format. If not specified, the time
     * at which the request was received will be used.</p>
     */
    inline const Aws::Utils::DateTime& GetTimestamp() const { return m_timestamp; }
    inline bool TimestampHasBeenSet() const { return m_timestampHasBeenSet; }
    template<typename TimestampT = Aws::Utils::DateTime>
    void SetTimestamp(TimestampT&& value) { m_timestampHasBeenSet = true; m_timestamp = std::forward<TimestampT>(value); }
    template<typename TimestampT = Aws::Utils::DateTime>
    GetPositionEstimateRequest& WithTimestamp(TimestampT&& value) { SetTimestamp(std::forward<TimestampT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<WiFiAccessPoint> m_wiFiAccessPoints;
    bool m_wiFiAccessPointsHasBeenSet = false;

    CellTowers m_cellTowers;
    bool m_cellTowersHasBeenSet = false;

    Ip m_ip;
    bool m_ipHasBeenSet = false;

    Gnss m_gnss;
    bool m_gnssHasBeenSet = false;

    Aws::Utils::DateTime m_timestamp{};
    bool m_timestampHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTWireless
} // namespace Aws
