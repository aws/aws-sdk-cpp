/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/guardduty/model/AnomalyUnusual.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace GuardDuty
{
namespace Model
{

AnomalyUnusual::AnomalyUnusual() : 
    m_behaviorHasBeenSet(false)
{
}

AnomalyUnusual::AnomalyUnusual(JsonView jsonValue) : 
    m_behaviorHasBeenSet(false)
{
  *this = jsonValue;
}

AnomalyUnusual& AnomalyUnusual::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("behavior"))
  {
    Aws::Map<Aws::String, JsonView> behaviorJsonMap = jsonValue.GetObject("behavior").GetAllObjects();
    for(auto& behaviorItem : behaviorJsonMap)
    {
      Aws::Map<Aws::String, JsonView> anomalyUnusualBehaviorFeatureJsonMap = behaviorItem.second.GetAllObjects();
      Aws::Map<Aws::String, AnomalyObject> anomalyUnusualBehaviorFeatureMap;
      for(auto& anomalyUnusualBehaviorFeatureItem : anomalyUnusualBehaviorFeatureJsonMap)
      {
        anomalyUnusualBehaviorFeatureMap[anomalyUnusualBehaviorFeatureItem.first] = anomalyUnusualBehaviorFeatureItem.second.AsObject();
      }
      m_behavior[behaviorItem.first] = std::move(anomalyUnusualBehaviorFeatureMap);
    }
    m_behaviorHasBeenSet = true;
  }

  return *this;
}

JsonValue AnomalyUnusual::Jsonize() const
{
  JsonValue payload;

  if(m_behaviorHasBeenSet)
  {
   JsonValue behaviorJsonMap;
   for(auto& behaviorItem : m_behavior)
   {
     JsonValue anomalyUnusualBehaviorFeatureJsonMap;
     for(auto& anomalyUnusualBehaviorFeatureItem : behaviorItem.second)
     {
       anomalyUnusualBehaviorFeatureJsonMap.WithObject(anomalyUnusualBehaviorFeatureItem.first, anomalyUnusualBehaviorFeatureItem.second.Jsonize());
     }
     behaviorJsonMap.WithObject(behaviorItem.first, std::move(anomalyUnusualBehaviorFeatureJsonMap));
   }
   payload.WithObject("behavior", std::move(behaviorJsonMap));

  }

  return payload;
}

} // namespace Model
} // namespace GuardDuty
} // namespace Aws
