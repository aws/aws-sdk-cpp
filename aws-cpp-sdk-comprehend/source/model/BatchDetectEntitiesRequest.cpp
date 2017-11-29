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

#include <aws/comprehend/model/BatchDetectEntitiesRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Comprehend::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

BatchDetectEntitiesRequest::BatchDetectEntitiesRequest() : 
    m_textListHasBeenSet(false),
    m_languageCodeHasBeenSet(false)
{
}

Aws::String BatchDetectEntitiesRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_textListHasBeenSet)
  {
   Array<JsonValue> textListJsonList(m_textList.size());
   for(unsigned textListIndex = 0; textListIndex < textListJsonList.GetLength(); ++textListIndex)
   {
     textListJsonList[textListIndex].AsString(m_textList[textListIndex]);
   }
   payload.WithArray("TextList", std::move(textListJsonList));

  }

  if(m_languageCodeHasBeenSet)
  {
   payload.WithString("LanguageCode", m_languageCode);

  }

  return payload.WriteReadable();
}

Aws::Http::HeaderValueCollection BatchDetectEntitiesRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "Comprehend_20171127.BatchDetectEntities"));
  return headers;

}




