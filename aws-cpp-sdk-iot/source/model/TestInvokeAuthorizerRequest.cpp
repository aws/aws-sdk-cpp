/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#include <aws/iot/model/TestInvokeAuthorizerRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::IoT::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

TestInvokeAuthorizerRequest::TestInvokeAuthorizerRequest() : 
    m_authorizerNameHasBeenSet(false),
    m_tokenHasBeenSet(false),
    m_tokenSignatureHasBeenSet(false),
    m_httpContextHasBeenSet(false),
    m_mqttContextHasBeenSet(false),
    m_tlsContextHasBeenSet(false)
{
}

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




