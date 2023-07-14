/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/eventbridge/model/DeletePartnerEventSourceRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::EventBridge::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DeletePartnerEventSourceRequest::DeletePartnerEventSourceRequest() : 
    m_nameHasBeenSet(false),
    m_accountHasBeenSet(false)
{
}

Aws::String DeletePartnerEventSourceRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_accountHasBeenSet)
  {
   payload.WithString("Account", m_account);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection DeletePartnerEventSourceRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWSEvents.DeletePartnerEventSource"));
  return headers;

}




