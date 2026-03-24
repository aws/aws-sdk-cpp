/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore-control/model/FilesystemConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace BedrockAgentCoreControl {
namespace Model {

FilesystemConfiguration::FilesystemConfiguration(JsonView jsonValue) { *this = jsonValue; }

FilesystemConfiguration& FilesystemConfiguration::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("sessionStorage")) {
    m_sessionStorage = jsonValue.GetObject("sessionStorage");
    m_sessionStorageHasBeenSet = true;
  }
  return *this;
}

JsonValue FilesystemConfiguration::Jsonize() const {
  JsonValue payload;

  if (m_sessionStorageHasBeenSet) {
    payload.WithObject("sessionStorage", m_sessionStorage.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
