/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/comprehend/model/DetectDominantLanguageRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Comprehend::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DetectDominantLanguageRequest::DetectDominantLanguageRequest() : 
    m_textHasBeenSet(false)
{
}

Aws::String DetectDominantLanguageRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_textHasBeenSet)
  {
   payload.WithString("Text", m_text);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection DetectDominantLanguageRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "Comprehend_20171127.DetectDominantLanguage"));
  return headers;

}




