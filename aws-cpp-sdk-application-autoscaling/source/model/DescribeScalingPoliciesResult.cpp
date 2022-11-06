/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/application-autoscaling/model/DescribeScalingPoliciesResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::ApplicationAutoScaling::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DescribeScalingPoliciesResult::DescribeScalingPoliciesResult()
{
}

DescribeScalingPoliciesResult::DescribeScalingPoliciesResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

DescribeScalingPoliciesResult& DescribeScalingPoliciesResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("ScalingPolicies"))
  {
    Aws::Utils::Array<JsonView> scalingPoliciesJsonList = jsonValue.GetArray("ScalingPolicies");
    for(unsigned scalingPoliciesIndex = 0; scalingPoliciesIndex < scalingPoliciesJsonList.GetLength(); ++scalingPoliciesIndex)
    {
      m_scalingPolicies.push_back(scalingPoliciesJsonList[scalingPoliciesIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }



  return *this;
}
