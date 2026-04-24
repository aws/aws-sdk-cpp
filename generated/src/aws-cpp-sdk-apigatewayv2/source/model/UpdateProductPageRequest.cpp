/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/apigatewayv2/model/UpdateProductPageRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::ApiGatewayV2::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String UpdateProductPageRequest::SerializePayload() const {
  JsonValue payload;

  if (m_displayContentHasBeenSet) {
    payload.WithObject("displayContent", m_displayContent.Jsonize());
  }

  return payload.View().WriteReadable();
}
