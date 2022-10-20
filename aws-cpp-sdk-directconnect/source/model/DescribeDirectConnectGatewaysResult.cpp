/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/directconnect/model/DescribeDirectConnectGatewaysResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::DirectConnect::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DescribeDirectConnectGatewaysResult::DescribeDirectConnectGatewaysResult()
{
}

DescribeDirectConnectGatewaysResult::DescribeDirectConnectGatewaysResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

DescribeDirectConnectGatewaysResult& DescribeDirectConnectGatewaysResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("directConnectGateways"))
  {
    Aws::Utils::Array<JsonView> directConnectGatewaysJsonList = jsonValue.GetArray("directConnectGateways");
    for(unsigned directConnectGatewaysIndex = 0; directConnectGatewaysIndex < directConnectGatewaysJsonList.GetLength(); ++directConnectGatewaysIndex)
    {
      m_directConnectGateways.push_back(directConnectGatewaysJsonList[directConnectGatewaysIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("nextToken"))
  {
    m_nextToken = jsonValue.GetString("nextToken");

  }



  return *this;
}
