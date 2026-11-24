/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/fsx/model/SnapshotPolicy.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace FSx {
namespace Model {

SnapshotPolicy::SnapshotPolicy(JsonView jsonValue) { *this = jsonValue; }

SnapshotPolicy& SnapshotPolicy::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("ResourceARN")) {
    m_resourceARN = jsonValue.GetString("ResourceARN");
    m_resourceARNHasBeenSet = true;
  }
  if (jsonValue.ValueExists("SnapshotPolicyId")) {
    m_snapshotPolicyId = jsonValue.GetString("SnapshotPolicyId");
    m_snapshotPolicyIdHasBeenSet = true;
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
  if (jsonValue.ValueExists("Enabled")) {
    m_enabled = jsonValue.GetBool("Enabled");
    m_enabledHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Schedules")) {
    Aws::Utils::Array<JsonView> schedulesJsonList = jsonValue.GetArray("Schedules");
    for (unsigned schedulesIndex = 0; schedulesIndex < schedulesJsonList.GetLength(); ++schedulesIndex) {
      m_schedules.push_back(schedulesJsonList[schedulesIndex].AsObject());
    }
    m_schedulesHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Scope")) {
    m_scope = SnapshotPolicyScopeMapper::GetSnapshotPolicyScopeForName(jsonValue.GetString("Scope"));
    m_scopeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Lifecycle")) {
    m_lifecycle = SnapshotPolicyLifecycleMapper::GetSnapshotPolicyLifecycleForName(jsonValue.GetString("Lifecycle"));
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

JsonValue SnapshotPolicy::Jsonize() const {
  JsonValue payload;

  if (m_resourceARNHasBeenSet) {
    payload.WithString("ResourceARN", m_resourceARN);
  }

  if (m_snapshotPolicyIdHasBeenSet) {
    payload.WithString("SnapshotPolicyId", m_snapshotPolicyId);
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

  if (m_enabledHasBeenSet) {
    payload.WithBool("Enabled", m_enabled);
  }

  if (m_schedulesHasBeenSet) {
    Aws::Utils::Array<JsonValue> schedulesJsonList(m_schedules.size());
    for (unsigned schedulesIndex = 0; schedulesIndex < schedulesJsonList.GetLength(); ++schedulesIndex) {
      schedulesJsonList[schedulesIndex].AsObject(m_schedules[schedulesIndex].Jsonize());
    }
    payload.WithArray("Schedules", std::move(schedulesJsonList));
  }

  if (m_scopeHasBeenSet) {
    payload.WithString("Scope", SnapshotPolicyScopeMapper::GetNameForSnapshotPolicyScope(m_scope));
  }

  if (m_lifecycleHasBeenSet) {
    payload.WithString("Lifecycle", SnapshotPolicyLifecycleMapper::GetNameForSnapshotPolicyLifecycle(m_lifecycle));
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
