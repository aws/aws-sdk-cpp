/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-runtime/model/ImageBlockDelta.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace BedrockRuntime {
namespace Model {

ImageBlockDelta::ImageBlockDelta(JsonView jsonValue) { *this = jsonValue; }

ImageBlockDelta& ImageBlockDelta::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("source")) {
    m_source = jsonValue.GetObject("source");
    m_sourceHasBeenSet = true;
  }
  if (jsonValue.ValueExists("error")) {
    m_error = jsonValue.GetObject("error");
    m_errorHasBeenSet = true;
  }
  return *this;
}

JsonValue ImageBlockDelta::Jsonize() const {
  JsonValue payload;

  if (m_sourceHasBeenSet) {
    payload.WithObject("source", m_source.Jsonize());
  }

  if (m_errorHasBeenSet) {
    payload.WithObject("error", m_error.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace BedrockRuntime
}  // namespace Aws
