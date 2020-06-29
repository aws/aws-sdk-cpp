/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotsitewise/model/LoggingOptions.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace IoTSiteWise
{
namespace Model
{

LoggingOptions::LoggingOptions() : 
    m_level(LoggingLevel::NOT_SET),
    m_levelHasBeenSet(false)
{
}

LoggingOptions::LoggingOptions(JsonView jsonValue) : 
    m_level(LoggingLevel::NOT_SET),
    m_levelHasBeenSet(false)
{
  *this = jsonValue;
}

LoggingOptions& LoggingOptions::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("level"))
  {
    m_level = LoggingLevelMapper::GetLoggingLevelForName(jsonValue.GetString("level"));

    m_levelHasBeenSet = true;
  }

  return *this;
}

JsonValue LoggingOptions::Jsonize() const
{
  JsonValue payload;

  if(m_levelHasBeenSet)
  {
   payload.WithString("level", LoggingLevelMapper::GetNameForLoggingLevel(m_level));
  }

  return payload;
}

} // namespace Model
} // namespace IoTSiteWise
} // namespace Aws
