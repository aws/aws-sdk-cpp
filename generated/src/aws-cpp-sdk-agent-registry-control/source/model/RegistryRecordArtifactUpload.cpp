/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/agent-registry-control/model/RegistryRecordArtifactUpload.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace AgentRegistryControl {
namespace Model {

RegistryRecordArtifactUpload::RegistryRecordArtifactUpload(JsonView jsonValue) { *this = jsonValue; }

RegistryRecordArtifactUpload& RegistryRecordArtifactUpload::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("content")) {
    m_content = HashingUtils::Base64Decode(jsonValue.GetString("content"));
    m_contentHasBeenSet = true;
  }
  if (jsonValue.ValueExists("sha256")) {
    m_sha256 = jsonValue.GetString("sha256");
    m_sha256HasBeenSet = true;
  }
  return *this;
}

JsonValue RegistryRecordArtifactUpload::Jsonize() const {
  JsonValue payload;

  if (m_contentHasBeenSet) {
    payload.WithString("content", HashingUtils::Base64Encode(m_content));
  }

  if (m_sha256HasBeenSet) {
    payload.WithString("sha256", m_sha256);
  }

  return payload;
}

}  // namespace Model
}  // namespace AgentRegistryControl
}  // namespace Aws
