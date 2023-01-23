/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/application-insights/model/ApplicationComponent.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ApplicationInsights
{
namespace Model
{

ApplicationComponent::ApplicationComponent() : 
    m_componentNameHasBeenSet(false),
    m_componentRemarksHasBeenSet(false),
    m_resourceTypeHasBeenSet(false),
    m_osType(OsType::NOT_SET),
    m_osTypeHasBeenSet(false),
    m_tier(Tier::NOT_SET),
    m_tierHasBeenSet(false),
    m_monitor(false),
    m_monitorHasBeenSet(false),
    m_detectedWorkloadHasBeenSet(false)
{
}

ApplicationComponent::ApplicationComponent(JsonView jsonValue) : 
    m_componentNameHasBeenSet(false),
    m_componentRemarksHasBeenSet(false),
    m_resourceTypeHasBeenSet(false),
    m_osType(OsType::NOT_SET),
    m_osTypeHasBeenSet(false),
    m_tier(Tier::NOT_SET),
    m_tierHasBeenSet(false),
    m_monitor(false),
    m_monitorHasBeenSet(false),
    m_detectedWorkloadHasBeenSet(false)
{
  *this = jsonValue;
}

ApplicationComponent& ApplicationComponent::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ComponentName"))
  {
    m_componentName = jsonValue.GetString("ComponentName");

    m_componentNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ComponentRemarks"))
  {
    m_componentRemarks = jsonValue.GetString("ComponentRemarks");

    m_componentRemarksHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ResourceType"))
  {
    m_resourceType = jsonValue.GetString("ResourceType");

    m_resourceTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("OsType"))
  {
    m_osType = OsTypeMapper::GetOsTypeForName(jsonValue.GetString("OsType"));

    m_osTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Tier"))
  {
    m_tier = TierMapper::GetTierForName(jsonValue.GetString("Tier"));

    m_tierHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Monitor"))
  {
    m_monitor = jsonValue.GetBool("Monitor");

    m_monitorHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DetectedWorkload"))
  {
    Aws::Map<Aws::String, JsonView> detectedWorkloadJsonMap = jsonValue.GetObject("DetectedWorkload").GetAllObjects();
    for(auto& detectedWorkloadItem : detectedWorkloadJsonMap)
    {
      Aws::Map<Aws::String, JsonView> workloadMetaDataJsonMap = detectedWorkloadItem.second.GetAllObjects();
      Aws::Map<Aws::String, Aws::String> workloadMetaDataMap;
      for(auto& workloadMetaDataItem : workloadMetaDataJsonMap)
      {
        workloadMetaDataMap[workloadMetaDataItem.first] = workloadMetaDataItem.second.AsString();
      }
      m_detectedWorkload[TierMapper::GetTierForName(detectedWorkloadItem.first)] = std::move(workloadMetaDataMap);
    }
    m_detectedWorkloadHasBeenSet = true;
  }

  return *this;
}

JsonValue ApplicationComponent::Jsonize() const
{
  JsonValue payload;

  if(m_componentNameHasBeenSet)
  {
   payload.WithString("ComponentName", m_componentName);

  }

  if(m_componentRemarksHasBeenSet)
  {
   payload.WithString("ComponentRemarks", m_componentRemarks);

  }

  if(m_resourceTypeHasBeenSet)
  {
   payload.WithString("ResourceType", m_resourceType);

  }

  if(m_osTypeHasBeenSet)
  {
   payload.WithString("OsType", OsTypeMapper::GetNameForOsType(m_osType));
  }

  if(m_tierHasBeenSet)
  {
   payload.WithString("Tier", TierMapper::GetNameForTier(m_tier));
  }

  if(m_monitorHasBeenSet)
  {
   payload.WithBool("Monitor", m_monitor);

  }

  if(m_detectedWorkloadHasBeenSet)
  {
   JsonValue detectedWorkloadJsonMap;
   for(auto& detectedWorkloadItem : m_detectedWorkload)
   {
     JsonValue workloadMetaDataJsonMap;
     for(auto& workloadMetaDataItem : detectedWorkloadItem.second)
     {
       workloadMetaDataJsonMap.WithString(workloadMetaDataItem.first, workloadMetaDataItem.second);
     }
     detectedWorkloadJsonMap.WithObject(TierMapper::GetNameForTier(detectedWorkloadItem.first), std::move(workloadMetaDataJsonMap));
   }
   payload.WithObject("DetectedWorkload", std::move(detectedWorkloadJsonMap));

  }

  return payload;
}

} // namespace Model
} // namespace ApplicationInsights
} // namespace Aws
