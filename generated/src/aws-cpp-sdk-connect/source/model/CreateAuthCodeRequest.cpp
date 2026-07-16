/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/CreateAuthCodeRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Connect::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String CreateAuthCodeRequest::SerializePayload() const {
  JsonValue payload;

  if (m_scopeHasBeenSet) {
    payload.WithObject("Scope", m_scope.Jsonize());
  }

  if (m_maxSessionDurationMinutesHasBeenSet) {
    payload.WithInteger("MaxSessionDurationMinutes", m_maxSessionDurationMinutes);
  }

  if (m_sessionInactivityDurationMinutesHasBeenSet) {
    payload.WithInteger("SessionInactivityDurationMinutes", m_sessionInactivityDurationMinutes);
  }

  return payload.View().WriteReadable();
}
