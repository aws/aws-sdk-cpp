/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/fsx/model/UpdateClusterPeerRequest.h>

#include <utility>

using namespace Aws::FSx::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String UpdateClusterPeerRequest::SerializePayload() const {
  JsonValue payload;

  if (m_clientRequestTokenHasBeenSet) {
    payload.WithString("ClientRequestToken", m_clientRequestToken);
  }

  if (m_clusterPeerIdHasBeenSet) {
    payload.WithString("ClusterPeerId", m_clusterPeerId);
  }

  if (m_peerClusterNameHasBeenSet) {
    payload.WithString("PeerClusterName", m_peerClusterName);
  }

  if (m_peerAddressesHasBeenSet) {
    Aws::Utils::Array<JsonValue> peerAddressesJsonList(m_peerAddresses.size());
    for (unsigned peerAddressesIndex = 0; peerAddressesIndex < peerAddressesJsonList.GetLength(); ++peerAddressesIndex) {
      peerAddressesJsonList[peerAddressesIndex].AsString(m_peerAddresses[peerAddressesIndex]);
    }
    payload.WithArray("PeerAddresses", std::move(peerAddressesJsonList));
  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection UpdateClusterPeerRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWSSimbaAPIService_v20180301.UpdateClusterPeer"));
  return headers;
}
