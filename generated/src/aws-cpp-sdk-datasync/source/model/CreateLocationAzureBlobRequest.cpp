/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/crt/cbor/Cbor.h>
#include <aws/datasync/model/CreateLocationAzureBlobRequest.h>

#include <utility>

using namespace Aws::DataSync::Model;
using namespace Aws::Crt::Cbor;
using namespace Aws::Utils;

Aws::String CreateLocationAzureBlobRequest::SerializePayload() const {
  Aws::Crt::Cbor::CborEncoder encoder;

  // Calculate map size
  size_t mapSize = 0;
  if (m_containerUrlHasBeenSet) {
    mapSize++;
  }
  if (m_authenticationTypeHasBeenSet) {
    mapSize++;
  }
  if (m_sasConfigurationHasBeenSet) {
    mapSize++;
  }
  if (m_federatedIdentityHasBeenSet) {
    mapSize++;
  }
  if (m_blobTypeHasBeenSet) {
    mapSize++;
  }
  if (m_accessTierHasBeenSet) {
    mapSize++;
  }
  if (m_subdirectoryHasBeenSet) {
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

  if (m_containerUrlHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("ContainerUrl"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_containerUrl.c_str()));
  }

  if (m_authenticationTypeHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("AuthenticationType"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(
        AzureBlobAuthenticationTypeMapper::GetNameForAzureBlobAuthenticationType(m_authenticationType).c_str()));
  }

  if (m_sasConfigurationHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("SasConfiguration"));
    m_sasConfiguration.CborEncode(encoder);
  }

  if (m_federatedIdentityHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("FederatedIdentity"));
    m_federatedIdentity.CborEncode(encoder);
  }

  if (m_blobTypeHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("BlobType"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(AzureBlobTypeMapper::GetNameForAzureBlobType(m_blobType).c_str()));
  }

  if (m_accessTierHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("AccessTier"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(AzureAccessTierMapper::GetNameForAzureAccessTier(m_accessTier).c_str()));
  }

  if (m_subdirectoryHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("Subdirectory"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_subdirectory.c_str()));
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

Aws::Http::HeaderValueCollection CreateLocationAzureBlobRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.emplace(Aws::Http::CONTENT_TYPE_HEADER, Aws::CBOR_CONTENT_TYPE);
  headers.emplace(Aws::Http::SMITHY_PROTOCOL_HEADER, Aws::RPC_V2_CBOR);
  headers.emplace(Aws::Http::ACCEPT_HEADER, Aws::CBOR_CONTENT_TYPE);
  return headers;
}
