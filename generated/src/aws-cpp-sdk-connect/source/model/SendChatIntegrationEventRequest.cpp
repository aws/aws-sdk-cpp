/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/SendChatIntegrationEventRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Connect::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

SendChatIntegrationEventRequest::SendChatIntegrationEventRequest() : 
    m_sourceIdHasBeenSet(false),
    m_destinationIdHasBeenSet(false),
    m_subtypeHasBeenSet(false),
    m_eventHasBeenSet(false),
    m_newSessionDetailsHasBeenSet(false)
{
}

Aws::String SendChatIntegrationEventRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_sourceIdHasBeenSet)
  {
   payload.WithString("SourceId", m_sourceId);

  }

  if(m_destinationIdHasBeenSet)
  {
   payload.WithString("DestinationId", m_destinationId);

  }

  if(m_subtypeHasBeenSet)
  {
   payload.WithString("Subtype", m_subtype);

  }

  if(m_eventHasBeenSet)
  {
   payload.WithObject("Event", m_event.Jsonize());

  }

  if(m_newSessionDetailsHasBeenSet)
  {
   payload.WithObject("NewSessionDetails", m_newSessionDetails.Jsonize());

  }

  return payload.View().WriteReadable();
}




