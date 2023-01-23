/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotwireless/IoTWireless_EXPORTS.h>
#include <aws/iotwireless/model/LogLevel.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/iotwireless/model/WirelessGatewayLogOption.h>
#include <aws/iotwireless/model/WirelessDeviceLogOption.h>
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
    AWS_IOTWIRELESS_API GetLogLevelsByResourceTypesResult();
    AWS_IOTWIRELESS_API GetLogLevelsByResourceTypesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOTWIRELESS_API GetLogLevelsByResourceTypesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    
    inline const LogLevel& GetDefaultLogLevel() const{ return m_defaultLogLevel; }

    
    inline void SetDefaultLogLevel(const LogLevel& value) { m_defaultLogLevel = value; }

    
    inline void SetDefaultLogLevel(LogLevel&& value) { m_defaultLogLevel = std::move(value); }

    
    inline GetLogLevelsByResourceTypesResult& WithDefaultLogLevel(const LogLevel& value) { SetDefaultLogLevel(value); return *this;}

    
    inline GetLogLevelsByResourceTypesResult& WithDefaultLogLevel(LogLevel&& value) { SetDefaultLogLevel(std::move(value)); return *this;}


    
    inline const Aws::Vector<WirelessGatewayLogOption>& GetWirelessGatewayLogOptions() const{ return m_wirelessGatewayLogOptions; }

    
    inline void SetWirelessGatewayLogOptions(const Aws::Vector<WirelessGatewayLogOption>& value) { m_wirelessGatewayLogOptions = value; }

    
    inline void SetWirelessGatewayLogOptions(Aws::Vector<WirelessGatewayLogOption>&& value) { m_wirelessGatewayLogOptions = std::move(value); }

    
    inline GetLogLevelsByResourceTypesResult& WithWirelessGatewayLogOptions(const Aws::Vector<WirelessGatewayLogOption>& value) { SetWirelessGatewayLogOptions(value); return *this;}

    
    inline GetLogLevelsByResourceTypesResult& WithWirelessGatewayLogOptions(Aws::Vector<WirelessGatewayLogOption>&& value) { SetWirelessGatewayLogOptions(std::move(value)); return *this;}

    
    inline GetLogLevelsByResourceTypesResult& AddWirelessGatewayLogOptions(const WirelessGatewayLogOption& value) { m_wirelessGatewayLogOptions.push_back(value); return *this; }

    
    inline GetLogLevelsByResourceTypesResult& AddWirelessGatewayLogOptions(WirelessGatewayLogOption&& value) { m_wirelessGatewayLogOptions.push_back(std::move(value)); return *this; }


    
    inline const Aws::Vector<WirelessDeviceLogOption>& GetWirelessDeviceLogOptions() const{ return m_wirelessDeviceLogOptions; }

    
    inline void SetWirelessDeviceLogOptions(const Aws::Vector<WirelessDeviceLogOption>& value) { m_wirelessDeviceLogOptions = value; }

    
    inline void SetWirelessDeviceLogOptions(Aws::Vector<WirelessDeviceLogOption>&& value) { m_wirelessDeviceLogOptions = std::move(value); }

    
    inline GetLogLevelsByResourceTypesResult& WithWirelessDeviceLogOptions(const Aws::Vector<WirelessDeviceLogOption>& value) { SetWirelessDeviceLogOptions(value); return *this;}

    
    inline GetLogLevelsByResourceTypesResult& WithWirelessDeviceLogOptions(Aws::Vector<WirelessDeviceLogOption>&& value) { SetWirelessDeviceLogOptions(std::move(value)); return *this;}

    
    inline GetLogLevelsByResourceTypesResult& AddWirelessDeviceLogOptions(const WirelessDeviceLogOption& value) { m_wirelessDeviceLogOptions.push_back(value); return *this; }

    
    inline GetLogLevelsByResourceTypesResult& AddWirelessDeviceLogOptions(WirelessDeviceLogOption&& value) { m_wirelessDeviceLogOptions.push_back(std::move(value)); return *this; }

  private:

    LogLevel m_defaultLogLevel;

    Aws::Vector<WirelessGatewayLogOption> m_wirelessGatewayLogOptions;

    Aws::Vector<WirelessDeviceLogOption> m_wirelessDeviceLogOptions;
  };

} // namespace Model
} // namespace IoTWireless
} // namespace Aws
