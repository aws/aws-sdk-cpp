/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/macie2/model/TestCustomDataIdentifierRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Macie2::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

TestCustomDataIdentifierRequest::TestCustomDataIdentifierRequest() : 
    m_ignoreWordsHasBeenSet(false),
    m_keywordsHasBeenSet(false),
    m_maximumMatchDistance(0),
    m_maximumMatchDistanceHasBeenSet(false),
    m_regexHasBeenSet(false),
    m_sampleTextHasBeenSet(false)
{
}

Aws::String TestCustomDataIdentifierRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_ignoreWordsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> ignoreWordsJsonList(m_ignoreWords.size());
   for(unsigned ignoreWordsIndex = 0; ignoreWordsIndex < ignoreWordsJsonList.GetLength(); ++ignoreWordsIndex)
   {
     ignoreWordsJsonList[ignoreWordsIndex].AsString(m_ignoreWords[ignoreWordsIndex]);
   }
   payload.WithArray("ignoreWords", std::move(ignoreWordsJsonList));

  }

  if(m_keywordsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> keywordsJsonList(m_keywords.size());
   for(unsigned keywordsIndex = 0; keywordsIndex < keywordsJsonList.GetLength(); ++keywordsIndex)
   {
     keywordsJsonList[keywordsIndex].AsString(m_keywords[keywordsIndex]);
   }
   payload.WithArray("keywords", std::move(keywordsJsonList));

  }

  if(m_maximumMatchDistanceHasBeenSet)
  {
   payload.WithInteger("maximumMatchDistance", m_maximumMatchDistance);

  }

  if(m_regexHasBeenSet)
  {
   payload.WithString("regex", m_regex);

  }

  if(m_sampleTextHasBeenSet)
  {
   payload.WithString("sampleText", m_sampleText);

  }

  return payload.View().WriteReadable();
}




