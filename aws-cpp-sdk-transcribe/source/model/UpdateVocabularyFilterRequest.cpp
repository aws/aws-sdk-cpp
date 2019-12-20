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

#include <aws/transcribe/model/UpdateVocabularyFilterRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::TranscribeService::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateVocabularyFilterRequest::UpdateVocabularyFilterRequest() : 
    m_vocabularyFilterNameHasBeenSet(false),
    m_wordsHasBeenSet(false),
    m_vocabularyFilterFileUriHasBeenSet(false)
{
}

Aws::String UpdateVocabularyFilterRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_vocabularyFilterNameHasBeenSet)
  {
   payload.WithString("VocabularyFilterName", m_vocabularyFilterName);

  }

  if(m_wordsHasBeenSet)
  {
   Array<JsonValue> wordsJsonList(m_words.size());
   for(unsigned wordsIndex = 0; wordsIndex < wordsJsonList.GetLength(); ++wordsIndex)
   {
     wordsJsonList[wordsIndex].AsString(m_words[wordsIndex]);
   }
   payload.WithArray("Words", std::move(wordsJsonList));

  }

  if(m_vocabularyFilterFileUriHasBeenSet)
  {
   payload.WithString("VocabularyFilterFileUri", m_vocabularyFilterFileUri);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection UpdateVocabularyFilterRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "Transcribe.UpdateVocabularyFilter"));
  return headers;

}




