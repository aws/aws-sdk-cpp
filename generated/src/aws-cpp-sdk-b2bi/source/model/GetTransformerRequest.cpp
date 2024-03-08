/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/b2bi/model/GetTransformerRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::B2BI::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

GetTransformerRequest::GetTransformerRequest() : 
    m_transformerIdHasBeenSet(false)
{
}

Aws::String GetTransformerRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_transformerIdHasBeenSet)
  {
   payload.WithString("transformerId", m_transformerId);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection GetTransformerRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "B2BI.GetTransformer"));
  return headers;

}




