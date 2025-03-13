/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/datazone/model/AssetTypesForRule.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace DataZone
{
namespace Model
{

AssetTypesForRule::AssetTypesForRule(JsonView jsonValue)
{
  *this = jsonValue;
}

AssetTypesForRule& AssetTypesForRule::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("selectionMode"))
  {
    m_selectionMode = RuleScopeSelectionModeMapper::GetRuleScopeSelectionModeForName(jsonValue.GetString("selectionMode"));
    m_selectionModeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("specificAssetTypes"))
  {
    Aws::Utils::Array<JsonView> specificAssetTypesJsonList = jsonValue.GetArray("specificAssetTypes");
    for(unsigned specificAssetTypesIndex = 0; specificAssetTypesIndex < specificAssetTypesJsonList.GetLength(); ++specificAssetTypesIndex)
    {
      m_specificAssetTypes.push_back(specificAssetTypesJsonList[specificAssetTypesIndex].AsString());
    }
    m_specificAssetTypesHasBeenSet = true;
  }
  return *this;
}

JsonValue AssetTypesForRule::Jsonize() const
{
  JsonValue payload;

  if(m_selectionModeHasBeenSet)
  {
   payload.WithString("selectionMode", RuleScopeSelectionModeMapper::GetNameForRuleScopeSelectionMode(m_selectionMode));
  }

  if(m_specificAssetTypesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> specificAssetTypesJsonList(m_specificAssetTypes.size());
   for(unsigned specificAssetTypesIndex = 0; specificAssetTypesIndex < specificAssetTypesJsonList.GetLength(); ++specificAssetTypesIndex)
   {
     specificAssetTypesJsonList[specificAssetTypesIndex].AsString(m_specificAssetTypes[specificAssetTypesIndex]);
   }
   payload.WithArray("specificAssetTypes", std::move(specificAssetTypesJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace DataZone
} // namespace Aws
