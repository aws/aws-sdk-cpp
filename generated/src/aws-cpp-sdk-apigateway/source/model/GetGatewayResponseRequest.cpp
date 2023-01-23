/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/apigateway/model/GetGatewayResponseRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::APIGateway::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

GetGatewayResponseRequest::GetGatewayResponseRequest() : 
    m_restApiIdHasBeenSet(false),
    m_responseType(GatewayResponseType::NOT_SET),
    m_responseTypeHasBeenSet(false)
{
}

Aws::String GetGatewayResponseRequest::SerializePayload() const
{
  return {};
}




