/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/fsx/model/ClusterPeer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace FSx {
namespace Model {

ClusterPeer::ClusterPeer(JsonView jsonValue) { *this = jsonValue; }

ClusterPeer& ClusterPeer::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("ResourceARN")) {
    m_resourceARN = jsonValue.GetString("ResourceARN");
    m_resourceARNHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ClusterPeerId")) {
    m_clusterPeerId = jsonValue.GetString("ClusterPeerId");
    m_clusterPeerIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("FileSystemId")) {
    m_fileSystemId = jsonValue.GetString("FileSystemId");
    m_fileSystemIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Lifecycle")) {
    m_lifecycle = ClusterPeerLifecycleMapper::GetClusterPeerLifecycleForName(jsonValue.GetString("Lifecycle"));
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
  if (jsonValue.ValueExists("PeerAddresses")) {
    Aws::Utils::Array<JsonView> peerAddressesJsonList = jsonValue.GetArray("PeerAddresses");
    for (unsigned peerAddressesIndex = 0; peerAddressesIndex < peerAddressesJsonList.GetLength(); ++peerAddressesIndex) {
      m_peerAddresses.push_back(peerAddressesJsonList[peerAddressesIndex].AsString());
    }
    m_peerAddressesHasBeenSet = true;
  }
  if (jsonValue.ValueExists("PeerClusterName")) {
    m_peerClusterName = jsonValue.GetString("PeerClusterName");
    m_peerClusterNameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("PassphraseSecretArn")) {
    m_passphraseSecretArn = jsonValue.GetString("PassphraseSecretArn");
    m_passphraseSecretArnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("AllowedSvmMode")) {
    m_allowedSvmMode = AllowedSvmModeMapper::GetAllowedSvmModeForName(jsonValue.GetString("AllowedSvmMode"));
    m_allowedSvmModeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("AllowedSvmIds")) {
    Aws::Utils::Array<JsonView> allowedSvmIdsJsonList = jsonValue.GetArray("AllowedSvmIds");
    for (unsigned allowedSvmIdsIndex = 0; allowedSvmIdsIndex < allowedSvmIdsJsonList.GetLength(); ++allowedSvmIdsIndex) {
      m_allowedSvmIds.push_back(allowedSvmIdsJsonList[allowedSvmIdsIndex].AsString());
    }
    m_allowedSvmIdsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Status")) {
    m_status = jsonValue.GetString("Status");
    m_statusHasBeenSet = true;
  }
  if (jsonValue.ValueExists("UUID")) {
    m_uUID = jsonValue.GetString("UUID");
    m_uUIDHasBeenSet = true;
  }
  if (jsonValue.ValueExists("AuthenticationStatus")) {
    m_authenticationStatus = jsonValue.GetObject("AuthenticationStatus");
    m_authenticationStatusHasBeenSet = true;
  }
  return *this;
}

JsonValue ClusterPeer::Jsonize() const {
  JsonValue payload;

  if (m_resourceARNHasBeenSet) {
    payload.WithString("ResourceARN", m_resourceARN);
  }

  if (m_clusterPeerIdHasBeenSet) {
    payload.WithString("ClusterPeerId", m_clusterPeerId);
  }

  if (m_fileSystemIdHasBeenSet) {
    payload.WithString("FileSystemId", m_fileSystemId);
  }

  if (m_lifecycleHasBeenSet) {
    payload.WithString("Lifecycle", ClusterPeerLifecycleMapper::GetNameForClusterPeerLifecycle(m_lifecycle));
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

  if (m_peerAddressesHasBeenSet) {
    Aws::Utils::Array<JsonValue> peerAddressesJsonList(m_peerAddresses.size());
    for (unsigned peerAddressesIndex = 0; peerAddressesIndex < peerAddressesJsonList.GetLength(); ++peerAddressesIndex) {
      peerAddressesJsonList[peerAddressesIndex].AsString(m_peerAddresses[peerAddressesIndex]);
    }
    payload.WithArray("PeerAddresses", std::move(peerAddressesJsonList));
  }

  if (m_peerClusterNameHasBeenSet) {
    payload.WithString("PeerClusterName", m_peerClusterName);
  }

  if (m_passphraseSecretArnHasBeenSet) {
    payload.WithString("PassphraseSecretArn", m_passphraseSecretArn);
  }

  if (m_allowedSvmModeHasBeenSet) {
    payload.WithString("AllowedSvmMode", AllowedSvmModeMapper::GetNameForAllowedSvmMode(m_allowedSvmMode));
  }

  if (m_allowedSvmIdsHasBeenSet) {
    Aws::Utils::Array<JsonValue> allowedSvmIdsJsonList(m_allowedSvmIds.size());
    for (unsigned allowedSvmIdsIndex = 0; allowedSvmIdsIndex < allowedSvmIdsJsonList.GetLength(); ++allowedSvmIdsIndex) {
      allowedSvmIdsJsonList[allowedSvmIdsIndex].AsString(m_allowedSvmIds[allowedSvmIdsIndex]);
    }
    payload.WithArray("AllowedSvmIds", std::move(allowedSvmIdsJsonList));
  }

  if (m_statusHasBeenSet) {
    payload.WithString("Status", m_status);
  }

  if (m_uUIDHasBeenSet) {
    payload.WithString("UUID", m_uUID);
  }

  if (m_authenticationStatusHasBeenSet) {
    payload.WithObject("AuthenticationStatus", m_authenticationStatus.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace FSx
}  // namespace Aws
