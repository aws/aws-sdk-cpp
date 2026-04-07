/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore/model/ScreenshotArguments.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace BedrockAgentCore {
namespace Model {

ScreenshotArguments::ScreenshotArguments(JsonView jsonValue) { *this = jsonValue; }

ScreenshotArguments& ScreenshotArguments::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("format")) {
    m_format = ScreenshotFormatMapper::GetScreenshotFormatForName(jsonValue.GetString("format"));
    m_formatHasBeenSet = true;
  }
  return *this;
}

JsonValue ScreenshotArguments::Jsonize() const {
  JsonValue payload;

  if (m_formatHasBeenSet) {
    payload.WithString("format", ScreenshotFormatMapper::GetNameForScreenshotFormat(m_format));
  }

  return payload;
}

}  // namespace Model
}  // namespace BedrockAgentCore
}  // namespace Aws
