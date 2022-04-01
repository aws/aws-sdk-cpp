/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/apigateway/model/GetVpcLinkRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::APIGateway::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

GetVpcLinkRequest::GetVpcLinkRequest() : 
    m_vpcLinkIdHasBeenSet(false)
{
}

Aws::String GetVpcLinkRequest::SerializePayload() const
{
  return {};
}




