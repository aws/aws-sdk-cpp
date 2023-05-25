/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/apigatewayv2/model/GetDomainNameRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::ApiGatewayV2::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

GetDomainNameRequest::GetDomainNameRequest() : 
    m_domainNameHasBeenSet(false)
{
}

Aws::String GetDomainNameRequest::SerializePayload() const
{
  return {};
}




