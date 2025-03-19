/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codebuild/model/FleetProxyRule.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace CodeBuild
{
namespace Model
{

FleetProxyRule::FleetProxyRule(JsonView jsonValue)
{
  *this = jsonValue;
}

FleetProxyRule& FleetProxyRule::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("type"))
  {
    m_type = FleetProxyRuleTypeMapper::GetFleetProxyRuleTypeForName(jsonValue.GetString("type"));
    m_typeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("effect"))
  {
    m_effect = FleetProxyRuleEffectTypeMapper::GetFleetProxyRuleEffectTypeForName(jsonValue.GetString("effect"));
    m_effectHasBeenSet = true;
  }
  if(jsonValue.ValueExists("entities"))
  {
    Aws::Utils::Array<JsonView> entitiesJsonList = jsonValue.GetArray("entities");
    for(unsigned entitiesIndex = 0; entitiesIndex < entitiesJsonList.GetLength(); ++entitiesIndex)
    {
      m_entities.push_back(entitiesJsonList[entitiesIndex].AsString());
    }
    m_entitiesHasBeenSet = true;
  }
  return *this;
}

JsonValue FleetProxyRule::Jsonize() const
{
  JsonValue payload;

  if(m_typeHasBeenSet)
  {
   payload.WithString("type", FleetProxyRuleTypeMapper::GetNameForFleetProxyRuleType(m_type));
  }

  if(m_effectHasBeenSet)
  {
   payload.WithString("effect", FleetProxyRuleEffectTypeMapper::GetNameForFleetProxyRuleEffectType(m_effect));
  }

  if(m_entitiesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> entitiesJsonList(m_entities.size());
   for(unsigned entitiesIndex = 0; entitiesIndex < entitiesJsonList.GetLength(); ++entitiesIndex)
   {
     entitiesJsonList[entitiesIndex].AsString(m_entities[entitiesIndex]);
   }
   payload.WithArray("entities", std::move(entitiesJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace CodeBuild
} // namespace Aws
