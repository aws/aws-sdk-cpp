/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agent-runtime/model/GetDocumentContentRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::BedrockAgentRuntime::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String GetDocumentContentRequest::SerializePayload() const {
  JsonValue payload;

  if (m_outputFormatHasBeenSet) {
    payload.WithString("outputFormat", DocumentOutputFormatMapper::GetNameForDocumentOutputFormat(m_outputFormat));
  }

  if (m_userContextHasBeenSet) {
    payload.WithObject("userContext", m_userContext.Jsonize());
  }

  return payload.View().WriteReadable();
}
