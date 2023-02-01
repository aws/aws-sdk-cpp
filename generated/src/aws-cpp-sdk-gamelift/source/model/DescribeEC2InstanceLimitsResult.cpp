/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/gamelift/model/DescribeEC2InstanceLimitsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::GameLift::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DescribeEC2InstanceLimitsResult::DescribeEC2InstanceLimitsResult()
{
}

DescribeEC2InstanceLimitsResult::DescribeEC2InstanceLimitsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

DescribeEC2InstanceLimitsResult& DescribeEC2InstanceLimitsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("EC2InstanceLimits"))
  {
    Aws::Utils::Array<JsonView> eC2InstanceLimitsJsonList = jsonValue.GetArray("EC2InstanceLimits");
    for(unsigned eC2InstanceLimitsIndex = 0; eC2InstanceLimitsIndex < eC2InstanceLimitsJsonList.GetLength(); ++eC2InstanceLimitsIndex)
    {
      m_eC2InstanceLimits.push_back(eC2InstanceLimitsJsonList[eC2InstanceLimitsIndex].AsObject());
    }
  }



  return *this;
}
