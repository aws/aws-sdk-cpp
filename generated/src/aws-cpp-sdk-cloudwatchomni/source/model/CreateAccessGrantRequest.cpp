/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudwatchomni/model/CreateAccessGrantRequest.h>
#include <aws/crt/cbor/Cbor.h>

#include <utility>

using namespace Aws::CloudWatchOmni::Model;
using namespace Aws::Crt::Cbor;
using namespace Aws::Utils;

Aws::String CreateAccessGrantRequest::SerializePayload() const {
  Aws::Crt::Cbor::CborEncoder encoder;

  // Calculate map size
  size_t mapSize = 0;
  if (m_domainIdHasBeenSet) {
    mapSize++;
  }
  if (m_spaceIdHasBeenSet) {
    mapSize++;
  }
  if (m_nameHasBeenSet) {
    mapSize++;
  }
  if (m_principalHasBeenSet) {
    mapSize++;
  }
  if (m_permissionHasBeenSet) {
    mapSize++;
  }
  if (m_scopedActionsHasBeenSet) {
    mapSize++;
  }
  if (m_tagsHasBeenSet) {
    mapSize++;
  }
  if (m_clientTokenHasBeenSet) {
    mapSize++;
  }

  encoder.WriteMapStart(mapSize);

  if (m_domainIdHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("domainId"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_domainId.c_str()));
  }

  if (m_spaceIdHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("spaceId"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_spaceId.c_str()));
  }

  if (m_nameHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("name"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_name.c_str()));
  }

  if (m_principalHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("principal"));
    m_principal.CborEncode(encoder);
  }

  if (m_permissionHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("permission"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(AccessGrantPermissionMapper::GetNameForAccessGrantPermission(m_permission).c_str()));
  }

  if (m_scopedActionsHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("scopedActions"));
    encoder.WriteArrayStart(m_scopedActions.size());
    for (const auto& item_0 : m_scopedActions) {
      item_0.CborEncode(encoder);
    }
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

Aws::Http::HeaderValueCollection CreateAccessGrantRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.emplace(Aws::Http::CONTENT_TYPE_HEADER, Aws::CBOR_CONTENT_TYPE);
  headers.emplace(Aws::Http::SMITHY_PROTOCOL_HEADER, Aws::RPC_V2_CBOR);
  headers.emplace(Aws::Http::ACCEPT_HEADER, Aws::CBOR_CONTENT_TYPE);
  return headers;
}
