/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/greengrass/model/LoggerDefinitionVersion.h>
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

LoggerDefinitionVersion::LoggerDefinitionVersion() : 
    m_loggersHasBeenSet(false)
{
}

LoggerDefinitionVersion::LoggerDefinitionVersion(JsonView jsonValue) : 
    m_loggersHasBeenSet(false)
{
  *this = jsonValue;
}

LoggerDefinitionVersion& LoggerDefinitionVersion::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Loggers"))
  {
    Aws::Utils::Array<JsonView> loggersJsonList = jsonValue.GetArray("Loggers");
    for(unsigned loggersIndex = 0; loggersIndex < loggersJsonList.GetLength(); ++loggersIndex)
    {
      m_loggers.push_back(loggersJsonList[loggersIndex].AsObject());
    }
    m_loggersHasBeenSet = true;
  }

  return *this;
}

JsonValue LoggerDefinitionVersion::Jsonize() const
{
  JsonValue payload;

  if(m_loggersHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> loggersJsonList(m_loggers.size());
   for(unsigned loggersIndex = 0; loggersIndex < loggersJsonList.GetLength(); ++loggersIndex)
   {
     loggersJsonList[loggersIndex].AsObject(m_loggers[loggersIndex].Jsonize());
   }
   payload.WithArray("Loggers", std::move(loggersJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace Greengrass
} // namespace Aws
