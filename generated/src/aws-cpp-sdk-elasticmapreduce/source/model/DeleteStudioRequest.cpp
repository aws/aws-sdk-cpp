/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/elasticmapreduce/model/DeleteStudioRequest.h>

#include <utility>

using namespace Aws::EMR::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String DeleteStudioRequest::SerializePayload() const {
  JsonValue payload;

  if (m_studioIdHasBeenSet) {
    payload.WithString("StudioId", m_studioId);
  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection DeleteStudioRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "ElasticMapReduce.DeleteStudio"));
  return headers;
}
