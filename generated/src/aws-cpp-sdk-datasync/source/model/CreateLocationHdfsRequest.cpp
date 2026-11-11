/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/HashingUtils.h>
#include <aws/crt/cbor/Cbor.h>
#include <aws/datasync/model/CreateLocationHdfsRequest.h>

#include <utility>

using namespace Aws::DataSync::Model;
using namespace Aws::Crt::Cbor;
using namespace Aws::Utils;

Aws::String CreateLocationHdfsRequest::SerializePayload() const {
  Aws::Crt::Cbor::CborEncoder encoder;

  // Calculate map size
  size_t mapSize = 0;
  if (m_subdirectoryHasBeenSet) {
    mapSize++;
  }
  if (m_nameNodesHasBeenSet) {
    mapSize++;
  }
  if (m_blockSizeHasBeenSet) {
    mapSize++;
  }
  if (m_replicationFactorHasBeenSet) {
    mapSize++;
  }
  if (m_kmsKeyProviderUriHasBeenSet) {
    mapSize++;
  }
  if (m_qopConfigurationHasBeenSet) {
    mapSize++;
  }
  if (m_authenticationTypeHasBeenSet) {
    mapSize++;
  }
  if (m_simpleUserHasBeenSet) {
    mapSize++;
  }
  if (m_kerberosPrincipalHasBeenSet) {
    mapSize++;
  }
  if (m_kerberosKeytabHasBeenSet) {
    mapSize++;
  }
  if (m_kerberosKrb5ConfHasBeenSet) {
    mapSize++;
  }
  if (m_agentArnsHasBeenSet) {
    mapSize++;
  }
  if (m_tagsHasBeenSet) {
    mapSize++;
  }
  if (m_cmkSecretConfigHasBeenSet) {
    mapSize++;
  }
  if (m_customSecretConfigHasBeenSet) {
    mapSize++;
  }

  encoder.WriteMapStart(mapSize);

  if (m_subdirectoryHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("Subdirectory"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_subdirectory.c_str()));
  }

  if (m_nameNodesHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("NameNodes"));
    encoder.WriteArrayStart(m_nameNodes.size());
    for (const auto& item_0 : m_nameNodes) {
      item_0.CborEncode(encoder);
    }
  }

  if (m_blockSizeHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("BlockSize"));
    (m_blockSize >= 0) ? encoder.WriteUInt(m_blockSize) : encoder.WriteNegInt(m_blockSize);
  }

  if (m_replicationFactorHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("ReplicationFactor"));
    (m_replicationFactor >= 0) ? encoder.WriteUInt(m_replicationFactor) : encoder.WriteNegInt(m_replicationFactor);
  }

  if (m_kmsKeyProviderUriHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("KmsKeyProviderUri"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_kmsKeyProviderUri.c_str()));
  }

  if (m_qopConfigurationHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("QopConfiguration"));
    m_qopConfiguration.CborEncode(encoder);
  }

  if (m_authenticationTypeHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("AuthenticationType"));
    encoder.WriteText(
        Aws::Crt::ByteCursorFromCString(HdfsAuthenticationTypeMapper::GetNameForHdfsAuthenticationType(m_authenticationType).c_str()));
  }

  if (m_simpleUserHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("SimpleUser"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_simpleUser.c_str()));
  }

  if (m_kerberosPrincipalHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("KerberosPrincipal"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_kerberosPrincipal.c_str()));
  }

  if (m_kerberosKeytabHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("KerberosKeytab"));
    encoder.WriteBytes(Aws::Crt::ByteCursorFromArray(m_kerberosKeytab.GetUnderlyingData(), m_kerberosKeytab.GetLength()));
  }

  if (m_kerberosKrb5ConfHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("KerberosKrb5Conf"));
    encoder.WriteBytes(Aws::Crt::ByteCursorFromArray(m_kerberosKrb5Conf.GetUnderlyingData(), m_kerberosKrb5Conf.GetLength()));
  }

  if (m_agentArnsHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("AgentArns"));
    encoder.WriteArrayStart(m_agentArns.size());
    for (const auto& item_0 : m_agentArns) {
      encoder.WriteText(Aws::Crt::ByteCursorFromCString(item_0.c_str()));
    }
  }

  if (m_tagsHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("Tags"));
    encoder.WriteArrayStart(m_tags.size());
    for (const auto& item_0 : m_tags) {
      item_0.CborEncode(encoder);
    }
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

Aws::Http::HeaderValueCollection CreateLocationHdfsRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.emplace(Aws::Http::CONTENT_TYPE_HEADER, Aws::CBOR_CONTENT_TYPE);
  headers.emplace(Aws::Http::SMITHY_PROTOCOL_HEADER, Aws::RPC_V2_CBOR);
  headers.emplace(Aws::Http::ACCEPT_HEADER, Aws::CBOR_CONTENT_TYPE);
  return headers;
}
