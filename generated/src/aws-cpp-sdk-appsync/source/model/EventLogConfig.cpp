/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appsync/model/EventLogConfig.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace AppSync
{
namespace Model
{

EventLogConfig::EventLogConfig(JsonView jsonValue)
{
  *this = jsonValue;
}

EventLogConfig& EventLogConfig::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("logLevel"))
  {
    m_logLevel = EventLogLevelMapper::GetEventLogLevelForName(jsonValue.GetString("logLevel"));
    m_logLevelHasBeenSet = true;
  }
  if(jsonValue.ValueExists("cloudWatchLogsRoleArn"))
  {
    m_cloudWatchLogsRoleArn = jsonValue.GetString("cloudWatchLogsRoleArn");
    m_cloudWatchLogsRoleArnHasBeenSet = true;
  }
  return *this;
}

JsonValue EventLogConfig::Jsonize() const
{
  JsonValue payload;

  if(m_logLevelHasBeenSet)
  {
   payload.WithString("logLevel", EventLogLevelMapper::GetNameForEventLogLevel(m_logLevel));
  }

  if(m_cloudWatchLogsRoleArnHasBeenSet)
  {
   payload.WithString("cloudWatchLogsRoleArn", m_cloudWatchLogsRoleArn);

  }

  return payload;
}

} // namespace Model
} // namespace AppSync
} // namespace Aws
