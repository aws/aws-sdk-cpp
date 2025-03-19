/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/greengrass/model/Logger.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Greengrass
{
namespace Model
{

Logger::Logger(JsonView jsonValue)
{
  *this = jsonValue;
}

Logger& Logger::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Component"))
  {
    m_component = LoggerComponentMapper::GetLoggerComponentForName(jsonValue.GetString("Component"));
    m_componentHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Id"))
  {
    m_id = jsonValue.GetString("Id");
    m_idHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Level"))
  {
    m_level = LoggerLevelMapper::GetLoggerLevelForName(jsonValue.GetString("Level"));
    m_levelHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Space"))
  {
    m_space = jsonValue.GetInteger("Space");
    m_spaceHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Type"))
  {
    m_type = LoggerTypeMapper::GetLoggerTypeForName(jsonValue.GetString("Type"));
    m_typeHasBeenSet = true;
  }
  return *this;
}

JsonValue Logger::Jsonize() const
{
  JsonValue payload;

  if(m_componentHasBeenSet)
  {
   payload.WithString("Component", LoggerComponentMapper::GetNameForLoggerComponent(m_component));
  }

  if(m_idHasBeenSet)
  {
   payload.WithString("Id", m_id);

  }

  if(m_levelHasBeenSet)
  {
   payload.WithString("Level", LoggerLevelMapper::GetNameForLoggerLevel(m_level));
  }

  if(m_spaceHasBeenSet)
  {
   payload.WithInteger("Space", m_space);

  }

  if(m_typeHasBeenSet)
  {
   payload.WithString("Type", LoggerTypeMapper::GetNameForLoggerType(m_type));
  }

  return payload;
}

} // namespace Model
} // namespace Greengrass
} // namespace Aws
