/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kendra/model/GetQuerySuggestionsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::kendra::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

GetQuerySuggestionsRequest::GetQuerySuggestionsRequest() : 
    m_indexIdHasBeenSet(false),
    m_queryTextHasBeenSet(false),
    m_maxSuggestionsCount(0),
    m_maxSuggestionsCountHasBeenSet(false),
    m_suggestionTypesHasBeenSet(false),
    m_attributeSuggestionsConfigHasBeenSet(false)
{
}

Aws::String GetQuerySuggestionsRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_indexIdHasBeenSet)
  {
   payload.WithString("IndexId", m_indexId);

  }

  if(m_queryTextHasBeenSet)
  {
   payload.WithString("QueryText", m_queryText);

  }

  if(m_maxSuggestionsCountHasBeenSet)
  {
   payload.WithInteger("MaxSuggestionsCount", m_maxSuggestionsCount);

  }

  if(m_suggestionTypesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> suggestionTypesJsonList(m_suggestionTypes.size());
   for(unsigned suggestionTypesIndex = 0; suggestionTypesIndex < suggestionTypesJsonList.GetLength(); ++suggestionTypesIndex)
   {
     suggestionTypesJsonList[suggestionTypesIndex].AsString(SuggestionTypeMapper::GetNameForSuggestionType(m_suggestionTypes[suggestionTypesIndex]));
   }
   payload.WithArray("SuggestionTypes", std::move(suggestionTypesJsonList));

  }

  if(m_attributeSuggestionsConfigHasBeenSet)
  {
   payload.WithObject("AttributeSuggestionsConfig", m_attributeSuggestionsConfig.Jsonize());

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection GetQuerySuggestionsRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWSKendraFrontendService.GetQuerySuggestions"));
  return headers;

}




