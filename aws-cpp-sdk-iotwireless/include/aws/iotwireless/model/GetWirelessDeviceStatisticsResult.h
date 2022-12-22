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
    AWS_IOTWIRELESS_API GetWirelessDeviceStatisticsResult();
    AWS_IOTWIRELESS_API GetWirelessDeviceStatisticsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOTWIRELESS_API GetWirelessDeviceStatisticsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The ID of the wireless device.</p>
     */
    inline const Aws::String& GetWirelessDeviceId() const{ return m_wirelessDeviceId; }

    /**
     * <p>The ID of the wireless device.</p>
     */
    inline void SetWirelessDeviceId(const Aws::String& value) { m_wirelessDeviceId = value; }

    /**
     * <p>The ID of the wireless device.</p>
     */
    inline void SetWirelessDeviceId(Aws::String&& value) { m_wirelessDeviceId = std::move(value); }

    /**
     * <p>The ID of the wireless device.</p>
     */
    inline void SetWirelessDeviceId(const char* value) { m_wirelessDeviceId.assign(value); }

    /**
     * <p>The ID of the wireless device.</p>
     */
    inline GetWirelessDeviceStatisticsResult& WithWirelessDeviceId(const Aws::String& value) { SetWirelessDeviceId(value); return *this;}

    /**
     * <p>The ID of the wireless device.</p>
     */
    inline GetWirelessDeviceStatisticsResult& WithWirelessDeviceId(Aws::String&& value) { SetWirelessDeviceId(std::move(value)); return *this;}

    /**
     * <p>The ID of the wireless device.</p>
     */
    inline GetWirelessDeviceStatisticsResult& WithWirelessDeviceId(const char* value) { SetWirelessDeviceId(value); return *this;}


    /**
     * <p>The date and time when the most recent uplink was received.</p>
     */
    inline const Aws::String& GetLastUplinkReceivedAt() const{ return m_lastUplinkReceivedAt; }

    /**
     * <p>The date and time when the most recent uplink was received.</p>
     */
    inline void SetLastUplinkReceivedAt(const Aws::String& value) { m_lastUplinkReceivedAt = value; }

    /**
     * <p>The date and time when the most recent uplink was received.</p>
     */
    inline void SetLastUplinkReceivedAt(Aws::String&& value) { m_lastUplinkReceivedAt = std::move(value); }

    /**
     * <p>The date and time when the most recent uplink was received.</p>
     */
    inline void SetLastUplinkReceivedAt(const char* value) { m_lastUplinkReceivedAt.assign(value); }

    /**
     * <p>The date and time when the most recent uplink was received.</p>
     */
    inline GetWirelessDeviceStatisticsResult& WithLastUplinkReceivedAt(const Aws::String& value) { SetLastUplinkReceivedAt(value); return *this;}

    /**
     * <p>The date and time when the most recent uplink was received.</p>
     */
    inline GetWirelessDeviceStatisticsResult& WithLastUplinkReceivedAt(Aws::String&& value) { SetLastUplinkReceivedAt(std::move(value)); return *this;}

    /**
     * <p>The date and time when the most recent uplink was received.</p>
     */
    inline GetWirelessDeviceStatisticsResult& WithLastUplinkReceivedAt(const char* value) { SetLastUplinkReceivedAt(value); return *this;}


    /**
     * <p>Information about the wireless device's operations.</p>
     */
    inline const LoRaWANDeviceMetadata& GetLoRaWAN() const{ return m_loRaWAN; }

    /**
     * <p>Information about the wireless device's operations.</p>
     */
    inline void SetLoRaWAN(const LoRaWANDeviceMetadata& value) { m_loRaWAN = value; }

    /**
     * <p>Information about the wireless device's operations.</p>
     */
    inline void SetLoRaWAN(LoRaWANDeviceMetadata&& value) { m_loRaWAN = std::move(value); }

    /**
     * <p>Information about the wireless device's operations.</p>
     */
    inline GetWirelessDeviceStatisticsResult& WithLoRaWAN(const LoRaWANDeviceMetadata& value) { SetLoRaWAN(value); return *this;}

    /**
     * <p>Information about the wireless device's operations.</p>
     */
    inline GetWirelessDeviceStatisticsResult& WithLoRaWAN(LoRaWANDeviceMetadata&& value) { SetLoRaWAN(std::move(value)); return *this;}


    /**
     * <p>MetaData for Sidewalk device.</p>
     */
    inline const SidewalkDeviceMetadata& GetSidewalk() const{ return m_sidewalk; }

    /**
     * <p>MetaData for Sidewalk device.</p>
     */
    inline void SetSidewalk(const SidewalkDeviceMetadata& value) { m_sidewalk = value; }

    /**
     * <p>MetaData for Sidewalk device.</p>
     */
    inline void SetSidewalk(SidewalkDeviceMetadata&& value) { m_sidewalk = std::move(value); }

    /**
     * <p>MetaData for Sidewalk device.</p>
     */
    inline GetWirelessDeviceStatisticsResult& WithSidewalk(const SidewalkDeviceMetadata& value) { SetSidewalk(value); return *this;}

    /**
     * <p>MetaData for Sidewalk device.</p>
     */
    inline GetWirelessDeviceStatisticsResult& WithSidewalk(SidewalkDeviceMetadata&& value) { SetSidewalk(std::move(value)); return *this;}

  private:

    Aws::String m_wirelessDeviceId;

    Aws::String m_lastUplinkReceivedAt;

    LoRaWANDeviceMetadata m_loRaWAN;

    SidewalkDeviceMetadata m_sidewalk;
  };

} // namespace Model
} // namespace IoTWireless
} // namespace Aws
