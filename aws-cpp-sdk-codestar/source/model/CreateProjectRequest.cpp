/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codestar/model/CreateProjectRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::CodeStar::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateProjectRequest::CreateProjectRequest() : 
    m_nameHasBeenSet(false),
    m_idHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_clientRequestTokenHasBeenSet(false),
    m_sourceCodeHasBeenSet(false),
    m_toolchainHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
}

Aws::String CreateProjectRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_idHasBeenSet)
  {
   payload.WithString("id", m_id);

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("description", m_description);

  }

  if(m_clientRequestTokenHasBeenSet)
  {
   payload.WithString("clientRequestToken", m_clientRequestToken);

  }

  if(m_sourceCodeHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> sourceCodeJsonList(m_sourceCode.size());
   for(unsigned sourceCodeIndex = 0; sourceCodeIndex < sourceCodeJsonList.GetLength(); ++sourceCodeIndex)
   {
     sourceCodeJsonList[sourceCodeIndex].AsObject(m_sourceCode[sourceCodeIndex].Jsonize());
   }
   payload.WithArray("sourceCode", std::move(sourceCodeJsonList));

  }

  if(m_toolchainHasBeenSet)
  {
   payload.WithObject("toolchain", m_toolchain.Jsonize());

  }

  if(m_tagsHasBeenSet)
  {
   JsonValue tagsJsonMap;
   for(auto& tagsItem : m_tags)
   {
     tagsJsonMap.WithString(tagsItem.first, tagsItem.second);
   }
   payload.WithObject("tags", std::move(tagsJsonMap));

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection CreateProjectRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "CodeStar_20170419.CreateProject"));
  return headers;

}




