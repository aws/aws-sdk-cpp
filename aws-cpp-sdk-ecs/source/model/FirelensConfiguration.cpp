/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
