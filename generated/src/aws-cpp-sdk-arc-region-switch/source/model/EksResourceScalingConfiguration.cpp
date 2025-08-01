/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/arc-region-switch/model/EksResourceScalingConfiguration.h>
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

EksResourceScalingConfiguration::EksResourceScalingConfiguration(JsonView jsonValue)
{
  *this = jsonValue;
}

EksResourceScalingConfiguration& EksResourceScalingConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("timeoutMinutes"))
  {
    m_timeoutMinutes = jsonValue.GetInteger("timeoutMinutes");
    m_timeoutMinutesHasBeenSet = true;
  }
  if(jsonValue.ValueExists("kubernetesResourceType"))
  {
    m_kubernetesResourceType = jsonValue.GetObject("kubernetesResourceType");
    m_kubernetesResourceTypeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("scalingResources"))
  {
    Aws::Utils::Array<JsonView> scalingResourcesJsonList = jsonValue.GetArray("scalingResources");
    for(unsigned scalingResourcesIndex = 0; scalingResourcesIndex < scalingResourcesJsonList.GetLength(); ++scalingResourcesIndex)
    {
      Aws::Map<Aws::String, JsonView> kubernetesScalingApplicationJsonMap = scalingResourcesJsonList[scalingResourcesIndex].GetAllObjects();
      Aws::Map<Aws::String, Aws::Map<Aws::String, KubernetesScalingResource>> kubernetesScalingApplicationMap;
      for(auto& kubernetesScalingApplicationItem : kubernetesScalingApplicationJsonMap)
      {
        Aws::Map<Aws::String, JsonView> regionalScalingResourceJsonMap = kubernetesScalingApplicationItem.second.GetAllObjects();
        Aws::Map<Aws::String, KubernetesScalingResource> regionalScalingResourceMap;
        for(auto& regionalScalingResourceItem : regionalScalingResourceJsonMap)
        {
          regionalScalingResourceMap[regionalScalingResourceItem.first] = regionalScalingResourceItem.second.AsObject();
        }
        kubernetesScalingApplicationMap[kubernetesScalingApplicationItem.first] = std::move(regionalScalingResourceMap);
      }
      m_scalingResources.push_back(std::move(kubernetesScalingApplicationMap));
    }
    m_scalingResourcesHasBeenSet = true;
  }
  if(jsonValue.ValueExists("eksClusters"))
  {
    Aws::Utils::Array<JsonView> eksClustersJsonList = jsonValue.GetArray("eksClusters");
    for(unsigned eksClustersIndex = 0; eksClustersIndex < eksClustersJsonList.GetLength(); ++eksClustersIndex)
    {
      m_eksClusters.push_back(eksClustersJsonList[eksClustersIndex].AsObject());
    }
    m_eksClustersHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ungraceful"))
  {
    m_ungraceful = jsonValue.GetObject("ungraceful");
    m_ungracefulHasBeenSet = true;
  }
  if(jsonValue.ValueExists("targetPercent"))
  {
    m_targetPercent = jsonValue.GetInteger("targetPercent");
    m_targetPercentHasBeenSet = true;
  }
  if(jsonValue.ValueExists("capacityMonitoringApproach"))
  {
    m_capacityMonitoringApproach = EksCapacityMonitoringApproachMapper::GetEksCapacityMonitoringApproachForName(jsonValue.GetString("capacityMonitoringApproach"));
    m_capacityMonitoringApproachHasBeenSet = true;
  }
  return *this;
}

JsonValue EksResourceScalingConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_timeoutMinutesHasBeenSet)
  {
   payload.WithInteger("timeoutMinutes", m_timeoutMinutes);

  }

  if(m_kubernetesResourceTypeHasBeenSet)
  {
   payload.WithObject("kubernetesResourceType", m_kubernetesResourceType.Jsonize());

  }

  if(m_scalingResourcesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> scalingResourcesJsonList(m_scalingResources.size());
   for(unsigned scalingResourcesIndex = 0; scalingResourcesIndex < scalingResourcesJsonList.GetLength(); ++scalingResourcesIndex)
   {
     JsonValue kubernetesScalingApplicationJsonMap;
     for(auto& kubernetesScalingApplicationItem : m_scalingResources[scalingResourcesIndex])
     {
       JsonValue regionalScalingResourceJsonMap;
       for(auto& regionalScalingResourceItem : kubernetesScalingApplicationItem.second)
       {
         regionalScalingResourceJsonMap.WithObject(regionalScalingResourceItem.first, regionalScalingResourceItem.second.Jsonize());
       }
       kubernetesScalingApplicationJsonMap.WithObject(kubernetesScalingApplicationItem.first, std::move(regionalScalingResourceJsonMap));
     }
     scalingResourcesJsonList[scalingResourcesIndex].AsObject(std::move(kubernetesScalingApplicationJsonMap));
   }
   payload.WithArray("scalingResources", std::move(scalingResourcesJsonList));

  }

  if(m_eksClustersHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> eksClustersJsonList(m_eksClusters.size());
   for(unsigned eksClustersIndex = 0; eksClustersIndex < eksClustersJsonList.GetLength(); ++eksClustersIndex)
   {
     eksClustersJsonList[eksClustersIndex].AsObject(m_eksClusters[eksClustersIndex].Jsonize());
   }
   payload.WithArray("eksClusters", std::move(eksClustersJsonList));

  }

  if(m_ungracefulHasBeenSet)
  {
   payload.WithObject("ungraceful", m_ungraceful.Jsonize());

  }

  if(m_targetPercentHasBeenSet)
  {
   payload.WithInteger("targetPercent", m_targetPercent);

  }

  if(m_capacityMonitoringApproachHasBeenSet)
  {
   payload.WithString("capacityMonitoringApproach", EksCapacityMonitoringApproachMapper::GetNameForEksCapacityMonitoringApproach(m_capacityMonitoringApproach));
  }

  return payload;
}

} // namespace Model
} // namespace ARCRegionswitch
} // namespace Aws
