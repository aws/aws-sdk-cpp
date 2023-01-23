/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/dataexchange/model/UpdateEventActionRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::DataExchange::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateEventActionRequest::UpdateEventActionRequest() : 
    m_actionHasBeenSet(false),
    m_eventActionIdHasBeenSet(false)
{
}

Aws::String UpdateEventActionRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_actionHasBeenSet)
  {
   payload.WithObject("Action", m_action.Jsonize());

  }

  return payload.View().WriteReadable();
}




