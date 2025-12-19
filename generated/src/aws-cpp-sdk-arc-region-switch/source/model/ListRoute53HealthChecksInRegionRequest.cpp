/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/arc-region-switch/model/ListRoute53HealthChecksInRegionRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::ARCRegionswitch::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String ListRoute53HealthChecksInRegionRequest::SerializePayload() const {
  JsonValue payload;

  if (m_arnHasBeenSet) {
    payload.WithString("arn", m_arn);
  }

  if (m_hostedZoneIdHasBeenSet) {
    payload.WithString("hostedZoneId", m_hostedZoneId);
  }

  if (m_recordNameHasBeenSet) {
    payload.WithString("recordName", m_recordName);
  }

  if (m_maxResultsHasBeenSet) {
    payload.WithInteger("maxResults", m_maxResults);
  }

  if (m_nextTokenHasBeenSet) {
    payload.WithString("nextToken", m_nextToken);
  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection ListRoute53HealthChecksInRegionRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "ArcRegionSwitch.ListRoute53HealthChecksInRegion"));
  return headers;
}
