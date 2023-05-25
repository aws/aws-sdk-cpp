/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/comprehend/model/DetectSyntaxRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Comprehend::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DetectSyntaxRequest::DetectSyntaxRequest() : 
    m_textHasBeenSet(false),
    m_languageCode(SyntaxLanguageCode::NOT_SET),
    m_languageCodeHasBeenSet(false)
{
}

Aws::String DetectSyntaxRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_textHasBeenSet)
  {
   payload.WithString("Text", m_text);

  }

  if(m_languageCodeHasBeenSet)
  {
   payload.WithString("LanguageCode", SyntaxLanguageCodeMapper::GetNameForSyntaxLanguageCode(m_languageCode));
  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection DetectSyntaxRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "Comprehend_20171127.DetectSyntax"));
  return headers;

}




