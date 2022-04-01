/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/transcribe/model/DeleteMedicalVocabularyRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::TranscribeService::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DeleteMedicalVocabularyRequest::DeleteMedicalVocabularyRequest() : 
    m_vocabularyNameHasBeenSet(false)
{
}

Aws::String DeleteMedicalVocabularyRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_vocabularyNameHasBeenSet)
  {
   payload.WithString("VocabularyName", m_vocabularyName);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection DeleteMedicalVocabularyRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "Transcribe.DeleteMedicalVocabulary"));
  return headers;

}




