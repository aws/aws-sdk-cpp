/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudwatchomni/model/UpdateAlertRequest.h>
#include <aws/crt/cbor/Cbor.h>

#include <utility>

using namespace Aws::CloudWatchOmni::Model;
using namespace Aws::Crt::Cbor;
using namespace Aws::Utils;

Aws::String UpdateAlertRequest::SerializePayload() const {
  Aws::Crt::Cbor::CborEncoder encoder;

  // Calculate map size
  size_t mapSize = 0;
  if (m_spaceIdHasBeenSet) {
    mapSize++;
  }
  if (m_alertIdHasBeenSet) {
    mapSize++;
  }
  if (m_profileIdHasBeenSet) {
    mapSize++;
  }
  if (m_nameHasBeenSet) {
    mapSize++;
  }
  if (m_descriptionHasBeenSet) {
    mapSize++;
  }
  if (m_ruleHasBeenSet) {
    mapSize++;
  }
  if (m_notificationsEnabledHasBeenSet) {
    mapSize++;
  }
  if (m_notificationRulesHasBeenSet) {
    mapSize++;
  }

  encoder.WriteMapStart(mapSize);

  if (m_spaceIdHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("spaceId"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_spaceId.c_str()));
  }

  if (m_alertIdHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("alertId"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_alertId.c_str()));
  }

  if (m_profileIdHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("profileId"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_profileId.c_str()));
  }

  if (m_nameHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("name"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_name.c_str()));
  }

  if (m_descriptionHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("description"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_description.c_str()));
  }

  if (m_ruleHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("rule"));
    m_rule.CborEncode(encoder);
  }

  if (m_notificationsEnabledHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("notificationsEnabled"));
    encoder.WriteBool(m_notificationsEnabled);
  }

  if (m_notificationRulesHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("notificationRules"));
    encoder.WriteArrayStart(m_notificationRules.size());
    for (const auto& item_0 : m_notificationRules) {
      item_0.CborEncode(encoder);
    }
  }
  const auto str = Aws::String(reinterpret_cast<char*>(encoder.GetEncodedData().ptr), encoder.GetEncodedData().len);
  return str;
}

Aws::Http::HeaderValueCollection UpdateAlertRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.emplace(Aws::Http::CONTENT_TYPE_HEADER, Aws::CBOR_CONTENT_TYPE);
  headers.emplace(Aws::Http::SMITHY_PROTOCOL_HEADER, Aws::RPC_V2_CBOR);
  headers.emplace(Aws::Http::ACCEPT_HEADER, Aws::CBOR_CONTENT_TYPE);
  return headers;
}
