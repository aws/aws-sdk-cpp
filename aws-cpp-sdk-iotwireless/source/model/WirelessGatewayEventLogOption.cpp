/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotwireless/model/WirelessGatewayEventLogOption.h>
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

WirelessGatewayEventLogOption::WirelessGatewayEventLogOption() : 
    m_event(WirelessGatewayEvent::NOT_SET),
    m_eventHasBeenSet(false),
    m_logLevel(LogLevel::NOT_SET),
    m_logLevelHasBeenSet(false)
{
}

WirelessGatewayEventLogOption::WirelessGatewayEventLogOption(JsonView jsonValue) : 
    m_event(WirelessGatewayEvent::NOT_SET),
    m_eventHasBeenSet(false),
    m_logLevel(LogLevel::NOT_SET),
    m_logLevelHasBeenSet(false)
{
  *this = jsonValue;
}

WirelessGatewayEventLogOption& WirelessGatewayEventLogOption::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Event"))
  {
    m_event = WirelessGatewayEventMapper::GetWirelessGatewayEventForName(jsonValue.GetString("Event"));

    m_eventHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LogLevel"))
  {
    m_logLevel = LogLevelMapper::GetLogLevelForName(jsonValue.GetString("LogLevel"));

    m_logLevelHasBeenSet = true;
  }

  return *this;
}

JsonValue WirelessGatewayEventLogOption::Jsonize() const
{
  JsonValue payload;

  if(m_eventHasBeenSet)
  {
   payload.WithString("Event", WirelessGatewayEventMapper::GetNameForWirelessGatewayEvent(m_event));
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
