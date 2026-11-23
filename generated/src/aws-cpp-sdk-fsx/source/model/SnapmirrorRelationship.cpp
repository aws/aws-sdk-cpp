/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/fsx/model/SnapmirrorRelationship.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace FSx {
namespace Model {

SnapmirrorRelationship::SnapmirrorRelationship(JsonView jsonValue) { *this = jsonValue; }

SnapmirrorRelationship& SnapmirrorRelationship::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("ResourceARN")) {
    m_resourceARN = jsonValue.GetString("ResourceARN");
    m_resourceARNHasBeenSet = true;
  }
  if (jsonValue.ValueExists("SnapmirrorRelationshipId")) {
    m_snapmirrorRelationshipId = jsonValue.GetString("SnapmirrorRelationshipId");
    m_snapmirrorRelationshipIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("FileSystemId")) {
    m_fileSystemId = jsonValue.GetString("FileSystemId");
    m_fileSystemIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Lifecycle")) {
    m_lifecycle = SnapmirrorRelationshipLifecycleMapper::GetSnapmirrorRelationshipLifecycleForName(jsonValue.GetString("Lifecycle"));
    m_lifecycleHasBeenSet = true;
  }
  if (jsonValue.ValueExists("LifecycleTransitionReason")) {
    m_lifecycleTransitionReason = jsonValue.GetObject("LifecycleTransitionReason");
    m_lifecycleTransitionReasonHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Tags")) {
    Aws::Utils::Array<JsonView> tagsJsonList = jsonValue.GetArray("Tags");
    for (unsigned tagsIndex = 0; tagsIndex < tagsJsonList.GetLength(); ++tagsIndex) {
      m_tags.push_back(tagsJsonList[tagsIndex].AsObject());
    }
    m_tagsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Source")) {
    m_source = jsonValue.GetObject("Source");
    m_sourceHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Destination")) {
    m_destination = jsonValue.GetObject("Destination");
    m_destinationHasBeenSet = true;
  }
  if (jsonValue.ValueExists("SnapmirrorPolicy")) {
    m_snapmirrorPolicy = jsonValue.GetObject("SnapmirrorPolicy");
    m_snapmirrorPolicyHasBeenSet = true;
  }
  if (jsonValue.ValueExists("TransferSchedule")) {
    m_transferSchedule = jsonValue.GetString("TransferSchedule");
    m_transferScheduleHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ThrottleInKbps")) {
    m_throttleInKbps = jsonValue.GetInt64("ThrottleInKbps");
    m_throttleInKbpsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("State")) {
    m_state = SnapmirrorRelationshipStateMapper::GetSnapmirrorRelationshipStateForName(jsonValue.GetString("State"));
    m_stateHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Healthy")) {
    m_healthy = jsonValue.GetBool("Healthy");
    m_healthyHasBeenSet = true;
  }
  if (jsonValue.ValueExists("UnhealthyReason")) {
    m_unhealthyReason = jsonValue.GetString("UnhealthyReason");
    m_unhealthyReasonHasBeenSet = true;
  }
  if (jsonValue.ValueExists("LagTimeInMinutes")) {
    m_lagTimeInMinutes = jsonValue.GetInt64("LagTimeInMinutes");
    m_lagTimeInMinutesHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ExportedSnapshot")) {
    m_exportedSnapshot = jsonValue.GetObject("ExportedSnapshot");
    m_exportedSnapshotHasBeenSet = true;
  }
  if (jsonValue.ValueExists("TransferState")) {
    m_transferState = jsonValue.GetObject("TransferState");
    m_transferStateHasBeenSet = true;
  }
  if (jsonValue.ValueExists("UUID")) {
    m_uUID = jsonValue.GetString("UUID");
    m_uUIDHasBeenSet = true;
  }
  return *this;
}

JsonValue SnapmirrorRelationship::Jsonize() const {
  JsonValue payload;

  if (m_resourceARNHasBeenSet) {
    payload.WithString("ResourceARN", m_resourceARN);
  }

  if (m_snapmirrorRelationshipIdHasBeenSet) {
    payload.WithString("SnapmirrorRelationshipId", m_snapmirrorRelationshipId);
  }

  if (m_fileSystemIdHasBeenSet) {
    payload.WithString("FileSystemId", m_fileSystemId);
  }

  if (m_lifecycleHasBeenSet) {
    payload.WithString("Lifecycle", SnapmirrorRelationshipLifecycleMapper::GetNameForSnapmirrorRelationshipLifecycle(m_lifecycle));
  }

  if (m_lifecycleTransitionReasonHasBeenSet) {
    payload.WithObject("LifecycleTransitionReason", m_lifecycleTransitionReason.Jsonize());
  }

  if (m_tagsHasBeenSet) {
    Aws::Utils::Array<JsonValue> tagsJsonList(m_tags.size());
    for (unsigned tagsIndex = 0; tagsIndex < tagsJsonList.GetLength(); ++tagsIndex) {
      tagsJsonList[tagsIndex].AsObject(m_tags[tagsIndex].Jsonize());
    }
    payload.WithArray("Tags", std::move(tagsJsonList));
  }

  if (m_sourceHasBeenSet) {
    payload.WithObject("Source", m_source.Jsonize());
  }

  if (m_destinationHasBeenSet) {
    payload.WithObject("Destination", m_destination.Jsonize());
  }

  if (m_snapmirrorPolicyHasBeenSet) {
    payload.WithObject("SnapmirrorPolicy", m_snapmirrorPolicy.Jsonize());
  }

  if (m_transferScheduleHasBeenSet) {
    payload.WithString("TransferSchedule", m_transferSchedule);
  }

  if (m_throttleInKbpsHasBeenSet) {
    payload.WithInt64("ThrottleInKbps", m_throttleInKbps);
  }

  if (m_stateHasBeenSet) {
    payload.WithString("State", SnapmirrorRelationshipStateMapper::GetNameForSnapmirrorRelationshipState(m_state));
  }

  if (m_healthyHasBeenSet) {
    payload.WithBool("Healthy", m_healthy);
  }

  if (m_unhealthyReasonHasBeenSet) {
    payload.WithString("UnhealthyReason", m_unhealthyReason);
  }

  if (m_lagTimeInMinutesHasBeenSet) {
    payload.WithInt64("LagTimeInMinutes", m_lagTimeInMinutes);
  }

  if (m_exportedSnapshotHasBeenSet) {
    payload.WithObject("ExportedSnapshot", m_exportedSnapshot.Jsonize());
  }

  if (m_transferStateHasBeenSet) {
    payload.WithObject("TransferState", m_transferState.Jsonize());
  }

  if (m_uUIDHasBeenSet) {
    payload.WithString("UUID", m_uUID);
  }

  return payload;
}

}  // namespace Model
}  // namespace FSx
}  // namespace Aws
