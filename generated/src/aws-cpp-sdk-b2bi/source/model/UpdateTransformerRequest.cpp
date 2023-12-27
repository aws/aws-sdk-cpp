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

UpdateTransformerRequest::UpdateTransformerRequest() : 
    m_transformerIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_fileFormat(FileFormat::NOT_SET),
    m_fileFormatHasBeenSet(false),
    m_mappingTemplateHasBeenSet(false),
    m_status(TransformerStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_ediTypeHasBeenSet(false),
    m_sampleDocumentHasBeenSet(false)
{
}

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

  if(m_fileFormatHasBeenSet)
  {
   payload.WithString("fileFormat", FileFormatMapper::GetNameForFileFormat(m_fileFormat));
  }

  if(m_mappingTemplateHasBeenSet)
  {
   payload.WithString("mappingTemplate", m_mappingTemplate);

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("status", TransformerStatusMapper::GetNameForTransformerStatus(m_status));
  }

  if(m_ediTypeHasBeenSet)
  {
   payload.WithObject("ediType", m_ediType.Jsonize());

  }

  if(m_sampleDocumentHasBeenSet)
  {
   payload.WithString("sampleDocument", m_sampleDocument);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection UpdateTransformerRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "B2BI.UpdateTransformer"));
  return headers;

}




