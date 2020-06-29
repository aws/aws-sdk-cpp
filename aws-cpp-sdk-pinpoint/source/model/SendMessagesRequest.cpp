/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/pinpoint/model/SendMessagesRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Pinpoint::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

SendMessagesRequest::SendMessagesRequest() : 
    m_applicationIdHasBeenSet(false),
    m_messageRequestHasBeenSet(false)
{
}

Aws::String SendMessagesRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_messageRequestHasBeenSet)
  {
   payload = m_messageRequest.Jsonize();
  }

  return payload.View().WriteReadable();
}




