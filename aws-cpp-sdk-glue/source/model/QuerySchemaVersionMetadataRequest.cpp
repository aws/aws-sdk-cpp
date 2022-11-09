/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/glue/model/QuerySchemaVersionMetadataRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Glue::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

QuerySchemaVersionMetadataRequest::QuerySchemaVersionMetadataRequest() : 
    m_schemaIdHasBeenSet(false),
    m_schemaVersionNumberHasBeenSet(false),
    m_schemaVersionIdHasBeenSet(false),
    m_metadataListHasBeenSet(false),
    m_maxResults(0),
    m_maxResultsHasBeenSet(false),
    m_nextTokenHasBeenSet(false)
{
}

Aws::String QuerySchemaVersionMetadataRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_schemaIdHasBeenSet)
  {
   payload.WithObject("SchemaId", m_schemaId.Jsonize());

  }

  if(m_schemaVersionNumberHasBeenSet)
  {
   payload.WithObject("SchemaVersionNumber", m_schemaVersionNumber.Jsonize());

  }

  if(m_schemaVersionIdHasBeenSet)
  {
   payload.WithString("SchemaVersionId", m_schemaVersionId);

  }

  if(m_metadataListHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> metadataListJsonList(m_metadataList.size());
   for(unsigned metadataListIndex = 0; metadataListIndex < metadataListJsonList.GetLength(); ++metadataListIndex)
   {
     metadataListJsonList[metadataListIndex].AsObject(m_metadataList[metadataListIndex].Jsonize());
   }
   payload.WithArray("MetadataList", std::move(metadataListJsonList));

  }

  if(m_maxResultsHasBeenSet)
  {
   payload.WithInteger("MaxResults", m_maxResults);

  }

  if(m_nextTokenHasBeenSet)
  {
   payload.WithString("NextToken", m_nextToken);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection QuerySchemaVersionMetadataRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWSGlue.QuerySchemaVersionMetadata"));
  return headers;

}




