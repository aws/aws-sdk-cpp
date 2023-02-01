/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/apigateway/model/GetUsagePlanRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::APIGateway::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

GetUsagePlanRequest::GetUsagePlanRequest() : 
    m_usagePlanIdHasBeenSet(false)
{
}

Aws::String GetUsagePlanRequest::SerializePayload() const
{
  return {};
}




