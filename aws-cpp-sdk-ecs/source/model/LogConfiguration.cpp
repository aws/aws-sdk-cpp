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

#include <aws/ecs/model/LogConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ECS
{
namespace Model
{

LogConfiguration::LogConfiguration() : 
    m_logDriver(LogDriver::NOT_SET),
    m_logDriverHasBeenSet(false),
    m_optionsHasBeenSet(false),
    m_secretOptionsHasBeenSet(false)
{
}

LogConfiguration::LogConfiguration(JsonView jsonValue) : 
    m_logDriver(LogDriver::NOT_SET),
    m_logDriverHasBeenSet(false),
    m_optionsHasBeenSet(false),
    m_secretOptionsHasBeenSet(false)
{
  *this = jsonValue;
}

LogConfiguration& LogConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("logDriver"))
  {
    m_logDriver = LogDriverMapper::GetLogDriverForName(jsonValue.GetString("logDriver"));

    m_logDriverHasBeenSet = true;
  }

  if(jsonValue.ValueExists("options"))
  {
    Aws::Map<Aws::String, JsonView> optionsJsonMap = jsonValue.GetObject("options").GetAllObjects();
    for(auto& optionsItem : optionsJsonMap)
    {
      m_options[optionsItem.first] = optionsItem.second.AsString();
    }
    m_optionsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("secretOptions"))
  {
    Array<JsonView> secretOptionsJsonList = jsonValue.GetArray("secretOptions");
    for(unsigned secretOptionsIndex = 0; secretOptionsIndex < secretOptionsJsonList.GetLength(); ++secretOptionsIndex)
    {
      m_secretOptions.push_back(secretOptionsJsonList[secretOptionsIndex].AsObject());
    }
    m_secretOptionsHasBeenSet = true;
  }

  return *this;
}

JsonValue LogConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_logDriverHasBeenSet)
  {
   payload.WithString("logDriver", LogDriverMapper::GetNameForLogDriver(m_logDriver));
  }

  if(m_optionsHasBeenSet)
  {
   JsonValue optionsJsonMap;
   for(auto& optionsItem : m_options)
   {
     optionsJsonMap.WithString(optionsItem.first, optionsItem.second);
   }
   payload.WithObject("options", std::move(optionsJsonMap));

  }

  if(m_secretOptionsHasBeenSet)
  {
   Array<JsonValue> secretOptionsJsonList(m_secretOptions.size());
   for(unsigned secretOptionsIndex = 0; secretOptionsIndex < secretOptionsJsonList.GetLength(); ++secretOptionsIndex)
   {
     secretOptionsJsonList[secretOptionsIndex].AsObject(m_secretOptions[secretOptionsIndex].Jsonize());
   }
   payload.WithArray("secretOptions", std::move(secretOptionsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace ECS
} // namespace Aws
