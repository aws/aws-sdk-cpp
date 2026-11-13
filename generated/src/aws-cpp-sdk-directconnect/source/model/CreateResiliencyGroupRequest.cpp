/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/crt/cbor/Cbor.h>
#include <aws/directconnect/model/CreateResiliencyGroupRequest.h>

#include <utility>

using namespace Aws::DirectConnect::Model;
using namespace Aws::Crt::Cbor;
using namespace Aws::Utils;

Aws::String CreateResiliencyGroupRequest::SerializePayload() const {
  Aws::Crt::Cbor::CborEncoder encoder;

  // Calculate map size
  size_t mapSize = 0;
  if (m_resiliencyGroupNameHasBeenSet) {
    mapSize++;
  }
  if (m_intendedResiliencyModelHasBeenSet) {
    mapSize++;
  }
  if (m_clientTokenHasBeenSet) {
    mapSize++;
  }
  if (m_tagsHasBeenSet) {
    mapSize++;
  }

  encoder.WriteMapStart(mapSize);

  if (m_resiliencyGroupNameHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("resiliencyGroupName"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_resiliencyGroupName.c_str()));
  }

  if (m_intendedResiliencyModelHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("intendedResiliencyModel"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(ResiliencyModelMapper::GetNameForResiliencyModel(m_intendedResiliencyModel).c_str()));
  }

  if (m_clientTokenHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("clientToken"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_clientToken.c_str()));
  }

  if (m_tagsHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("tags"));
    encoder.WriteArrayStart(m_tags.size());
    for (const auto& item_0 : m_tags) {
      item_0.CborEncode(encoder);
    }
  }
  const auto str = Aws::String(reinterpret_cast<char*>(encoder.GetEncodedData().ptr), encoder.GetEncodedData().len);
  return str;
}

Aws::Http::HeaderValueCollection CreateResiliencyGroupRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.emplace(Aws::Http::CONTENT_TYPE_HEADER, Aws::CBOR_CONTENT_TYPE);
  headers.emplace(Aws::Http::SMITHY_PROTOCOL_HEADER, Aws::RPC_V2_CBOR);
  headers.emplace(Aws::Http::ACCEPT_HEADER, Aws::CBOR_CONTENT_TYPE);
  return headers;
}
