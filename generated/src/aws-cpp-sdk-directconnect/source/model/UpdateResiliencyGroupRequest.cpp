/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/directconnect/model/UpdateResiliencyGroupRequest.h>

#include <utility>

using namespace Aws::DirectConnect::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String UpdateResiliencyGroupRequest::SerializePayload() const {
  JsonValue payload;

  if (m_resiliencyGroupIdHasBeenSet) {
    payload.WithString("resiliencyGroupId", m_resiliencyGroupId);
  }

  if (m_resiliencyGroupNameHasBeenSet) {
    payload.WithString("resiliencyGroupName", m_resiliencyGroupName);
  }

  if (m_clientTokenHasBeenSet) {
    payload.WithString("clientToken", m_clientToken);
  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection UpdateResiliencyGroupRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "OvertureService.UpdateResiliencyGroup"));
  return headers;
}
