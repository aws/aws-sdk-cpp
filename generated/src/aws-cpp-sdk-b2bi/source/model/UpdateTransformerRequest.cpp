/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/b2bi/model/UpdateTransformerRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::B2BI::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String UpdateTransformerRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_transformerIdHasBeenSet)
  {
   payload.WithString("transformerId", m_transformerId);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("status", TransformerStatusMapper::GetNameForTransformerStatus(m_status));
  }

  if(m_inputConversionHasBeenSet)
  {
   payload.WithObject("inputConversion", m_inputConversion.Jsonize());

  }

  if(m_mappingHasBeenSet)
  {
   payload.WithObject("mapping", m_mapping.Jsonize());

  }

  if(m_outputConversionHasBeenSet)
  {
   payload.WithObject("outputConversion", m_outputConversion.Jsonize());

  }

  if(m_sampleDocumentsHasBeenSet)
  {
   payload.WithObject("sampleDocuments", m_sampleDocuments.Jsonize());

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection UpdateTransformerRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "B2BI.UpdateTransformer"));
  return headers;

}




