/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/groundstation/model/EphemerisItem.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace GroundStation {
namespace Model {

EphemerisItem::EphemerisItem(JsonView jsonValue) { *this = jsonValue; }

EphemerisItem& EphemerisItem::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("ephemerisId")) {
    m_ephemerisId = jsonValue.GetString("ephemerisId");
    m_ephemerisIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ephemerisType")) {
    m_ephemerisType = EphemerisTypeMapper::GetEphemerisTypeForName(jsonValue.GetString("ephemerisType"));
    m_ephemerisTypeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("status")) {
    m_status = EphemerisStatusMapper::GetEphemerisStatusForName(jsonValue.GetString("status"));
    m_statusHasBeenSet = true;
  }
  if (jsonValue.ValueExists("priority")) {
    m_priority = jsonValue.GetInteger("priority");
    m_priorityHasBeenSet = true;
  }
  if (jsonValue.ValueExists("enabled")) {
    m_enabled = jsonValue.GetBool("enabled");
    m_enabledHasBeenSet = true;
  }
  if (jsonValue.ValueExists("creationTime")) {
    m_creationTime = jsonValue.GetDouble("creationTime");
    m_creationTimeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("name")) {
    m_name = jsonValue.GetString("name");
    m_nameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("sourceS3Object")) {
    m_sourceS3Object = jsonValue.GetObject("sourceS3Object");
    m_sourceS3ObjectHasBeenSet = true;
  }
  return *this;
}

JsonValue EphemerisItem::Jsonize() const {
  JsonValue payload;

  if (m_ephemerisIdHasBeenSet) {
    payload.WithString("ephemerisId", m_ephemerisId);
  }

  if (m_ephemerisTypeHasBeenSet) {
    payload.WithString("ephemerisType", EphemerisTypeMapper::GetNameForEphemerisType(m_ephemerisType));
  }

  if (m_statusHasBeenSet) {
    payload.WithString("status", EphemerisStatusMapper::GetNameForEphemerisStatus(m_status));
  }

  if (m_priorityHasBeenSet) {
    payload.WithInteger("priority", m_priority);
  }

  if (m_enabledHasBeenSet) {
    payload.WithBool("enabled", m_enabled);
  }

  if (m_creationTimeHasBeenSet) {
    payload.WithDouble("creationTime", m_creationTime.SecondsWithMSPrecision());
  }

  if (m_nameHasBeenSet) {
    payload.WithString("name", m_name);
  }

  if (m_sourceS3ObjectHasBeenSet) {
    payload.WithObject("sourceS3Object", m_sourceS3Object.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace GroundStation
}  // namespace Aws
