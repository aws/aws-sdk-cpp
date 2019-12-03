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

#include <aws/frauddetector/model/UpdateRuleVersionRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::FraudDetector::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateRuleVersionRequest::UpdateRuleVersionRequest() : 
    m_ruleHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_expressionHasBeenSet(false),
    m_language(Language::NOT_SET),
    m_languageHasBeenSet(false),
    m_outcomesHasBeenSet(false)
{
}

Aws::String UpdateRuleVersionRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_ruleHasBeenSet)
  {
   payload.WithObject("rule", m_rule.Jsonize());

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
   Array<JsonValue> outcomesJsonList(m_outcomes.size());
   for(unsigned outcomesIndex = 0; outcomesIndex < outcomesJsonList.GetLength(); ++outcomesIndex)
   {
     outcomesJsonList[outcomesIndex].AsString(m_outcomes[outcomesIndex]);
   }
   payload.WithArray("outcomes", std::move(outcomesJsonList));

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection UpdateRuleVersionRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWSHawksNestServiceFacade.UpdateRuleVersion"));
  return headers;

}




