/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/comprehend/model/DetectToxicContentRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Comprehend::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DetectToxicContentRequest::DetectToxicContentRequest() : 
    m_textSegmentsHasBeenSet(false),
    m_languageCode(LanguageCode::NOT_SET),
    m_languageCodeHasBeenSet(false)
{
}

Aws::String DetectToxicContentRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_textSegmentsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> textSegmentsJsonList(m_textSegments.size());
   for(unsigned textSegmentsIndex = 0; textSegmentsIndex < textSegmentsJsonList.GetLength(); ++textSegmentsIndex)
   {
     textSegmentsJsonList[textSegmentsIndex].AsObject(m_textSegments[textSegmentsIndex].Jsonize());
   }
   payload.WithArray("TextSegments", std::move(textSegmentsJsonList));

  }

  if(m_languageCodeHasBeenSet)
  {
   payload.WithString("LanguageCode", LanguageCodeMapper::GetNameForLanguageCode(m_languageCode));
  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection DetectToxicContentRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "Comprehend_20171127.DetectToxicContent"));
  return headers;

}




