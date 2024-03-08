/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/b2bi/model/StartTransformerJobRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::B2BI::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

StartTransformerJobRequest::StartTransformerJobRequest() : 
    m_inputFileHasBeenSet(false),
    m_outputLocationHasBeenSet(false),
    m_transformerIdHasBeenSet(false),
    m_clientToken(Aws::Utils::UUID::PseudoRandomUUID()),
    m_clientTokenHasBeenSet(true)
{
}

Aws::String StartTransformerJobRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_inputFileHasBeenSet)
  {
   payload.WithObject("inputFile", m_inputFile.Jsonize());

  }

  if(m_outputLocationHasBeenSet)
  {
   payload.WithObject("outputLocation", m_outputLocation.Jsonize());

  }

  if(m_transformerIdHasBeenSet)
  {
   payload.WithString("transformerId", m_transformerId);

  }

  if(m_clientTokenHasBeenSet)
  {
   payload.WithString("clientToken", m_clientToken);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection StartTransformerJobRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "B2BI.StartTransformerJob"));
  return headers;

}




