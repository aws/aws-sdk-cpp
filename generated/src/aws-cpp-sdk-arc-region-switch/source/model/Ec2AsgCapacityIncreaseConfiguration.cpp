/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/arc-region-switch/model/Ec2AsgCapacityIncreaseConfiguration.h>
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

Ec2AsgCapacityIncreaseConfiguration::Ec2AsgCapacityIncreaseConfiguration(JsonView jsonValue)
{
  *this = jsonValue;
}

Ec2AsgCapacityIncreaseConfiguration& Ec2AsgCapacityIncreaseConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("timeoutMinutes"))
  {
    m_timeoutMinutes = jsonValue.GetInteger("timeoutMinutes");
    m_timeoutMinutesHasBeenSet = true;
  }
  if(jsonValue.ValueExists("asgs"))
  {
    Aws::Utils::Array<JsonView> asgsJsonList = jsonValue.GetArray("asgs");
    for(unsigned asgsIndex = 0; asgsIndex < asgsJsonList.GetLength(); ++asgsIndex)
    {
      m_asgs.push_back(asgsJsonList[asgsIndex].AsObject());
    }
    m_asgsHasBeenSet = true;
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
    m_capacityMonitoringApproach = Ec2AsgCapacityMonitoringApproachMapper::GetEc2AsgCapacityMonitoringApproachForName(jsonValue.GetString("capacityMonitoringApproach"));
    m_capacityMonitoringApproachHasBeenSet = true;
  }
  return *this;
}

JsonValue Ec2AsgCapacityIncreaseConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_timeoutMinutesHasBeenSet)
  {
   payload.WithInteger("timeoutMinutes", m_timeoutMinutes);

  }

  if(m_asgsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> asgsJsonList(m_asgs.size());
   for(unsigned asgsIndex = 0; asgsIndex < asgsJsonList.GetLength(); ++asgsIndex)
   {
     asgsJsonList[asgsIndex].AsObject(m_asgs[asgsIndex].Jsonize());
   }
   payload.WithArray("asgs", std::move(asgsJsonList));

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
   payload.WithString("capacityMonitoringApproach", Ec2AsgCapacityMonitoringApproachMapper::GetNameForEc2AsgCapacityMonitoringApproach(m_capacityMonitoringApproach));
  }

  return payload;
}

} // namespace Model
} // namespace ARCRegionswitch
} // namespace Aws
