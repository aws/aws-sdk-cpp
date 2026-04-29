/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore-control/model/StaticOverride.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace BedrockAgentCoreControl {
namespace Model {

StaticOverride::StaticOverride(JsonView jsonValue) { *this = jsonValue; }

StaticOverride& StaticOverride::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("bundleArn")) {
    m_bundleArn = jsonValue.GetString("bundleArn");
    m_bundleArnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("bundleVersion")) {
    m_bundleVersion = jsonValue.GetString("bundleVersion");
    m_bundleVersionHasBeenSet = true;
  }
  return *this;
}

JsonValue StaticOverride::Jsonize() const {
  JsonValue payload;

  if (m_bundleArnHasBeenSet) {
    payload.WithString("bundleArn", m_bundleArn);
  }

  if (m_bundleVersionHasBeenSet) {
    payload.WithString("bundleVersion", m_bundleVersion);
  }

  return payload;
}

}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
