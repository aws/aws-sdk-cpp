/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/ecr/model/RegisterPullTimeUpdateExclusionRequest.h>

#include <utility>

using namespace Aws::ECR::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String RegisterPullTimeUpdateExclusionRequest::SerializePayload() const {
  JsonValue payload;

  if (m_principalArnHasBeenSet) {
    payload.WithString("principalArn", m_principalArn);
  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection RegisterPullTimeUpdateExclusionRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AmazonEC2ContainerRegistry_V20150921.RegisterPullTimeUpdateExclusion"));
  return headers;
}
