/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/dataexchange/model/CreateEventActionRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::DataExchange::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateEventActionRequest::CreateEventActionRequest() : 
    m_actionHasBeenSet(false),
    m_eventHasBeenSet(false)
{
}

Aws::String CreateEventActionRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_actionHasBeenSet)
  {
   payload.WithObject("Action", m_action.Jsonize());

  }

  if(m_eventHasBeenSet)
  {
   payload.WithObject("Event", m_event.Jsonize());

  }

  return payload.View().WriteReadable();
}




