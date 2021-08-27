/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/wafv2/model/WebACL.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace WAFV2
{
namespace Model
{

WebACL::WebACL() : 
    m_nameHasBeenSet(false),
    m_idHasBeenSet(false),
    m_aRNHasBeenSet(false),
    m_defaultActionHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_rulesHasBeenSet(false),
    m_visibilityConfigHasBeenSet(false),
    m_capacity(0),
    m_capacityHasBeenSet(false),
    m_preProcessFirewallManagerRuleGroupsHasBeenSet(false),
    m_postProcessFirewallManagerRuleGroupsHasBeenSet(false),
    m_managedByFirewallManager(false),
    m_managedByFirewallManagerHasBeenSet(false)
{
}

WebACL::WebACL(JsonView jsonValue) : 
    m_nameHasBeenSet(false),
    m_idHasBeenSet(false),
    m_aRNHasBeenSet(false),
    m_defaultActionHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_rulesHasBeenSet(false),
    m_visibilityConfigHasBeenSet(false),
    m_capacity(0),
    m_capacityHasBeenSet(false),
    m_preProcessFirewallManagerRuleGroupsHasBeenSet(false),
    m_postProcessFirewallManagerRuleGroupsHasBeenSet(false),
    m_managedByFirewallManager(false),
    m_managedByFirewallManagerHasBeenSet(false)
{
  *this = jsonValue;
}

WebACL& WebACL::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Id"))
  {
    m_id = jsonValue.GetString("Id");

    m_idHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ARN"))
  {
    m_aRN = jsonValue.GetString("ARN");

    m_aRNHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DefaultAction"))
  {
    m_defaultAction = jsonValue.GetObject("DefaultAction");

    m_defaultActionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Description"))
  {
    m_description = jsonValue.GetString("Description");

    m_descriptionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Rules"))
  {
    Array<JsonView> rulesJsonList = jsonValue.GetArray("Rules");
    for(unsigned rulesIndex = 0; rulesIndex < rulesJsonList.GetLength(); ++rulesIndex)
    {
      m_rules.push_back(rulesJsonList[rulesIndex].AsObject());
    }
    m_rulesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("VisibilityConfig"))
  {
    m_visibilityConfig = jsonValue.GetObject("VisibilityConfig");

    m_visibilityConfigHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Capacity"))
  {
    m_capacity = jsonValue.GetInt64("Capacity");

    m_capacityHasBeenSet = true;
  }

  if(jsonValue.ValueExists("PreProcessFirewallManagerRuleGroups"))
  {
    Array<JsonView> preProcessFirewallManagerRuleGroupsJsonList = jsonValue.GetArray("PreProcessFirewallManagerRuleGroups");
    for(unsigned preProcessFirewallManagerRuleGroupsIndex = 0; preProcessFirewallManagerRuleGroupsIndex < preProcessFirewallManagerRuleGroupsJsonList.GetLength(); ++preProcessFirewallManagerRuleGroupsIndex)
    {
      m_preProcessFirewallManagerRuleGroups.push_back(preProcessFirewallManagerRuleGroupsJsonList[preProcessFirewallManagerRuleGroupsIndex].AsObject());
    }
    m_preProcessFirewallManagerRuleGroupsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("PostProcessFirewallManagerRuleGroups"))
  {
    Array<JsonView> postProcessFirewallManagerRuleGroupsJsonList = jsonValue.GetArray("PostProcessFirewallManagerRuleGroups");
    for(unsigned postProcessFirewallManagerRuleGroupsIndex = 0; postProcessFirewallManagerRuleGroupsIndex < postProcessFirewallManagerRuleGroupsJsonList.GetLength(); ++postProcessFirewallManagerRuleGroupsIndex)
    {
      m_postProcessFirewallManagerRuleGroups.push_back(postProcessFirewallManagerRuleGroupsJsonList[postProcessFirewallManagerRuleGroupsIndex].AsObject());
    }
    m_postProcessFirewallManagerRuleGroupsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ManagedByFirewallManager"))
  {
    m_managedByFirewallManager = jsonValue.GetBool("ManagedByFirewallManager");

    m_managedByFirewallManagerHasBeenSet = true;
  }

  return *this;
}

JsonValue WebACL::Jsonize() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_idHasBeenSet)
  {
   payload.WithString("Id", m_id);

  }

  if(m_aRNHasBeenSet)
  {
   payload.WithString("ARN", m_aRN);

  }

  if(m_defaultActionHasBeenSet)
  {
   payload.WithObject("DefaultAction", m_defaultAction.Jsonize());

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("Description", m_description);

  }

  if(m_rulesHasBeenSet)
  {
   Array<JsonValue> rulesJsonList(m_rules.size());
   for(unsigned rulesIndex = 0; rulesIndex < rulesJsonList.GetLength(); ++rulesIndex)
   {
     rulesJsonList[rulesIndex].AsObject(m_rules[rulesIndex].Jsonize());
   }
   payload.WithArray("Rules", std::move(rulesJsonList));

  }

  if(m_visibilityConfigHasBeenSet)
  {
   payload.WithObject("VisibilityConfig", m_visibilityConfig.Jsonize());

  }

  if(m_capacityHasBeenSet)
  {
   payload.WithInt64("Capacity", m_capacity);

  }

  if(m_preProcessFirewallManagerRuleGroupsHasBeenSet)
  {
   Array<JsonValue> preProcessFirewallManagerRuleGroupsJsonList(m_preProcessFirewallManagerRuleGroups.size());
   for(unsigned preProcessFirewallManagerRuleGroupsIndex = 0; preProcessFirewallManagerRuleGroupsIndex < preProcessFirewallManagerRuleGroupsJsonList.GetLength(); ++preProcessFirewallManagerRuleGroupsIndex)
   {
     preProcessFirewallManagerRuleGroupsJsonList[preProcessFirewallManagerRuleGroupsIndex].AsObject(m_preProcessFirewallManagerRuleGroups[preProcessFirewallManagerRuleGroupsIndex].Jsonize());
   }
   payload.WithArray("PreProcessFirewallManagerRuleGroups", std::move(preProcessFirewallManagerRuleGroupsJsonList));

  }

  if(m_postProcessFirewallManagerRuleGroupsHasBeenSet)
  {
   Array<JsonValue> postProcessFirewallManagerRuleGroupsJsonList(m_postProcessFirewallManagerRuleGroups.size());
   for(unsigned postProcessFirewallManagerRuleGroupsIndex = 0; postProcessFirewallManagerRuleGroupsIndex < postProcessFirewallManagerRuleGroupsJsonList.GetLength(); ++postProcessFirewallManagerRuleGroupsIndex)
   {
     postProcessFirewallManagerRuleGroupsJsonList[postProcessFirewallManagerRuleGroupsIndex].AsObject(m_postProcessFirewallManagerRuleGroups[postProcessFirewallManagerRuleGroupsIndex].Jsonize());
   }
   payload.WithArray("PostProcessFirewallManagerRuleGroups", std::move(postProcessFirewallManagerRuleGroupsJsonList));

  }

  if(m_managedByFirewallManagerHasBeenSet)
  {
   payload.WithBool("ManagedByFirewallManager", m_managedByFirewallManager);

  }

  return payload;
}

} // namespace Model
} // namespace WAFV2
} // namespace Aws
