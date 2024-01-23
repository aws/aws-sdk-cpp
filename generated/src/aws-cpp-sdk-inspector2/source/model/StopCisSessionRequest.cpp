/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/inspector2/model/StopCisSessionRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Inspector2::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

StopCisSessionRequest::StopCisSessionRequest() : 
    m_messageHasBeenSet(false),
    m_scanJobIdHasBeenSet(false),
    m_sessionTokenHasBeenSet(false)
{
}

Aws::String StopCisSessionRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_messageHasBeenSet)
  {
   payload.WithObject("message", m_message.Jsonize());

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




