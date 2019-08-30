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

#include <aws/ecs/model/FirelensConfiguration.h>
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

FirelensConfiguration::FirelensConfiguration() : 
    m_type(FirelensConfigurationType::NOT_SET),
    m_typeHasBeenSet(false),
    m_optionsHasBeenSet(false)
{
}

FirelensConfiguration::FirelensConfiguration(JsonView jsonValue) : 
    m_type(FirelensConfigurationType::NOT_SET),
    m_typeHasBeenSet(false),
    m_optionsHasBeenSet(false)
{
  *this = jsonValue;
}

FirelensConfiguration& FirelensConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("type"))
  {
    m_type = FirelensConfigurationTypeMapper::GetFirelensConfigurationTypeForName(jsonValue.GetString("type"));

    m_typeHasBeenSet = true;
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

  return *this;
}

JsonValue FirelensConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_typeHasBeenSet)
  {
   payload.WithString("type", FirelensConfigurationTypeMapper::GetNameForFirelensConfigurationType(m_type));
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

  return payload;
}

} // namespace Model
} // namespace ECS
} // namespace Aws
