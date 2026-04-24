/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/lambda/model/PutFunctionRecursionConfigRequest.h>

#include <utility>

using namespace Aws::Lambda::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String PutFunctionRecursionConfigRequest::SerializePayload() const {
  JsonValue payload;

  if (m_recursiveLoopHasBeenSet) {
    payload.WithString("RecursiveLoop", RecursiveLoopMapper::GetNameForRecursiveLoop(m_recursiveLoop));
  }

  return payload.View().WriteReadable();
}
