/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iot/model/EnableIoTLoggingParams.h>
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

EnableIoTLoggingParams::EnableIoTLoggingParams() : 
    m_roleArnForLoggingHasBeenSet(false),
    m_logLevel(LogLevel::NOT_SET),
    m_logLevelHasBeenSet(false)
{
}

EnableIoTLoggingParams::EnableIoTLoggingParams(JsonView jsonValue) : 
    m_roleArnForLoggingHasBeenSet(false),
    m_logLevel(LogLevel::NOT_SET),
    m_logLevelHasBeenSet(false)
{
  *this = jsonValue;
}

EnableIoTLoggingParams& EnableIoTLoggingParams::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("roleArnForLogging"))
  {
    m_roleArnForLogging = jsonValue.GetString("roleArnForLogging");

    m_roleArnForLoggingHasBeenSet = true;
  }

  if(jsonValue.ValueExists("logLevel"))
  {
    m_logLevel = LogLevelMapper::GetLogLevelForName(jsonValue.GetString("logLevel"));

    m_logLevelHasBeenSet = true;
  }

  return *this;
}

JsonValue EnableIoTLoggingParams::Jsonize() const
{
  JsonValue payload;

  if(m_roleArnForLoggingHasBeenSet)
  {
   payload.WithString("roleArnForLogging", m_roleArnForLogging);

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
