/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotwireless/model/TraceContent.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace IoTWireless
{
namespace Model
{

TraceContent::TraceContent() : 
    m_wirelessDeviceFrameInfo(WirelessDeviceFrameInfo::NOT_SET),
    m_wirelessDeviceFrameInfoHasBeenSet(false),
    m_logLevel(LogLevel::NOT_SET),
    m_logLevelHasBeenSet(false)
{
}

TraceContent::TraceContent(JsonView jsonValue) : 
    m_wirelessDeviceFrameInfo(WirelessDeviceFrameInfo::NOT_SET),
    m_wirelessDeviceFrameInfoHasBeenSet(false),
    m_logLevel(LogLevel::NOT_SET),
    m_logLevelHasBeenSet(false)
{
  *this = jsonValue;
}

TraceContent& TraceContent::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("WirelessDeviceFrameInfo"))
  {
    m_wirelessDeviceFrameInfo = WirelessDeviceFrameInfoMapper::GetWirelessDeviceFrameInfoForName(jsonValue.GetString("WirelessDeviceFrameInfo"));

    m_wirelessDeviceFrameInfoHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LogLevel"))
  {
    m_logLevel = LogLevelMapper::GetLogLevelForName(jsonValue.GetString("LogLevel"));

    m_logLevelHasBeenSet = true;
  }

  return *this;
}

JsonValue TraceContent::Jsonize() const
{
  JsonValue payload;

  if(m_wirelessDeviceFrameInfoHasBeenSet)
  {
   payload.WithString("WirelessDeviceFrameInfo", WirelessDeviceFrameInfoMapper::GetNameForWirelessDeviceFrameInfo(m_wirelessDeviceFrameInfo));
  }

  if(m_logLevelHasBeenSet)
  {
   payload.WithString("LogLevel", LogLevelMapper::GetNameForLogLevel(m_logLevel));
  }

  return payload;
}

} // namespace Model
} // namespace IoTWireless
} // namespace Aws
