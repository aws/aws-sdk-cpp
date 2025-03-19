/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iot/model/TestInvokeAuthorizerRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::IoT::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String TestInvokeAuthorizerRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_tokenHasBeenSet)
  {
   payload.WithString("token", m_token);

  }

  if(m_tokenSignatureHasBeenSet)
  {
   payload.WithString("tokenSignature", m_tokenSignature);

  }

  if(m_httpContextHasBeenSet)
  {
   payload.WithObject("httpContext", m_httpContext.Jsonize());

  }

  if(m_mqttContextHasBeenSet)
  {
   payload.WithObject("mqttContext", m_mqttContext.Jsonize());

  }

  if(m_tlsContextHasBeenSet)
  {
   payload.WithObject("tlsContext", m_tlsContext.Jsonize());

  }

  return payload.View().WriteReadable();
}




