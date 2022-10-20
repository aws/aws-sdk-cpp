/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appconfig/model/DeploymentEvent.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace AppConfig
{
namespace Model
{

DeploymentEvent::DeploymentEvent() : 
    m_eventType(DeploymentEventType::NOT_SET),
    m_eventTypeHasBeenSet(false),
    m_triggeredBy(TriggeredBy::NOT_SET),
    m_triggeredByHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_actionInvocationsHasBeenSet(false),
    m_occurredAtHasBeenSet(false)
{
}

DeploymentEvent::DeploymentEvent(JsonView jsonValue) : 
    m_eventType(DeploymentEventType::NOT_SET),
    m_eventTypeHasBeenSet(false),
    m_triggeredBy(TriggeredBy::NOT_SET),
    m_triggeredByHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_actionInvocationsHasBeenSet(false),
    m_occurredAtHasBeenSet(false)
{
  *this = jsonValue;
}

DeploymentEvent& DeploymentEvent::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("EventType"))
  {
    m_eventType = DeploymentEventTypeMapper::GetDeploymentEventTypeForName(jsonValue.GetString("EventType"));

    m_eventTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TriggeredBy"))
  {
    m_triggeredBy = TriggeredByMapper::GetTriggeredByForName(jsonValue.GetString("TriggeredBy"));

    m_triggeredByHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Description"))
  {
    m_description = jsonValue.GetString("Description");

    m_descriptionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ActionInvocations"))
  {
    Aws::Utils::Array<JsonView> actionInvocationsJsonList = jsonValue.GetArray("ActionInvocations");
    for(unsigned actionInvocationsIndex = 0; actionInvocationsIndex < actionInvocationsJsonList.GetLength(); ++actionInvocationsIndex)
    {
      m_actionInvocations.push_back(actionInvocationsJsonList[actionInvocationsIndex].AsObject());
    }
    m_actionInvocationsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("OccurredAt"))
  {
    m_occurredAt = jsonValue.GetString("OccurredAt");

    m_occurredAtHasBeenSet = true;
  }

  return *this;
}

JsonValue DeploymentEvent::Jsonize() const
{
  JsonValue payload;

  if(m_eventTypeHasBeenSet)
  {
   payload.WithString("EventType", DeploymentEventTypeMapper::GetNameForDeploymentEventType(m_eventType));
  }

  if(m_triggeredByHasBeenSet)
  {
   payload.WithString("TriggeredBy", TriggeredByMapper::GetNameForTriggeredBy(m_triggeredBy));
  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("Description", m_description);

  }

  if(m_actionInvocationsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> actionInvocationsJsonList(m_actionInvocations.size());
   for(unsigned actionInvocationsIndex = 0; actionInvocationsIndex < actionInvocationsJsonList.GetLength(); ++actionInvocationsIndex)
   {
     actionInvocationsJsonList[actionInvocationsIndex].AsObject(m_actionInvocations[actionInvocationsIndex].Jsonize());
   }
   payload.WithArray("ActionInvocations", std::move(actionInvocationsJsonList));

  }

  if(m_occurredAtHasBeenSet)
  {
   payload.WithString("OccurredAt", m_occurredAt.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  return payload;
}

} // namespace Model
} // namespace AppConfig
} // namespace Aws
