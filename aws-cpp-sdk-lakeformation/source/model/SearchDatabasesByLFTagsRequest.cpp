/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lakeformation/model/SearchDatabasesByLFTagsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::LakeFormation::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

SearchDatabasesByLFTagsRequest::SearchDatabasesByLFTagsRequest() : 
    m_nextTokenHasBeenSet(false),
    m_maxResults(0),
    m_maxResultsHasBeenSet(false),
    m_catalogIdHasBeenSet(false),
    m_expressionHasBeenSet(false)
{
}

Aws::String SearchDatabasesByLFTagsRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_nextTokenHasBeenSet)
  {
   payload.WithString("NextToken", m_nextToken);

  }

  if(m_maxResultsHasBeenSet)
  {
   payload.WithInteger("MaxResults", m_maxResults);

  }

  if(m_catalogIdHasBeenSet)
  {
   payload.WithString("CatalogId", m_catalogId);

  }

  if(m_expressionHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> expressionJsonList(m_expression.size());
   for(unsigned expressionIndex = 0; expressionIndex < expressionJsonList.GetLength(); ++expressionIndex)
   {
     expressionJsonList[expressionIndex].AsObject(m_expression[expressionIndex].Jsonize());
   }
   payload.WithArray("Expression", std::move(expressionJsonList));

  }

  return payload.View().WriteReadable();
}




