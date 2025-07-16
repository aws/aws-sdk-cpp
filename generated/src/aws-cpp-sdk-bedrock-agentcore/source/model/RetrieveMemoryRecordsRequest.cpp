/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore/model/RetrieveMemoryRecordsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::BedrockAgentCore::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String RetrieveMemoryRecordsRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_namespaceHasBeenSet)
  {
   payload.WithString("namespace", m_namespace);

  }

  if(m_searchCriteriaHasBeenSet)
  {
   payload.WithObject("searchCriteria", m_searchCriteria.Jsonize());

  }

  if(m_nextTokenHasBeenSet)
  {
   payload.WithString("nextToken", m_nextToken);

  }

  if(m_maxResultsHasBeenSet)
  {
   payload.WithInteger("maxResults", m_maxResults);

  }

  return payload.View().WriteReadable();
}




