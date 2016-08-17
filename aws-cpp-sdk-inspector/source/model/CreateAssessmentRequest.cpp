/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/inspector/model/CreateAssessmentRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Inspector::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateAssessmentRequest::CreateAssessmentRequest() : 
    m_applicationArnHasBeenSet(false),
    m_assessmentNameHasBeenSet(false),
    m_durationInSeconds(0),
    m_durationInSecondsHasBeenSet(false),
    m_userAttributesForFindingsHasBeenSet(false)
{
}

Aws::String CreateAssessmentRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_applicationArnHasBeenSet)
  {
   payload.WithString("applicationArn", m_applicationArn);

  }

  if(m_assessmentNameHasBeenSet)
  {
   payload.WithString("assessmentName", m_assessmentName);

  }

  if(m_durationInSecondsHasBeenSet)
  {
   payload.WithInteger("durationInSeconds", m_durationInSeconds);

  }

  if(m_userAttributesForFindingsHasBeenSet)
  {
   Array<JsonValue> userAttributesForFindingsJsonList(m_userAttributesForFindings.size());
   for(unsigned userAttributesForFindingsIndex = 0; userAttributesForFindingsIndex < userAttributesForFindingsJsonList.GetLength(); ++userAttributesForFindingsIndex)
   {
     userAttributesForFindingsJsonList[userAttributesForFindingsIndex].AsObject(m_userAttributesForFindings[userAttributesForFindingsIndex].Jsonize());
   }
   payload.WithArray("userAttributesForFindings", std::move(userAttributesForFindingsJsonList));

  }

  return payload.WriteReadable();
}

Aws::Http::HeaderValueCollection CreateAssessmentRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "InspectorService.CreateAssessment"));
  return headers;

}



