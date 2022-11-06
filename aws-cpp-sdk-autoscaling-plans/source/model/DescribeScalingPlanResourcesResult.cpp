/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/autoscaling-plans/model/DescribeScalingPlanResourcesResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::AutoScalingPlans::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DescribeScalingPlanResourcesResult::DescribeScalingPlanResourcesResult()
{
}

DescribeScalingPlanResourcesResult::DescribeScalingPlanResourcesResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

DescribeScalingPlanResourcesResult& DescribeScalingPlanResourcesResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("ScalingPlanResources"))
  {
    Aws::Utils::Array<JsonView> scalingPlanResourcesJsonList = jsonValue.GetArray("ScalingPlanResources");
    for(unsigned scalingPlanResourcesIndex = 0; scalingPlanResourcesIndex < scalingPlanResourcesJsonList.GetLength(); ++scalingPlanResourcesIndex)
    {
      m_scalingPlanResources.push_back(scalingPlanResourcesJsonList[scalingPlanResourcesIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }



  return *this;
}
