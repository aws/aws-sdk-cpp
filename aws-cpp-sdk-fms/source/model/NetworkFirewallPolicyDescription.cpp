/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/fms/model/NetworkFirewallPolicyDescription.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace FMS
{
namespace Model
{

NetworkFirewallPolicyDescription::NetworkFirewallPolicyDescription() : 
    m_statelessRuleGroupsHasBeenSet(false),
    m_statelessDefaultActionsHasBeenSet(false),
    m_statelessFragmentDefaultActionsHasBeenSet(false),
    m_statelessCustomActionsHasBeenSet(false),
    m_statefulRuleGroupsHasBeenSet(false),
    m_statefulDefaultActionsHasBeenSet(false),
    m_statefulEngineOptionsHasBeenSet(false)
{
}

NetworkFirewallPolicyDescription::NetworkFirewallPolicyDescription(JsonView jsonValue) : 
    m_statelessRuleGroupsHasBeenSet(false),
    m_statelessDefaultActionsHasBeenSet(false),
    m_statelessFragmentDefaultActionsHasBeenSet(false),
    m_statelessCustomActionsHasBeenSet(false),
    m_statefulRuleGroupsHasBeenSet(false),
    m_statefulDefaultActionsHasBeenSet(false),
    m_statefulEngineOptionsHasBeenSet(false)
{
  *this = jsonValue;
}

NetworkFirewallPolicyDescription& NetworkFirewallPolicyDescription::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("StatelessRuleGroups"))
  {
    Aws::Utils::Array<JsonView> statelessRuleGroupsJsonList = jsonValue.GetArray("StatelessRuleGroups");
    for(unsigned statelessRuleGroupsIndex = 0; statelessRuleGroupsIndex < statelessRuleGroupsJsonList.GetLength(); ++statelessRuleGroupsIndex)
    {
      m_statelessRuleGroups.push_back(statelessRuleGroupsJsonList[statelessRuleGroupsIndex].AsObject());
    }
    m_statelessRuleGroupsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("StatelessDefaultActions"))
  {
    Aws::Utils::Array<JsonView> statelessDefaultActionsJsonList = jsonValue.GetArray("StatelessDefaultActions");
    for(unsigned statelessDefaultActionsIndex = 0; statelessDefaultActionsIndex < statelessDefaultActionsJsonList.GetLength(); ++statelessDefaultActionsIndex)
    {
      m_statelessDefaultActions.push_back(statelessDefaultActionsJsonList[statelessDefaultActionsIndex].AsString());
    }
    m_statelessDefaultActionsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("StatelessFragmentDefaultActions"))
  {
    Aws::Utils::Array<JsonView> statelessFragmentDefaultActionsJsonList = jsonValue.GetArray("StatelessFragmentDefaultActions");
    for(unsigned statelessFragmentDefaultActionsIndex = 0; statelessFragmentDefaultActionsIndex < statelessFragmentDefaultActionsJsonList.GetLength(); ++statelessFragmentDefaultActionsIndex)
    {
      m_statelessFragmentDefaultActions.push_back(statelessFragmentDefaultActionsJsonList[statelessFragmentDefaultActionsIndex].AsString());
    }
    m_statelessFragmentDefaultActionsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("StatelessCustomActions"))
  {
    Aws::Utils::Array<JsonView> statelessCustomActionsJsonList = jsonValue.GetArray("StatelessCustomActions");
    for(unsigned statelessCustomActionsIndex = 0; statelessCustomActionsIndex < statelessCustomActionsJsonList.GetLength(); ++statelessCustomActionsIndex)
    {
      m_statelessCustomActions.push_back(statelessCustomActionsJsonList[statelessCustomActionsIndex].AsString());
    }
    m_statelessCustomActionsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("StatefulRuleGroups"))
  {
    Aws::Utils::Array<JsonView> statefulRuleGroupsJsonList = jsonValue.GetArray("StatefulRuleGroups");
    for(unsigned statefulRuleGroupsIndex = 0; statefulRuleGroupsIndex < statefulRuleGroupsJsonList.GetLength(); ++statefulRuleGroupsIndex)
    {
      m_statefulRuleGroups.push_back(statefulRuleGroupsJsonList[statefulRuleGroupsIndex].AsObject());
    }
    m_statefulRuleGroupsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("StatefulDefaultActions"))
  {
    Aws::Utils::Array<JsonView> statefulDefaultActionsJsonList = jsonValue.GetArray("StatefulDefaultActions");
    for(unsigned statefulDefaultActionsIndex = 0; statefulDefaultActionsIndex < statefulDefaultActionsJsonList.GetLength(); ++statefulDefaultActionsIndex)
    {
      m_statefulDefaultActions.push_back(statefulDefaultActionsJsonList[statefulDefaultActionsIndex].AsString());
    }
    m_statefulDefaultActionsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("StatefulEngineOptions"))
  {
    m_statefulEngineOptions = jsonValue.GetObject("StatefulEngineOptions");

    m_statefulEngineOptionsHasBeenSet = true;
  }

  return *this;
}

JsonValue NetworkFirewallPolicyDescription::Jsonize() const
{
  JsonValue payload;

  if(m_statelessRuleGroupsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> statelessRuleGroupsJsonList(m_statelessRuleGroups.size());
   for(unsigned statelessRuleGroupsIndex = 0; statelessRuleGroupsIndex < statelessRuleGroupsJsonList.GetLength(); ++statelessRuleGroupsIndex)
   {
     statelessRuleGroupsJsonList[statelessRuleGroupsIndex].AsObject(m_statelessRuleGroups[statelessRuleGroupsIndex].Jsonize());
   }
   payload.WithArray("StatelessRuleGroups", std::move(statelessRuleGroupsJsonList));

  }

  if(m_statelessDefaultActionsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> statelessDefaultActionsJsonList(m_statelessDefaultActions.size());
   for(unsigned statelessDefaultActionsIndex = 0; statelessDefaultActionsIndex < statelessDefaultActionsJsonList.GetLength(); ++statelessDefaultActionsIndex)
   {
     statelessDefaultActionsJsonList[statelessDefaultActionsIndex].AsString(m_statelessDefaultActions[statelessDefaultActionsIndex]);
   }
   payload.WithArray("StatelessDefaultActions", std::move(statelessDefaultActionsJsonList));

  }

  if(m_statelessFragmentDefaultActionsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> statelessFragmentDefaultActionsJsonList(m_statelessFragmentDefaultActions.size());
   for(unsigned statelessFragmentDefaultActionsIndex = 0; statelessFragmentDefaultActionsIndex < statelessFragmentDefaultActionsJsonList.GetLength(); ++statelessFragmentDefaultActionsIndex)
   {
     statelessFragmentDefaultActionsJsonList[statelessFragmentDefaultActionsIndex].AsString(m_statelessFragmentDefaultActions[statelessFragmentDefaultActionsIndex]);
   }
   payload.WithArray("StatelessFragmentDefaultActions", std::move(statelessFragmentDefaultActionsJsonList));

  }

  if(m_statelessCustomActionsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> statelessCustomActionsJsonList(m_statelessCustomActions.size());
   for(unsigned statelessCustomActionsIndex = 0; statelessCustomActionsIndex < statelessCustomActionsJsonList.GetLength(); ++statelessCustomActionsIndex)
   {
     statelessCustomActionsJsonList[statelessCustomActionsIndex].AsString(m_statelessCustomActions[statelessCustomActionsIndex]);
   }
   payload.WithArray("StatelessCustomActions", std::move(statelessCustomActionsJsonList));

  }

  if(m_statefulRuleGroupsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> statefulRuleGroupsJsonList(m_statefulRuleGroups.size());
   for(unsigned statefulRuleGroupsIndex = 0; statefulRuleGroupsIndex < statefulRuleGroupsJsonList.GetLength(); ++statefulRuleGroupsIndex)
   {
     statefulRuleGroupsJsonList[statefulRuleGroupsIndex].AsObject(m_statefulRuleGroups[statefulRuleGroupsIndex].Jsonize());
   }
   payload.WithArray("StatefulRuleGroups", std::move(statefulRuleGroupsJsonList));

  }

  if(m_statefulDefaultActionsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> statefulDefaultActionsJsonList(m_statefulDefaultActions.size());
   for(unsigned statefulDefaultActionsIndex = 0; statefulDefaultActionsIndex < statefulDefaultActionsJsonList.GetLength(); ++statefulDefaultActionsIndex)
   {
     statefulDefaultActionsJsonList[statefulDefaultActionsIndex].AsString(m_statefulDefaultActions[statefulDefaultActionsIndex]);
   }
   payload.WithArray("StatefulDefaultActions", std::move(statefulDefaultActionsJsonList));

  }

  if(m_statefulEngineOptionsHasBeenSet)
  {
   payload.WithObject("StatefulEngineOptions", m_statefulEngineOptions.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace FMS
} // namespace Aws
