/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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

Logger::Logger() : 
    m_component(LoggerComponent::NOT_SET),
    m_componentHasBeenSet(false),
    m_idHasBeenSet(false),
    m_level(LoggerLevel::NOT_SET),
    m_levelHasBeenSet(false),
    m_space(0),
    m_spaceHasBeenSet(false),
    m_type(LoggerType::NOT_SET),
    m_typeHasBeenSet(false)
{
}

Logger::Logger(const JsonValue& jsonValue) : 
    m_component(LoggerComponent::NOT_SET),
    m_componentHasBeenSet(false),
    m_idHasBeenSet(false),
    m_level(LoggerLevel::NOT_SET),
    m_levelHasBeenSet(false),
    m_space(0),
    m_spaceHasBeenSet(false),
    m_type(LoggerType::NOT_SET),
    m_typeHasBeenSet(false)
{
  *this = jsonValue;
}

Logger& Logger::operator =(const JsonValue& jsonValue)
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
