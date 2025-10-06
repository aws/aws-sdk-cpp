/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore/model/BatchUpdateMemoryRecordsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::BedrockAgentCore::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String BatchUpdateMemoryRecordsRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_recordsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> recordsJsonList(m_records.size());
   for(unsigned recordsIndex = 0; recordsIndex < recordsJsonList.GetLength(); ++recordsIndex)
   {
     recordsJsonList[recordsIndex].AsObject(m_records[recordsIndex].Jsonize());
   }
   payload.WithArray("records", std::move(recordsJsonList));

  }

  return payload.View().WriteReadable();
}




