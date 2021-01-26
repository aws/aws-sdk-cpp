/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/apigateway/model/GetUsagePlanKeyRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::APIGateway::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

GetUsagePlanKeyRequest::GetUsagePlanKeyRequest() : 
    m_usagePlanIdHasBeenSet(false),
    m_keyIdHasBeenSet(false)
{
}

Aws::String GetUsagePlanKeyRequest::SerializePayload() const
{
  return {};
}




