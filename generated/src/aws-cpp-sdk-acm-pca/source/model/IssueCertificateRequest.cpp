/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/acm-pca/model/IssueCertificateRequest.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/crt/cbor/Cbor.h>

#include <utility>

using namespace Aws::ACMPCA::Model;
using namespace Aws::Crt::Cbor;
using namespace Aws::Utils;

Aws::String IssueCertificateRequest::SerializePayload() const {
  Aws::Crt::Cbor::CborEncoder encoder;

  // Calculate map size
  size_t mapSize = 0;
  if (m_apiPassthroughHasBeenSet) {
    mapSize++;
  }
  if (m_certificateAuthorityArnHasBeenSet) {
    mapSize++;
  }
  if (m_csrHasBeenSet) {
    mapSize++;
  }
  if (m_signingAlgorithmHasBeenSet) {
    mapSize++;
  }
  if (m_templateArnHasBeenSet) {
    mapSize++;
  }
  if (m_validityHasBeenSet) {
    mapSize++;
  }
  if (m_validityNotBeforeHasBeenSet) {
    mapSize++;
  }
  if (m_idempotencyTokenHasBeenSet) {
    mapSize++;
  }

  encoder.WriteMapStart(mapSize);

  if (m_apiPassthroughHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("ApiPassthrough"));
    m_apiPassthrough.CborEncode(encoder);
  }

  if (m_certificateAuthorityArnHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("CertificateAuthorityArn"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_certificateAuthorityArn.c_str()));
  }

  if (m_csrHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("Csr"));
    encoder.WriteBytes(Aws::Crt::ByteCursorFromArray(m_csr.GetUnderlyingData(), m_csr.GetLength()));
  }

  if (m_signingAlgorithmHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("SigningAlgorithm"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(SigningAlgorithmMapper::GetNameForSigningAlgorithm(m_signingAlgorithm).c_str()));
  }

  if (m_templateArnHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("TemplateArn"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_templateArn.c_str()));
  }

  if (m_validityHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("Validity"));
    m_validity.CborEncode(encoder);
  }

  if (m_validityNotBeforeHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("ValidityNotBefore"));
    m_validityNotBefore.CborEncode(encoder);
  }

  if (m_idempotencyTokenHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("IdempotencyToken"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_idempotencyToken.c_str()));
  }
  const auto str = Aws::String(reinterpret_cast<char*>(encoder.GetEncodedData().ptr), encoder.GetEncodedData().len);
  return str;
}

Aws::Http::HeaderValueCollection IssueCertificateRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.emplace(Aws::Http::CONTENT_TYPE_HEADER, Aws::CBOR_CONTENT_TYPE);
  headers.emplace(Aws::Http::SMITHY_PROTOCOL_HEADER, Aws::RPC_V2_CBOR);
  headers.emplace(Aws::Http::ACCEPT_HEADER, Aws::CBOR_CONTENT_TYPE);
  return headers;
}
