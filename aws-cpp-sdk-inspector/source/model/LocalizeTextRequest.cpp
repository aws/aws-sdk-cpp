/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/inspector/model/LocalizeTextRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Inspector::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

LocalizeTextRequest::LocalizeTextRequest() : 
    m_localizedTextsHasBeenSet(false),
    m_localeHasBeenSet(false)
{
}

Aws::String LocalizeTextRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_localizedTextsHasBeenSet)
  {
   Array<JsonValue> localizedTextsJsonList(m_localizedTexts.size());
   for(unsigned localizedTextsIndex = 0; localizedTextsIndex < localizedTextsJsonList.GetLength(); ++localizedTextsIndex)
   {
     localizedTextsJsonList[localizedTextsIndex].AsObject(m_localizedTexts[localizedTextsIndex].Jsonize());
   }
   payload.WithArray("localizedTexts", std::move(localizedTextsJsonList));

  }

  if(m_localeHasBeenSet)
  {
   payload.WithString("locale", m_locale);

  }

  return payload.WriteReadable();
}

Aws::Http::HeaderValueCollection LocalizeTextRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "InspectorService.LocalizeText"));
  return headers;

}



