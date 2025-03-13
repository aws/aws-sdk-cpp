/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/gamelift/model/PriorityConfigurationOverride.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace GameLift
{
namespace Model
{

PriorityConfigurationOverride::PriorityConfigurationOverride(JsonView jsonValue)
{
  *this = jsonValue;
}

PriorityConfigurationOverride& PriorityConfigurationOverride::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("PlacementFallbackStrategy"))
  {
    m_placementFallbackStrategy = PlacementFallbackStrategyMapper::GetPlacementFallbackStrategyForName(jsonValue.GetString("PlacementFallbackStrategy"));
    m_placementFallbackStrategyHasBeenSet = true;
  }
  if(jsonValue.ValueExists("LocationOrder"))
  {
    Aws::Utils::Array<JsonView> locationOrderJsonList = jsonValue.GetArray("LocationOrder");
    for(unsigned locationOrderIndex = 0; locationOrderIndex < locationOrderJsonList.GetLength(); ++locationOrderIndex)
    {
      m_locationOrder.push_back(locationOrderJsonList[locationOrderIndex].AsString());
    }
    m_locationOrderHasBeenSet = true;
  }
  return *this;
}

JsonValue PriorityConfigurationOverride::Jsonize() const
{
  JsonValue payload;

  if(m_placementFallbackStrategyHasBeenSet)
  {
   payload.WithString("PlacementFallbackStrategy", PlacementFallbackStrategyMapper::GetNameForPlacementFallbackStrategy(m_placementFallbackStrategy));
  }

  if(m_locationOrderHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> locationOrderJsonList(m_locationOrder.size());
   for(unsigned locationOrderIndex = 0; locationOrderIndex < locationOrderJsonList.GetLength(); ++locationOrderIndex)
   {
     locationOrderJsonList[locationOrderIndex].AsString(m_locationOrder[locationOrderIndex]);
   }
   payload.WithArray("LocationOrder", std::move(locationOrderJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace GameLift
} // namespace Aws
