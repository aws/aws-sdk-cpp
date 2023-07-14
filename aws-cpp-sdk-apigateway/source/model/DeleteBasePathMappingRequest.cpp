/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/apigateway/model/DeleteBasePathMappingRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::APIGateway::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DeleteBasePathMappingRequest::DeleteBasePathMappingRequest() : 
    m_domainNameHasBeenSet(false),
    m_basePathHasBeenSet(false)
{
}

Aws::String DeleteBasePathMappingRequest::SerializePayload() const
{
  return {};
}




