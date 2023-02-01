/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/amp/model/LoggingConfigurationStatus.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace PrometheusService
{
namespace Model
{

LoggingConfigurationStatus::LoggingConfigurationStatus() : 
    m_statusCode(LoggingConfigurationStatusCode::NOT_SET),
    m_statusCodeHasBeenSet(false),
    m_statusReasonHasBeenSet(false)
{
}

LoggingConfigurationStatus::LoggingConfigurationStatus(JsonView jsonValue) : 
    m_statusCode(LoggingConfigurationStatusCode::NOT_SET),
    m_statusCodeHasBeenSet(false),
    m_statusReasonHasBeenSet(false)
{
  *this = jsonValue;
}

LoggingConfigurationStatus& LoggingConfigurationStatus::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("statusCode"))
  {
    m_statusCode = LoggingConfigurationStatusCodeMapper::GetLoggingConfigurationStatusCodeForName(jsonValue.GetString("statusCode"));

    m_statusCodeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("statusReason"))
  {
    m_statusReason = jsonValue.GetString("statusReason");

    m_statusReasonHasBeenSet = true;
  }

  return *this;
}

JsonValue LoggingConfigurationStatus::Jsonize() const
{
  JsonValue payload;

  if(m_statusCodeHasBeenSet)
  {
   payload.WithString("statusCode", LoggingConfigurationStatusCodeMapper::GetNameForLoggingConfigurationStatusCode(m_statusCode));
  }

  if(m_statusReasonHasBeenSet)
  {
   payload.WithString("statusReason", m_statusReason);

  }

  return payload;
}

} // namespace Model
} // namespace PrometheusService
} // namespace Aws
