/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/application-signals/model/ListInstrumentationConfigurationsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::ApplicationSignals::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String ListInstrumentationConfigurationsRequest::SerializePayload() const {
  JsonValue payload;

  if (m_serviceHasBeenSet) {
    payload.WithString("Service", m_service);
  }

  if (m_environmentHasBeenSet) {
    payload.WithString("Environment", m_environment);
  }

  if (m_instrumentationTypeHasBeenSet) {
    payload.WithString("InstrumentationType", InstrumentationTypeMapper::GetNameForInstrumentationType(m_instrumentationType));
  }

  if (m_syncedAtHasBeenSet) {
    payload.WithDouble("SyncedAt", m_syncedAt.SecondsWithMSPrecision());
  }

  if (m_maxResultsHasBeenSet) {
    payload.WithInteger("MaxResults", m_maxResults);
  }

  if (m_nextTokenHasBeenSet) {
    payload.WithString("NextToken", m_nextToken);
  }

  return payload.View().WriteReadable();
}
