/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/clouddirectory/model/ListAppliedSchemaArnsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::CloudDirectory::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

ListAppliedSchemaArnsRequest::ListAppliedSchemaArnsRequest() : 
    m_directoryArnHasBeenSet(false),
    m_schemaArnHasBeenSet(false),
    m_nextTokenHasBeenSet(false),
    m_maxResults(0),
    m_maxResultsHasBeenSet(false)
{
}

Aws::String ListAppliedSchemaArnsRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_directoryArnHasBeenSet)
  {
   payload.WithString("DirectoryArn", m_directoryArn);

  }

  if(m_schemaArnHasBeenSet)
  {
   payload.WithString("SchemaArn", m_schemaArn);

  }

  if(m_nextTokenHasBeenSet)
  {
   payload.WithString("NextToken", m_nextToken);

  }

  if(m_maxResultsHasBeenSet)
  {
   payload.WithInteger("MaxResults", m_maxResults);

  }

  return payload.View().WriteReadable();
}




