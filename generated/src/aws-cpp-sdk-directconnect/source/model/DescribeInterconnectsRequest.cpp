﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/directconnect/model/DescribeInterconnectsRequest.h>

#include <utility>

using namespace Aws::DirectConnect::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String DescribeInterconnectsRequest::SerializePayload() const {
  JsonValue payload;

  if (m_interconnectIdHasBeenSet) {
    payload.WithString("interconnectId", m_interconnectId);
  }

  if (m_maxResultsHasBeenSet) {
    payload.WithInteger("maxResults", m_maxResults);
  }

  if (m_nextTokenHasBeenSet) {
    payload.WithString("nextToken", m_nextToken);
  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection DescribeInterconnectsRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "OvertureService.DescribeInterconnects"));
  return headers;
}
