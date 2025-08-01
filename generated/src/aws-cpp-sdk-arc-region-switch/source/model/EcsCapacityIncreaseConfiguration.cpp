/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/arc-region-switch/model/EcsCapacityIncreaseConfiguration.h>
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

EcsCapacityIncreaseConfiguration::EcsCapacityIncreaseConfiguration(JsonView jsonValue)
{
  *this = jsonValue;
}

EcsCapacityIncreaseConfiguration& EcsCapacityIncreaseConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("timeoutMinutes"))
  {
    m_timeoutMinutes = jsonValue.GetInteger("timeoutMinutes");
    m_timeoutMinutesHasBeenSet = true;
  }
  if(jsonValue.ValueExists("services"))
  {
    Aws::Utils::Array<JsonView> servicesJsonList = jsonValue.GetArray("services");
    for(unsigned servicesIndex = 0; servicesIndex < servicesJsonList.GetLength(); ++servicesIndex)
    {
      m_services.push_back(servicesJsonList[servicesIndex].AsObject());
    }
    m_servicesHasBeenSet = true;
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
    m_capacityMonitoringApproach = EcsCapacityMonitoringApproachMapper::GetEcsCapacityMonitoringApproachForName(jsonValue.GetString("capacityMonitoringApproach"));
    m_capacityMonitoringApproachHasBeenSet = true;
  }
  return *this;
}

JsonValue EcsCapacityIncreaseConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_timeoutMinutesHasBeenSet)
  {
   payload.WithInteger("timeoutMinutes", m_timeoutMinutes);

  }

  if(m_servicesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> servicesJsonList(m_services.size());
   for(unsigned servicesIndex = 0; servicesIndex < servicesJsonList.GetLength(); ++servicesIndex)
   {
     servicesJsonList[servicesIndex].AsObject(m_services[servicesIndex].Jsonize());
   }
   payload.WithArray("services", std::move(servicesJsonList));

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
   payload.WithString("capacityMonitoringApproach", EcsCapacityMonitoringApproachMapper::GetNameForEcsCapacityMonitoringApproach(m_capacityMonitoringApproach));
  }

  return payload;
}

} // namespace Model
} // namespace ARCRegionswitch
} // namespace Aws
