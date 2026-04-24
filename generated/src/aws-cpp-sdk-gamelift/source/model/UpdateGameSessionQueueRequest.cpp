/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/crt/cbor/Cbor.h>
#include <aws/gamelift/model/UpdateGameSessionQueueRequest.h>

#include <utility>

using namespace Aws::GameLift::Model;
using namespace Aws::Crt::Cbor;
using namespace Aws::Utils;

Aws::String UpdateGameSessionQueueRequest::SerializePayload() const {
  Aws::Crt::Cbor::CborEncoder encoder;

  // Calculate map size
  size_t mapSize = 0;
  if (m_nameHasBeenSet) {
    mapSize++;
  }
  if (m_timeoutInSecondsHasBeenSet) {
    mapSize++;
  }
  if (m_playerLatencyPoliciesHasBeenSet) {
    mapSize++;
  }
  if (m_destinationsHasBeenSet) {
    mapSize++;
  }
  if (m_filterConfigurationHasBeenSet) {
    mapSize++;
  }
  if (m_priorityConfigurationHasBeenSet) {
    mapSize++;
  }
  if (m_customEventDataHasBeenSet) {
    mapSize++;
  }
  if (m_notificationTargetHasBeenSet) {
    mapSize++;
  }

  encoder.WriteMapStart(mapSize);

  if (m_nameHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("Name"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_name.c_str()));
  }

  if (m_timeoutInSecondsHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("TimeoutInSeconds"));
    (m_timeoutInSeconds >= 0) ? encoder.WriteUInt(m_timeoutInSeconds) : encoder.WriteNegInt(m_timeoutInSeconds);
  }

  if (m_playerLatencyPoliciesHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("PlayerLatencyPolicies"));
    encoder.WriteArrayStart(m_playerLatencyPolicies.size());
    for (const auto& item_0 : m_playerLatencyPolicies) {
      item_0.CborEncode(encoder);
    }
  }

  if (m_destinationsHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("Destinations"));
    encoder.WriteArrayStart(m_destinations.size());
    for (const auto& item_0 : m_destinations) {
      item_0.CborEncode(encoder);
    }
  }

  if (m_filterConfigurationHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("FilterConfiguration"));
    m_filterConfiguration.CborEncode(encoder);
  }

  if (m_priorityConfigurationHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("PriorityConfiguration"));
    m_priorityConfiguration.CborEncode(encoder);
  }

  if (m_customEventDataHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("CustomEventData"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_customEventData.c_str()));
  }

  if (m_notificationTargetHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("NotificationTarget"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_notificationTarget.c_str()));
  }
  const auto str = Aws::String(reinterpret_cast<char*>(encoder.GetEncodedData().ptr), encoder.GetEncodedData().len);
  return str;
}

Aws::Http::HeaderValueCollection UpdateGameSessionQueueRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.emplace(Aws::Http::CONTENT_TYPE_HEADER, Aws::CBOR_CONTENT_TYPE);
  headers.emplace(Aws::Http::SMITHY_PROTOCOL_HEADER, Aws::RPC_V2_CBOR);
  headers.emplace(Aws::Http::ACCEPT_HEADER, Aws::CBOR_CONTENT_TYPE);
  return headers;
}
