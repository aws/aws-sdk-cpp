/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agent/model/GetKnowledgeBaseDocumentsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::BedrockAgent::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String GetKnowledgeBaseDocumentsRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_documentIdentifiersHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> documentIdentifiersJsonList(m_documentIdentifiers.size());
   for(unsigned documentIdentifiersIndex = 0; documentIdentifiersIndex < documentIdentifiersJsonList.GetLength(); ++documentIdentifiersIndex)
   {
     documentIdentifiersJsonList[documentIdentifiersIndex].AsObject(m_documentIdentifiers[documentIdentifiersIndex].Jsonize());
   }
   payload.WithArray("documentIdentifiers", std::move(documentIdentifiersJsonList));

  }

  return payload.View().WriteReadable();
}




