/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudwatchomni/model/UpdateDomainRequest.h>
#include <aws/crt/cbor/Cbor.h>

#include <utility>

using namespace Aws::CloudWatchOmni::Model;
using namespace Aws::Crt::Cbor;
using namespace Aws::Utils;

Aws::String UpdateDomainRequest::SerializePayload() const {
  Aws::Crt::Cbor::CborEncoder encoder;

  // Calculate map size
  size_t mapSize = 0;
  if (m_domainIdHasBeenSet) {
    mapSize++;
  }
  if (m_nameHasBeenSet) {
    mapSize++;
  }
  if (m_identityProvidersHasBeenSet) {
    mapSize++;
  }
  if (m_identityProviderConfigurationHasBeenSet) {
    mapSize++;
  }

  encoder.WriteMapStart(mapSize);

  if (m_domainIdHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("domainId"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_domainId.c_str()));
  }

  if (m_nameHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("name"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_name.c_str()));
  }

  if (m_identityProvidersHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("identityProviders"));
    encoder.WriteArrayStart(m_identityProviders.size());
    for (const auto& item_0 : m_identityProviders) {
      encoder.WriteText(Aws::Crt::ByteCursorFromCString(IdentityProviderMapper::GetNameForIdentityProvider(item_0).c_str()));
    }
  }

  if (m_identityProviderConfigurationHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("identityProviderConfiguration"));
    m_identityProviderConfiguration.CborEncode(encoder);
  }
  const auto str = Aws::String(reinterpret_cast<char*>(encoder.GetEncodedData().ptr), encoder.GetEncodedData().len);
  return str;
}

Aws::Http::HeaderValueCollection UpdateDomainRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.emplace(Aws::Http::CONTENT_TYPE_HEADER, Aws::CBOR_CONTENT_TYPE);
  headers.emplace(Aws::Http::SMITHY_PROTOCOL_HEADER, Aws::RPC_V2_CBOR);
  headers.emplace(Aws::Http::ACCEPT_HEADER, Aws::CBOR_CONTENT_TYPE);
  return headers;
}
