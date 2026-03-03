/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore-control/model/RuntimeMetadataConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace BedrockAgentCoreControl {
namespace Model {

RuntimeMetadataConfiguration::RuntimeMetadataConfiguration(JsonView jsonValue) { *this = jsonValue; }

RuntimeMetadataConfiguration& RuntimeMetadataConfiguration::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("requireMMDSV2")) {
    m_requireMMDSV2 = jsonValue.GetBool("requireMMDSV2");
    m_requireMMDSV2HasBeenSet = true;
  }
  return *this;
}

JsonValue RuntimeMetadataConfiguration::Jsonize() const {
  JsonValue payload;

  if (m_requireMMDSV2HasBeenSet) {
    payload.WithBool("requireMMDSV2", m_requireMMDSV2);
  }

  return payload;
}

}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
