/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/b2bi/model/GetTransformerJobRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::B2BI::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

GetTransformerJobRequest::GetTransformerJobRequest() : 
    m_transformerJobIdHasBeenSet(false),
    m_transformerIdHasBeenSet(false)
{
}

Aws::String GetTransformerJobRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_transformerJobIdHasBeenSet)
  {
   payload.WithString("transformerJobId", m_transformerJobId);

  }

  if(m_transformerIdHasBeenSet)
  {
   payload.WithString("transformerId", m_transformerId);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection GetTransformerJobRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "B2BI.GetTransformerJob"));
  return headers;

}




