/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/inspector/model/ListAssessmentRunsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Inspector::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

ListAssessmentRunsRequest::ListAssessmentRunsRequest() : 
    m_assessmentTemplateArnsHasBeenSet(false),
    m_filterHasBeenSet(false),
    m_nextTokenHasBeenSet(false),
    m_maxResults(0),
    m_maxResultsHasBeenSet(false)
{
}

Aws::String ListAssessmentRunsRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_assessmentTemplateArnsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> assessmentTemplateArnsJsonList(m_assessmentTemplateArns.size());
   for(unsigned assessmentTemplateArnsIndex = 0; assessmentTemplateArnsIndex < assessmentTemplateArnsJsonList.GetLength(); ++assessmentTemplateArnsIndex)
   {
     assessmentTemplateArnsJsonList[assessmentTemplateArnsIndex].AsString(m_assessmentTemplateArns[assessmentTemplateArnsIndex]);
   }
   payload.WithArray("assessmentTemplateArns", std::move(assessmentTemplateArnsJsonList));

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

Aws::Http::HeaderValueCollection ListAssessmentRunsRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "InspectorService.ListAssessmentRuns"));
  return headers;

}




