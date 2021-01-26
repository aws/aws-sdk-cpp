/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/apigatewayv2/model/RouteSettings.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ApiGatewayV2
{
namespace Model
{

RouteSettings::RouteSettings() : 
    m_dataTraceEnabled(false),
    m_dataTraceEnabledHasBeenSet(false),
    m_detailedMetricsEnabled(false),
    m_detailedMetricsEnabledHasBeenSet(false),
    m_loggingLevel(LoggingLevel::NOT_SET),
    m_loggingLevelHasBeenSet(false),
    m_throttlingBurstLimit(0),
    m_throttlingBurstLimitHasBeenSet(false),
    m_throttlingRateLimit(0.0),
    m_throttlingRateLimitHasBeenSet(false)
{
}

RouteSettings::RouteSettings(JsonView jsonValue) : 
    m_dataTraceEnabled(false),
    m_dataTraceEnabledHasBeenSet(false),
    m_detailedMetricsEnabled(false),
    m_detailedMetricsEnabledHasBeenSet(false),
    m_loggingLevel(LoggingLevel::NOT_SET),
    m_loggingLevelHasBeenSet(false),
    m_throttlingBurstLimit(0),
    m_throttlingBurstLimitHasBeenSet(false),
    m_throttlingRateLimit(0.0),
    m_throttlingRateLimitHasBeenSet(false)
{
  *this = jsonValue;
}

RouteSettings& RouteSettings::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("dataTraceEnabled"))
  {
    m_dataTraceEnabled = jsonValue.GetBool("dataTraceEnabled");

    m_dataTraceEnabledHasBeenSet = true;
  }

  if(jsonValue.ValueExists("detailedMetricsEnabled"))
  {
    m_detailedMetricsEnabled = jsonValue.GetBool("detailedMetricsEnabled");

    m_detailedMetricsEnabledHasBeenSet = true;
  }

  if(jsonValue.ValueExists("loggingLevel"))
  {
    m_loggingLevel = LoggingLevelMapper::GetLoggingLevelForName(jsonValue.GetString("loggingLevel"));

    m_loggingLevelHasBeenSet = true;
  }

  if(jsonValue.ValueExists("throttlingBurstLimit"))
  {
    m_throttlingBurstLimit = jsonValue.GetInteger("throttlingBurstLimit");

    m_throttlingBurstLimitHasBeenSet = true;
  }

  if(jsonValue.ValueExists("throttlingRateLimit"))
  {
    m_throttlingRateLimit = jsonValue.GetDouble("throttlingRateLimit");

    m_throttlingRateLimitHasBeenSet = true;
  }

  return *this;
}

JsonValue RouteSettings::Jsonize() const
{
  JsonValue payload;

  if(m_dataTraceEnabledHasBeenSet)
  {
   payload.WithBool("dataTraceEnabled", m_dataTraceEnabled);

  }

  if(m_detailedMetricsEnabledHasBeenSet)
  {
   payload.WithBool("detailedMetricsEnabled", m_detailedMetricsEnabled);

  }

  if(m_loggingLevelHasBeenSet)
  {
   payload.WithString("loggingLevel", LoggingLevelMapper::GetNameForLoggingLevel(m_loggingLevel));
  }

  if(m_throttlingBurstLimitHasBeenSet)
  {
   payload.WithInteger("throttlingBurstLimit", m_throttlingBurstLimit);

  }

  if(m_throttlingRateLimitHasBeenSet)
  {
   payload.WithDouble("throttlingRateLimit", m_throttlingRateLimit);

  }

  return payload;
}

} // namespace Model
} // namespace ApiGatewayV2
} // namespace Aws
