/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-runtime/model/ApplyGuardrailRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::BedrockRuntime::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String ApplyGuardrailRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_sourceHasBeenSet)
  {
   payload.WithString("source", GuardrailContentSourceMapper::GetNameForGuardrailContentSource(m_source));
  }

  if(m_contentHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> contentJsonList(m_content.size());
   for(unsigned contentIndex = 0; contentIndex < contentJsonList.GetLength(); ++contentIndex)
   {
     contentJsonList[contentIndex].AsObject(m_content[contentIndex].Jsonize());
   }
   payload.WithArray("content", std::move(contentJsonList));

  }

  if(m_outputScopeHasBeenSet)
  {
   payload.WithString("outputScope", GuardrailOutputScopeMapper::GetNameForGuardrailOutputScope(m_outputScope));
  }

  return payload.View().WriteReadable();
}




