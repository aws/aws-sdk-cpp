/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/deadline/model/VolumeSummary.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace deadline {
namespace Model {

VolumeSummary::VolumeSummary(JsonView jsonValue) { *this = jsonValue; }

VolumeSummary& VolumeSummary::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("volumeId")) {
    m_volumeId = jsonValue.GetString("volumeId");
    m_volumeIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("farmId")) {
    m_farmId = jsonValue.GetString("farmId");
    m_farmIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("fleetId")) {
    m_fleetId = jsonValue.GetString("fleetId");
    m_fleetIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("state")) {
    m_state = VolumeStateMapper::GetVolumeStateForName(jsonValue.GetString("state"));
    m_stateHasBeenSet = true;
  }
  if (jsonValue.ValueExists("sizeGiB")) {
    m_sizeGiB = jsonValue.GetInteger("sizeGiB");
    m_sizeGiBHasBeenSet = true;
  }
  if (jsonValue.ValueExists("availabilityZoneId")) {
    m_availabilityZoneId = jsonValue.GetString("availabilityZoneId");
    m_availabilityZoneIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("attachedWorkerId")) {
    m_attachedWorkerId = jsonValue.GetString("attachedWorkerId");
    m_attachedWorkerIdHasBeenSet = true;
  }
  return *this;
}

JsonValue VolumeSummary::Jsonize() const {
  JsonValue payload;

  if (m_volumeIdHasBeenSet) {
    payload.WithString("volumeId", m_volumeId);
  }

  if (m_farmIdHasBeenSet) {
    payload.WithString("farmId", m_farmId);
  }

  if (m_fleetIdHasBeenSet) {
    payload.WithString("fleetId", m_fleetId);
  }

  if (m_stateHasBeenSet) {
    payload.WithString("state", VolumeStateMapper::GetNameForVolumeState(m_state));
  }

  if (m_sizeGiBHasBeenSet) {
    payload.WithInteger("sizeGiB", m_sizeGiB);
  }

  if (m_availabilityZoneIdHasBeenSet) {
    payload.WithString("availabilityZoneId", m_availabilityZoneId);
  }

  if (m_attachedWorkerIdHasBeenSet) {
    payload.WithString("attachedWorkerId", m_attachedWorkerId);
  }

  return payload;
}

}  // namespace Model
}  // namespace deadline
}  // namespace Aws
