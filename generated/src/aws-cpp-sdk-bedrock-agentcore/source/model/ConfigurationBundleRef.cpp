/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore/model/ConfigurationBundleRef.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace BedrockAgentCore {
namespace Model {

ConfigurationBundleRef::ConfigurationBundleRef(JsonView jsonValue) { *this = jsonValue; }

ConfigurationBundleRef& ConfigurationBundleRef::operator=(JsonView jsonValue) {
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

JsonValue ConfigurationBundleRef::Jsonize() const {
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
}  // namespace BedrockAgentCore
}  // namespace Aws
