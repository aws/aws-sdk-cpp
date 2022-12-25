/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotwireless/IoTWireless_EXPORTS.h>
#include <aws/iotwireless/IoTWirelessRequest.h>
#include <aws/iotwireless/model/LogLevel.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
    AWS_IOTWIRELESS_API UpdateLogLevelsByResourceTypesRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateLogLevelsByResourceTypes"; }

    AWS_IOTWIRELESS_API Aws::String SerializePayload() const override;


    
    inline const LogLevel& GetDefaultLogLevel() const{ return m_defaultLogLevel; }

    
    inline bool DefaultLogLevelHasBeenSet() const { return m_defaultLogLevelHasBeenSet; }

    
    inline void SetDefaultLogLevel(const LogLevel& value) { m_defaultLogLevelHasBeenSet = true; m_defaultLogLevel = value; }

    
    inline void SetDefaultLogLevel(LogLevel&& value) { m_defaultLogLevelHasBeenSet = true; m_defaultLogLevel = std::move(value); }

    
    inline UpdateLogLevelsByResourceTypesRequest& WithDefaultLogLevel(const LogLevel& value) { SetDefaultLogLevel(value); return *this;}

    
    inline UpdateLogLevelsByResourceTypesRequest& WithDefaultLogLevel(LogLevel&& value) { SetDefaultLogLevel(std::move(value)); return *this;}


    
    inline const Aws::Vector<WirelessDeviceLogOption>& GetWirelessDeviceLogOptions() const{ return m_wirelessDeviceLogOptions; }

    
    inline bool WirelessDeviceLogOptionsHasBeenSet() const { return m_wirelessDeviceLogOptionsHasBeenSet; }

    
    inline void SetWirelessDeviceLogOptions(const Aws::Vector<WirelessDeviceLogOption>& value) { m_wirelessDeviceLogOptionsHasBeenSet = true; m_wirelessDeviceLogOptions = value; }

    
    inline void SetWirelessDeviceLogOptions(Aws::Vector<WirelessDeviceLogOption>&& value) { m_wirelessDeviceLogOptionsHasBeenSet = true; m_wirelessDeviceLogOptions = std::move(value); }

    
    inline UpdateLogLevelsByResourceTypesRequest& WithWirelessDeviceLogOptions(const Aws::Vector<WirelessDeviceLogOption>& value) { SetWirelessDeviceLogOptions(value); return *this;}

    
    inline UpdateLogLevelsByResourceTypesRequest& WithWirelessDeviceLogOptions(Aws::Vector<WirelessDeviceLogOption>&& value) { SetWirelessDeviceLogOptions(std::move(value)); return *this;}

    
    inline UpdateLogLevelsByResourceTypesRequest& AddWirelessDeviceLogOptions(const WirelessDeviceLogOption& value) { m_wirelessDeviceLogOptionsHasBeenSet = true; m_wirelessDeviceLogOptions.push_back(value); return *this; }

    
    inline UpdateLogLevelsByResourceTypesRequest& AddWirelessDeviceLogOptions(WirelessDeviceLogOption&& value) { m_wirelessDeviceLogOptionsHasBeenSet = true; m_wirelessDeviceLogOptions.push_back(std::move(value)); return *this; }


    
    inline const Aws::Vector<WirelessGatewayLogOption>& GetWirelessGatewayLogOptions() const{ return m_wirelessGatewayLogOptions; }

    
    inline bool WirelessGatewayLogOptionsHasBeenSet() const { return m_wirelessGatewayLogOptionsHasBeenSet; }

    
    inline void SetWirelessGatewayLogOptions(const Aws::Vector<WirelessGatewayLogOption>& value) { m_wirelessGatewayLogOptionsHasBeenSet = true; m_wirelessGatewayLogOptions = value; }

    
    inline void SetWirelessGatewayLogOptions(Aws::Vector<WirelessGatewayLogOption>&& value) { m_wirelessGatewayLogOptionsHasBeenSet = true; m_wirelessGatewayLogOptions = std::move(value); }

    
    inline UpdateLogLevelsByResourceTypesRequest& WithWirelessGatewayLogOptions(const Aws::Vector<WirelessGatewayLogOption>& value) { SetWirelessGatewayLogOptions(value); return *this;}

    
    inline UpdateLogLevelsByResourceTypesRequest& WithWirelessGatewayLogOptions(Aws::Vector<WirelessGatewayLogOption>&& value) { SetWirelessGatewayLogOptions(std::move(value)); return *this;}

    
    inline UpdateLogLevelsByResourceTypesRequest& AddWirelessGatewayLogOptions(const WirelessGatewayLogOption& value) { m_wirelessGatewayLogOptionsHasBeenSet = true; m_wirelessGatewayLogOptions.push_back(value); return *this; }

    
    inline UpdateLogLevelsByResourceTypesRequest& AddWirelessGatewayLogOptions(WirelessGatewayLogOption&& value) { m_wirelessGatewayLogOptionsHasBeenSet = true; m_wirelessGatewayLogOptions.push_back(std::move(value)); return *this; }

  private:

    LogLevel m_defaultLogLevel;
    bool m_defaultLogLevelHasBeenSet = false;

    Aws::Vector<WirelessDeviceLogOption> m_wirelessDeviceLogOptions;
    bool m_wirelessDeviceLogOptionsHasBeenSet = false;

    Aws::Vector<WirelessGatewayLogOption> m_wirelessGatewayLogOptions;
    bool m_wirelessGatewayLogOptionsHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTWireless
} // namespace Aws
