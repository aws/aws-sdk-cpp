/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/eventbridge/model/UpdateEventBusRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::EventBridge::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateEventBusRequest::UpdateEventBusRequest() : 
    m_nameHasBeenSet(false),
    m_kmsKeyIdentifierHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_deadLetterConfigHasBeenSet(false)
{
}

Aws::String UpdateEventBusRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_kmsKeyIdentifierHasBeenSet)
  {
   payload.WithString("KmsKeyIdentifier", m_kmsKeyIdentifier);

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("Description", m_description);

  }

  if(m_deadLetterConfigHasBeenSet)
  {
   payload.WithObject("DeadLetterConfig", m_deadLetterConfig.Jsonize());

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection UpdateEventBusRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWSEvents.UpdateEventBus"));
  return headers;

}




