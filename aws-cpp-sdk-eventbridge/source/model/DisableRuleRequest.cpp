/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/eventbridge/model/DisableRuleRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::EventBridge::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DisableRuleRequest::DisableRuleRequest() : 
    m_nameHasBeenSet(false),
    m_eventBusNameHasBeenSet(false)
{
}

Aws::String DisableRuleRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_eventBusNameHasBeenSet)
  {
   payload.WithString("EventBusName", m_eventBusName);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection DisableRuleRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWSEvents.DisableRule"));
  return headers;

}




