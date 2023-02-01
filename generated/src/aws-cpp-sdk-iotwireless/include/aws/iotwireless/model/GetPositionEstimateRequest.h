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
    AWS_IOTWIRELESS_API GetPositionEstimateRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetPositionEstimate"; }

    AWS_IOTWIRELESS_API Aws::String SerializePayload() const override;


    /**
     * <p>Retrieves an estimated device position by resolving WLAN measurement data.
     * The position is resolved using HERE's Wi-Fi based solver.</p>
     */
    inline const Aws::Vector<WiFiAccessPoint>& GetWiFiAccessPoints() const{ return m_wiFiAccessPoints; }

    /**
     * <p>Retrieves an estimated device position by resolving WLAN measurement data.
     * The position is resolved using HERE's Wi-Fi based solver.</p>
     */
    inline bool WiFiAccessPointsHasBeenSet() const { return m_wiFiAccessPointsHasBeenSet; }

    /**
     * <p>Retrieves an estimated device position by resolving WLAN measurement data.
     * The position is resolved using HERE's Wi-Fi based solver.</p>
     */
    inline void SetWiFiAccessPoints(const Aws::Vector<WiFiAccessPoint>& value) { m_wiFiAccessPointsHasBeenSet = true; m_wiFiAccessPoints = value; }

    /**
     * <p>Retrieves an estimated device position by resolving WLAN measurement data.
     * The position is resolved using HERE's Wi-Fi based solver.</p>
     */
    inline void SetWiFiAccessPoints(Aws::Vector<WiFiAccessPoint>&& value) { m_wiFiAccessPointsHasBeenSet = true; m_wiFiAccessPoints = std::move(value); }

    /**
     * <p>Retrieves an estimated device position by resolving WLAN measurement data.
     * The position is resolved using HERE's Wi-Fi based solver.</p>
     */
    inline GetPositionEstimateRequest& WithWiFiAccessPoints(const Aws::Vector<WiFiAccessPoint>& value) { SetWiFiAccessPoints(value); return *this;}

    /**
     * <p>Retrieves an estimated device position by resolving WLAN measurement data.
     * The position is resolved using HERE's Wi-Fi based solver.</p>
     */
    inline GetPositionEstimateRequest& WithWiFiAccessPoints(Aws::Vector<WiFiAccessPoint>&& value) { SetWiFiAccessPoints(std::move(value)); return *this;}

    /**
     * <p>Retrieves an estimated device position by resolving WLAN measurement data.
     * The position is resolved using HERE's Wi-Fi based solver.</p>
     */
    inline GetPositionEstimateRequest& AddWiFiAccessPoints(const WiFiAccessPoint& value) { m_wiFiAccessPointsHasBeenSet = true; m_wiFiAccessPoints.push_back(value); return *this; }

    /**
     * <p>Retrieves an estimated device position by resolving WLAN measurement data.
     * The position is resolved using HERE's Wi-Fi based solver.</p>
     */
    inline GetPositionEstimateRequest& AddWiFiAccessPoints(WiFiAccessPoint&& value) { m_wiFiAccessPointsHasBeenSet = true; m_wiFiAccessPoints.push_back(std::move(value)); return *this; }


    /**
     * <p>Retrieves an estimated device position by resolving measurement data from
     * cellular radio towers. The position is resolved using HERE's cellular-based
     * solver.</p>
     */
    inline const CellTowers& GetCellTowers() const{ return m_cellTowers; }

    /**
     * <p>Retrieves an estimated device position by resolving measurement data from
     * cellular radio towers. The position is resolved using HERE's cellular-based
     * solver.</p>
     */
    inline bool CellTowersHasBeenSet() const { return m_cellTowersHasBeenSet; }

    /**
     * <p>Retrieves an estimated device position by resolving measurement data from
     * cellular radio towers. The position is resolved using HERE's cellular-based
     * solver.</p>
     */
    inline void SetCellTowers(const CellTowers& value) { m_cellTowersHasBeenSet = true; m_cellTowers = value; }

    /**
     * <p>Retrieves an estimated device position by resolving measurement data from
     * cellular radio towers. The position is resolved using HERE's cellular-based
     * solver.</p>
     */
    inline void SetCellTowers(CellTowers&& value) { m_cellTowersHasBeenSet = true; m_cellTowers = std::move(value); }

    /**
     * <p>Retrieves an estimated device position by resolving measurement data from
     * cellular radio towers. The position is resolved using HERE's cellular-based
     * solver.</p>
     */
    inline GetPositionEstimateRequest& WithCellTowers(const CellTowers& value) { SetCellTowers(value); return *this;}

    /**
     * <p>Retrieves an estimated device position by resolving measurement data from
     * cellular radio towers. The position is resolved using HERE's cellular-based
     * solver.</p>
     */
    inline GetPositionEstimateRequest& WithCellTowers(CellTowers&& value) { SetCellTowers(std::move(value)); return *this;}


    /**
     * <p>Retrieves an estimated device position by resolving the IP address
     * information from the device. The position is resolved using MaxMind's IP-based
     * solver.</p>
     */
    inline const Ip& GetIp() const{ return m_ip; }

    /**
     * <p>Retrieves an estimated device position by resolving the IP address
     * information from the device. The position is resolved using MaxMind's IP-based
     * solver.</p>
     */
    inline bool IpHasBeenSet() const { return m_ipHasBeenSet; }

    /**
     * <p>Retrieves an estimated device position by resolving the IP address
     * information from the device. The position is resolved using MaxMind's IP-based
     * solver.</p>
     */
    inline void SetIp(const Ip& value) { m_ipHasBeenSet = true; m_ip = value; }

    /**
     * <p>Retrieves an estimated device position by resolving the IP address
     * information from the device. The position is resolved using MaxMind's IP-based
     * solver.</p>
     */
    inline void SetIp(Ip&& value) { m_ipHasBeenSet = true; m_ip = std::move(value); }

    /**
     * <p>Retrieves an estimated device position by resolving the IP address
     * information from the device. The position is resolved using MaxMind's IP-based
     * solver.</p>
     */
    inline GetPositionEstimateRequest& WithIp(const Ip& value) { SetIp(value); return *this;}

    /**
     * <p>Retrieves an estimated device position by resolving the IP address
     * information from the device. The position is resolved using MaxMind's IP-based
     * solver.</p>
     */
    inline GetPositionEstimateRequest& WithIp(Ip&& value) { SetIp(std::move(value)); return *this;}


    /**
     * <p>Retrieves an estimated device position by resolving the global navigation
     * satellite system (GNSS) scan data. The position is resolved using the GNSS
     * solver powered by LoRa Cloud.</p>
     */
    inline const Gnss& GetGnss() const{ return m_gnss; }

    /**
     * <p>Retrieves an estimated device position by resolving the global navigation
     * satellite system (GNSS) scan data. The position is resolved using the GNSS
     * solver powered by LoRa Cloud.</p>
     */
    inline bool GnssHasBeenSet() const { return m_gnssHasBeenSet; }

    /**
     * <p>Retrieves an estimated device position by resolving the global navigation
     * satellite system (GNSS) scan data. The position is resolved using the GNSS
     * solver powered by LoRa Cloud.</p>
     */
    inline void SetGnss(const Gnss& value) { m_gnssHasBeenSet = true; m_gnss = value; }

    /**
     * <p>Retrieves an estimated device position by resolving the global navigation
     * satellite system (GNSS) scan data. The position is resolved using the GNSS
     * solver powered by LoRa Cloud.</p>
     */
    inline void SetGnss(Gnss&& value) { m_gnssHasBeenSet = true; m_gnss = std::move(value); }

    /**
     * <p>Retrieves an estimated device position by resolving the global navigation
     * satellite system (GNSS) scan data. The position is resolved using the GNSS
     * solver powered by LoRa Cloud.</p>
     */
    inline GetPositionEstimateRequest& WithGnss(const Gnss& value) { SetGnss(value); return *this;}

    /**
     * <p>Retrieves an estimated device position by resolving the global navigation
     * satellite system (GNSS) scan data. The position is resolved using the GNSS
     * solver powered by LoRa Cloud.</p>
     */
    inline GetPositionEstimateRequest& WithGnss(Gnss&& value) { SetGnss(std::move(value)); return *this;}


    /**
     * <p>Optional information that specifies the time when the position information
     * will be resolved. It uses the UNIX timestamp format. If not specified, the time
     * at which the request was received will be used.</p>
     */
    inline const Aws::Utils::DateTime& GetTimestamp() const{ return m_timestamp; }

    /**
     * <p>Optional information that specifies the time when the position information
     * will be resolved. It uses the UNIX timestamp format. If not specified, the time
     * at which the request was received will be used.</p>
     */
    inline bool TimestampHasBeenSet() const { return m_timestampHasBeenSet; }

    /**
     * <p>Optional information that specifies the time when the position information
     * will be resolved. It uses the UNIX timestamp format. If not specified, the time
     * at which the request was received will be used.</p>
     */
    inline void SetTimestamp(const Aws::Utils::DateTime& value) { m_timestampHasBeenSet = true; m_timestamp = value; }

    /**
     * <p>Optional information that specifies the time when the position information
     * will be resolved. It uses the UNIX timestamp format. If not specified, the time
     * at which the request was received will be used.</p>
     */
    inline void SetTimestamp(Aws::Utils::DateTime&& value) { m_timestampHasBeenSet = true; m_timestamp = std::move(value); }

    /**
     * <p>Optional information that specifies the time when the position information
     * will be resolved. It uses the UNIX timestamp format. If not specified, the time
     * at which the request was received will be used.</p>
     */
    inline GetPositionEstimateRequest& WithTimestamp(const Aws::Utils::DateTime& value) { SetTimestamp(value); return *this;}

    /**
     * <p>Optional information that specifies the time when the position information
     * will be resolved. It uses the UNIX timestamp format. If not specified, the time
     * at which the request was received will be used.</p>
     */
    inline GetPositionEstimateRequest& WithTimestamp(Aws::Utils::DateTime&& value) { SetTimestamp(std::move(value)); return *this;}

  private:

    Aws::Vector<WiFiAccessPoint> m_wiFiAccessPoints;
    bool m_wiFiAccessPointsHasBeenSet = false;

    CellTowers m_cellTowers;
    bool m_cellTowersHasBeenSet = false;

    Ip m_ip;
    bool m_ipHasBeenSet = false;

    Gnss m_gnss;
    bool m_gnssHasBeenSet = false;

    Aws::Utils::DateTime m_timestamp;
    bool m_timestampHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTWireless
} // namespace Aws
