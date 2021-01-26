/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/apigatewayv2/model/DeleteCorsConfigurationRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::ApiGatewayV2::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DeleteCorsConfigurationRequest::DeleteCorsConfigurationRequest() : 
    m_apiIdHasBeenSet(false)
{
}

Aws::String DeleteCorsConfigurationRequest::SerializePayload() const
{
  return {};
}




