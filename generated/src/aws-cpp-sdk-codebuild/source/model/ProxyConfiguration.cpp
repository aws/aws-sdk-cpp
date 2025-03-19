/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codebuild/model/ProxyConfiguration.h>
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

ProxyConfiguration::ProxyConfiguration(JsonView jsonValue)
{
  *this = jsonValue;
}

ProxyConfiguration& ProxyConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("defaultBehavior"))
  {
    m_defaultBehavior = FleetProxyRuleBehaviorMapper::GetFleetProxyRuleBehaviorForName(jsonValue.GetString("defaultBehavior"));
    m_defaultBehaviorHasBeenSet = true;
  }
  if(jsonValue.ValueExists("orderedProxyRules"))
  {
    Aws::Utils::Array<JsonView> orderedProxyRulesJsonList = jsonValue.GetArray("orderedProxyRules");
    for(unsigned orderedProxyRulesIndex = 0; orderedProxyRulesIndex < orderedProxyRulesJsonList.GetLength(); ++orderedProxyRulesIndex)
    {
      m_orderedProxyRules.push_back(orderedProxyRulesJsonList[orderedProxyRulesIndex].AsObject());
    }
    m_orderedProxyRulesHasBeenSet = true;
  }
  return *this;
}

JsonValue ProxyConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_defaultBehaviorHasBeenSet)
  {
   payload.WithString("defaultBehavior", FleetProxyRuleBehaviorMapper::GetNameForFleetProxyRuleBehavior(m_defaultBehavior));
  }

  if(m_orderedProxyRulesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> orderedProxyRulesJsonList(m_orderedProxyRules.size());
   for(unsigned orderedProxyRulesIndex = 0; orderedProxyRulesIndex < orderedProxyRulesJsonList.GetLength(); ++orderedProxyRulesIndex)
   {
     orderedProxyRulesJsonList[orderedProxyRulesIndex].AsObject(m_orderedProxyRules[orderedProxyRulesIndex].Jsonize());
   }
   payload.WithArray("orderedProxyRules", std::move(orderedProxyRulesJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace CodeBuild
} // namespace Aws
