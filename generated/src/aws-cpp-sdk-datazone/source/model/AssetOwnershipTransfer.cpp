/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/datazone/model/AssetOwnershipTransfer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace DataZone {
namespace Model {

AssetOwnershipTransfer::AssetOwnershipTransfer(JsonView jsonValue) { *this = jsonValue; }

AssetOwnershipTransfer& AssetOwnershipTransfer::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("status")) {
    m_status = AssetOwnershipTransferStatusMapper::GetAssetOwnershipTransferStatusForName(jsonValue.GetString("status"));
    m_statusHasBeenSet = true;
  }
  if (jsonValue.ValueExists("sourceProjectId")) {
    m_sourceProjectId = jsonValue.GetString("sourceProjectId");
    m_sourceProjectIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("targetProjectId")) {
    m_targetProjectId = jsonValue.GetString("targetProjectId");
    m_targetProjectIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("startedAt")) {
    m_startedAt = jsonValue.GetDouble("startedAt");
    m_startedAtHasBeenSet = true;
  }
  if (jsonValue.ValueExists("updatedAt")) {
    m_updatedAt = jsonValue.GetDouble("updatedAt");
    m_updatedAtHasBeenSet = true;
  }
  return *this;
}

JsonValue AssetOwnershipTransfer::Jsonize() const {
  JsonValue payload;

  if (m_statusHasBeenSet) {
    payload.WithString("status", AssetOwnershipTransferStatusMapper::GetNameForAssetOwnershipTransferStatus(m_status));
  }

  if (m_sourceProjectIdHasBeenSet) {
    payload.WithString("sourceProjectId", m_sourceProjectId);
  }

  if (m_targetProjectIdHasBeenSet) {
    payload.WithString("targetProjectId", m_targetProjectId);
  }

  if (m_startedAtHasBeenSet) {
    payload.WithDouble("startedAt", m_startedAt.SecondsWithMSPrecision());
  }

  if (m_updatedAtHasBeenSet) {
    payload.WithDouble("updatedAt", m_updatedAt.SecondsWithMSPrecision());
  }

  return payload;
}

}  // namespace Model
}  // namespace DataZone
}  // namespace Aws
