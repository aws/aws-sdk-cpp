/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/VisualCustomAction.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace QuickSight
{
namespace Model
{

VisualCustomAction::VisualCustomAction() : 
    m_customActionIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_status(WidgetStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_trigger(VisualCustomActionTrigger::NOT_SET),
    m_triggerHasBeenSet(false),
    m_actionOperationsHasBeenSet(false)
{
}

VisualCustomAction::VisualCustomAction(JsonView jsonValue) : 
    m_customActionIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_status(WidgetStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_trigger(VisualCustomActionTrigger::NOT_SET),
    m_triggerHasBeenSet(false),
    m_actionOperationsHasBeenSet(false)
{
  *this = jsonValue;
}

VisualCustomAction& VisualCustomAction::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("CustomActionId"))
  {
    m_customActionId = jsonValue.GetString("CustomActionId");

    m_customActionIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Status"))
  {
    m_status = WidgetStatusMapper::GetWidgetStatusForName(jsonValue.GetString("Status"));

    m_statusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Trigger"))
  {
    m_trigger = VisualCustomActionTriggerMapper::GetVisualCustomActionTriggerForName(jsonValue.GetString("Trigger"));

    m_triggerHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ActionOperations"))
  {
    Aws::Utils::Array<JsonView> actionOperationsJsonList = jsonValue.GetArray("ActionOperations");
    for(unsigned actionOperationsIndex = 0; actionOperationsIndex < actionOperationsJsonList.GetLength(); ++actionOperationsIndex)
    {
      m_actionOperations.push_back(actionOperationsJsonList[actionOperationsIndex].AsObject());
    }
    m_actionOperationsHasBeenSet = true;
  }

  return *this;
}

JsonValue VisualCustomAction::Jsonize() const
{
  JsonValue payload;

  if(m_customActionIdHasBeenSet)
  {
   payload.WithString("CustomActionId", m_customActionId);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("Status", WidgetStatusMapper::GetNameForWidgetStatus(m_status));
  }

  if(m_triggerHasBeenSet)
  {
   payload.WithString("Trigger", VisualCustomActionTriggerMapper::GetNameForVisualCustomActionTrigger(m_trigger));
  }

  if(m_actionOperationsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> actionOperationsJsonList(m_actionOperations.size());
   for(unsigned actionOperationsIndex = 0; actionOperationsIndex < actionOperationsJsonList.GetLength(); ++actionOperationsIndex)
   {
     actionOperationsJsonList[actionOperationsIndex].AsObject(m_actionOperations[actionOperationsIndex].Jsonize());
   }
   payload.WithArray("ActionOperations", std::move(actionOperationsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace QuickSight
} // namespace Aws
