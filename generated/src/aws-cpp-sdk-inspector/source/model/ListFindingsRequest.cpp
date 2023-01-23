/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/inspector/model/ListFindingsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Inspector::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

ListFindingsRequest::ListFindingsRequest() : 
    m_assessmentRunArnsHasBeenSet(false),
    m_filterHasBeenSet(false),
    m_nextTokenHasBeenSet(false),
    m_maxResults(0),
    m_maxResultsHasBeenSet(false)
{
}

Aws::String ListFindingsRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_assessmentRunArnsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> assessmentRunArnsJsonList(m_assessmentRunArns.size());
   for(unsigned assessmentRunArnsIndex = 0; assessmentRunArnsIndex < assessmentRunArnsJsonList.GetLength(); ++assessmentRunArnsIndex)
   {
     assessmentRunArnsJsonList[assessmentRunArnsIndex].AsString(m_assessmentRunArns[assessmentRunArnsIndex]);
   }
   payload.WithArray("assessmentRunArns", std::move(assessmentRunArnsJsonList));

  }

  if(m_filterHasBeenSet)
  {
   payload.WithObject("filter", m_filter.Jsonize());

  }

  if(m_nextTokenHasBeenSet)
  {
   payload.WithString("nextToken", m_nextToken);

  }

  if(m_maxResultsHasBeenSet)
  {
   payload.WithInteger("maxResults", m_maxResults);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection ListFindingsRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "InspectorService.ListFindings"));
  return headers;

}




