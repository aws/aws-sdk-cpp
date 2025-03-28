﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/gamelift/model/DescribeVpcPeeringConnectionsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::GameLift::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DescribeVpcPeeringConnectionsResult::DescribeVpcPeeringConnectionsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

DescribeVpcPeeringConnectionsResult& DescribeVpcPeeringConnectionsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("VpcPeeringConnections"))
  {
    Aws::Utils::Array<JsonView> vpcPeeringConnectionsJsonList = jsonValue.GetArray("VpcPeeringConnections");
    for(unsigned vpcPeeringConnectionsIndex = 0; vpcPeeringConnectionsIndex < vpcPeeringConnectionsJsonList.GetLength(); ++vpcPeeringConnectionsIndex)
    {
      m_vpcPeeringConnections.push_back(vpcPeeringConnectionsJsonList[vpcPeeringConnectionsIndex].AsObject());
    }
    m_vpcPeeringConnectionsHasBeenSet = true;
  }

  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
    m_requestIdHasBeenSet = true;
  }


  return *this;
}
