/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/transcribe/model/CreateVocabularyRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::TranscribeService::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateVocabularyRequest::CreateVocabularyRequest() : 
    m_vocabularyNameHasBeenSet(false),
    m_languageCode(LanguageCode::NOT_SET),
    m_languageCodeHasBeenSet(false),
    m_phrasesHasBeenSet(false),
    m_vocabularyFileUriHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
}

Aws::String CreateVocabularyRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_vocabularyNameHasBeenSet)
  {
   payload.WithString("VocabularyName", m_vocabularyName);

  }

  if(m_languageCodeHasBeenSet)
  {
   payload.WithString("LanguageCode", LanguageCodeMapper::GetNameForLanguageCode(m_languageCode));
  }

  if(m_phrasesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> phrasesJsonList(m_phrases.size());
   for(unsigned phrasesIndex = 0; phrasesIndex < phrasesJsonList.GetLength(); ++phrasesIndex)
   {
     phrasesJsonList[phrasesIndex].AsString(m_phrases[phrasesIndex]);
   }
   payload.WithArray("Phrases", std::move(phrasesJsonList));

  }

  if(m_vocabularyFileUriHasBeenSet)
  {
   payload.WithString("VocabularyFileUri", m_vocabularyFileUri);

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

Aws::Http::HeaderValueCollection CreateVocabularyRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "Transcribe.CreateVocabulary"));
  return headers;

}




