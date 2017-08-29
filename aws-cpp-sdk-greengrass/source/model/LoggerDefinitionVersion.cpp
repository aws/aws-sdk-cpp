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

LoggerDefinitionVersion::LoggerDefinitionVersion(const JsonValue& jsonValue) : 
    m_loggersHasBeenSet(false)
{
  *this = jsonValue;
}

LoggerDefinitionVersion& LoggerDefinitionVersion::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("Loggers"))
  {
    Array<JsonValue> loggersJsonList = jsonValue.GetArray("Loggers");
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
   Array<JsonValue> loggersJsonList(m_loggers.size());
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
