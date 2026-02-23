/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock/model/AutomatedReasoningPolicyAnnotatedChunk.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Bedrock {
namespace Model {

AutomatedReasoningPolicyAnnotatedChunk::AutomatedReasoningPolicyAnnotatedChunk(JsonView jsonValue) { *this = jsonValue; }

AutomatedReasoningPolicyAnnotatedChunk& AutomatedReasoningPolicyAnnotatedChunk::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("pageNumber")) {
    m_pageNumber = jsonValue.GetInteger("pageNumber");
    m_pageNumberHasBeenSet = true;
  }
  if (jsonValue.ValueExists("content")) {
    Aws::Utils::Array<JsonView> contentJsonList = jsonValue.GetArray("content");
    for (unsigned contentIndex = 0; contentIndex < contentJsonList.GetLength(); ++contentIndex) {
      m_content.push_back(contentJsonList[contentIndex].AsObject());
    }
    m_contentHasBeenSet = true;
  }
  return *this;
}

JsonValue AutomatedReasoningPolicyAnnotatedChunk::Jsonize() const {
  JsonValue payload;

  if (m_pageNumberHasBeenSet) {
    payload.WithInteger("pageNumber", m_pageNumber);
  }

  if (m_contentHasBeenSet) {
    Aws::Utils::Array<JsonValue> contentJsonList(m_content.size());
    for (unsigned contentIndex = 0; contentIndex < contentJsonList.GetLength(); ++contentIndex) {
      contentJsonList[contentIndex].AsObject(m_content[contentIndex].Jsonize());
    }
    payload.WithArray("content", std::move(contentJsonList));
  }

  return payload;
}

}  // namespace Model
}  // namespace Bedrock
}  // namespace Aws
