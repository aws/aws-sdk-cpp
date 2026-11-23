/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/fsx/model/CreateCloneConfiguration.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace FSx {
namespace Model {

CreateCloneConfiguration::CreateCloneConfiguration(JsonView jsonValue) { *this = jsonValue; }

CreateCloneConfiguration& CreateCloneConfiguration::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("ParentVolumeId")) {
    m_parentVolumeId = jsonValue.GetString("ParentVolumeId");
    m_parentVolumeIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("SnapshotId")) {
    m_snapshotId = jsonValue.GetString("SnapshotId");
    m_snapshotIdHasBeenSet = true;
  }
  return *this;
}

JsonValue CreateCloneConfiguration::Jsonize() const {
  JsonValue payload;

  if (m_parentVolumeIdHasBeenSet) {
    payload.WithString("ParentVolumeId", m_parentVolumeId);
  }

  if (m_snapshotIdHasBeenSet) {
    payload.WithString("SnapshotId", m_snapshotId);
  }

  return payload;
}

}  // namespace Model
}  // namespace FSx
}  // namespace Aws
