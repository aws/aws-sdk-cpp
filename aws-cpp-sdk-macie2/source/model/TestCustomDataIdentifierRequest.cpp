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
   Array<JsonValue> ignoreWordsJsonList(m_ignoreWords.size());
   for(unsigned ignoreWordsIndex = 0; ignoreWordsIndex < ignoreWordsJsonList.GetLength(); ++ignoreWordsIndex)
   {
     ignoreWordsJsonList[ignoreWordsIndex].AsString(m_ignoreWords[ignoreWordsIndex]);
   }
   payload.WithArray("ignoreWords", std::move(ignoreWordsJsonList));

  }

  if(m_keywordsHasBeenSet)
  {
   Array<JsonValue> keywordsJsonList(m_keywords.size());
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




