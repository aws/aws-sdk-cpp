/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/glue/model/CreateCustomEntityTypeRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Glue::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateCustomEntityTypeRequest::CreateCustomEntityTypeRequest() : 
    m_nameHasBeenSet(false),
    m_regexStringHasBeenSet(false),
    m_contextWordsHasBeenSet(false)
{
}

Aws::String CreateCustomEntityTypeRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_regexStringHasBeenSet)
  {
   payload.WithString("RegexString", m_regexString);

  }

  if(m_contextWordsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> contextWordsJsonList(m_contextWords.size());
   for(unsigned contextWordsIndex = 0; contextWordsIndex < contextWordsJsonList.GetLength(); ++contextWordsIndex)
   {
     contextWordsJsonList[contextWordsIndex].AsString(m_contextWords[contextWordsIndex]);
   }
   payload.WithArray("ContextWords", std::move(contextWordsJsonList));

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection CreateCustomEntityTypeRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWSGlue.CreateCustomEntityType"));
  return headers;

}




