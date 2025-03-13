/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/customer-profiles/model/EventTriggerCondition.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace CustomerProfiles
{
namespace Model
{

EventTriggerCondition::EventTriggerCondition(JsonView jsonValue)
{
  *this = jsonValue;
}

EventTriggerCondition& EventTriggerCondition::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("EventTriggerDimensions"))
  {
    Aws::Utils::Array<JsonView> eventTriggerDimensionsJsonList = jsonValue.GetArray("EventTriggerDimensions");
    for(unsigned eventTriggerDimensionsIndex = 0; eventTriggerDimensionsIndex < eventTriggerDimensionsJsonList.GetLength(); ++eventTriggerDimensionsIndex)
    {
      m_eventTriggerDimensions.push_back(eventTriggerDimensionsJsonList[eventTriggerDimensionsIndex].AsObject());
    }
    m_eventTriggerDimensionsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("LogicalOperator"))
  {
    m_logicalOperator = EventTriggerLogicalOperatorMapper::GetEventTriggerLogicalOperatorForName(jsonValue.GetString("LogicalOperator"));
    m_logicalOperatorHasBeenSet = true;
  }
  return *this;
}

JsonValue EventTriggerCondition::Jsonize() const
{
  JsonValue payload;

  if(m_eventTriggerDimensionsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> eventTriggerDimensionsJsonList(m_eventTriggerDimensions.size());
   for(unsigned eventTriggerDimensionsIndex = 0; eventTriggerDimensionsIndex < eventTriggerDimensionsJsonList.GetLength(); ++eventTriggerDimensionsIndex)
   {
     eventTriggerDimensionsJsonList[eventTriggerDimensionsIndex].AsObject(m_eventTriggerDimensions[eventTriggerDimensionsIndex].Jsonize());
   }
   payload.WithArray("EventTriggerDimensions", std::move(eventTriggerDimensionsJsonList));

  }

  if(m_logicalOperatorHasBeenSet)
  {
   payload.WithString("LogicalOperator", EventTriggerLogicalOperatorMapper::GetNameForEventTriggerLogicalOperator(m_logicalOperator));
  }

  return payload;
}

} // namespace Model
} // namespace CustomerProfiles
} // namespace Aws
