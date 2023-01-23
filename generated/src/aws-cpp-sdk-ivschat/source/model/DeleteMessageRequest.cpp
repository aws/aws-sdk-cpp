/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ivschat/model/DeleteMessageRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::ivschat::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DeleteMessageRequest::DeleteMessageRequest() : 
    m_idHasBeenSet(false),
    m_reasonHasBeenSet(false),
    m_roomIdentifierHasBeenSet(false)
{
}

Aws::String DeleteMessageRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_idHasBeenSet)
  {
   payload.WithString("id", m_id);

  }

  if(m_reasonHasBeenSet)
  {
   payload.WithString("reason", m_reason);

  }

  if(m_roomIdentifierHasBeenSet)
  {
   payload.WithString("roomIdentifier", m_roomIdentifier);

  }

  return payload.View().WriteReadable();
}




