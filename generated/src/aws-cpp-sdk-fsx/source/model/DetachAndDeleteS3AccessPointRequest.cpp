﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/fsx/model/DetachAndDeleteS3AccessPointRequest.h>

#include <utility>

using namespace Aws::FSx::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String DetachAndDeleteS3AccessPointRequest::SerializePayload() const {
  JsonValue payload;

  if (m_clientRequestTokenHasBeenSet) {
    payload.WithString("ClientRequestToken", m_clientRequestToken);
  }

  if (m_nameHasBeenSet) {
    payload.WithString("Name", m_name);
  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection DetachAndDeleteS3AccessPointRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWSSimbaAPIService_v20180301.DetachAndDeleteS3AccessPoint"));
  return headers;
}
