/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/fsx/model/CreateClusterPeerRequest.h>

#include <utility>

using namespace Aws::FSx::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String CreateClusterPeerRequest::SerializePayload() const {
  JsonValue payload;

  if (m_clientRequestTokenHasBeenSet) {
    payload.WithString("ClientRequestToken", m_clientRequestToken);
  }

  if (m_fileSystemIdHasBeenSet) {
    payload.WithString("FileSystemId", m_fileSystemId);
  }

  if (m_peerAddressesHasBeenSet) {
    Aws::Utils::Array<JsonValue> peerAddressesJsonList(m_peerAddresses.size());
    for (unsigned peerAddressesIndex = 0; peerAddressesIndex < peerAddressesJsonList.GetLength(); ++peerAddressesIndex) {
      peerAddressesJsonList[peerAddressesIndex].AsString(m_peerAddresses[peerAddressesIndex]);
    }
    payload.WithArray("PeerAddresses", std::move(peerAddressesJsonList));
  }

  if (m_passphraseSecretArnHasBeenSet) {
    payload.WithString("PassphraseSecretArn", m_passphraseSecretArn);
  }

  if (m_peerClusterNameHasBeenSet) {
    payload.WithString("PeerClusterName", m_peerClusterName);
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

  if (m_tagsHasBeenSet) {
    Aws::Utils::Array<JsonValue> tagsJsonList(m_tags.size());
    for (unsigned tagsIndex = 0; tagsIndex < tagsJsonList.GetLength(); ++tagsIndex) {
      tagsJsonList[tagsIndex].AsObject(m_tags[tagsIndex].Jsonize());
    }
    payload.WithArray("Tags", std::move(tagsJsonList));
  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection CreateClusterPeerRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWSSimbaAPIService_v20180301.CreateClusterPeer"));
  return headers;
}
