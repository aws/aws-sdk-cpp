/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/eventbridge/model/PutPermissionRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::EventBridge::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

PutPermissionRequest::PutPermissionRequest() : 
    m_eventBusNameHasBeenSet(false),
    m_actionHasBeenSet(false),
    m_principalHasBeenSet(false),
    m_statementIdHasBeenSet(false),
    m_conditionHasBeenSet(false),
    m_policyHasBeenSet(false)
{
}

Aws::String PutPermissionRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_eventBusNameHasBeenSet)
  {
   payload.WithString("EventBusName", m_eventBusName);

  }

  if(m_actionHasBeenSet)
  {
   payload.WithString("Action", m_action);

  }

  if(m_principalHasBeenSet)
  {
   payload.WithString("Principal", m_principal);

  }

  if(m_statementIdHasBeenSet)
  {
   payload.WithString("StatementId", m_statementId);

  }

  if(m_conditionHasBeenSet)
  {
   payload.WithObject("Condition", m_condition.Jsonize());

  }

  if(m_policyHasBeenSet)
  {
   payload.WithString("Policy", m_policy);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection PutPermissionRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWSEvents.PutPermission"));
  return headers;

}




