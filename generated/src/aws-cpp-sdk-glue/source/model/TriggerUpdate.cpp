/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/glue/model/TriggerUpdate.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Glue
{
namespace Model
{

TriggerUpdate::TriggerUpdate() : 
    m_nameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_scheduleHasBeenSet(false),
    m_actionsHasBeenSet(false),
    m_predicateHasBeenSet(false),
    m_eventBatchingConditionHasBeenSet(false)
{
}

TriggerUpdate::TriggerUpdate(JsonView jsonValue) : 
    m_nameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_scheduleHasBeenSet(false),
    m_actionsHasBeenSet(false),
    m_predicateHasBeenSet(false),
    m_eventBatchingConditionHasBeenSet(false)
{
  *this = jsonValue;
}

TriggerUpdate& TriggerUpdate::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Description"))
  {
    m_description = jsonValue.GetString("Description");

    m_descriptionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Schedule"))
  {
    m_schedule = jsonValue.GetString("Schedule");

    m_scheduleHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Actions"))
  {
    Aws::Utils::Array<JsonView> actionsJsonList = jsonValue.GetArray("Actions");
    for(unsigned actionsIndex = 0; actionsIndex < actionsJsonList.GetLength(); ++actionsIndex)
    {
      m_actions.push_back(actionsJsonList[actionsIndex].AsObject());
    }
    m_actionsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Predicate"))
  {
    m_predicate = jsonValue.GetObject("Predicate");

    m_predicateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("EventBatchingCondition"))
  {
    m_eventBatchingCondition = jsonValue.GetObject("EventBatchingCondition");

    m_eventBatchingConditionHasBeenSet = true;
  }

  return *this;
}

JsonValue TriggerUpdate::Jsonize() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("Description", m_description);

  }

  if(m_scheduleHasBeenSet)
  {
   payload.WithString("Schedule", m_schedule);

  }

  if(m_actionsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> actionsJsonList(m_actions.size());
   for(unsigned actionsIndex = 0; actionsIndex < actionsJsonList.GetLength(); ++actionsIndex)
   {
     actionsJsonList[actionsIndex].AsObject(m_actions[actionsIndex].Jsonize());
   }
   payload.WithArray("Actions", std::move(actionsJsonList));

  }

  if(m_predicateHasBeenSet)
  {
   payload.WithObject("Predicate", m_predicate.Jsonize());

  }

  if(m_eventBatchingConditionHasBeenSet)
  {
   payload.WithObject("EventBatchingCondition", m_eventBatchingCondition.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace Glue
} // namespace Aws
