/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/SheetVisualScopingConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace QuickSight
{
namespace Model
{

SheetVisualScopingConfiguration::SheetVisualScopingConfiguration() : 
    m_sheetIdHasBeenSet(false),
    m_scope(FilterVisualScope::NOT_SET),
    m_scopeHasBeenSet(false),
    m_visualIdsHasBeenSet(false)
{
}

SheetVisualScopingConfiguration::SheetVisualScopingConfiguration(JsonView jsonValue) : 
    m_sheetIdHasBeenSet(false),
    m_scope(FilterVisualScope::NOT_SET),
    m_scopeHasBeenSet(false),
    m_visualIdsHasBeenSet(false)
{
  *this = jsonValue;
}

SheetVisualScopingConfiguration& SheetVisualScopingConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("SheetId"))
  {
    m_sheetId = jsonValue.GetString("SheetId");

    m_sheetIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Scope"))
  {
    m_scope = FilterVisualScopeMapper::GetFilterVisualScopeForName(jsonValue.GetString("Scope"));

    m_scopeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("VisualIds"))
  {
    Aws::Utils::Array<JsonView> visualIdsJsonList = jsonValue.GetArray("VisualIds");
    for(unsigned visualIdsIndex = 0; visualIdsIndex < visualIdsJsonList.GetLength(); ++visualIdsIndex)
    {
      m_visualIds.push_back(visualIdsJsonList[visualIdsIndex].AsString());
    }
    m_visualIdsHasBeenSet = true;
  }

  return *this;
}

JsonValue SheetVisualScopingConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_sheetIdHasBeenSet)
  {
   payload.WithString("SheetId", m_sheetId);

  }

  if(m_scopeHasBeenSet)
  {
   payload.WithString("Scope", FilterVisualScopeMapper::GetNameForFilterVisualScope(m_scope));
  }

  if(m_visualIdsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> visualIdsJsonList(m_visualIds.size());
   for(unsigned visualIdsIndex = 0; visualIdsIndex < visualIdsJsonList.GetLength(); ++visualIdsIndex)
   {
     visualIdsJsonList[visualIdsIndex].AsString(m_visualIds[visualIdsIndex]);
   }
   payload.WithArray("VisualIds", std::move(visualIdsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace QuickSight
} // namespace Aws
