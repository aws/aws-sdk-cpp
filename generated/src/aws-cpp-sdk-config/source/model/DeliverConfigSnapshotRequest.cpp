﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/config/model/DeliverConfigSnapshotRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::ConfigService::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String DeliverConfigSnapshotRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_deliveryChannelNameHasBeenSet)
  {
   payload.WithString("deliveryChannelName", m_deliveryChannelName);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection DeliverConfigSnapshotRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "StarlingDoveService.DeliverConfigSnapshot"));
  return headers;

}




