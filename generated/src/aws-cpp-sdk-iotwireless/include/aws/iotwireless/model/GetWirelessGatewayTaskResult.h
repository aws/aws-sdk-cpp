/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotwireless/IoTWireless_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iotwireless/model/WirelessGatewayTaskStatus.h>
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
  class GetWirelessGatewayTaskResult
  {
  public:
    AWS_IOTWIRELESS_API GetWirelessGatewayTaskResult() = default;
    AWS_IOTWIRELESS_API GetWirelessGatewayTaskResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOTWIRELESS_API GetWirelessGatewayTaskResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The ID of the wireless gateway.</p>
     */
    inline const Aws::String& GetWirelessGatewayId() const { return m_wirelessGatewayId; }
    template<typename WirelessGatewayIdT = Aws::String>
    void SetWirelessGatewayId(WirelessGatewayIdT&& value) { m_wirelessGatewayIdHasBeenSet = true; m_wirelessGatewayId = std::forward<WirelessGatewayIdT>(value); }
    template<typename WirelessGatewayIdT = Aws::String>
    GetWirelessGatewayTaskResult& WithWirelessGatewayId(WirelessGatewayIdT&& value) { SetWirelessGatewayId(std::forward<WirelessGatewayIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the WirelessGatewayTask.</p>
     */
    inline const Aws::String& GetWirelessGatewayTaskDefinitionId() const { return m_wirelessGatewayTaskDefinitionId; }
    template<typename WirelessGatewayTaskDefinitionIdT = Aws::String>
    void SetWirelessGatewayTaskDefinitionId(WirelessGatewayTaskDefinitionIdT&& value) { m_wirelessGatewayTaskDefinitionIdHasBeenSet = true; m_wirelessGatewayTaskDefinitionId = std::forward<WirelessGatewayTaskDefinitionIdT>(value); }
    template<typename WirelessGatewayTaskDefinitionIdT = Aws::String>
    GetWirelessGatewayTaskResult& WithWirelessGatewayTaskDefinitionId(WirelessGatewayTaskDefinitionIdT&& value) { SetWirelessGatewayTaskDefinitionId(std::forward<WirelessGatewayTaskDefinitionIdT>(value)); return *this;}
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
    GetWirelessGatewayTaskResult& WithLastUplinkReceivedAt(LastUplinkReceivedAtT&& value) { SetLastUplinkReceivedAt(std::forward<LastUplinkReceivedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time when the task was created.</p>
     */
    inline const Aws::String& GetTaskCreatedAt() const { return m_taskCreatedAt; }
    template<typename TaskCreatedAtT = Aws::String>
    void SetTaskCreatedAt(TaskCreatedAtT&& value) { m_taskCreatedAtHasBeenSet = true; m_taskCreatedAt = std::forward<TaskCreatedAtT>(value); }
    template<typename TaskCreatedAtT = Aws::String>
    GetWirelessGatewayTaskResult& WithTaskCreatedAt(TaskCreatedAtT&& value) { SetTaskCreatedAt(std::forward<TaskCreatedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the request.</p>
     */
    inline WirelessGatewayTaskStatus GetStatus() const { return m_status; }
    inline void SetStatus(WirelessGatewayTaskStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline GetWirelessGatewayTaskResult& WithStatus(WirelessGatewayTaskStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetWirelessGatewayTaskResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_wirelessGatewayId;
    bool m_wirelessGatewayIdHasBeenSet = false;

    Aws::String m_wirelessGatewayTaskDefinitionId;
    bool m_wirelessGatewayTaskDefinitionIdHasBeenSet = false;

    Aws::String m_lastUplinkReceivedAt;
    bool m_lastUplinkReceivedAtHasBeenSet = false;

    Aws::String m_taskCreatedAt;
    bool m_taskCreatedAtHasBeenSet = false;

    WirelessGatewayTaskStatus m_status{WirelessGatewayTaskStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTWireless
} // namespace Aws
