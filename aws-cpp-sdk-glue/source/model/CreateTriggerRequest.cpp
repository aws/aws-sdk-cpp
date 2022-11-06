/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/glue/model/CreateTriggerRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Glue::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateTriggerRequest::CreateTriggerRequest() : 
    m_nameHasBeenSet(false),
    m_workflowNameHasBeenSet(false),
    m_type(TriggerType::NOT_SET),
    m_typeHasBeenSet(false),
    m_scheduleHasBeenSet(false),
    m_predicateHasBeenSet(false),
    m_actionsHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_startOnCreation(false),
    m_startOnCreationHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_eventBatchingConditionHasBeenSet(false)
{
}

Aws::String CreateTriggerRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_workflowNameHasBeenSet)
  {
   payload.WithString("WorkflowName", m_workflowName);

  }

  if(m_typeHasBeenSet)
  {
   payload.WithString("Type", TriggerTypeMapper::GetNameForTriggerType(m_type));
  }

  if(m_scheduleHasBeenSet)
  {
   payload.WithString("Schedule", m_schedule);

  }

  if(m_predicateHasBeenSet)
  {
   payload.WithObject("Predicate", m_predicate.Jsonize());

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

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("Description", m_description);

  }

  if(m_startOnCreationHasBeenSet)
  {
   payload.WithBool("StartOnCreation", m_startOnCreation);

  }

  if(m_tagsHasBeenSet)
  {
   JsonValue tagsJsonMap;
   for(auto& tagsItem : m_tags)
   {
     tagsJsonMap.WithString(tagsItem.first, tagsItem.second);
   }
   payload.WithObject("Tags", std::move(tagsJsonMap));

  }

  if(m_eventBatchingConditionHasBeenSet)
  {
   payload.WithObject("EventBatchingCondition", m_eventBatchingCondition.Jsonize());

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection CreateTriggerRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWSGlue.CreateTrigger"));
  return headers;

}




