/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotwireless/IoTWireless_EXPORTS.h>
#include <aws/iotwireless/model/WirelessDeviceFrameInfo.h>
#include <aws/iotwireless/model/LogLevel.h>
#include <aws/iotwireless/model/MulticastFrameInfo.h>
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
   * <p>Trace content for your wireless devices, gateways, and multicast
   * groups.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotwireless-2020-11-22/TraceContent">AWS
   * API Reference</a></p>
   */
  class TraceContent
  {
  public:
    AWS_IOTWIRELESS_API TraceContent() = default;
    AWS_IOTWIRELESS_API TraceContent(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTWIRELESS_API TraceContent& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTWIRELESS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    
    inline WirelessDeviceFrameInfo GetWirelessDeviceFrameInfo() const { return m_wirelessDeviceFrameInfo; }
    inline bool WirelessDeviceFrameInfoHasBeenSet() const { return m_wirelessDeviceFrameInfoHasBeenSet; }
    inline void SetWirelessDeviceFrameInfo(WirelessDeviceFrameInfo value) { m_wirelessDeviceFrameInfoHasBeenSet = true; m_wirelessDeviceFrameInfo = value; }
    inline TraceContent& WithWirelessDeviceFrameInfo(WirelessDeviceFrameInfo value) { SetWirelessDeviceFrameInfo(value); return *this;}
    ///@}

    ///@{
    
    inline LogLevel GetLogLevel() const { return m_logLevel; }
    inline bool LogLevelHasBeenSet() const { return m_logLevelHasBeenSet; }
    inline void SetLogLevel(LogLevel value) { m_logLevelHasBeenSet = true; m_logLevel = value; }
    inline TraceContent& WithLogLevel(LogLevel value) { SetLogLevel(value); return *this;}
    ///@}

    ///@{
    
    inline MulticastFrameInfo GetMulticastFrameInfo() const { return m_multicastFrameInfo; }
    inline bool MulticastFrameInfoHasBeenSet() const { return m_multicastFrameInfoHasBeenSet; }
    inline void SetMulticastFrameInfo(MulticastFrameInfo value) { m_multicastFrameInfoHasBeenSet = true; m_multicastFrameInfo = value; }
    inline TraceContent& WithMulticastFrameInfo(MulticastFrameInfo value) { SetMulticastFrameInfo(value); return *this;}
    ///@}
  private:

    WirelessDeviceFrameInfo m_wirelessDeviceFrameInfo{WirelessDeviceFrameInfo::NOT_SET};
    bool m_wirelessDeviceFrameInfoHasBeenSet = false;

    LogLevel m_logLevel{LogLevel::NOT_SET};
    bool m_logLevelHasBeenSet = false;

    MulticastFrameInfo m_multicastFrameInfo{MulticastFrameInfo::NOT_SET};
    bool m_multicastFrameInfoHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTWireless
} // namespace Aws
