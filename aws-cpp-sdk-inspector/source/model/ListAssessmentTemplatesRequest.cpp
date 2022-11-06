/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/inspector/model/ListAssessmentTemplatesRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Inspector::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

ListAssessmentTemplatesRequest::ListAssessmentTemplatesRequest() : 
    m_assessmentTargetArnsHasBeenSet(false),
    m_filterHasBeenSet(false),
    m_nextTokenHasBeenSet(false),
    m_maxResults(0),
    m_maxResultsHasBeenSet(false)
{
}

Aws::String ListAssessmentTemplatesRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_assessmentTargetArnsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> assessmentTargetArnsJsonList(m_assessmentTargetArns.size());
   for(unsigned assessmentTargetArnsIndex = 0; assessmentTargetArnsIndex < assessmentTargetArnsJsonList.GetLength(); ++assessmentTargetArnsIndex)
   {
     assessmentTargetArnsJsonList[assessmentTargetArnsIndex].AsString(m_assessmentTargetArns[assessmentTargetArnsIndex]);
   }
   payload.WithArray("assessmentTargetArns", std::move(assessmentTargetArnsJsonList));

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

Aws::Http::HeaderValueCollection ListAssessmentTemplatesRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "InspectorService.ListAssessmentTemplates"));
  return headers;

}




