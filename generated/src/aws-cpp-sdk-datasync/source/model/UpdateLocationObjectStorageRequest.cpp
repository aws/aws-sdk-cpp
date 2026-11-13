/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/HashingUtils.h>
#include <aws/crt/cbor/Cbor.h>
#include <aws/datasync/model/UpdateLocationObjectStorageRequest.h>

#include <utility>

using namespace Aws::DataSync::Model;
using namespace Aws::Crt::Cbor;
using namespace Aws::Utils;

Aws::String UpdateLocationObjectStorageRequest::SerializePayload() const {
  Aws::Crt::Cbor::CborEncoder encoder;

  // Calculate map size
  size_t mapSize = 0;
  if (m_locationArnHasBeenSet) {
    mapSize++;
  }
  if (m_serverPortHasBeenSet) {
    mapSize++;
  }
  if (m_serverProtocolHasBeenSet) {
    mapSize++;
  }
  if (m_subdirectoryHasBeenSet) {
    mapSize++;
  }
  if (m_serverHostnameHasBeenSet) {
    mapSize++;
  }
  if (m_accessKeyHasBeenSet) {
    mapSize++;
  }
  if (m_secretKeyHasBeenSet) {
    mapSize++;
  }
  if (m_federatedIdentityHasBeenSet) {
    mapSize++;
  }
  if (m_agentArnsHasBeenSet) {
    mapSize++;
  }
  if (m_serverCertificateHasBeenSet) {
    mapSize++;
  }
  if (m_cmkSecretConfigHasBeenSet) {
    mapSize++;
  }
  if (m_customSecretConfigHasBeenSet) {
    mapSize++;
  }

  encoder.WriteMapStart(mapSize);

  if (m_locationArnHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("LocationArn"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_locationArn.c_str()));
  }

  if (m_serverPortHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("ServerPort"));
    (m_serverPort >= 0) ? encoder.WriteUInt(m_serverPort) : encoder.WriteNegInt(m_serverPort);
  }

  if (m_serverProtocolHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("ServerProtocol"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(
        ObjectStorageServerProtocolMapper::GetNameForObjectStorageServerProtocol(m_serverProtocol).c_str()));
  }

  if (m_subdirectoryHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("Subdirectory"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_subdirectory.c_str()));
  }

  if (m_serverHostnameHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("ServerHostname"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_serverHostname.c_str()));
  }

  if (m_accessKeyHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("AccessKey"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_accessKey.c_str()));
  }

  if (m_secretKeyHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("SecretKey"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_secretKey.c_str()));
  }

  if (m_federatedIdentityHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("FederatedIdentity"));
    m_federatedIdentity.CborEncode(encoder);
  }

  if (m_agentArnsHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("AgentArns"));
    encoder.WriteArrayStart(m_agentArns.size());
    for (const auto& item_0 : m_agentArns) {
      encoder.WriteText(Aws::Crt::ByteCursorFromCString(item_0.c_str()));
    }
  }

  if (m_serverCertificateHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("ServerCertificate"));
    encoder.WriteBytes(Aws::Crt::ByteCursorFromArray(m_serverCertificate.GetUnderlyingData(), m_serverCertificate.GetLength()));
  }

  if (m_cmkSecretConfigHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("CmkSecretConfig"));
    m_cmkSecretConfig.CborEncode(encoder);
  }

  if (m_customSecretConfigHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("CustomSecretConfig"));
    m_customSecretConfig.CborEncode(encoder);
  }
  const auto str = Aws::String(reinterpret_cast<char*>(encoder.GetEncodedData().ptr), encoder.GetEncodedData().len);
  return str;
}

Aws::Http::HeaderValueCollection UpdateLocationObjectStorageRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.emplace(Aws::Http::CONTENT_TYPE_HEADER, Aws::CBOR_CONTENT_TYPE);
  headers.emplace(Aws::Http::SMITHY_PROTOCOL_HEADER, Aws::RPC_V2_CBOR);
  headers.emplace(Aws::Http::ACCEPT_HEADER, Aws::CBOR_CONTENT_TYPE);
  return headers;
}
