/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/apigateway/model/GetMethodResponseRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::APIGateway::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

GetMethodResponseRequest::GetMethodResponseRequest() : 
    m_restApiIdHasBeenSet(false),
    m_resourceIdHasBeenSet(false),
    m_httpMethodHasBeenSet(false),
    m_statusCodeHasBeenSet(false)
{
}

Aws::String GetMethodResponseRequest::SerializePayload() const
{
  return {};
}




