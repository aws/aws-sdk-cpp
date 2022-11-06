/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/transcribe/model/CreateLanguageModelRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::TranscribeService::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateLanguageModelRequest::CreateLanguageModelRequest() : 
    m_languageCode(CLMLanguageCode::NOT_SET),
    m_languageCodeHasBeenSet(false),
    m_baseModelName(BaseModelName::NOT_SET),
    m_baseModelNameHasBeenSet(false),
    m_modelNameHasBeenSet(false),
    m_inputDataConfigHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
}

Aws::String CreateLanguageModelRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_languageCodeHasBeenSet)
  {
   payload.WithString("LanguageCode", CLMLanguageCodeMapper::GetNameForCLMLanguageCode(m_languageCode));
  }

  if(m_baseModelNameHasBeenSet)
  {
   payload.WithString("BaseModelName", BaseModelNameMapper::GetNameForBaseModelName(m_baseModelName));
  }

  if(m_modelNameHasBeenSet)
  {
   payload.WithString("ModelName", m_modelName);

  }

  if(m_inputDataConfigHasBeenSet)
  {
   payload.WithObject("InputDataConfig", m_inputDataConfig.Jsonize());

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

Aws::Http::HeaderValueCollection CreateLanguageModelRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "Transcribe.CreateLanguageModel"));
  return headers;

}




