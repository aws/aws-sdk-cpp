/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/pinpoint-email/model/PutAccountSendingAttributesRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::PinpointEmail::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

PutAccountSendingAttributesRequest::PutAccountSendingAttributesRequest() : 
    m_sendingEnabled(false),
    m_sendingEnabledHasBeenSet(false)
{
}

Aws::String PutAccountSendingAttributesRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_sendingEnabledHasBeenSet)
  {
   payload.WithBool("SendingEnabled", m_sendingEnabled);

  }

  return payload.View().WriteReadable();
}




