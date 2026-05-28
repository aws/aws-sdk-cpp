/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore-control/model/HarnessSkillS3Source.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace BedrockAgentCoreControl {
namespace Model {

HarnessSkillS3Source::HarnessSkillS3Source(JsonView jsonValue) { *this = jsonValue; }

HarnessSkillS3Source& HarnessSkillS3Source::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("uri")) {
    m_uri = jsonValue.GetString("uri");
    m_uriHasBeenSet = true;
  }
  return *this;
}

JsonValue HarnessSkillS3Source::Jsonize() const {
  JsonValue payload;

  if (m_uriHasBeenSet) {
    payload.WithString("uri", m_uri);
  }

  return payload;
}

}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
