/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore-control/model/SessionStorageConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace BedrockAgentCoreControl {
namespace Model {

SessionStorageConfiguration::SessionStorageConfiguration(JsonView jsonValue) { *this = jsonValue; }

SessionStorageConfiguration& SessionStorageConfiguration::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("mountPath")) {
    m_mountPath = jsonValue.GetString("mountPath");
    m_mountPathHasBeenSet = true;
  }
  return *this;
}

JsonValue SessionStorageConfiguration::Jsonize() const {
  JsonValue payload;

  if (m_mountPathHasBeenSet) {
    payload.WithString("mountPath", m_mountPath);
  }

  return payload;
}

}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
