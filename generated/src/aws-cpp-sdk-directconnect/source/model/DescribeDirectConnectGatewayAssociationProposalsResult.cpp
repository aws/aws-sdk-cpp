/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/directconnect/model/DescribeDirectConnectGatewayAssociationProposalsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::DirectConnect::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DescribeDirectConnectGatewayAssociationProposalsResult::DescribeDirectConnectGatewayAssociationProposalsResult()
{
}

DescribeDirectConnectGatewayAssociationProposalsResult::DescribeDirectConnectGatewayAssociationProposalsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

DescribeDirectConnectGatewayAssociationProposalsResult& DescribeDirectConnectGatewayAssociationProposalsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("directConnectGatewayAssociationProposals"))
  {
    Aws::Utils::Array<JsonView> directConnectGatewayAssociationProposalsJsonList = jsonValue.GetArray("directConnectGatewayAssociationProposals");
    for(unsigned directConnectGatewayAssociationProposalsIndex = 0; directConnectGatewayAssociationProposalsIndex < directConnectGatewayAssociationProposalsJsonList.GetLength(); ++directConnectGatewayAssociationProposalsIndex)
    {
      m_directConnectGatewayAssociationProposals.push_back(directConnectGatewayAssociationProposalsJsonList[directConnectGatewayAssociationProposalsIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("nextToken"))
  {
    m_nextToken = jsonValue.GetString("nextToken");

  }



  return *this;
}
