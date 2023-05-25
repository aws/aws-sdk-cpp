/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/inspector/model/DescribeAssessmentTargetsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Inspector::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DescribeAssessmentTargetsRequest::DescribeAssessmentTargetsRequest() : 
    m_assessmentTargetArnsHasBeenSet(false)
{
}

Aws::String DescribeAssessmentTargetsRequest::SerializePayload() const
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

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection DescribeAssessmentTargetsRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "InspectorService.DescribeAssessmentTargets"));
  return headers;

}




