/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cognito-idp/model/LogConfigurationType.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace CognitoIdentityProvider
{
namespace Model
{

LogConfigurationType::LogConfigurationType() : 
    m_logLevel(LogLevel::NOT_SET),
    m_logLevelHasBeenSet(false),
    m_eventSource(EventSourceName::NOT_SET),
    m_eventSourceHasBeenSet(false),
    m_cloudWatchLogsConfigurationHasBeenSet(false)
{
}

LogConfigurationType::LogConfigurationType(JsonView jsonValue) : 
    m_logLevel(LogLevel::NOT_SET),
    m_logLevelHasBeenSet(false),
    m_eventSource(EventSourceName::NOT_SET),
    m_eventSourceHasBeenSet(false),
    m_cloudWatchLogsConfigurationHasBeenSet(false)
{
  *this = jsonValue;
}

LogConfigurationType& LogConfigurationType::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("LogLevel"))
  {
    m_logLevel = LogLevelMapper::GetLogLevelForName(jsonValue.GetString("LogLevel"));

    m_logLevelHasBeenSet = true;
  }

  if(jsonValue.ValueExists("EventSource"))
  {
    m_eventSource = EventSourceNameMapper::GetEventSourceNameForName(jsonValue.GetString("EventSource"));

    m_eventSourceHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CloudWatchLogsConfiguration"))
  {
    m_cloudWatchLogsConfiguration = jsonValue.GetObject("CloudWatchLogsConfiguration");

    m_cloudWatchLogsConfigurationHasBeenSet = true;
  }

  return *this;
}

JsonValue LogConfigurationType::Jsonize() const
{
  JsonValue payload;

  if(m_logLevelHasBeenSet)
  {
   payload.WithString("LogLevel", LogLevelMapper::GetNameForLogLevel(m_logLevel));
  }

  if(m_eventSourceHasBeenSet)
  {
   payload.WithString("EventSource", EventSourceNameMapper::GetNameForEventSourceName(m_eventSource));
  }

  if(m_cloudWatchLogsConfigurationHasBeenSet)
  {
   payload.WithObject("CloudWatchLogsConfiguration", m_cloudWatchLogsConfiguration.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace CognitoIdentityProvider
} // namespace Aws
