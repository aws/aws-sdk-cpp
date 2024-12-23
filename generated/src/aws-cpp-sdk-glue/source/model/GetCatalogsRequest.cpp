/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/glue/model/GetCatalogsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Glue::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

GetCatalogsRequest::GetCatalogsRequest() : 
    m_parentCatalogIdHasBeenSet(false),
    m_nextTokenHasBeenSet(false),
    m_maxResults(0),
    m_maxResultsHasBeenSet(false),
    m_recursive(false),
    m_recursiveHasBeenSet(false),
    m_includeRoot(false),
    m_includeRootHasBeenSet(false)
{
}

Aws::String GetCatalogsRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_parentCatalogIdHasBeenSet)
  {
   payload.WithString("ParentCatalogId", m_parentCatalogId);

  }

  if(m_nextTokenHasBeenSet)
  {
   payload.WithString("NextToken", m_nextToken);

  }

  if(m_maxResultsHasBeenSet)
  {
   payload.WithInteger("MaxResults", m_maxResults);

  }

  if(m_recursiveHasBeenSet)
  {
   payload.WithBool("Recursive", m_recursive);

  }

  if(m_includeRootHasBeenSet)
  {
   payload.WithBool("IncludeRoot", m_includeRoot);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection GetCatalogsRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWSGlue.GetCatalogs"));
  return headers;

}




