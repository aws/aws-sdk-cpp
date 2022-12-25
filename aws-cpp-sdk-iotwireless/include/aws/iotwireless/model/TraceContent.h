/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotwireless/IoTWireless_EXPORTS.h>
#include <aws/iotwireless/model/WirelessDeviceFrameInfo.h>
#include <aws/iotwireless/model/LogLevel.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace IoTWireless
{
namespace Model
{

  /**
   * <p>Trace content for your wireless gateway and wireless device
   * resources.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotwireless-2020-11-22/TraceContent">AWS
   * API Reference</a></p>
   */
  class TraceContent
  {
  public:
    AWS_IOTWIRELESS_API TraceContent();
    AWS_IOTWIRELESS_API TraceContent(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTWIRELESS_API TraceContent& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTWIRELESS_API Aws::Utils::Json::JsonValue Jsonize() const;


    
    inline const WirelessDeviceFrameInfo& GetWirelessDeviceFrameInfo() const{ return m_wirelessDeviceFrameInfo; }

    
    inline bool WirelessDeviceFrameInfoHasBeenSet() const { return m_wirelessDeviceFrameInfoHasBeenSet; }

    
    inline void SetWirelessDeviceFrameInfo(const WirelessDeviceFrameInfo& value) { m_wirelessDeviceFrameInfoHasBeenSet = true; m_wirelessDeviceFrameInfo = value; }

    
    inline void SetWirelessDeviceFrameInfo(WirelessDeviceFrameInfo&& value) { m_wirelessDeviceFrameInfoHasBeenSet = true; m_wirelessDeviceFrameInfo = std::move(value); }

    
    inline TraceContent& WithWirelessDeviceFrameInfo(const WirelessDeviceFrameInfo& value) { SetWirelessDeviceFrameInfo(value); return *this;}

    
    inline TraceContent& WithWirelessDeviceFrameInfo(WirelessDeviceFrameInfo&& value) { SetWirelessDeviceFrameInfo(std::move(value)); return *this;}


    
    inline const LogLevel& GetLogLevel() const{ return m_logLevel; }

    
    inline bool LogLevelHasBeenSet() const { return m_logLevelHasBeenSet; }

    
    inline void SetLogLevel(const LogLevel& value) { m_logLevelHasBeenSet = true; m_logLevel = value; }

    
    inline void SetLogLevel(LogLevel&& value) { m_logLevelHasBeenSet = true; m_logLevel = std::move(value); }

    
    inline TraceContent& WithLogLevel(const LogLevel& value) { SetLogLevel(value); return *this;}

    
    inline TraceContent& WithLogLevel(LogLevel&& value) { SetLogLevel(std::move(value)); return *this;}

  private:

    WirelessDeviceFrameInfo m_wirelessDeviceFrameInfo;
    bool m_wirelessDeviceFrameInfoHasBeenSet = false;

    LogLevel m_logLevel;
    bool m_logLevelHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTWireless
} // namespace Aws
