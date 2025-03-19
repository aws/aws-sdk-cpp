/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agent-runtime/model/GenerateQueryRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::BedrockAgentRuntime::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String GenerateQueryRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_queryGenerationInputHasBeenSet)
  {
   payload.WithObject("queryGenerationInput", m_queryGenerationInput.Jsonize());

  }

  if(m_transformationConfigurationHasBeenSet)
  {
   payload.WithObject("transformationConfiguration", m_transformationConfiguration.Jsonize());

  }

  return payload.View().WriteReadable();
}




