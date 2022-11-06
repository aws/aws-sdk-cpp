/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ce/model/Group.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace CostExplorer
{
namespace Model
{

Group::Group() : 
    m_keysHasBeenSet(false),
    m_metricsHasBeenSet(false)
{
}

Group::Group(JsonView jsonValue) : 
    m_keysHasBeenSet(false),
    m_metricsHasBeenSet(false)
{
  *this = jsonValue;
}

Group& Group::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Keys"))
  {
    Aws::Utils::Array<JsonView> keysJsonList = jsonValue.GetArray("Keys");
    for(unsigned keysIndex = 0; keysIndex < keysJsonList.GetLength(); ++keysIndex)
    {
      m_keys.push_back(keysJsonList[keysIndex].AsString());
    }
    m_keysHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Metrics"))
  {
    Aws::Map<Aws::String, JsonView> metricsJsonMap = jsonValue.GetObject("Metrics").GetAllObjects();
    for(auto& metricsItem : metricsJsonMap)
    {
      m_metrics[metricsItem.first] = metricsItem.second.AsObject();
    }
    m_metricsHasBeenSet = true;
  }

  return *this;
}

JsonValue Group::Jsonize() const
{
  JsonValue payload;

  if(m_keysHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> keysJsonList(m_keys.size());
   for(unsigned keysIndex = 0; keysIndex < keysJsonList.GetLength(); ++keysIndex)
   {
     keysJsonList[keysIndex].AsString(m_keys[keysIndex]);
   }
   payload.WithArray("Keys", std::move(keysJsonList));

  }

  if(m_metricsHasBeenSet)
  {
   JsonValue metricsJsonMap;
   for(auto& metricsItem : m_metrics)
   {
     metricsJsonMap.WithObject(metricsItem.first, metricsItem.second.Jsonize());
   }
   payload.WithObject("Metrics", std::move(metricsJsonMap));

  }

  return payload;
}

} // namespace Model
} // namespace CostExplorer
} // namespace Aws
