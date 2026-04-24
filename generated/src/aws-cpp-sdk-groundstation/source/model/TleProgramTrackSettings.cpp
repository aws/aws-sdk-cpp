/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/groundstation/model/TleProgramTrackSettings.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace GroundStation {
namespace Model {

TleProgramTrackSettings::TleProgramTrackSettings(JsonView jsonValue) { *this = jsonValue; }

TleProgramTrackSettings& TleProgramTrackSettings::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("ephemerisId")) {
    m_ephemerisId = jsonValue.GetString("ephemerisId");
    m_ephemerisIdHasBeenSet = true;
  }
  return *this;
}

JsonValue TleProgramTrackSettings::Jsonize() const {
  JsonValue payload;

  if (m_ephemerisIdHasBeenSet) {
    payload.WithString("ephemerisId", m_ephemerisId);
  }

  return payload;
}

}  // namespace Model
}  // namespace GroundStation
}  // namespace Aws
