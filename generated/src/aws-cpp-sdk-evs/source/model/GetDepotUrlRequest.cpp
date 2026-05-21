/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/evs/model/GetDepotUrlRequest.h>

#include <utility>

using namespace Aws::EVS::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String GetDepotUrlRequest::SerializePayload() const {
  JsonValue payload;

  if (m_environmentIdHasBeenSet) {
    payload.WithString("environmentId", m_environmentId);
  }

  if (m_rotateHasBeenSet) {
    payload.WithBool("rotate", m_rotate);
  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection GetDepotUrlRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AmazonElasticVMwareService.GetDepotUrl"));
  return headers;
}
