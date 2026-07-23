/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore-control/model/S3FilesConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace BedrockAgentCoreControl {
namespace Model {

S3FilesConfiguration::S3FilesConfiguration(JsonView jsonValue) { *this = jsonValue; }

S3FilesConfiguration& S3FilesConfiguration::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("accessPointArn")) {
    m_accessPointArn = jsonValue.GetString("accessPointArn");
    m_accessPointArnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("mountPath")) {
    m_mountPath = jsonValue.GetString("mountPath");
    m_mountPathHasBeenSet = true;
  }
  if (jsonValue.ValueExists("fileSystemArn")) {
    m_fileSystemArn = jsonValue.GetString("fileSystemArn");
    m_fileSystemArnHasBeenSet = true;
  }
  return *this;
}

JsonValue S3FilesConfiguration::Jsonize() const {
  JsonValue payload;

  if (m_accessPointArnHasBeenSet) {
    payload.WithString("accessPointArn", m_accessPointArn);
  }

  if (m_mountPathHasBeenSet) {
    payload.WithString("mountPath", m_mountPath);
  }

  if (m_fileSystemArnHasBeenSet) {
    payload.WithString("fileSystemArn", m_fileSystemArn);
  }

  return payload;
}

}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
