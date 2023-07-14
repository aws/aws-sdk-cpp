/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/apigatewayv2/model/DeleteRouteRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::ApiGatewayV2::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DeleteRouteRequest::DeleteRouteRequest() : 
    m_apiIdHasBeenSet(false),
    m_routeIdHasBeenSet(false)
{
}

Aws::String DeleteRouteRequest::SerializePayload() const
{
  return {};
}




