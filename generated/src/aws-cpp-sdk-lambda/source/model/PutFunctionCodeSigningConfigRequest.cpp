﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/lambda/model/PutFunctionCodeSigningConfigRequest.h>

#include <utility>

using namespace Aws::Lambda::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String PutFunctionCodeSigningConfigRequest::SerializePayload() const {
  JsonValue payload;

  if (m_codeSigningConfigArnHasBeenSet) {
    payload.WithString("CodeSigningConfigArn", m_codeSigningConfigArn);
  }

  return payload.View().WriteReadable();
}
