/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotwireless/IoTWireless_EXPORTS.h>
#include <aws/iotwireless/model/LogLevel.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iotwireless/model/WirelessGatewayLogOption.h>
#include <aws/iotwireless/model/WirelessDeviceLogOption.h>
#include <aws/iotwireless/model/FuotaTaskLogOption.h>
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
  class GetLogLevelsByResourceTypesResult
  {
  public:
    AWS_IOTWIRELESS_API GetLogLevelsByResourceTypesResult() = default;
    AWS_IOTWIRELESS_API GetLogLevelsByResourceTypesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOTWIRELESS_API GetLogLevelsByResourceTypesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    
    inline LogLevel GetDefaultLogLevel() const { return m_defaultLogLevel; }
    inline void SetDefaultLogLevel(LogLevel value) { m_defaultLogLevelHasBeenSet = true; m_defaultLogLevel = value; }
    inline GetLogLevelsByResourceTypesResult& WithDefaultLogLevel(LogLevel value) { SetDefaultLogLevel(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::Vector<WirelessGatewayLogOption>& GetWirelessGatewayLogOptions() const { return m_wirelessGatewayLogOptions; }
    template<typename WirelessGatewayLogOptionsT = Aws::Vector<WirelessGatewayLogOption>>
    void SetWirelessGatewayLogOptions(WirelessGatewayLogOptionsT&& value) { m_wirelessGatewayLogOptionsHasBeenSet = true; m_wirelessGatewayLogOptions = std::forward<WirelessGatewayLogOptionsT>(value); }
    template<typename WirelessGatewayLogOptionsT = Aws::Vector<WirelessGatewayLogOption>>
    GetLogLevelsByResourceTypesResult& WithWirelessGatewayLogOptions(WirelessGatewayLogOptionsT&& value) { SetWirelessGatewayLogOptions(std::forward<WirelessGatewayLogOptionsT>(value)); return *this;}
    template<typename WirelessGatewayLogOptionsT = WirelessGatewayLogOption>
    GetLogLevelsByResourceTypesResult& AddWirelessGatewayLogOptions(WirelessGatewayLogOptionsT&& value) { m_wirelessGatewayLogOptionsHasBeenSet = true; m_wirelessGatewayLogOptions.emplace_back(std::forward<WirelessGatewayLogOptionsT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::Vector<WirelessDeviceLogOption>& GetWirelessDeviceLogOptions() const { return m_wirelessDeviceLogOptions; }
    template<typename WirelessDeviceLogOptionsT = Aws::Vector<WirelessDeviceLogOption>>
    void SetWirelessDeviceLogOptions(WirelessDeviceLogOptionsT&& value) { m_wirelessDeviceLogOptionsHasBeenSet = true; m_wirelessDeviceLogOptions = std::forward<WirelessDeviceLogOptionsT>(value); }
    template<typename WirelessDeviceLogOptionsT = Aws::Vector<WirelessDeviceLogOption>>
    GetLogLevelsByResourceTypesResult& WithWirelessDeviceLogOptions(WirelessDeviceLogOptionsT&& value) { SetWirelessDeviceLogOptions(std::forward<WirelessDeviceLogOptionsT>(value)); return *this;}
    template<typename WirelessDeviceLogOptionsT = WirelessDeviceLogOption>
    GetLogLevelsByResourceTypesResult& AddWirelessDeviceLogOptions(WirelessDeviceLogOptionsT&& value) { m_wirelessDeviceLogOptionsHasBeenSet = true; m_wirelessDeviceLogOptions.emplace_back(std::forward<WirelessDeviceLogOptionsT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::Vector<FuotaTaskLogOption>& GetFuotaTaskLogOptions() const { return m_fuotaTaskLogOptions; }
    template<typename FuotaTaskLogOptionsT = Aws::Vector<FuotaTaskLogOption>>
    void SetFuotaTaskLogOptions(FuotaTaskLogOptionsT&& value) { m_fuotaTaskLogOptionsHasBeenSet = true; m_fuotaTaskLogOptions = std::forward<FuotaTaskLogOptionsT>(value); }
    template<typename FuotaTaskLogOptionsT = Aws::Vector<FuotaTaskLogOption>>
    GetLogLevelsByResourceTypesResult& WithFuotaTaskLogOptions(FuotaTaskLogOptionsT&& value) { SetFuotaTaskLogOptions(std::forward<FuotaTaskLogOptionsT>(value)); return *this;}
    template<typename FuotaTaskLogOptionsT = FuotaTaskLogOption>
    GetLogLevelsByResourceTypesResult& AddFuotaTaskLogOptions(FuotaTaskLogOptionsT&& value) { m_fuotaTaskLogOptionsHasBeenSet = true; m_fuotaTaskLogOptions.emplace_back(std::forward<FuotaTaskLogOptionsT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetLogLevelsByResourceTypesResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    LogLevel m_defaultLogLevel{LogLevel::NOT_SET};
    bool m_defaultLogLevelHasBeenSet = false;

    Aws::Vector<WirelessGatewayLogOption> m_wirelessGatewayLogOptions;
    bool m_wirelessGatewayLogOptionsHasBeenSet = false;

    Aws::Vector<WirelessDeviceLogOption> m_wirelessDeviceLogOptions;
    bool m_wirelessDeviceLogOptionsHasBeenSet = false;

    Aws::Vector<FuotaTaskLogOption> m_fuotaTaskLogOptions;
    bool m_fuotaTaskLogOptionsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTWireless
} // namespace Aws
