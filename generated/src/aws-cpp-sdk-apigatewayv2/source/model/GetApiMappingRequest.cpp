/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/apigatewayv2/model/GetApiMappingRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::ApiGatewayV2::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

GetApiMappingRequest::GetApiMappingRequest() : 
    m_apiMappingIdHasBeenSet(false),
    m_domainNameHasBeenSet(false)
{
}

Aws::String GetApiMappingRequest::SerializePayload() const
{
  return {};
}




