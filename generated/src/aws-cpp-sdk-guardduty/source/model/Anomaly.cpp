/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/guardduty/model/Anomaly.h>
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

Anomaly::Anomaly() : 
    m_profilesHasBeenSet(false),
    m_unusualHasBeenSet(false)
{
}

Anomaly::Anomaly(JsonView jsonValue) : 
    m_profilesHasBeenSet(false),
    m_unusualHasBeenSet(false)
{
  *this = jsonValue;
}

Anomaly& Anomaly::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("profiles"))
  {
    Aws::Map<Aws::String, JsonView> profilesJsonMap = jsonValue.GetObject("profiles").GetAllObjects();
    for(auto& profilesItem : profilesJsonMap)
    {
      Aws::Map<Aws::String, JsonView> anomalyProfileFeaturesJsonMap = profilesItem.second.GetAllObjects();
      Aws::Map<Aws::String, Aws::Vector<AnomalyObject>> anomalyProfileFeaturesMap;
      for(auto& anomalyProfileFeaturesItem : anomalyProfileFeaturesJsonMap)
      {
        Aws::Utils::Array<JsonView> anomalyProfileFeatureObjectsJsonList = anomalyProfileFeaturesItem.second.AsArray();
        Aws::Vector<AnomalyObject> anomalyProfileFeatureObjectsList;
        anomalyProfileFeatureObjectsList.reserve((size_t)anomalyProfileFeatureObjectsJsonList.GetLength());
        for(unsigned anomalyProfileFeatureObjectsIndex = 0; anomalyProfileFeatureObjectsIndex < anomalyProfileFeatureObjectsJsonList.GetLength(); ++anomalyProfileFeatureObjectsIndex)
        {
          anomalyProfileFeatureObjectsList.push_back(anomalyProfileFeatureObjectsJsonList[anomalyProfileFeatureObjectsIndex].AsObject());
        }
        anomalyProfileFeaturesMap[anomalyProfileFeaturesItem.first] = std::move(anomalyProfileFeatureObjectsList);
      }
      m_profiles[profilesItem.first] = std::move(anomalyProfileFeaturesMap);
    }
    m_profilesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("unusual"))
  {
    m_unusual = jsonValue.GetObject("unusual");

    m_unusualHasBeenSet = true;
  }

  return *this;
}

JsonValue Anomaly::Jsonize() const
{
  JsonValue payload;

  if(m_profilesHasBeenSet)
  {
   JsonValue profilesJsonMap;
   for(auto& profilesItem : m_profiles)
   {
     JsonValue anomalyProfileFeaturesJsonMap;
     for(auto& anomalyProfileFeaturesItem : profilesItem.second)
     {
       Aws::Utils::Array<JsonValue> anomalyProfileFeatureObjectsJsonList(anomalyProfileFeaturesItem.second.size());
       for(unsigned anomalyProfileFeatureObjectsIndex = 0; anomalyProfileFeatureObjectsIndex < anomalyProfileFeatureObjectsJsonList.GetLength(); ++anomalyProfileFeatureObjectsIndex)
       {
         anomalyProfileFeatureObjectsJsonList[anomalyProfileFeatureObjectsIndex].AsObject(anomalyProfileFeaturesItem.second[anomalyProfileFeatureObjectsIndex].Jsonize());
       }
       anomalyProfileFeaturesJsonMap.WithArray(anomalyProfileFeaturesItem.first, std::move(anomalyProfileFeatureObjectsJsonList));
     }
     profilesJsonMap.WithObject(profilesItem.first, std::move(anomalyProfileFeaturesJsonMap));
   }
   payload.WithObject("profiles", std::move(profilesJsonMap));

  }

  if(m_unusualHasBeenSet)
  {
   payload.WithObject("unusual", m_unusual.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace GuardDuty
} // namespace Aws
