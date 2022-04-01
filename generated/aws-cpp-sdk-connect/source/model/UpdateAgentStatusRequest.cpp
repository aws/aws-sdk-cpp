/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/UpdateAgentStatusRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Connect::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateAgentStatusRequest::UpdateAgentStatusRequest() : 
    m_instanceIdHasBeenSet(false),
    m_agentStatusIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_state(AgentStatusState::NOT_SET),
    m_stateHasBeenSet(false),
    m_displayOrder(0),
    m_displayOrderHasBeenSet(false),
    m_resetOrderNumber(false),
    m_resetOrderNumberHasBeenSet(false)
{
}

Aws::String UpdateAgentStatusRequest::SerializePayload() const
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

  if(m_stateHasBeenSet)
  {
   payload.WithString("State", AgentStatusStateMapper::GetNameForAgentStatusState(m_state));
  }

  if(m_displayOrderHasBeenSet)
  {
   payload.WithInteger("DisplayOrder", m_displayOrder);

  }

  if(m_resetOrderNumberHasBeenSet)
  {
   payload.WithBool("ResetOrderNumber", m_resetOrderNumber);

  }

  return payload.View().WriteReadable();
}




