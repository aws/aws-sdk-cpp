/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/glue/model/CheckSchemaVersionValidityRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Glue::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CheckSchemaVersionValidityRequest::CheckSchemaVersionValidityRequest() : 
    m_dataFormat(DataFormat::NOT_SET),
    m_dataFormatHasBeenSet(false),
    m_schemaDefinitionHasBeenSet(false)
{
}

Aws::String CheckSchemaVersionValidityRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_dataFormatHasBeenSet)
  {
   payload.WithString("DataFormat", DataFormatMapper::GetNameForDataFormat(m_dataFormat));
  }

  if(m_schemaDefinitionHasBeenSet)
  {
   payload.WithString("SchemaDefinition", m_schemaDefinition);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection CheckSchemaVersionValidityRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWSGlue.CheckSchemaVersionValidity"));
  return headers;

}




