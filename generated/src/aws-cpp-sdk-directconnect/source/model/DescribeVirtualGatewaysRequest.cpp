/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/directconnect/model/DescribeVirtualGatewaysRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::DirectConnect::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DescribeVirtualGatewaysRequest::DescribeVirtualGatewaysRequest()
{
}

Aws::String DescribeVirtualGatewaysRequest::SerializePayload() const
{
  return "{}";
}

Aws::Http::HeaderValueCollection DescribeVirtualGatewaysRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "OvertureService.DescribeVirtualGateways"));
  return headers;

}




