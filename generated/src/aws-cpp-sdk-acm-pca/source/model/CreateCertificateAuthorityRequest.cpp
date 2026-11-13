/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/acm-pca/model/CreateCertificateAuthorityRequest.h>
#include <aws/crt/cbor/Cbor.h>

#include <utility>

using namespace Aws::ACMPCA::Model;
using namespace Aws::Crt::Cbor;
using namespace Aws::Utils;

Aws::String CreateCertificateAuthorityRequest::SerializePayload() const {
  Aws::Crt::Cbor::CborEncoder encoder;

  // Calculate map size
  size_t mapSize = 0;
  if (m_certificateAuthorityConfigurationHasBeenSet) {
    mapSize++;
  }
  if (m_revocationConfigurationHasBeenSet) {
    mapSize++;
  }
  if (m_certificateAuthorityTypeHasBeenSet) {
    mapSize++;
  }
  if (m_idempotencyTokenHasBeenSet) {
    mapSize++;
  }
  if (m_keyStorageSecurityStandardHasBeenSet) {
    mapSize++;
  }
  if (m_tagsHasBeenSet) {
    mapSize++;
  }
  if (m_usageModeHasBeenSet) {
    mapSize++;
  }

  encoder.WriteMapStart(mapSize);

  if (m_certificateAuthorityConfigurationHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("CertificateAuthorityConfiguration"));
    m_certificateAuthorityConfiguration.CborEncode(encoder);
  }

  if (m_revocationConfigurationHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("RevocationConfiguration"));
    m_revocationConfiguration.CborEncode(encoder);
  }

  if (m_certificateAuthorityTypeHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("CertificateAuthorityType"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(
        CertificateAuthorityTypeMapper::GetNameForCertificateAuthorityType(m_certificateAuthorityType).c_str()));
  }

  if (m_idempotencyTokenHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("IdempotencyToken"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_idempotencyToken.c_str()));
  }

  if (m_keyStorageSecurityStandardHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("KeyStorageSecurityStandard"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(
        KeyStorageSecurityStandardMapper::GetNameForKeyStorageSecurityStandard(m_keyStorageSecurityStandard).c_str()));
  }

  if (m_tagsHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("Tags"));
    encoder.WriteArrayStart(m_tags.size());
    for (const auto& item_0 : m_tags) {
      item_0.CborEncode(encoder);
    }
  }

  if (m_usageModeHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("UsageMode"));
    encoder.WriteText(
        Aws::Crt::ByteCursorFromCString(CertificateAuthorityUsageModeMapper::GetNameForCertificateAuthorityUsageMode(m_usageMode).c_str()));
  }
  const auto str = Aws::String(reinterpret_cast<char*>(encoder.GetEncodedData().ptr), encoder.GetEncodedData().len);
  return str;
}

Aws::Http::HeaderValueCollection CreateCertificateAuthorityRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.emplace(Aws::Http::CONTENT_TYPE_HEADER, Aws::CBOR_CONTENT_TYPE);
  headers.emplace(Aws::Http::SMITHY_PROTOCOL_HEADER, Aws::RPC_V2_CBOR);
  headers.emplace(Aws::Http::ACCEPT_HEADER, Aws::CBOR_CONTENT_TYPE);
  return headers;
}
