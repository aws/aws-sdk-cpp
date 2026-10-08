/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/crt/cbor/Cbor.h>
#include <aws/keyspaces/model/RestoreTableRequest.h>

#include <utility>

using namespace Aws::Keyspaces::Model;
using namespace Aws::Crt::Cbor;
using namespace Aws::Utils;

Aws::String RestoreTableRequest::SerializePayload() const {
  Aws::Crt::Cbor::CborEncoder encoder;

  // Calculate map size
  size_t mapSize = 0;
  if (m_sourceKeyspaceNameHasBeenSet) {
    mapSize++;
  }
  if (m_sourceTableNameHasBeenSet) {
    mapSize++;
  }
  if (m_targetKeyspaceNameHasBeenSet) {
    mapSize++;
  }
  if (m_targetTableNameHasBeenSet) {
    mapSize++;
  }
  if (m_restoreTimestampHasBeenSet) {
    mapSize++;
  }
  if (m_capacitySpecificationOverrideHasBeenSet) {
    mapSize++;
  }
  if (m_encryptionSpecificationOverrideHasBeenSet) {
    mapSize++;
  }
  if (m_pointInTimeRecoveryOverrideHasBeenSet) {
    mapSize++;
  }
  if (m_tagsOverrideHasBeenSet) {
    mapSize++;
  }
  if (m_autoScalingSpecificationHasBeenSet) {
    mapSize++;
  }
  if (m_replicaSpecificationsHasBeenSet) {
    mapSize++;
  }

  encoder.WriteMapStart(mapSize);

  if (m_sourceKeyspaceNameHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("sourceKeyspaceName"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_sourceKeyspaceName.c_str()));
  }

  if (m_sourceTableNameHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("sourceTableName"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_sourceTableName.c_str()));
  }

  if (m_targetKeyspaceNameHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("targetKeyspaceName"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_targetKeyspaceName.c_str()));
  }

  if (m_targetTableNameHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("targetTableName"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_targetTableName.c_str()));
  }

  if (m_restoreTimestampHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("restoreTimestamp"));
    encoder.WriteTag(1);  // 1 represents Epoch-based date/time. See https://www.rfc-editor.org/rfc/rfc8949.html#tags
    encoder.WriteUInt(m_restoreTimestamp.Seconds());
  }

  if (m_capacitySpecificationOverrideHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("capacitySpecificationOverride"));
    m_capacitySpecificationOverride.CborEncode(encoder);
  }

  if (m_encryptionSpecificationOverrideHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("encryptionSpecificationOverride"));
    m_encryptionSpecificationOverride.CborEncode(encoder);
  }

  if (m_pointInTimeRecoveryOverrideHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("pointInTimeRecoveryOverride"));
    m_pointInTimeRecoveryOverride.CborEncode(encoder);
  }

  if (m_tagsOverrideHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("tagsOverride"));
    encoder.WriteArrayStart(m_tagsOverride.size());
    for (const auto& item_0 : m_tagsOverride) {
      item_0.CborEncode(encoder);
    }
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
  const auto str = Aws::String(reinterpret_cast<char*>(encoder.GetEncodedData().ptr), encoder.GetEncodedData().len);
  return str;
}

Aws::Http::HeaderValueCollection RestoreTableRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.emplace(Aws::Http::CONTENT_TYPE_HEADER, Aws::CBOR_CONTENT_TYPE);
  headers.emplace(Aws::Http::SMITHY_PROTOCOL_HEADER, Aws::RPC_V2_CBOR);
  headers.emplace(Aws::Http::ACCEPT_HEADER, Aws::CBOR_CONTENT_TYPE);
  return headers;
}
