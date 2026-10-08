/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/crt/cbor/Cbor.h>
#include <aws/keyspaces/model/UpdateTableRequest.h>

#include <utility>

using namespace Aws::Keyspaces::Model;
using namespace Aws::Crt::Cbor;
using namespace Aws::Utils;

Aws::String UpdateTableRequest::SerializePayload() const {
  Aws::Crt::Cbor::CborEncoder encoder;

  // Calculate map size
  size_t mapSize = 0;
  if (m_keyspaceNameHasBeenSet) {
    mapSize++;
  }
  if (m_tableNameHasBeenSet) {
    mapSize++;
  }
  if (m_addColumnsHasBeenSet) {
    mapSize++;
  }
  if (m_capacitySpecificationHasBeenSet) {
    mapSize++;
  }
  if (m_encryptionSpecificationHasBeenSet) {
    mapSize++;
  }
  if (m_pointInTimeRecoveryHasBeenSet) {
    mapSize++;
  }
  if (m_ttlHasBeenSet) {
    mapSize++;
  }
  if (m_defaultTimeToLiveHasBeenSet) {
    mapSize++;
  }
  if (m_clientSideTimestampsHasBeenSet) {
    mapSize++;
  }
  if (m_autoScalingSpecificationHasBeenSet) {
    mapSize++;
  }
  if (m_replicaSpecificationsHasBeenSet) {
    mapSize++;
  }
  if (m_cdcSpecificationHasBeenSet) {
    mapSize++;
  }
  if (m_warmThroughputSpecificationHasBeenSet) {
    mapSize++;
  }

  encoder.WriteMapStart(mapSize);

  if (m_keyspaceNameHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("keyspaceName"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_keyspaceName.c_str()));
  }

  if (m_tableNameHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("tableName"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_tableName.c_str()));
  }

  if (m_addColumnsHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("addColumns"));
    encoder.WriteArrayStart(m_addColumns.size());
    for (const auto& item_0 : m_addColumns) {
      item_0.CborEncode(encoder);
    }
  }

  if (m_capacitySpecificationHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("capacitySpecification"));
    m_capacitySpecification.CborEncode(encoder);
  }

  if (m_encryptionSpecificationHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("encryptionSpecification"));
    m_encryptionSpecification.CborEncode(encoder);
  }

  if (m_pointInTimeRecoveryHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("pointInTimeRecovery"));
    m_pointInTimeRecovery.CborEncode(encoder);
  }

  if (m_ttlHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("ttl"));
    m_ttl.CborEncode(encoder);
  }

  if (m_defaultTimeToLiveHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("defaultTimeToLive"));
    (m_defaultTimeToLive >= 0) ? encoder.WriteUInt(m_defaultTimeToLive) : encoder.WriteNegInt(m_defaultTimeToLive);
  }

  if (m_clientSideTimestampsHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("clientSideTimestamps"));
    m_clientSideTimestamps.CborEncode(encoder);
  }

  if (m_autoScalingSpecificationHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("autoScalingSpecification"));
    m_autoScalingSpecification.CborEncode(encoder);
  }

  if (m_replicaSpecificationsHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("replicaSpecifications"));
    encoder.WriteArrayStart(m_replicaSpecifications.size());
    for (const auto& item_0 : m_replicaSpecifications) {
      item_0.CborEncode(encoder);
    }
  }

  if (m_cdcSpecificationHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("cdcSpecification"));
    m_cdcSpecification.CborEncode(encoder);
  }

  if (m_warmThroughputSpecificationHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("warmThroughputSpecification"));
    m_warmThroughputSpecification.CborEncode(encoder);
  }
  const auto str = Aws::String(reinterpret_cast<char*>(encoder.GetEncodedData().ptr), encoder.GetEncodedData().len);
  return str;
}

Aws::Http::HeaderValueCollection UpdateTableRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.emplace(Aws::Http::CONTENT_TYPE_HEADER, Aws::CBOR_CONTENT_TYPE);
  headers.emplace(Aws::Http::SMITHY_PROTOCOL_HEADER, Aws::RPC_V2_CBOR);
  headers.emplace(Aws::Http::ACCEPT_HEADER, Aws::CBOR_CONTENT_TYPE);
  return headers;
}
