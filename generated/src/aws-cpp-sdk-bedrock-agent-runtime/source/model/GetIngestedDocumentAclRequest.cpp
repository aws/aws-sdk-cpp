/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agent-runtime/model/GetIngestedDocumentAclRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::BedrockAgentRuntime::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String GetIngestedDocumentAclRequest::SerializePayload() const {
  JsonValue payload;

  if (m_documentIdHasBeenSet) {
    payload.WithString("documentId", m_documentId);
  }

  return payload.View().WriteReadable();
}
