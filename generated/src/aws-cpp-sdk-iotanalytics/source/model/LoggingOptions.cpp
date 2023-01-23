/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotanalytics/model/LoggingOptions.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace IoTAnalytics
{
namespace Model
{

LoggingOptions::LoggingOptions() : 
    m_roleArnHasBeenSet(false),
    m_level(LoggingLevel::NOT_SET),
    m_levelHasBeenSet(false),
    m_enabled(false),
    m_enabledHasBeenSet(false)
{
}

LoggingOptions::LoggingOptions(JsonView jsonValue) : 
    m_roleArnHasBeenSet(false),
    m_level(LoggingLevel::NOT_SET),
    m_levelHasBeenSet(false),
    m_enabled(false),
    m_enabledHasBeenSet(false)
{
  *this = jsonValue;
}

LoggingOptions& LoggingOptions::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("roleArn"))
  {
    m_roleArn = jsonValue.GetString("roleArn");

    m_roleArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("level"))
  {
    m_level = LoggingLevelMapper::GetLoggingLevelForName(jsonValue.GetString("level"));

    m_levelHasBeenSet = true;
  }

  if(jsonValue.ValueExists("enabled"))
  {
    m_enabled = jsonValue.GetBool("enabled");

    m_enabledHasBeenSet = true;
  }

  return *this;
}

JsonValue LoggingOptions::Jsonize() const
{
  JsonValue payload;

  if(m_roleArnHasBeenSet)
  {
   payload.WithString("roleArn", m_roleArn);

  }

  if(m_levelHasBeenSet)
  {
   payload.WithString("level", LoggingLevelMapper::GetNameForLoggingLevel(m_level));
  }

  if(m_enabledHasBeenSet)
  {
   payload.WithBool("enabled", m_enabled);

  }

  return payload;
}

} // namespace Model
} // namespace IoTAnalytics
} // namespace Aws
