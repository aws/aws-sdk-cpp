/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bcm-dashboards/model/DisplayConfig.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace BCMDashboards
{
namespace Model
{

DisplayConfig::DisplayConfig(JsonView jsonValue)
{
  *this = jsonValue;
}

DisplayConfig& DisplayConfig::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("graph"))
  {
    Aws::Map<Aws::String, JsonView> graphJsonMap = jsonValue.GetObject("graph").GetAllObjects();
    for(auto& graphItem : graphJsonMap)
    {
      m_graph[graphItem.first] = graphItem.second.AsObject();
    }
    m_graphHasBeenSet = true;
  }
  if(jsonValue.ValueExists("table"))
  {
    m_table = jsonValue.GetObject("table");
    m_tableHasBeenSet = true;
  }
  return *this;
}

JsonValue DisplayConfig::Jsonize() const
{
  JsonValue payload;

  if(m_graphHasBeenSet)
  {
   JsonValue graphJsonMap;
   for(auto& graphItem : m_graph)
   {
     graphJsonMap.WithObject(graphItem.first, graphItem.second.Jsonize());
   }
   payload.WithObject("graph", std::move(graphJsonMap));

  }

  if(m_tableHasBeenSet)
  {
   payload.WithObject("table", m_table.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace BCMDashboards
} // namespace Aws
