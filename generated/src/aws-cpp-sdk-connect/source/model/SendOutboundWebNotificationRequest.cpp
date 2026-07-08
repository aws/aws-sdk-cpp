/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/SendOutboundWebNotificationRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Connect::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String SendOutboundWebNotificationRequest::SerializePayload() const {
  JsonValue payload;

  if (m_clientTokenHasBeenSet) {
    payload.WithString("ClientToken", m_clientToken);
  }

  if (m_browserIdHasBeenSet) {
    payload.WithString("BrowserId", m_browserId);
  }

  if (m_sessionIdHasBeenSet) {
    payload.WithString("SessionId", m_sessionId);
  }

  if (m_expiresAtHasBeenSet) {
    payload.WithDouble("ExpiresAt", m_expiresAt.SecondsWithMSPrecision());
  }

  if (m_sourceHasBeenSet) {
    payload.WithObject("Source", m_source.Jsonize());
  }

  if (m_destinationHasBeenSet) {
    payload.WithObject("Destination", m_destination.Jsonize());
  }

  if (m_contentHasBeenSet) {
    payload.WithObject("Content", m_content.Jsonize());
  }

  return payload.View().WriteReadable();
}
