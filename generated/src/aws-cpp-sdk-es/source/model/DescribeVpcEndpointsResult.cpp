﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/es/model/DescribeVpcEndpointsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::ElasticsearchService::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DescribeVpcEndpointsResult::DescribeVpcEndpointsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

DescribeVpcEndpointsResult& DescribeVpcEndpointsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("VpcEndpoints"))
  {
    Aws::Utils::Array<JsonView> vpcEndpointsJsonList = jsonValue.GetArray("VpcEndpoints");
    for(unsigned vpcEndpointsIndex = 0; vpcEndpointsIndex < vpcEndpointsJsonList.GetLength(); ++vpcEndpointsIndex)
    {
      m_vpcEndpoints.push_back(vpcEndpointsJsonList[vpcEndpointsIndex].AsObject());
    }
    m_vpcEndpointsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("VpcEndpointErrors"))
  {
    Aws::Utils::Array<JsonView> vpcEndpointErrorsJsonList = jsonValue.GetArray("VpcEndpointErrors");
    for(unsigned vpcEndpointErrorsIndex = 0; vpcEndpointErrorsIndex < vpcEndpointErrorsJsonList.GetLength(); ++vpcEndpointErrorsIndex)
    {
      m_vpcEndpointErrors.push_back(vpcEndpointErrorsJsonList[vpcEndpointErrorsIndex].AsObject());
    }
    m_vpcEndpointErrorsHasBeenSet = true;
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
