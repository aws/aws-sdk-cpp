/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/DescribeTrafficDistributionGroupResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::Connect::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DescribeTrafficDistributionGroupResult::DescribeTrafficDistributionGroupResult()
{
}

DescribeTrafficDistributionGroupResult::DescribeTrafficDistributionGroupResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

DescribeTrafficDistributionGroupResult& DescribeTrafficDistributionGroupResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("TrafficDistributionGroup"))
  {
    m_trafficDistributionGroup = jsonValue.GetObject("TrafficDistributionGroup");

  }



  return *this;
}
