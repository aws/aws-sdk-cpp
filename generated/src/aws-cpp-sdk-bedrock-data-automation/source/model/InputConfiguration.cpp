/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-data-automation/model/InputConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace BedrockDataAutomation {
namespace Model {

InputConfiguration::InputConfiguration(JsonView jsonValue) { *this = jsonValue; }

InputConfiguration& InputConfiguration::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("s3Object")) {
    m_s3Object = jsonValue.GetObject("s3Object");
    m_s3ObjectHasBeenSet = true;
  }
  if (jsonValue.ValueExists("inlinePayload")) {
    m_inlinePayload = jsonValue.GetObject("inlinePayload");
    m_inlinePayloadHasBeenSet = true;
  }
  return *this;
}

JsonValue InputConfiguration::Jsonize() const {
  JsonValue payload;

  if (m_s3ObjectHasBeenSet) {
    payload.WithObject("s3Object", m_s3Object.Jsonize());
  }

  if (m_inlinePayloadHasBeenSet) {
    payload.WithObject("inlinePayload", m_inlinePayload.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace BedrockDataAutomation
}  // namespace Aws
