/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
   Aws::Utils::Array<JsonValue> assessmentTemplateArnsJsonList(m_assessmentTemplateArns.size());
   for(unsigned assessmentTemplateArnsIndex = 0; assessmentTemplateArnsIndex < assessmentTemplateArnsJsonList.GetLength(); ++assessmentTemplateArnsIndex)
   {
     assessmentTemplateArnsJsonList[assessmentTemplateArnsIndex].AsString(m_assessmentTemplateArns[assessmentTemplateArnsIndex]);
   }
   payload.WithArray("assessmentTemplateArns", std::move(assessmentTemplateArnsJsonList));

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection DescribeAssessmentTemplatesRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "InspectorService.DescribeAssessmentTemplates"));
  return headers;

}




