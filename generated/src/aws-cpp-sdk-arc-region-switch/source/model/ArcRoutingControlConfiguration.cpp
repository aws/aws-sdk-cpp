/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/arc-region-switch/model/ArcRoutingControlConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ARCRegionswitch
{
namespace Model
{

ArcRoutingControlConfiguration::ArcRoutingControlConfiguration(JsonView jsonValue)
{
  *this = jsonValue;
}

ArcRoutingControlConfiguration& ArcRoutingControlConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("timeoutMinutes"))
  {
    m_timeoutMinutes = jsonValue.GetInteger("timeoutMinutes");
    m_timeoutMinutesHasBeenSet = true;
  }
  if(jsonValue.ValueExists("crossAccountRole"))
  {
    m_crossAccountRole = jsonValue.GetString("crossAccountRole");
    m_crossAccountRoleHasBeenSet = true;
  }
  if(jsonValue.ValueExists("externalId"))
  {
    m_externalId = jsonValue.GetString("externalId");
    m_externalIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("regionAndRoutingControls"))
  {
    Aws::Map<Aws::String, JsonView> regionAndRoutingControlsJsonMap = jsonValue.GetObject("regionAndRoutingControls").GetAllObjects();
    for(auto& regionAndRoutingControlsItem : regionAndRoutingControlsJsonMap)
    {
      Aws::Utils::Array<JsonView> arcRoutingControlStatesJsonList = regionAndRoutingControlsItem.second.AsArray();
      Aws::Vector<ArcRoutingControlState> arcRoutingControlStatesList;
      arcRoutingControlStatesList.reserve((size_t)arcRoutingControlStatesJsonList.GetLength());
      for(unsigned arcRoutingControlStatesIndex = 0; arcRoutingControlStatesIndex < arcRoutingControlStatesJsonList.GetLength(); ++arcRoutingControlStatesIndex)
      {
        arcRoutingControlStatesList.push_back(arcRoutingControlStatesJsonList[arcRoutingControlStatesIndex].AsObject());
      }
      m_regionAndRoutingControls[regionAndRoutingControlsItem.first] = std::move(arcRoutingControlStatesList);
    }
    m_regionAndRoutingControlsHasBeenSet = true;
  }
  return *this;
}

JsonValue ArcRoutingControlConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_timeoutMinutesHasBeenSet)
  {
   payload.WithInteger("timeoutMinutes", m_timeoutMinutes);

  }

  if(m_crossAccountRoleHasBeenSet)
  {
   payload.WithString("crossAccountRole", m_crossAccountRole);

  }

  if(m_externalIdHasBeenSet)
  {
   payload.WithString("externalId", m_externalId);

  }

  if(m_regionAndRoutingControlsHasBeenSet)
  {
   JsonValue regionAndRoutingControlsJsonMap;
   for(auto& regionAndRoutingControlsItem : m_regionAndRoutingControls)
   {
     Aws::Utils::Array<JsonValue> arcRoutingControlStatesJsonList(regionAndRoutingControlsItem.second.size());
     for(unsigned arcRoutingControlStatesIndex = 0; arcRoutingControlStatesIndex < arcRoutingControlStatesJsonList.GetLength(); ++arcRoutingControlStatesIndex)
     {
       arcRoutingControlStatesJsonList[arcRoutingControlStatesIndex].AsObject(regionAndRoutingControlsItem.second[arcRoutingControlStatesIndex].Jsonize());
     }
     regionAndRoutingControlsJsonMap.WithArray(regionAndRoutingControlsItem.first, std::move(arcRoutingControlStatesJsonList));
   }
   payload.WithObject("regionAndRoutingControls", std::move(regionAndRoutingControlsJsonMap));

  }

  return payload;
}

} // namespace Model
} // namespace ARCRegionswitch
} // namespace Aws
