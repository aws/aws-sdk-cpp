/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore-control/model/ToolsFileSystemConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace BedrockAgentCoreControl {
namespace Model {

ToolsFileSystemConfiguration::ToolsFileSystemConfiguration(JsonView jsonValue) { *this = jsonValue; }

ToolsFileSystemConfiguration& ToolsFileSystemConfiguration::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("s3FilesConfiguration")) {
    m_s3FilesConfiguration = jsonValue.GetObject("s3FilesConfiguration");
    m_s3FilesConfigurationHasBeenSet = true;
  }
  if (jsonValue.ValueExists("efsConfiguration")) {
    m_efsConfiguration = jsonValue.GetObject("efsConfiguration");
    m_efsConfigurationHasBeenSet = true;
  }
  return *this;
}

JsonValue ToolsFileSystemConfiguration::Jsonize() const {
  JsonValue payload;

  if (m_s3FilesConfigurationHasBeenSet) {
    payload.WithObject("s3FilesConfiguration", m_s3FilesConfiguration.Jsonize());
  }

  if (m_efsConfigurationHasBeenSet) {
    payload.WithObject("efsConfiguration", m_efsConfiguration.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
