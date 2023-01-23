/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/directconnect/model/DescribeDirectConnectGatewayAssociationsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::DirectConnect::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DescribeDirectConnectGatewayAssociationsResult::DescribeDirectConnectGatewayAssociationsResult()
{
}

DescribeDirectConnectGatewayAssociationsResult::DescribeDirectConnectGatewayAssociationsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

DescribeDirectConnectGatewayAssociationsResult& DescribeDirectConnectGatewayAssociationsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("directConnectGatewayAssociations"))
  {
    Aws::Utils::Array<JsonView> directConnectGatewayAssociationsJsonList = jsonValue.GetArray("directConnectGatewayAssociations");
    for(unsigned directConnectGatewayAssociationsIndex = 0; directConnectGatewayAssociationsIndex < directConnectGatewayAssociationsJsonList.GetLength(); ++directConnectGatewayAssociationsIndex)
    {
      m_directConnectGatewayAssociations.push_back(directConnectGatewayAssociationsJsonList[directConnectGatewayAssociationsIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("nextToken"))
  {
    m_nextToken = jsonValue.GetString("nextToken");

  }



  return *this;
}
