/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/fsx/model/SnapmirrorExportedSnapshot.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace FSx {
namespace Model {

SnapmirrorExportedSnapshot::SnapmirrorExportedSnapshot(JsonView jsonValue) { *this = jsonValue; }

SnapmirrorExportedSnapshot& SnapmirrorExportedSnapshot::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("SnapshotId")) {
    m_snapshotId = jsonValue.GetString("SnapshotId");
    m_snapshotIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("SnapshotName")) {
    m_snapshotName = jsonValue.GetString("SnapshotName");
    m_snapshotNameHasBeenSet = true;
  }
  return *this;
}

JsonValue SnapmirrorExportedSnapshot::Jsonize() const {
  JsonValue payload;

  if (m_snapshotIdHasBeenSet) {
    payload.WithString("SnapshotId", m_snapshotId);
  }

  if (m_snapshotNameHasBeenSet) {
    payload.WithString("SnapshotName", m_snapshotName);
  }

  return payload;
}

}  // namespace Model
}  // namespace FSx
}  // namespace Aws
