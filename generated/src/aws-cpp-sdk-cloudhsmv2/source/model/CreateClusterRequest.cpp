/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudhsmv2/model/CreateClusterRequest.h>
#include <aws/crt/cbor/Cbor.h>

#include <utility>

using namespace Aws::CloudHSMV2::Model;
using namespace Aws::Crt::Cbor;
using namespace Aws::Utils;

Aws::String CreateClusterRequest::SerializePayload() const {
  Aws::Crt::Cbor::CborEncoder encoder;

  // Calculate map size
  size_t mapSize = 0;
  if (m_backupRetentionPolicyHasBeenSet) {
    mapSize++;
  }
  if (m_hsmTypeHasBeenSet) {
    mapSize++;
  }
  if (m_sourceBackupIdHasBeenSet) {
    mapSize++;
  }
  if (m_subnetIdsHasBeenSet) {
    mapSize++;
  }
  if (m_networkTypeHasBeenSet) {
    mapSize++;
  }
  if (m_tagListHasBeenSet) {
    mapSize++;
  }
  if (m_modeHasBeenSet) {
    mapSize++;
  }

  encoder.WriteMapStart(mapSize);

  if (m_backupRetentionPolicyHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("BackupRetentionPolicy"));
    m_backupRetentionPolicy.CborEncode(encoder);
  }

  if (m_hsmTypeHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("HsmType"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_hsmType.c_str()));
  }

  if (m_sourceBackupIdHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("SourceBackupId"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_sourceBackupId.c_str()));
  }

  if (m_subnetIdsHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("SubnetIds"));
    encoder.WriteArrayStart(m_subnetIds.size());
    for (const auto& item_0 : m_subnetIds) {
      encoder.WriteText(Aws::Crt::ByteCursorFromCString(item_0.c_str()));
    }
  }

  if (m_networkTypeHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("NetworkType"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(NetworkTypeMapper::GetNameForNetworkType(m_networkType).c_str()));
  }

  if (m_tagListHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("TagList"));
    encoder.WriteArrayStart(m_tagList.size());
    for (const auto& item_0 : m_tagList) {
      item_0.CborEncode(encoder);
    }
  }

  if (m_modeHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("Mode"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(ClusterModeMapper::GetNameForClusterMode(m_mode).c_str()));
  }
  const auto str = Aws::String(reinterpret_cast<char*>(encoder.GetEncodedData().ptr), encoder.GetEncodedData().len);
  return str;
}

Aws::Http::HeaderValueCollection CreateClusterRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.emplace(Aws::Http::CONTENT_TYPE_HEADER, Aws::CBOR_CONTENT_TYPE);
  headers.emplace(Aws::Http::SMITHY_PROTOCOL_HEADER, Aws::RPC_V2_CBOR);
  headers.emplace(Aws::Http::ACCEPT_HEADER, Aws::CBOR_CONTENT_TYPE);
  return headers;
}
