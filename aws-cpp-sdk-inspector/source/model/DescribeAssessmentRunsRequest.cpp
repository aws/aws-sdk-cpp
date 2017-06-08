/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
   Array<JsonValue> assessmentRunArnsJsonList(m_assessmentRunArns.size());
   for(unsigned assessmentRunArnsIndex = 0; assessmentRunArnsIndex < assessmentRunArnsJsonList.GetLength(); ++assessmentRunArnsIndex)
   {
     assessmentRunArnsJsonList[assessmentRunArnsIndex].AsString(m_assessmentRunArns[assessmentRunArnsIndex]);
   }
   payload.WithArray("assessmentRunArns", std::move(assessmentRunArnsJsonList));

  }

  return payload.WriteReadable();
}

Aws::Http::HeaderValueCollection DescribeAssessmentRunsRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "InspectorService.DescribeAssessmentRuns"));
  return headers;

}




