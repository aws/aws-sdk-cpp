/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/transcribe/model/UpdateVocabularyRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::TranscribeService::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateVocabularyRequest::UpdateVocabularyRequest() : 
    m_vocabularyNameHasBeenSet(false),
    m_languageCode(LanguageCode::NOT_SET),
    m_languageCodeHasBeenSet(false),
    m_phrasesHasBeenSet(false),
    m_vocabularyFileUriHasBeenSet(false)
{
}

Aws::String UpdateVocabularyRequest::SerializePayload() const
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

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection UpdateVocabularyRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "Transcribe.UpdateVocabulary"));
  return headers;

}




