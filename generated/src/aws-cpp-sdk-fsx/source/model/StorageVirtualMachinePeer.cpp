/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/fsx/model/StorageVirtualMachinePeer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace FSx {
namespace Model {

StorageVirtualMachinePeer::StorageVirtualMachinePeer(JsonView jsonValue) { *this = jsonValue; }

StorageVirtualMachinePeer& StorageVirtualMachinePeer::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("ResourceARN")) {
    m_resourceARN = jsonValue.GetString("ResourceARN");
    m_resourceARNHasBeenSet = true;
  }
  if (jsonValue.ValueExists("StorageVirtualMachinePeerId")) {
    m_storageVirtualMachinePeerId = jsonValue.GetString("StorageVirtualMachinePeerId");
    m_storageVirtualMachinePeerIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("StorageVirtualMachineId")) {
    m_storageVirtualMachineId = jsonValue.GetString("StorageVirtualMachineId");
    m_storageVirtualMachineIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("FileSystemId")) {
    m_fileSystemId = jsonValue.GetString("FileSystemId");
    m_fileSystemIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Lifecycle")) {
    m_lifecycle = StorageVirtualMachinePeerLifecycleMapper::GetStorageVirtualMachinePeerLifecycleForName(jsonValue.GetString("Lifecycle"));
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
  if (jsonValue.ValueExists("PeerSvmName")) {
    m_peerSvmName = jsonValue.GetString("PeerSvmName");
    m_peerSvmNameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("PeerSvmAlias")) {
    m_peerSvmAlias = jsonValue.GetString("PeerSvmAlias");
    m_peerSvmAliasHasBeenSet = true;
  }
  if (jsonValue.ValueExists("PeerClusterName")) {
    m_peerClusterName = jsonValue.GetString("PeerClusterName");
    m_peerClusterNameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Applications")) {
    Aws::Utils::Array<JsonView> applicationsJsonList = jsonValue.GetArray("Applications");
    for (unsigned applicationsIndex = 0; applicationsIndex < applicationsJsonList.GetLength(); ++applicationsIndex) {
      m_applications.push_back(StorageVirtualMachinePeerApplicationMapper::GetStorageVirtualMachinePeerApplicationForName(
          applicationsJsonList[applicationsIndex].AsString()));
    }
    m_applicationsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("State")) {
    m_state = StorageVirtualMachinePeerStateMapper::GetStorageVirtualMachinePeerStateForName(jsonValue.GetString("State"));
    m_stateHasBeenSet = true;
  }
  if (jsonValue.ValueExists("UUID")) {
    m_uUID = jsonValue.GetString("UUID");
    m_uUIDHasBeenSet = true;
  }
  return *this;
}

JsonValue StorageVirtualMachinePeer::Jsonize() const {
  JsonValue payload;

  if (m_resourceARNHasBeenSet) {
    payload.WithString("ResourceARN", m_resourceARN);
  }

  if (m_storageVirtualMachinePeerIdHasBeenSet) {
    payload.WithString("StorageVirtualMachinePeerId", m_storageVirtualMachinePeerId);
  }

  if (m_storageVirtualMachineIdHasBeenSet) {
    payload.WithString("StorageVirtualMachineId", m_storageVirtualMachineId);
  }

  if (m_fileSystemIdHasBeenSet) {
    payload.WithString("FileSystemId", m_fileSystemId);
  }

  if (m_lifecycleHasBeenSet) {
    payload.WithString("Lifecycle", StorageVirtualMachinePeerLifecycleMapper::GetNameForStorageVirtualMachinePeerLifecycle(m_lifecycle));
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

  if (m_peerSvmNameHasBeenSet) {
    payload.WithString("PeerSvmName", m_peerSvmName);
  }

  if (m_peerSvmAliasHasBeenSet) {
    payload.WithString("PeerSvmAlias", m_peerSvmAlias);
  }

  if (m_peerClusterNameHasBeenSet) {
    payload.WithString("PeerClusterName", m_peerClusterName);
  }

  if (m_applicationsHasBeenSet) {
    Aws::Utils::Array<JsonValue> applicationsJsonList(m_applications.size());
    for (unsigned applicationsIndex = 0; applicationsIndex < applicationsJsonList.GetLength(); ++applicationsIndex) {
      applicationsJsonList[applicationsIndex].AsString(
          StorageVirtualMachinePeerApplicationMapper::GetNameForStorageVirtualMachinePeerApplication(m_applications[applicationsIndex]));
    }
    payload.WithArray("Applications", std::move(applicationsJsonList));
  }

  if (m_stateHasBeenSet) {
    payload.WithString("State", StorageVirtualMachinePeerStateMapper::GetNameForStorageVirtualMachinePeerState(m_state));
  }

  if (m_uUIDHasBeenSet) {
    payload.WithString("UUID", m_uUID);
  }

  return payload;
}

}  // namespace Model
}  // namespace FSx
}  // namespace Aws
