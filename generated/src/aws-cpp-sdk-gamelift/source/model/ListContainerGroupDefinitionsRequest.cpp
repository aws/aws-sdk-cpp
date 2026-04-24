/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/crt/cbor/Cbor.h>
#include <aws/gamelift/model/ListContainerGroupDefinitionsRequest.h>

#include <utility>

using namespace Aws::GameLift::Model;
using namespace Aws::Crt::Cbor;
using namespace Aws::Utils;

Aws::String ListContainerGroupDefinitionsRequest::SerializePayload() const {
  Aws::Crt::Cbor::CborEncoder encoder;

  // Calculate map size
  size_t mapSize = 0;
  if (m_containerGroupTypeHasBeenSet) {
    mapSize++;
  }
  if (m_limitHasBeenSet) {
    mapSize++;
  }
  if (m_nextTokenHasBeenSet) {
    mapSize++;
  }

  encoder.WriteMapStart(mapSize);

  if (m_containerGroupTypeHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("ContainerGroupType"));
    encoder.WriteText(
        Aws::Crt::ByteCursorFromCString(ContainerGroupTypeMapper::GetNameForContainerGroupType(m_containerGroupType).c_str()));
  }

  if (m_limitHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("Limit"));
    (m_limit >= 0) ? encoder.WriteUInt(m_limit) : encoder.WriteNegInt(m_limit);
  }

  if (m_nextTokenHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("NextToken"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_nextToken.c_str()));
  }
  const auto str = Aws::String(reinterpret_cast<char*>(encoder.GetEncodedData().ptr), encoder.GetEncodedData().len);
  return str;
}

Aws::Http::HeaderValueCollection ListContainerGroupDefinitionsRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.emplace(Aws::Http::CONTENT_TYPE_HEADER, Aws::CBOR_CONTENT_TYPE);
  headers.emplace(Aws::Http::SMITHY_PROTOCOL_HEADER, Aws::RPC_V2_CBOR);
  headers.emplace(Aws::Http::ACCEPT_HEADER, Aws::CBOR_CONTENT_TYPE);
  return headers;
}
