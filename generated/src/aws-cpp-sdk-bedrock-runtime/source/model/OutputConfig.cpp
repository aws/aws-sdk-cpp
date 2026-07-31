/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-runtime/model/OutputConfig.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace BedrockRuntime {
namespace Model {

OutputConfig::OutputConfig(JsonView jsonValue) { *this = jsonValue; }

OutputConfig& OutputConfig::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("textFormat")) {
    m_textFormat = jsonValue.GetObject("textFormat");
    m_textFormatHasBeenSet = true;
  }
  if (jsonValue.ValueExists("effort")) {
    m_effort = jsonValue.GetString("effort");
    m_effortHasBeenSet = true;
  }
  return *this;
}

JsonValue OutputConfig::Jsonize() const {
  JsonValue payload;

  if (m_textFormatHasBeenSet) {
    payload.WithObject("textFormat", m_textFormat.Jsonize());
  }

  if (m_effortHasBeenSet) {
    payload.WithString("effort", m_effort);
  }

  return payload;
}

}  // namespace Model
}  // namespace BedrockRuntime
}  // namespace Aws
