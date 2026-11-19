/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/agent-registry-control/model/RegistryRecordArtifactDownload.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace AgentRegistryControl {
namespace Model {

RegistryRecordArtifactDownload::RegistryRecordArtifactDownload(JsonView jsonValue) { *this = jsonValue; }

RegistryRecordArtifactDownload& RegistryRecordArtifactDownload::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("sha256")) {
    m_sha256 = jsonValue.GetString("sha256");
    m_sha256HasBeenSet = true;
  }
  if (jsonValue.ValueExists("downloadUrl")) {
    m_downloadUrl = jsonValue.GetString("downloadUrl");
    m_downloadUrlHasBeenSet = true;
  }
  return *this;
}

JsonValue RegistryRecordArtifactDownload::Jsonize() const {
  JsonValue payload;

  if (m_sha256HasBeenSet) {
    payload.WithString("sha256", m_sha256);
  }

  if (m_downloadUrlHasBeenSet) {
    payload.WithString("downloadUrl", m_downloadUrl);
  }

  return payload;
}

}  // namespace Model
}  // namespace AgentRegistryControl
}  // namespace Aws
