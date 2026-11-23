/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/fsx/model/CreateSnapmirrorDestination.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace FSx {
namespace Model {

CreateSnapmirrorDestination::CreateSnapmirrorDestination(JsonView jsonValue) { *this = jsonValue; }

CreateSnapmirrorDestination& CreateSnapmirrorDestination::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("VolumeId")) {
    m_volumeId = jsonValue.GetString("VolumeId");
    m_volumeIdHasBeenSet = true;
  }
  return *this;
}

JsonValue CreateSnapmirrorDestination::Jsonize() const {
  JsonValue payload;

  if (m_volumeIdHasBeenSet) {
    payload.WithString("VolumeId", m_volumeId);
  }

  return payload;
}

}  // namespace Model
}  // namespace FSx
}  // namespace Aws
