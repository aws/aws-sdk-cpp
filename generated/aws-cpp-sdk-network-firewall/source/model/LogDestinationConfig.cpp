/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/network-firewall/model/LogDestinationConfig.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace NetworkFirewall
{
namespace Model
{

LogDestinationConfig::LogDestinationConfig() : 
    m_logType(LogType::NOT_SET),
    m_logTypeHasBeenSet(false),
    m_logDestinationType(LogDestinationType::NOT_SET),
    m_logDestinationTypeHasBeenSet(false),
    m_logDestinationHasBeenSet(false)
{
}

LogDestinationConfig::LogDestinationConfig(JsonView jsonValue) : 
    m_logType(LogType::NOT_SET),
    m_logTypeHasBeenSet(false),
    m_logDestinationType(LogDestinationType::NOT_SET),
    m_logDestinationTypeHasBeenSet(false),
    m_logDestinationHasBeenSet(false)
{
  *this = jsonValue;
}

LogDestinationConfig& LogDestinationConfig::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("LogType"))
  {
    m_logType = LogTypeMapper::GetLogTypeForName(jsonValue.GetString("LogType"));

    m_logTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LogDestinationType"))
  {
    m_logDestinationType = LogDestinationTypeMapper::GetLogDestinationTypeForName(jsonValue.GetString("LogDestinationType"));

    m_logDestinationTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LogDestination"))
  {
    Aws::Map<Aws::String, JsonView> logDestinationJsonMap = jsonValue.GetObject("LogDestination").GetAllObjects();
    for(auto& logDestinationItem : logDestinationJsonMap)
    {
      m_logDestination[logDestinationItem.first] = logDestinationItem.second.AsString();
    }
    m_logDestinationHasBeenSet = true;
  }

  return *this;
}

JsonValue LogDestinationConfig::Jsonize() const
{
  JsonValue payload;

  if(m_logTypeHasBeenSet)
  {
   payload.WithString("LogType", LogTypeMapper::GetNameForLogType(m_logType));
  }

  if(m_logDestinationTypeHasBeenSet)
  {
   payload.WithString("LogDestinationType", LogDestinationTypeMapper::GetNameForLogDestinationType(m_logDestinationType));
  }

  if(m_logDestinationHasBeenSet)
  {
   JsonValue logDestinationJsonMap;
   for(auto& logDestinationItem : m_logDestination)
   {
     logDestinationJsonMap.WithString(logDestinationItem.first, logDestinationItem.second);
   }
   payload.WithObject("LogDestination", std::move(logDestinationJsonMap));

  }

  return payload;
}

} // namespace Model
} // namespace NetworkFirewall
} // namespace Aws
