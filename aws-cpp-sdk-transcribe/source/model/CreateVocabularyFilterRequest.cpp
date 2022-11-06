/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/transcribe/model/CreateVocabularyFilterRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::TranscribeService::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateVocabularyFilterRequest::CreateVocabularyFilterRequest() : 
    m_vocabularyFilterNameHasBeenSet(false),
    m_languageCode(LanguageCode::NOT_SET),
    m_languageCodeHasBeenSet(false),
    m_wordsHasBeenSet(false),
    m_vocabularyFilterFileUriHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
}

Aws::String CreateVocabularyFilterRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_vocabularyFilterNameHasBeenSet)
  {
   payload.WithString("VocabularyFilterName", m_vocabularyFilterName);

  }

  if(m_languageCodeHasBeenSet)
  {
   payload.WithString("LanguageCode", LanguageCodeMapper::GetNameForLanguageCode(m_languageCode));
  }

  if(m_wordsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> wordsJsonList(m_words.size());
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

  if(m_tagsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> tagsJsonList(m_tags.size());
   for(unsigned tagsIndex = 0; tagsIndex < tagsJsonList.GetLength(); ++tagsIndex)
   {
     tagsJsonList[tagsIndex].AsObject(m_tags[tagsIndex].Jsonize());
   }
   payload.WithArray("Tags", std::move(tagsJsonList));

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection CreateVocabularyFilterRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "Transcribe.CreateVocabularyFilter"));
  return headers;

}




