/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/groundstation/model/EphemerisResponseData.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace GroundStation {
namespace Model {

EphemerisResponseData::EphemerisResponseData(JsonView jsonValue) { *this = jsonValue; }

EphemerisResponseData& EphemerisResponseData::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("ephemerisId")) {
    m_ephemerisId = jsonValue.GetString("ephemerisId");
    m_ephemerisIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ephemerisType")) {
    m_ephemerisType = EphemerisTypeMapper::GetEphemerisTypeForName(jsonValue.GetString("ephemerisType"));
    m_ephemerisTypeHasBeenSet = true;
  }
  return *this;
}

JsonValue EphemerisResponseData::Jsonize() const {
  JsonValue payload;

  if (m_ephemerisIdHasBeenSet) {
    payload.WithString("ephemerisId", m_ephemerisId);
  }

  if (m_ephemerisTypeHasBeenSet) {
    payload.WithString("ephemerisType", EphemerisTypeMapper::GetNameForEphemerisType(m_ephemerisType));
  }

  return payload;
}

}  // namespace Model
}  // namespace GroundStation
}  // namespace Aws
