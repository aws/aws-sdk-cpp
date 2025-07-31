/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/inspector2/model/StartCisSessionRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Inspector2::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String StartCisSessionRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_scanJobIdHasBeenSet)
  {
   payload.WithString("scanJobId", m_scanJobId);

  }

  if(m_messageHasBeenSet)
  {
   payload.WithObject("message", m_message.Jsonize());

  }

  return payload.View().WriteReadable();
}




