/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agent-runtime/model/InputImage.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace BedrockAgentRuntime {
namespace Model {

InputImage::InputImage(JsonView jsonValue) { *this = jsonValue; }

InputImage& InputImage::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("format")) {
    m_format = InputImageFormatMapper::GetInputImageFormatForName(jsonValue.GetString("format"));
    m_formatHasBeenSet = true;
  }
  if (jsonValue.ValueExists("inlineContent")) {
    m_inlineContent = HashingUtils::Base64Decode(jsonValue.GetString("inlineContent"));
    m_inlineContentHasBeenSet = true;
  }
  return *this;
}

JsonValue InputImage::Jsonize() const {
  JsonValue payload;

  if (m_formatHasBeenSet) {
    payload.WithString("format", InputImageFormatMapper::GetNameForInputImageFormat(m_format));
  }

  if (m_inlineContentHasBeenSet) {
    payload.WithString("inlineContent", HashingUtils::Base64Encode(m_inlineContent));
  }

  return payload;
}

}  // namespace Model
}  // namespace BedrockAgentRuntime
}  // namespace Aws
