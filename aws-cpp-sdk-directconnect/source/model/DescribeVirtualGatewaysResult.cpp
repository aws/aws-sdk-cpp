/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/directconnect/model/DescribeVirtualGatewaysResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::DirectConnect::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DescribeVirtualGatewaysResult::DescribeVirtualGatewaysResult()
{
}

DescribeVirtualGatewaysResult::DescribeVirtualGatewaysResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

DescribeVirtualGatewaysResult& DescribeVirtualGatewaysResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("virtualGateways"))
  {
    Aws::Utils::Array<JsonView> virtualGatewaysJsonList = jsonValue.GetArray("virtualGateways");
    for(unsigned virtualGatewaysIndex = 0; virtualGatewaysIndex < virtualGatewaysJsonList.GetLength(); ++virtualGatewaysIndex)
    {
      m_virtualGateways.push_back(virtualGatewaysJsonList[virtualGatewaysIndex].AsObject());
    }
  }



  return *this;
}
