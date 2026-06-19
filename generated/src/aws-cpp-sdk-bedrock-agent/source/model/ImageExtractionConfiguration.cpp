/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agent/model/ImageExtractionConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace BedrockAgent {
namespace Model {

ImageExtractionConfiguration::ImageExtractionConfiguration(JsonView jsonValue) { *this = jsonValue; }

ImageExtractionConfiguration& ImageExtractionConfiguration::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("imageExtractionStatus")) {
    m_imageExtractionStatus = EnabledOrDisabledStateMapper::GetEnabledOrDisabledStateForName(jsonValue.GetString("imageExtractionStatus"));
    m_imageExtractionStatusHasBeenSet = true;
  }
  return *this;
}

JsonValue ImageExtractionConfiguration::Jsonize() const {
  JsonValue payload;

  if (m_imageExtractionStatusHasBeenSet) {
    payload.WithString("imageExtractionStatus", EnabledOrDisabledStateMapper::GetNameForEnabledOrDisabledState(m_imageExtractionStatus));
  }

  return payload;
}

}  // namespace Model
}  // namespace BedrockAgent
}  // namespace Aws
