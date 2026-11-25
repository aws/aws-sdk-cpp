/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/crt/cbor/Cbor.h>
#include <aws/elb-proxy/model/UpdateProxyConfigurationRequest.h>

#include <utility>

using namespace Aws::ELBProxy::Model;
using namespace Aws::Crt::Cbor;
using namespace Aws::Utils;

Aws::String UpdateProxyConfigurationRequest::SerializePayload() const {
  Aws::Crt::Cbor::CborEncoder encoder;

  // Calculate map size
  size_t mapSize = 0;
  if (m_proxyIdentifierHasBeenSet) {
    mapSize++;
  }
  if (m_configurationFileHasBeenSet) {
    mapSize++;
  }
  if (m_configurationArchiveHasBeenSet) {
    mapSize++;
  }
  if (m_resetConfigurationArchiveHasBeenSet) {
    mapSize++;
  }
  if (m_customerKmsKeyArnHasBeenSet) {
    mapSize++;
  }
  if (m_resetCustomerKmsKeyArnHasBeenSet) {
    mapSize++;
  }

  encoder.WriteMapStart(mapSize);

  if (m_proxyIdentifierHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("proxyIdentifier"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_proxyIdentifier.c_str()));
  }

  if (m_configurationFileHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("configurationFile"));
    m_configurationFile.CborEncode(encoder);
  }

  if (m_configurationArchiveHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("configurationArchive"));
    m_configurationArchive.CborEncode(encoder);
  }

  if (m_resetConfigurationArchiveHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("resetConfigurationArchive"));
    encoder.WriteBool(m_resetConfigurationArchive);
  }

  if (m_customerKmsKeyArnHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("customerKmsKeyArn"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_customerKmsKeyArn.c_str()));
  }

  if (m_resetCustomerKmsKeyArnHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("resetCustomerKmsKeyArn"));
    encoder.WriteBool(m_resetCustomerKmsKeyArn);
  }
  const auto str = Aws::String(reinterpret_cast<char*>(encoder.GetEncodedData().ptr), encoder.GetEncodedData().len);
  return str;
}

Aws::Http::HeaderValueCollection UpdateProxyConfigurationRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.emplace(Aws::Http::CONTENT_TYPE_HEADER, Aws::CBOR_CONTENT_TYPE);
  headers.emplace(Aws::Http::SMITHY_PROTOCOL_HEADER, Aws::RPC_V2_CBOR);
  headers.emplace(Aws::Http::ACCEPT_HEADER, Aws::CBOR_CONTENT_TYPE);
  return headers;
}
