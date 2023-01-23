/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/frauddetector/model/CreateRuleRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::FraudDetector::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateRuleRequest::CreateRuleRequest() : 
    m_ruleIdHasBeenSet(false),
    m_detectorIdHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_expressionHasBeenSet(false),
    m_language(Language::NOT_SET),
    m_languageHasBeenSet(false),
    m_outcomesHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
}

Aws::String CreateRuleRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_ruleIdHasBeenSet)
  {
   payload.WithString("ruleId", m_ruleId);

  }

  if(m_detectorIdHasBeenSet)
  {
   payload.WithString("detectorId", m_detectorId);

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("description", m_description);

  }

  if(m_expressionHasBeenSet)
  {
   payload.WithString("expression", m_expression);

  }

  if(m_languageHasBeenSet)
  {
   payload.WithString("language", LanguageMapper::GetNameForLanguage(m_language));
  }

  if(m_outcomesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> outcomesJsonList(m_outcomes.size());
   for(unsigned outcomesIndex = 0; outcomesIndex < outcomesJsonList.GetLength(); ++outcomesIndex)
   {
     outcomesJsonList[outcomesIndex].AsString(m_outcomes[outcomesIndex]);
   }
   payload.WithArray("outcomes", std::move(outcomesJsonList));

  }

  if(m_tagsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> tagsJsonList(m_tags.size());
   for(unsigned tagsIndex = 0; tagsIndex < tagsJsonList.GetLength(); ++tagsIndex)
   {
     tagsJsonList[tagsIndex].AsObject(m_tags[tagsIndex].Jsonize());
   }
   payload.WithArray("tags", std::move(tagsJsonList));

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection CreateRuleRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWSHawksNestServiceFacade.CreateRule"));
  return headers;

}




