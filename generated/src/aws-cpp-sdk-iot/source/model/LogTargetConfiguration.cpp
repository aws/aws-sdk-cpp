/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iot/model/LogTargetConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace IoT
{
namespace Model
{

LogTargetConfiguration::LogTargetConfiguration() : 
    m_logTargetHasBeenSet(false),
    m_logLevel(LogLevel::NOT_SET),
    m_logLevelHasBeenSet(false)
{
}

LogTargetConfiguration::LogTargetConfiguration(JsonView jsonValue) : 
    m_logTargetHasBeenSet(false),
    m_logLevel(LogLevel::NOT_SET),
    m_logLevelHasBeenSet(false)
{
  *this = jsonValue;
}

LogTargetConfiguration& LogTargetConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("logTarget"))
  {
    m_logTarget = jsonValue.GetObject("logTarget");

    m_logTargetHasBeenSet = true;
  }

  if(jsonValue.ValueExists("logLevel"))
  {
    m_logLevel = LogLevelMapper::GetLogLevelForName(jsonValue.GetString("logLevel"));

    m_logLevelHasBeenSet = true;
  }

  return *this;
}

JsonValue LogTargetConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_logTargetHasBeenSet)
  {
   payload.WithObject("logTarget", m_logTarget.Jsonize());

  }

  if(m_logLevelHasBeenSet)
  {
   payload.WithString("logLevel", LogLevelMapper::GetNameForLogLevel(m_logLevel));
  }

  return payload;
}

} // namespace Model
} // namespace IoT
} // namespace Aws
