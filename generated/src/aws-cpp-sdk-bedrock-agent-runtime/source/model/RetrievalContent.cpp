/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agent-runtime/model/RetrievalContent.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace BedrockAgentRuntime {
namespace Model {

RetrievalContent::RetrievalContent(JsonView jsonValue) { *this = jsonValue; }

RetrievalContent& RetrievalContent::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("byteContent")) {
    m_byteContent = HashingUtils::Base64Decode(jsonValue.GetString("byteContent"));
    m_byteContentHasBeenSet = true;
  }
  if (jsonValue.ValueExists("mimeType")) {
    m_mimeType = jsonValue.GetString("mimeType");
    m_mimeTypeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("text")) {
    m_text = jsonValue.GetString("text");
    m_textHasBeenSet = true;
  }
  return *this;
}

JsonValue RetrievalContent::Jsonize() const {
  JsonValue payload;

  if (m_byteContentHasBeenSet) {
    payload.WithString("byteContent", HashingUtils::Base64Encode(m_byteContent));
  }

  if (m_mimeTypeHasBeenSet) {
    payload.WithString("mimeType", m_mimeType);
  }

  if (m_textHasBeenSet) {
    payload.WithString("text", m_text);
  }

  return payload;
}

}  // namespace Model
}  // namespace BedrockAgentRuntime
}  // namespace Aws
