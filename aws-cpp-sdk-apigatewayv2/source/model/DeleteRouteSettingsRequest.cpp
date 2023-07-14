/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/apigatewayv2/model/DeleteRouteSettingsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::ApiGatewayV2::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DeleteRouteSettingsRequest::DeleteRouteSettingsRequest() : 
    m_apiIdHasBeenSet(false),
    m_routeKeyHasBeenSet(false),
    m_stageNameHasBeenSet(false)
{
}

Aws::String DeleteRouteSettingsRequest::SerializePayload() const
{
  return {};
}




