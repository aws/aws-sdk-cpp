/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/apigatewayv2/model/GetAuthorizerRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::ApiGatewayV2::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

GetAuthorizerRequest::GetAuthorizerRequest() : 
    m_apiIdHasBeenSet(false),
    m_authorizerIdHasBeenSet(false)
{
}

Aws::String GetAuthorizerRequest::SerializePayload() const
{
  return {};
}




