/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/imagebuilder/model/LifecyclePolicyDetailExclusionRulesAmis.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace imagebuilder
{
namespace Model
{

LifecyclePolicyDetailExclusionRulesAmis::LifecyclePolicyDetailExclusionRulesAmis() : 
    m_isPublic(false),
    m_isPublicHasBeenSet(false),
    m_regionsHasBeenSet(false),
    m_sharedAccountsHasBeenSet(false),
    m_lastLaunchedHasBeenSet(false),
    m_tagMapHasBeenSet(false)
{
}

LifecyclePolicyDetailExclusionRulesAmis::LifecyclePolicyDetailExclusionRulesAmis(JsonView jsonValue) : 
    m_isPublic(false),
    m_isPublicHasBeenSet(false),
    m_regionsHasBeenSet(false),
    m_sharedAccountsHasBeenSet(false),
    m_lastLaunchedHasBeenSet(false),
    m_tagMapHasBeenSet(false)
{
  *this = jsonValue;
}

LifecyclePolicyDetailExclusionRulesAmis& LifecyclePolicyDetailExclusionRulesAmis::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("isPublic"))
  {
    m_isPublic = jsonValue.GetBool("isPublic");

    m_isPublicHasBeenSet = true;
  }

  if(jsonValue.ValueExists("regions"))
  {
    Aws::Utils::Array<JsonView> regionsJsonList = jsonValue.GetArray("regions");
    for(unsigned regionsIndex = 0; regionsIndex < regionsJsonList.GetLength(); ++regionsIndex)
    {
      m_regions.push_back(regionsJsonList[regionsIndex].AsString());
    }
    m_regionsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("sharedAccounts"))
  {
    Aws::Utils::Array<JsonView> sharedAccountsJsonList = jsonValue.GetArray("sharedAccounts");
    for(unsigned sharedAccountsIndex = 0; sharedAccountsIndex < sharedAccountsJsonList.GetLength(); ++sharedAccountsIndex)
    {
      m_sharedAccounts.push_back(sharedAccountsJsonList[sharedAccountsIndex].AsString());
    }
    m_sharedAccountsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("lastLaunched"))
  {
    m_lastLaunched = jsonValue.GetObject("lastLaunched");

    m_lastLaunchedHasBeenSet = true;
  }

  if(jsonValue.ValueExists("tagMap"))
  {
    Aws::Map<Aws::String, JsonView> tagMapJsonMap = jsonValue.GetObject("tagMap").GetAllObjects();
    for(auto& tagMapItem : tagMapJsonMap)
    {
      m_tagMap[tagMapItem.first] = tagMapItem.second.AsString();
    }
    m_tagMapHasBeenSet = true;
  }

  return *this;
}

JsonValue LifecyclePolicyDetailExclusionRulesAmis::Jsonize() const
{
  JsonValue payload;

  if(m_isPublicHasBeenSet)
  {
   payload.WithBool("isPublic", m_isPublic);

  }

  if(m_regionsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> regionsJsonList(m_regions.size());
   for(unsigned regionsIndex = 0; regionsIndex < regionsJsonList.GetLength(); ++regionsIndex)
   {
     regionsJsonList[regionsIndex].AsString(m_regions[regionsIndex]);
   }
   payload.WithArray("regions", std::move(regionsJsonList));

  }

  if(m_sharedAccountsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> sharedAccountsJsonList(m_sharedAccounts.size());
   for(unsigned sharedAccountsIndex = 0; sharedAccountsIndex < sharedAccountsJsonList.GetLength(); ++sharedAccountsIndex)
   {
     sharedAccountsJsonList[sharedAccountsIndex].AsString(m_sharedAccounts[sharedAccountsIndex]);
   }
   payload.WithArray("sharedAccounts", std::move(sharedAccountsJsonList));

  }

  if(m_lastLaunchedHasBeenSet)
  {
   payload.WithObject("lastLaunched", m_lastLaunched.Jsonize());

  }

  if(m_tagMapHasBeenSet)
  {
   JsonValue tagMapJsonMap;
   for(auto& tagMapItem : m_tagMap)
   {
     tagMapJsonMap.WithString(tagMapItem.first, tagMapItem.second);
   }
   payload.WithObject("tagMap", std::move(tagMapJsonMap));

  }

  return payload;
}

} // namespace Model
} // namespace imagebuilder
} // namespace Aws
