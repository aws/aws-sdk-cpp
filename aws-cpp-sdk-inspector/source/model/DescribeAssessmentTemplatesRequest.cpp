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

#include <aws/inspector/model/DescribeAssessmentTemplatesRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Inspector::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DescribeAssessmentTemplatesRequest::DescribeAssessmentTemplatesRequest() : 
    m_assessmentTemplateArnsHasBeenSet(false)
{
}

Aws::String DescribeAssessmentTemplatesRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_assessmentTemplateArnsHasBeenSet)
  {
   Array<JsonValue> assessmentTemplateArnsJsonList(m_assessmentTemplateArns.size());
   for(unsigned assessmentTemplateArnsIndex = 0; assessmentTemplateArnsIndex < assessmentTemplateArnsJsonList.GetLength(); ++assessmentTemplateArnsIndex)
   {
     assessmentTemplateArnsJsonList[assessmentTemplateArnsIndex].AsString(m_assessmentTemplateArns[assessmentTemplateArnsIndex]);
   }
   payload.WithArray("assessmentTemplateArns", std::move(assessmentTemplateArnsJsonList));

  }

  return payload.WriteReadable();
}

Aws::Http::HeaderValueCollection DescribeAssessmentTemplatesRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "InspectorService.DescribeAssessmentTemplates"));
  return headers;

}




