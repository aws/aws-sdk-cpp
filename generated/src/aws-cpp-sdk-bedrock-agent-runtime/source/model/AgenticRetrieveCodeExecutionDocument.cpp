/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agent-runtime/model/AgenticRetrieveCodeExecutionDocument.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace BedrockAgentRuntime {
namespace Model {

AgenticRetrieveCodeExecutionDocument::AgenticRetrieveCodeExecutionDocument(JsonView jsonValue) { *this = jsonValue; }

AgenticRetrieveCodeExecutionDocument& AgenticRetrieveCodeExecutionDocument::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("documentId")) {
    m_documentId = jsonValue.GetString("documentId");
    m_documentIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("sourceRetriever")) {
    m_sourceRetriever = jsonValue.GetObject("sourceRetriever");
    m_sourceRetrieverHasBeenSet = true;
  }
  return *this;
}

JsonValue AgenticRetrieveCodeExecutionDocument::Jsonize() const {
  JsonValue payload;

  if (m_documentIdHasBeenSet) {
    payload.WithString("documentId", m_documentId);
  }

  if (m_sourceRetrieverHasBeenSet) {
    payload.WithObject("sourceRetriever", m_sourceRetriever.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace BedrockAgentRuntime
}  // namespace Aws
