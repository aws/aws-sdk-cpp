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
    AWS_IOTWIRELESS_API GetWirelessGatewayStatisticsResult() = default;
    AWS_IOTWIRELESS_API GetWirelessGatewayStatisticsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOTWIRELESS_API GetWirelessGatewayStatisticsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The ID of the wireless gateway.</p>
     */
    inline const Aws::String& GetWirelessGatewayId() const { return m_wirelessGatewayId; }
    template<typename WirelessGatewayIdT = Aws::String>
    void SetWirelessGatewayId(WirelessGatewayIdT&& value) { m_wirelessGatewayIdHasBeenSet = true; m_wirelessGatewayId = std::forward<WirelessGatewayIdT>(value); }
    template<typename WirelessGatewayIdT = Aws::String>
    GetWirelessGatewayStatisticsResult& WithWirelessGatewayId(WirelessGatewayIdT&& value) { SetWirelessGatewayId(std::forward<WirelessGatewayIdT>(value)); return *this;}
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
    GetWirelessGatewayStatisticsResult& WithLastUplinkReceivedAt(LastUplinkReceivedAtT&& value) { SetLastUplinkReceivedAt(std::forward<LastUplinkReceivedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The connection status of the wireless gateway.</p>
     */
    inline ConnectionStatus GetConnectionStatus() const { return m_connectionStatus; }
    inline void SetConnectionStatus(ConnectionStatus value) { m_connectionStatusHasBeenSet = true; m_connectionStatus = value; }
    inline GetWirelessGatewayStatisticsResult& WithConnectionStatus(ConnectionStatus value) { SetConnectionStatus(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetWirelessGatewayStatisticsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_wirelessGatewayId;
    bool m_wirelessGatewayIdHasBeenSet = false;

    Aws::String m_lastUplinkReceivedAt;
    bool m_lastUplinkReceivedAtHasBeenSet = false;

    ConnectionStatus m_connectionStatus{ConnectionStatus::NOT_SET};
    bool m_connectionStatusHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTWireless
} // namespace Aws
