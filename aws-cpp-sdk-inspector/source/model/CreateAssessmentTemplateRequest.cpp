/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/inspector/model/CreateAssessmentTemplateRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Inspector::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateAssessmentTemplateRequest::CreateAssessmentTemplateRequest() : 
    m_assessmentTargetArnHasBeenSet(false),
    m_assessmentTemplateNameHasBeenSet(false),
    m_durationInSeconds(0),
    m_durationInSecondsHasBeenSet(false),
    m_rulesPackageArnsHasBeenSet(false),
    m_userAttributesForFindingsHasBeenSet(false)
{
}

Aws::String CreateAssessmentTemplateRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_assessmentTargetArnHasBeenSet)
  {
   payload.WithString("assessmentTargetArn", m_assessmentTargetArn);

  }

  if(m_assessmentTemplateNameHasBeenSet)
  {
   payload.WithString("assessmentTemplateName", m_assessmentTemplateName);

  }

  if(m_durationInSecondsHasBeenSet)
  {
   payload.WithInteger("durationInSeconds", m_durationInSeconds);

  }

  if(m_rulesPackageArnsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> rulesPackageArnsJsonList(m_rulesPackageArns.size());
   for(unsigned rulesPackageArnsIndex = 0; rulesPackageArnsIndex < rulesPackageArnsJsonList.GetLength(); ++rulesPackageArnsIndex)
   {
     rulesPackageArnsJsonList[rulesPackageArnsIndex].AsString(m_rulesPackageArns[rulesPackageArnsIndex]);
   }
   payload.WithArray("rulesPackageArns", std::move(rulesPackageArnsJsonList));

  }

  if(m_userAttributesForFindingsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> userAttributesForFindingsJsonList(m_userAttributesForFindings.size());
   for(unsigned userAttributesForFindingsIndex = 0; userAttributesForFindingsIndex < userAttributesForFindingsJsonList.GetLength(); ++userAttributesForFindingsIndex)
   {
     userAttributesForFindingsJsonList[userAttributesForFindingsIndex].AsObject(m_userAttributesForFindings[userAttributesForFindingsIndex].Jsonize());
   }
   payload.WithArray("userAttributesForFindings", std::move(userAttributesForFindingsJsonList));

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection CreateAssessmentTemplateRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "InspectorService.CreateAssessmentTemplate"));
  return headers;

}




