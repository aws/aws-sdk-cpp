/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/healthlake/model/DeleteDataTransformationProfileRequest.h>

#include <utility>

using namespace Aws::HealthLake::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String DeleteDataTransformationProfileRequest::SerializePayload() const {
  JsonValue payload;

  if (m_profileIdHasBeenSet) {
    payload.WithString("ProfileId", m_profileId);
  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection DeleteDataTransformationProfileRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "HealthLake.DeleteDataTransformationProfile"));
  return headers;
}
