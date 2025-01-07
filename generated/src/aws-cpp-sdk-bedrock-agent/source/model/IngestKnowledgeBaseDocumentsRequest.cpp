﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agent/model/IngestKnowledgeBaseDocumentsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::BedrockAgent::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

IngestKnowledgeBaseDocumentsRequest::IngestKnowledgeBaseDocumentsRequest() : 
    m_clientToken(Aws::Utils::UUID::PseudoRandomUUID()),
    m_clientTokenHasBeenSet(true),
    m_dataSourceIdHasBeenSet(false),
    m_documentsHasBeenSet(false),
    m_knowledgeBaseIdHasBeenSet(false)
{
}

Aws::String IngestKnowledgeBaseDocumentsRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_clientTokenHasBeenSet)
  {
   payload.WithString("clientToken", m_clientToken);

  }

  if(m_documentsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> documentsJsonList(m_documents.size());
   for(unsigned documentsIndex = 0; documentsIndex < documentsJsonList.GetLength(); ++documentsIndex)
   {
     documentsJsonList[documentsIndex].AsObject(m_documents[documentsIndex].Jsonize());
   }
   payload.WithArray("documents", std::move(documentsJsonList));

  }

  return payload.View().WriteReadable();
}




