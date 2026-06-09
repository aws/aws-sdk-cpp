/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/devops-agent/model/Asset.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace DevOpsAgent {
namespace Model {

Asset::Asset(JsonView jsonValue) { *this = jsonValue; }

Asset& Asset::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("assetId")) {
    m_assetId = jsonValue.GetString("assetId");
    m_assetIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("assetType")) {
    m_assetType = jsonValue.GetString("assetType");
    m_assetTypeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("metadata")) {
    m_metadata = jsonValue.GetObject("metadata");
    m_metadataHasBeenSet = true;
  }
  if (jsonValue.ValueExists("version")) {
    m_version = jsonValue.GetInteger("version");
    m_versionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("createdAt")) {
    m_createdAt = jsonValue.GetDouble("createdAt");
    m_createdAtHasBeenSet = true;
  }
  if (jsonValue.ValueExists("updatedAt")) {
    m_updatedAt = jsonValue.GetDouble("updatedAt");
    m_updatedAtHasBeenSet = true;
  }
  return *this;
}

JsonValue Asset::Jsonize() const {
  JsonValue payload;

  if (m_assetIdHasBeenSet) {
    payload.WithString("assetId", m_assetId);
  }

  if (m_assetTypeHasBeenSet) {
    payload.WithString("assetType", m_assetType);
  }

  if (m_metadataHasBeenSet) {
    if (!m_metadata.View().IsNull()) {
      payload.WithObject("metadata", JsonValue(m_metadata.View()));
    }
  }

  if (m_versionHasBeenSet) {
    payload.WithInteger("version", m_version);
  }

  if (m_createdAtHasBeenSet) {
    payload.WithDouble("createdAt", m_createdAt.SecondsWithMSPrecision());
  }

  if (m_updatedAtHasBeenSet) {
    payload.WithDouble("updatedAt", m_updatedAt.SecondsWithMSPrecision());
  }

  return payload;
}

}  // namespace Model
}  // namespace DevOpsAgent
}  // namespace Aws
