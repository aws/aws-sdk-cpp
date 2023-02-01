/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/CreateRuleRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Connect::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateRuleRequest::CreateRuleRequest() : 
    m_instanceIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_triggerEventSourceHasBeenSet(false),
    m_functionHasBeenSet(false),
    m_actionsHasBeenSet(false),
    m_publishStatus(RulePublishStatus::NOT_SET),
    m_publishStatusHasBeenSet(false),
    m_clientToken(Aws::Utils::UUID::RandomUUID()),
    m_clientTokenHasBeenSet(true)
{
}

Aws::String CreateRuleRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_triggerEventSourceHasBeenSet)
  {
   payload.WithObject("TriggerEventSource", m_triggerEventSource.Jsonize());

  }

  if(m_functionHasBeenSet)
  {
   payload.WithString("Function", m_function);

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

  if(m_publishStatusHasBeenSet)
  {
   payload.WithString("PublishStatus", RulePublishStatusMapper::GetNameForRulePublishStatus(m_publishStatus));
  }

  if(m_clientTokenHasBeenSet)
  {
   payload.WithString("ClientToken", m_clientToken);

  }

  return payload.View().WriteReadable();
}




