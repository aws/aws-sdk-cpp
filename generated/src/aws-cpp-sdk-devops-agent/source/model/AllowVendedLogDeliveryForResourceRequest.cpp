/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/devops-agent/model/AllowVendedLogDeliveryForResourceRequest.h>

#include <utility>

using namespace Aws::DevOpsAgent::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String AllowVendedLogDeliveryForResourceRequest::SerializePayload() const {
  JsonValue payload;

  if (m_resourceArnBeingAuthorizedHasBeenSet) {
    payload.WithString("resourceArnBeingAuthorized", m_resourceArnBeingAuthorized);
  }

  if (m_deliverySourceArnHasBeenSet) {
    payload.WithString("deliverySourceArn", m_deliverySourceArn);
  }

  if (m_logTypeHasBeenSet) {
    payload.WithString("logType", m_logType);
  }

  return payload.View().WriteReadable();
}
