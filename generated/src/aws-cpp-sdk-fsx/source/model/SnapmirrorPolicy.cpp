/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/fsx/model/SnapmirrorPolicy.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace FSx {
namespace Model {

SnapmirrorPolicy::SnapmirrorPolicy(JsonView jsonValue) { *this = jsonValue; }

SnapmirrorPolicy& SnapmirrorPolicy::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("ResourceARN")) {
    m_resourceARN = jsonValue.GetString("ResourceARN");
    m_resourceARNHasBeenSet = true;
  }
  if (jsonValue.ValueExists("SnapmirrorPolicyId")) {
    m_snapmirrorPolicyId = jsonValue.GetString("SnapmirrorPolicyId");
    m_snapmirrorPolicyIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("FileSystemId")) {
    m_fileSystemId = jsonValue.GetString("FileSystemId");
    m_fileSystemIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("StorageVirtualMachineId")) {
    m_storageVirtualMachineId = jsonValue.GetString("StorageVirtualMachineId");
    m_storageVirtualMachineIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Name")) {
    m_name = jsonValue.GetString("Name");
    m_nameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("SnapshotCopyMode")) {
    m_snapshotCopyMode =
        SnapmirrorPolicySnapshotCopyModeMapper::GetSnapmirrorPolicySnapshotCopyModeForName(jsonValue.GetString("SnapshotCopyMode"));
    m_snapshotCopyModeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("RetentionRules")) {
    Aws::Utils::Array<JsonView> retentionRulesJsonList = jsonValue.GetArray("RetentionRules");
    for (unsigned retentionRulesIndex = 0; retentionRulesIndex < retentionRulesJsonList.GetLength(); ++retentionRulesIndex) {
      m_retentionRules.push_back(retentionRulesJsonList[retentionRulesIndex].AsObject());
    }
    m_retentionRulesHasBeenSet = true;
  }
  if (jsonValue.ValueExists("TransferSchedule")) {
    m_transferSchedule = jsonValue.GetString("TransferSchedule");
    m_transferScheduleHasBeenSet = true;
  }
  if (jsonValue.ValueExists("NetworkCompressionEnabled")) {
    m_networkCompressionEnabled = jsonValue.GetBool("NetworkCompressionEnabled");
    m_networkCompressionEnabledHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ThrottleInKbps")) {
    m_throttleInKbps = jsonValue.GetInt64("ThrottleInKbps");
    m_throttleInKbpsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Scope")) {
    m_scope = SnapmirrorPolicyScopeMapper::GetSnapmirrorPolicyScopeForName(jsonValue.GetString("Scope"));
    m_scopeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Lifecycle")) {
    m_lifecycle = SnapmirrorPolicyLifecycleMapper::GetSnapmirrorPolicyLifecycleForName(jsonValue.GetString("Lifecycle"));
    m_lifecycleHasBeenSet = true;
  }
  if (jsonValue.ValueExists("UUID")) {
    m_uUID = jsonValue.GetString("UUID");
    m_uUIDHasBeenSet = true;
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
  return *this;
}

JsonValue SnapmirrorPolicy::Jsonize() const {
  JsonValue payload;

  if (m_resourceARNHasBeenSet) {
    payload.WithString("ResourceARN", m_resourceARN);
  }

  if (m_snapmirrorPolicyIdHasBeenSet) {
    payload.WithString("SnapmirrorPolicyId", m_snapmirrorPolicyId);
  }

  if (m_fileSystemIdHasBeenSet) {
    payload.WithString("FileSystemId", m_fileSystemId);
  }

  if (m_storageVirtualMachineIdHasBeenSet) {
    payload.WithString("StorageVirtualMachineId", m_storageVirtualMachineId);
  }

  if (m_nameHasBeenSet) {
    payload.WithString("Name", m_name);
  }

  if (m_snapshotCopyModeHasBeenSet) {
    payload.WithString("SnapshotCopyMode",
                       SnapmirrorPolicySnapshotCopyModeMapper::GetNameForSnapmirrorPolicySnapshotCopyMode(m_snapshotCopyMode));
  }

  if (m_retentionRulesHasBeenSet) {
    Aws::Utils::Array<JsonValue> retentionRulesJsonList(m_retentionRules.size());
    for (unsigned retentionRulesIndex = 0; retentionRulesIndex < retentionRulesJsonList.GetLength(); ++retentionRulesIndex) {
      retentionRulesJsonList[retentionRulesIndex].AsObject(m_retentionRules[retentionRulesIndex].Jsonize());
    }
    payload.WithArray("RetentionRules", std::move(retentionRulesJsonList));
  }

  if (m_transferScheduleHasBeenSet) {
    payload.WithString("TransferSchedule", m_transferSchedule);
  }

  if (m_networkCompressionEnabledHasBeenSet) {
    payload.WithBool("NetworkCompressionEnabled", m_networkCompressionEnabled);
  }

  if (m_throttleInKbpsHasBeenSet) {
    payload.WithInt64("ThrottleInKbps", m_throttleInKbps);
  }

  if (m_scopeHasBeenSet) {
    payload.WithString("Scope", SnapmirrorPolicyScopeMapper::GetNameForSnapmirrorPolicyScope(m_scope));
  }

  if (m_lifecycleHasBeenSet) {
    payload.WithString("Lifecycle", SnapmirrorPolicyLifecycleMapper::GetNameForSnapmirrorPolicyLifecycle(m_lifecycle));
  }

  if (m_uUIDHasBeenSet) {
    payload.WithString("UUID", m_uUID);
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

  return payload;
}

}  // namespace Model
}  // namespace FSx
}  // namespace Aws
