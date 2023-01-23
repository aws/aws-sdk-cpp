/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/inspector/model/DescribeAssessmentRunsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Inspector::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DescribeAssessmentRunsRequest::DescribeAssessmentRunsRequest() : 
    m_assessmentRunArnsHasBeenSet(false)
{
}

Aws::String DescribeAssessmentRunsRequest::SerializePayload() const
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

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection DescribeAssessmentRunsRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "InspectorService.DescribeAssessmentRuns"));
  return headers;

}




