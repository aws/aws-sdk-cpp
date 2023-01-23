/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/application-autoscaling/model/DescribeScalingActivitiesResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::ApplicationAutoScaling::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DescribeScalingActivitiesResult::DescribeScalingActivitiesResult()
{
}

DescribeScalingActivitiesResult::DescribeScalingActivitiesResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

DescribeScalingActivitiesResult& DescribeScalingActivitiesResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("ScalingActivities"))
  {
    Aws::Utils::Array<JsonView> scalingActivitiesJsonList = jsonValue.GetArray("ScalingActivities");
    for(unsigned scalingActivitiesIndex = 0; scalingActivitiesIndex < scalingActivitiesJsonList.GetLength(); ++scalingActivitiesIndex)
    {
      m_scalingActivities.push_back(scalingActivitiesJsonList[scalingActivitiesIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }



  return *this;
}
