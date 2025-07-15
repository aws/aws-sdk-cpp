/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/eventbridge/model/LogConfig.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace EventBridge
{
namespace Model
{

LogConfig::LogConfig(JsonView jsonValue)
{
  *this = jsonValue;
}

LogConfig& LogConfig::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("IncludeDetail"))
  {
    m_includeDetail = IncludeDetailMapper::GetIncludeDetailForName(jsonValue.GetString("IncludeDetail"));
    m_includeDetailHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Level"))
  {
    m_level = LevelMapper::GetLevelForName(jsonValue.GetString("Level"));
    m_levelHasBeenSet = true;
  }
  return *this;
}

JsonValue LogConfig::Jsonize() const
{
  JsonValue payload;

  if(m_includeDetailHasBeenSet)
  {
   payload.WithString("IncludeDetail", IncludeDetailMapper::GetNameForIncludeDetail(m_includeDetail));
  }

  if(m_levelHasBeenSet)
  {
   payload.WithString("Level", LevelMapper::GetNameForLevel(m_level));
  }

  return payload;
}

} // namespace Model
} // namespace EventBridge
} // namespace Aws
