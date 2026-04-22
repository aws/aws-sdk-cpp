/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/crt/cbor/Cbor.h>
#include <aws/gamelift/model/CreateMatchmakingConfigurationRequest.h>

#include <utility>

using namespace Aws::GameLift::Model;
using namespace Aws::Crt::Cbor;
using namespace Aws::Utils;

Aws::String CreateMatchmakingConfigurationRequest::SerializePayload() const {
  Aws::Crt::Cbor::CborEncoder encoder;

  // Calculate map size
  size_t mapSize = 0;
  if (m_nameHasBeenSet) {
    mapSize++;
  }
  if (m_descriptionHasBeenSet) {
    mapSize++;
  }
  if (m_gameSessionQueueArnsHasBeenSet) {
    mapSize++;
  }
  if (m_requestTimeoutSecondsHasBeenSet) {
    mapSize++;
  }
  if (m_acceptanceTimeoutSecondsHasBeenSet) {
    mapSize++;
  }
  if (m_acceptanceRequiredHasBeenSet) {
    mapSize++;
  }
  if (m_ruleSetNameHasBeenSet) {
    mapSize++;
  }
  if (m_notificationTargetHasBeenSet) {
    mapSize++;
  }
  if (m_additionalPlayerCountHasBeenSet) {
    mapSize++;
  }
  if (m_customEventDataHasBeenSet) {
    mapSize++;
  }
  if (m_gamePropertiesHasBeenSet) {
    mapSize++;
  }
  if (m_gameSessionDataHasBeenSet) {
    mapSize++;
  }
  if (m_backfillModeHasBeenSet) {
    mapSize++;
  }
  if (m_flexMatchModeHasBeenSet) {
    mapSize++;
  }
  if (m_tagsHasBeenSet) {
    mapSize++;
  }

  encoder.WriteMapStart(mapSize);

  if (m_nameHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("Name"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_name.c_str()));
  }

  if (m_descriptionHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("Description"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_description.c_str()));
  }

  if (m_gameSessionQueueArnsHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("GameSessionQueueArns"));
    encoder.WriteArrayStart(m_gameSessionQueueArns.size());
    for (const auto& item_0 : m_gameSessionQueueArns) {
      encoder.WriteText(Aws::Crt::ByteCursorFromCString(item_0.c_str()));
    }
  }

  if (m_requestTimeoutSecondsHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("RequestTimeoutSeconds"));
    (m_requestTimeoutSeconds >= 0) ? encoder.WriteUInt(m_requestTimeoutSeconds) : encoder.WriteNegInt(m_requestTimeoutSeconds);
  }

  if (m_acceptanceTimeoutSecondsHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("AcceptanceTimeoutSeconds"));
    (m_acceptanceTimeoutSeconds >= 0) ? encoder.WriteUInt(m_acceptanceTimeoutSeconds) : encoder.WriteNegInt(m_acceptanceTimeoutSeconds);
  }

  if (m_acceptanceRequiredHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("AcceptanceRequired"));
    encoder.WriteBool(m_acceptanceRequired);
  }

  if (m_ruleSetNameHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("RuleSetName"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_ruleSetName.c_str()));
  }

  if (m_notificationTargetHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("NotificationTarget"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_notificationTarget.c_str()));
  }

  if (m_additionalPlayerCountHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("AdditionalPlayerCount"));
    (m_additionalPlayerCount >= 0) ? encoder.WriteUInt(m_additionalPlayerCount) : encoder.WriteNegInt(m_additionalPlayerCount);
  }

  if (m_customEventDataHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("CustomEventData"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_customEventData.c_str()));
  }

  if (m_gamePropertiesHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("GameProperties"));
    encoder.WriteArrayStart(m_gameProperties.size());
    for (const auto& item_0 : m_gameProperties) {
      item_0.CborEncode(encoder);
    }
  }

  if (m_gameSessionDataHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("GameSessionData"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_gameSessionData.c_str()));
  }

  if (m_backfillModeHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("BackfillMode"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(BackfillModeMapper::GetNameForBackfillMode(m_backfillMode).c_str()));
  }

  if (m_flexMatchModeHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("FlexMatchMode"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(FlexMatchModeMapper::GetNameForFlexMatchMode(m_flexMatchMode).c_str()));
  }

  if (m_tagsHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("Tags"));
    encoder.WriteArrayStart(m_tags.size());
    for (const auto& item_0 : m_tags) {
      item_0.CborEncode(encoder);
    }
  }
  const auto str = Aws::String(reinterpret_cast<char*>(encoder.GetEncodedData().ptr), encoder.GetEncodedData().len);
  return str;
}

Aws::Http::HeaderValueCollection CreateMatchmakingConfigurationRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.emplace(Aws::Http::CONTENT_TYPE_HEADER, Aws::CBOR_CONTENT_TYPE);
  headers.emplace(Aws::Http::SMITHY_PROTOCOL_HEADER, Aws::RPC_V2_CBOR);
  headers.emplace(Aws::Http::ACCEPT_HEADER, Aws::CBOR_CONTENT_TYPE);
  return headers;
}
