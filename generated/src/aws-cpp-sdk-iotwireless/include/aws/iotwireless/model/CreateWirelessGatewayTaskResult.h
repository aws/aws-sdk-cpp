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
  class CreateWirelessGatewayTaskResult
  {
  public:
    AWS_IOTWIRELESS_API CreateWirelessGatewayTaskResult() = default;
    AWS_IOTWIRELESS_API CreateWirelessGatewayTaskResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOTWIRELESS_API CreateWirelessGatewayTaskResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The ID of the WirelessGatewayTaskDefinition.</p>
     */
    inline const Aws::String& GetWirelessGatewayTaskDefinitionId() const { return m_wirelessGatewayTaskDefinitionId; }
    template<typename WirelessGatewayTaskDefinitionIdT = Aws::String>
    void SetWirelessGatewayTaskDefinitionId(WirelessGatewayTaskDefinitionIdT&& value) { m_wirelessGatewayTaskDefinitionIdHasBeenSet = true; m_wirelessGatewayTaskDefinitionId = std::forward<WirelessGatewayTaskDefinitionIdT>(value); }
    template<typename WirelessGatewayTaskDefinitionIdT = Aws::String>
    CreateWirelessGatewayTaskResult& WithWirelessGatewayTaskDefinitionId(WirelessGatewayTaskDefinitionIdT&& value) { SetWirelessGatewayTaskDefinitionId(std::forward<WirelessGatewayTaskDefinitionIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the request.</p>
     */
    inline WirelessGatewayTaskStatus GetStatus() const { return m_status; }
    inline void SetStatus(WirelessGatewayTaskStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline CreateWirelessGatewayTaskResult& WithStatus(WirelessGatewayTaskStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    CreateWirelessGatewayTaskResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_wirelessGatewayTaskDefinitionId;
    bool m_wirelessGatewayTaskDefinitionIdHasBeenSet = false;

    WirelessGatewayTaskStatus m_status{WirelessGatewayTaskStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTWireless
} // namespace Aws
