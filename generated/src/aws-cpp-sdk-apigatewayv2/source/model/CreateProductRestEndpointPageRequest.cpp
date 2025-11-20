/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/apigatewayv2/model/CreateProductRestEndpointPageRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::ApiGatewayV2::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String CreateProductRestEndpointPageRequest::SerializePayload() const {
  JsonValue payload;

  if (m_displayContentHasBeenSet) {
    payload.WithObject("displayContent", m_displayContent.Jsonize());
  }

  if (m_restEndpointIdentifierHasBeenSet) {
    payload.WithObject("restEndpointIdentifier", m_restEndpointIdentifier.Jsonize());
  }

  if (m_tryItStateHasBeenSet) {
    payload.WithString("tryItState", TryItStateMapper::GetNameForTryItState(m_tryItState));
  }

  return payload.View().WriteReadable();
}
