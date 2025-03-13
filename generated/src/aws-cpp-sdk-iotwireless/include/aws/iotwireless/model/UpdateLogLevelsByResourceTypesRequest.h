/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotwireless/IoTWireless_EXPORTS.h>
#include <aws/iotwireless/IoTWirelessRequest.h>
#include <aws/iotwireless/model/LogLevel.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/iotwireless/model/FuotaTaskLogOption.h>
#include <aws/iotwireless/model/WirelessDeviceLogOption.h>
#include <aws/iotwireless/model/WirelessGatewayLogOption.h>
#include <utility>

namespace Aws
{
namespace IoTWireless
{
namespace Model
{

  /**
   */
  class UpdateLogLevelsByResourceTypesRequest : public IoTWirelessRequest
  {
  public:
    AWS_IOTWIRELESS_API UpdateLogLevelsByResourceTypesRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateLogLevelsByResourceTypes"; }

    AWS_IOTWIRELESS_API Aws::String SerializePayload() const override;


    ///@{
    
    inline LogLevel GetDefaultLogLevel() const { return m_defaultLogLevel; }
    inline bool DefaultLogLevelHasBeenSet() const { return m_defaultLogLevelHasBeenSet; }
    inline void SetDefaultLogLevel(LogLevel value) { m_defaultLogLevelHasBeenSet = true; m_defaultLogLevel = value; }
    inline UpdateLogLevelsByResourceTypesRequest& WithDefaultLogLevel(LogLevel value) { SetDefaultLogLevel(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::Vector<FuotaTaskLogOption>& GetFuotaTaskLogOptions() const { return m_fuotaTaskLogOptions; }
    inline bool FuotaTaskLogOptionsHasBeenSet() const { return m_fuotaTaskLogOptionsHasBeenSet; }
    template<typename FuotaTaskLogOptionsT = Aws::Vector<FuotaTaskLogOption>>
    void SetFuotaTaskLogOptions(FuotaTaskLogOptionsT&& value) { m_fuotaTaskLogOptionsHasBeenSet = true; m_fuotaTaskLogOptions = std::forward<FuotaTaskLogOptionsT>(value); }
    template<typename FuotaTaskLogOptionsT = Aws::Vector<FuotaTaskLogOption>>
    UpdateLogLevelsByResourceTypesRequest& WithFuotaTaskLogOptions(FuotaTaskLogOptionsT&& value) { SetFuotaTaskLogOptions(std::forward<FuotaTaskLogOptionsT>(value)); return *this;}
    template<typename FuotaTaskLogOptionsT = FuotaTaskLogOption>
    UpdateLogLevelsByResourceTypesRequest& AddFuotaTaskLogOptions(FuotaTaskLogOptionsT&& value) { m_fuotaTaskLogOptionsHasBeenSet = true; m_fuotaTaskLogOptions.emplace_back(std::forward<FuotaTaskLogOptionsT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::Vector<WirelessDeviceLogOption>& GetWirelessDeviceLogOptions() const { return m_wirelessDeviceLogOptions; }
    inline bool WirelessDeviceLogOptionsHasBeenSet() const { return m_wirelessDeviceLogOptionsHasBeenSet; }
    template<typename WirelessDeviceLogOptionsT = Aws::Vector<WirelessDeviceLogOption>>
    void SetWirelessDeviceLogOptions(WirelessDeviceLogOptionsT&& value) { m_wirelessDeviceLogOptionsHasBeenSet = true; m_wirelessDeviceLogOptions = std::forward<WirelessDeviceLogOptionsT>(value); }
    template<typename WirelessDeviceLogOptionsT = Aws::Vector<WirelessDeviceLogOption>>
    UpdateLogLevelsByResourceTypesRequest& WithWirelessDeviceLogOptions(WirelessDeviceLogOptionsT&& value) { SetWirelessDeviceLogOptions(std::forward<WirelessDeviceLogOptionsT>(value)); return *this;}
    template<typename WirelessDeviceLogOptionsT = WirelessDeviceLogOption>
    UpdateLogLevelsByResourceTypesRequest& AddWirelessDeviceLogOptions(WirelessDeviceLogOptionsT&& value) { m_wirelessDeviceLogOptionsHasBeenSet = true; m_wirelessDeviceLogOptions.emplace_back(std::forward<WirelessDeviceLogOptionsT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::Vector<WirelessGatewayLogOption>& GetWirelessGatewayLogOptions() const { return m_wirelessGatewayLogOptions; }
    inline bool WirelessGatewayLogOptionsHasBeenSet() const { return m_wirelessGatewayLogOptionsHasBeenSet; }
    template<typename WirelessGatewayLogOptionsT = Aws::Vector<WirelessGatewayLogOption>>
    void SetWirelessGatewayLogOptions(WirelessGatewayLogOptionsT&& value) { m_wirelessGatewayLogOptionsHasBeenSet = true; m_wirelessGatewayLogOptions = std::forward<WirelessGatewayLogOptionsT>(value); }
    template<typename WirelessGatewayLogOptionsT = Aws::Vector<WirelessGatewayLogOption>>
    UpdateLogLevelsByResourceTypesRequest& WithWirelessGatewayLogOptions(WirelessGatewayLogOptionsT&& value) { SetWirelessGatewayLogOptions(std::forward<WirelessGatewayLogOptionsT>(value)); return *this;}
    template<typename WirelessGatewayLogOptionsT = WirelessGatewayLogOption>
    UpdateLogLevelsByResourceTypesRequest& AddWirelessGatewayLogOptions(WirelessGatewayLogOptionsT&& value) { m_wirelessGatewayLogOptionsHasBeenSet = true; m_wirelessGatewayLogOptions.emplace_back(std::forward<WirelessGatewayLogOptionsT>(value)); return *this; }
    ///@}
  private:

    LogLevel m_defaultLogLevel{LogLevel::NOT_SET};
    bool m_defaultLogLevelHasBeenSet = false;

    Aws::Vector<FuotaTaskLogOption> m_fuotaTaskLogOptions;
    bool m_fuotaTaskLogOptionsHasBeenSet = false;

    Aws::Vector<WirelessDeviceLogOption> m_wirelessDeviceLogOptions;
    bool m_wirelessDeviceLogOptionsHasBeenSet = false;

    Aws::Vector<WirelessGatewayLogOption> m_wirelessGatewayLogOptions;
    bool m_wirelessGatewayLogOptionsHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTWireless
} // namespace Aws
