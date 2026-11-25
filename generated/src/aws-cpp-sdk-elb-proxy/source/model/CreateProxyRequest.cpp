/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/crt/cbor/Cbor.h>
#include <aws/elb-proxy/model/CreateProxyRequest.h>

#include <utility>

using namespace Aws::ELBProxy::Model;
using namespace Aws::Crt::Cbor;
using namespace Aws::Utils;

Aws::String CreateProxyRequest::SerializePayload() const {
  Aws::Crt::Cbor::CborEncoder encoder;

  // Calculate map size
  size_t mapSize = 0;
  if (m_nameHasBeenSet) {
    mapSize++;
  }
  if (m_typeHasBeenSet) {
    mapSize++;
  }
  if (m_proxyVersionHasBeenSet) {
    mapSize++;
  }
  if (m_roleArnHasBeenSet) {
    mapSize++;
  }
  if (m_configurationHasBeenSet) {
    mapSize++;
  }
  if (m_networkConfigurationHasBeenSet) {
    mapSize++;
  }
  if (m_attributesHasBeenSet) {
    mapSize++;
  }
  if (m_customerKmsKeyArnHasBeenSet) {
    mapSize++;
  }
  if (m_tagsHasBeenSet) {
    mapSize++;
  }
  if (m_clientTokenHasBeenSet) {
    mapSize++;
  }

  encoder.WriteMapStart(mapSize);

  if (m_nameHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("name"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_name.c_str()));
  }

  if (m_typeHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("type"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(ProxyTypeMapper::GetNameForProxyType(m_type).c_str()));
  }

  if (m_proxyVersionHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("proxyVersion"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_proxyVersion.c_str()));
  }

  if (m_roleArnHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("roleArn"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_roleArn.c_str()));
  }

  if (m_configurationHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("configuration"));
    m_configuration.CborEncode(encoder);
  }

  if (m_networkConfigurationHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("networkConfiguration"));
    m_networkConfiguration.CborEncode(encoder);
  }

  if (m_attributesHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("attributes"));
    encoder.WriteArrayStart(m_attributes.size());
    for (const auto& item_0 : m_attributes) {
      item_0.CborEncode(encoder);
    }
  }

  if (m_customerKmsKeyArnHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("customerKmsKeyArn"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_customerKmsKeyArn.c_str()));
  }

  if (m_tagsHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("tags"));
    encoder.WriteMapStart(m_tags.size());
    for (const auto& item_0 : m_tags) {
      encoder.WriteText(Aws::Crt::ByteCursorFromCString(item_0.first.c_str()));
      encoder.WriteText(Aws::Crt::ByteCursorFromCString(item_0.second.c_str()));
    }
  }

  if (m_clientTokenHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("clientToken"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_clientToken.c_str()));
  }
  const auto str = Aws::String(reinterpret_cast<char*>(encoder.GetEncodedData().ptr), encoder.GetEncodedData().len);
  return str;
}

Aws::Http::HeaderValueCollection CreateProxyRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.emplace(Aws::Http::CONTENT_TYPE_HEADER, Aws::CBOR_CONTENT_TYPE);
  headers.emplace(Aws::Http::SMITHY_PROTOCOL_HEADER, Aws::RPC_V2_CBOR);
  headers.emplace(Aws::Http::ACCEPT_HEADER, Aws::CBOR_CONTENT_TYPE);
  return headers;
}
