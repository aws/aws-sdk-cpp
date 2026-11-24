/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/fsx/model/SnapmirrorDestination.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace FSx {
namespace Model {

SnapmirrorDestination::SnapmirrorDestination(JsonView jsonValue) { *this = jsonValue; }

SnapmirrorDestination& SnapmirrorDestination::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("Path")) {
    m_path = jsonValue.GetString("Path");
    m_pathHasBeenSet = true;
  }
  if (jsonValue.ValueExists("VolumeId")) {
    m_volumeId = jsonValue.GetString("VolumeId");
    m_volumeIdHasBeenSet = true;
  }
  return *this;
}

JsonValue SnapmirrorDestination::Jsonize() const {
  JsonValue payload;

  if (m_pathHasBeenSet) {
    payload.WithString("Path", m_path);
  }

  if (m_volumeIdHasBeenSet) {
    payload.WithString("VolumeId", m_volumeId);
  }

  return payload;
}

}  // namespace Model
}  // namespace FSx
}  // namespace Aws
