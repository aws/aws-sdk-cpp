/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-runtime/model/ImageBlockStart.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace BedrockRuntime {
namespace Model {

ImageBlockStart::ImageBlockStart(JsonView jsonValue) { *this = jsonValue; }

ImageBlockStart& ImageBlockStart::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("format")) {
    m_format = ImageFormatMapper::GetImageFormatForName(jsonValue.GetString("format"));
    m_formatHasBeenSet = true;
  }
  return *this;
}

JsonValue ImageBlockStart::Jsonize() const {
  JsonValue payload;

  if (m_formatHasBeenSet) {
    payload.WithString("format", ImageFormatMapper::GetNameForImageFormat(m_format));
  }

  return payload;
}

}  // namespace Model
}  // namespace BedrockRuntime
}  // namespace Aws
