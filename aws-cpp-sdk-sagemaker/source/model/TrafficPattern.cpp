/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/TrafficPattern.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SageMaker
{
namespace Model
{

TrafficPattern::TrafficPattern() : 
    m_trafficType(TrafficType::NOT_SET),
    m_trafficTypeHasBeenSet(false),
    m_phasesHasBeenSet(false)
{
}

TrafficPattern::TrafficPattern(JsonView jsonValue) : 
    m_trafficType(TrafficType::NOT_SET),
    m_trafficTypeHasBeenSet(false),
    m_phasesHasBeenSet(false)
{
  *this = jsonValue;
}

TrafficPattern& TrafficPattern::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("TrafficType"))
  {
    m_trafficType = TrafficTypeMapper::GetTrafficTypeForName(jsonValue.GetString("TrafficType"));

    m_trafficTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Phases"))
  {
    Aws::Utils::Array<JsonView> phasesJsonList = jsonValue.GetArray("Phases");
    for(unsigned phasesIndex = 0; phasesIndex < phasesJsonList.GetLength(); ++phasesIndex)
    {
      m_phases.push_back(phasesJsonList[phasesIndex].AsObject());
    }
    m_phasesHasBeenSet = true;
  }

  return *this;
}

JsonValue TrafficPattern::Jsonize() const
{
  JsonValue payload;

  if(m_trafficTypeHasBeenSet)
  {
   payload.WithString("TrafficType", TrafficTypeMapper::GetNameForTrafficType(m_trafficType));
  }

  if(m_phasesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> phasesJsonList(m_phases.size());
   for(unsigned phasesIndex = 0; phasesIndex < phasesJsonList.GetLength(); ++phasesIndex)
   {
     phasesJsonList[phasesIndex].AsObject(m_phases[phasesIndex].Jsonize());
   }
   payload.WithArray("Phases", std::move(phasesJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace SageMaker
} // namespace Aws
