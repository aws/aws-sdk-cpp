/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotwireless/IoTWireless_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iotwireless/model/ConnectionStatus.h>
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
  class GetWirelessGatewayStatisticsResult
  {
  public:
    AWS_IOTWIRELESS_API GetWirelessGatewayStatisticsResult();
    AWS_IOTWIRELESS_API GetWirelessGatewayStatisticsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOTWIRELESS_API GetWirelessGatewayStatisticsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The ID of the wireless gateway.</p>
     */
    inline const Aws::String& GetWirelessGatewayId() const{ return m_wirelessGatewayId; }

    /**
     * <p>The ID of the wireless gateway.</p>
     */
    inline void SetWirelessGatewayId(const Aws::String& value) { m_wirelessGatewayId = value; }

    /**
     * <p>The ID of the wireless gateway.</p>
     */
    inline void SetWirelessGatewayId(Aws::String&& value) { m_wirelessGatewayId = std::move(value); }

    /**
     * <p>The ID of the wireless gateway.</p>
     */
    inline void SetWirelessGatewayId(const char* value) { m_wirelessGatewayId.assign(value); }

    /**
     * <p>The ID of the wireless gateway.</p>
     */
    inline GetWirelessGatewayStatisticsResult& WithWirelessGatewayId(const Aws::String& value) { SetWirelessGatewayId(value); return *this;}

    /**
     * <p>The ID of the wireless gateway.</p>
     */
    inline GetWirelessGatewayStatisticsResult& WithWirelessGatewayId(Aws::String&& value) { SetWirelessGatewayId(std::move(value)); return *this;}

    /**
     * <p>The ID of the wireless gateway.</p>
     */
    inline GetWirelessGatewayStatisticsResult& WithWirelessGatewayId(const char* value) { SetWirelessGatewayId(value); return *this;}


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
    inline GetWirelessGatewayStatisticsResult& WithLastUplinkReceivedAt(const Aws::String& value) { SetLastUplinkReceivedAt(value); return *this;}

    /**
     * <p>The date and time when the most recent uplink was received.</p>
     */
    inline GetWirelessGatewayStatisticsResult& WithLastUplinkReceivedAt(Aws::String&& value) { SetLastUplinkReceivedAt(std::move(value)); return *this;}

    /**
     * <p>The date and time when the most recent uplink was received.</p>
     */
    inline GetWirelessGatewayStatisticsResult& WithLastUplinkReceivedAt(const char* value) { SetLastUplinkReceivedAt(value); return *this;}


    /**
     * <p>The connection status of the wireless gateway.</p>
     */
    inline const ConnectionStatus& GetConnectionStatus() const{ return m_connectionStatus; }

    /**
     * <p>The connection status of the wireless gateway.</p>
     */
    inline void SetConnectionStatus(const ConnectionStatus& value) { m_connectionStatus = value; }

    /**
     * <p>The connection status of the wireless gateway.</p>
     */
    inline void SetConnectionStatus(ConnectionStatus&& value) { m_connectionStatus = std::move(value); }

    /**
     * <p>The connection status of the wireless gateway.</p>
     */
    inline GetWirelessGatewayStatisticsResult& WithConnectionStatus(const ConnectionStatus& value) { SetConnectionStatus(value); return *this;}

    /**
     * <p>The connection status of the wireless gateway.</p>
     */
    inline GetWirelessGatewayStatisticsResult& WithConnectionStatus(ConnectionStatus&& value) { SetConnectionStatus(std::move(value)); return *this;}

  private:

    Aws::String m_wirelessGatewayId;

    Aws::String m_lastUplinkReceivedAt;

    ConnectionStatus m_connectionStatus;
  };

} // namespace Model
} // namespace IoTWireless
} // namespace Aws
