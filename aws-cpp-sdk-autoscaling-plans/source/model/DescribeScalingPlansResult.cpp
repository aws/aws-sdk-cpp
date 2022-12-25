/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/autoscaling-plans/model/DescribeScalingPlansResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::AutoScalingPlans::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DescribeScalingPlansResult::DescribeScalingPlansResult()
{
}

DescribeScalingPlansResult::DescribeScalingPlansResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

DescribeScalingPlansResult& DescribeScalingPlansResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("ScalingPlans"))
  {
    Aws::Utils::Array<JsonView> scalingPlansJsonList = jsonValue.GetArray("ScalingPlans");
    for(unsigned scalingPlansIndex = 0; scalingPlansIndex < scalingPlansJsonList.GetLength(); ++scalingPlansIndex)
    {
      m_scalingPlans.push_back(scalingPlansJsonList[scalingPlansIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }



  return *this;
}
