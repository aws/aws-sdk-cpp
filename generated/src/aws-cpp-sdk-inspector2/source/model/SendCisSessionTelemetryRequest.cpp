/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/inspector2/model/SendCisSessionTelemetryRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Inspector2::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

SendCisSessionTelemetryRequest::SendCisSessionTelemetryRequest() : 
    m_messagesHasBeenSet(false),
    m_scanJobIdHasBeenSet(false),
    m_sessionTokenHasBeenSet(false)
{
}

Aws::String SendCisSessionTelemetryRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_messagesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> messagesJsonList(m_messages.size());
   for(unsigned messagesIndex = 0; messagesIndex < messagesJsonList.GetLength(); ++messagesIndex)
   {
     messagesJsonList[messagesIndex].AsObject(m_messages[messagesIndex].Jsonize());
   }
   payload.WithArray("messages", std::move(messagesJsonList));

  }

  if(m_scanJobIdHasBeenSet)
  {
   payload.WithString("scanJobId", m_scanJobId);

  }

  if(m_sessionTokenHasBeenSet)
  {
   payload.WithString("sessionToken", m_sessionToken);

  }

  return payload.View().WriteReadable();
}




