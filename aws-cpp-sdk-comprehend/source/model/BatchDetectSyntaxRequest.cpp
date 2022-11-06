/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/comprehend/model/BatchDetectSyntaxRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Comprehend::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

BatchDetectSyntaxRequest::BatchDetectSyntaxRequest() : 
    m_textListHasBeenSet(false),
    m_languageCode(SyntaxLanguageCode::NOT_SET),
    m_languageCodeHasBeenSet(false)
{
}

Aws::String BatchDetectSyntaxRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_textListHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> textListJsonList(m_textList.size());
   for(unsigned textListIndex = 0; textListIndex < textListJsonList.GetLength(); ++textListIndex)
   {
     textListJsonList[textListIndex].AsString(m_textList[textListIndex]);
   }
   payload.WithArray("TextList", std::move(textListJsonList));

  }

  if(m_languageCodeHasBeenSet)
  {
   payload.WithString("LanguageCode", SyntaxLanguageCodeMapper::GetNameForSyntaxLanguageCode(m_languageCode));
  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection BatchDetectSyntaxRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "Comprehend_20171127.BatchDetectSyntax"));
  return headers;

}




