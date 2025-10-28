/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/groundstation/model/TrackingOverrides.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace GroundStation {
namespace Model {

TrackingOverrides::TrackingOverrides(JsonView jsonValue) { *this = jsonValue; }

TrackingOverrides& TrackingOverrides::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("programTrackSettings")) {
    m_programTrackSettings = jsonValue.GetObject("programTrackSettings");
    m_programTrackSettingsHasBeenSet = true;
  }
  return *this;
}

JsonValue TrackingOverrides::Jsonize() const {
  JsonValue payload;

  if (m_programTrackSettingsHasBeenSet) {
    payload.WithObject("programTrackSettings", m_programTrackSettings.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace GroundStation
}  // namespace Aws
