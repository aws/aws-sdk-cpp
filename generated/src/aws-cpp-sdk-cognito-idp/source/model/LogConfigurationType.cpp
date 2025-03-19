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

LogConfigurationType::LogConfigurationType(JsonView jsonValue)
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
  if(jsonValue.ValueExists("S3Configuration"))
  {
    m_s3Configuration = jsonValue.GetObject("S3Configuration");
    m_s3ConfigurationHasBeenSet = true;
  }
  if(jsonValue.ValueExists("FirehoseConfiguration"))
  {
    m_firehoseConfiguration = jsonValue.GetObject("FirehoseConfiguration");
    m_firehoseConfigurationHasBeenSet = true;
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

  if(m_s3ConfigurationHasBeenSet)
  {
   payload.WithObject("S3Configuration", m_s3Configuration.Jsonize());

  }

  if(m_firehoseConfigurationHasBeenSet)
  {
   payload.WithObject("FirehoseConfiguration", m_firehoseConfiguration.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace CognitoIdentityProvider
} // namespace Aws
