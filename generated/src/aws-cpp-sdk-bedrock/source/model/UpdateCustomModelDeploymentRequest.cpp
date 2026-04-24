/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock/model/UpdateCustomModelDeploymentRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Bedrock::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String UpdateCustomModelDeploymentRequest::SerializePayload() const {
  JsonValue payload;

  if (m_modelArnHasBeenSet) {
    payload.WithString("modelArn", m_modelArn);
  }

  return payload.View().WriteReadable();
}
