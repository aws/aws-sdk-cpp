/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/compute-optimizer/model/GetAutoScalingGroupRecommendationsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::ComputeOptimizer::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetAutoScalingGroupRecommendationsResult::GetAutoScalingGroupRecommendationsResult()
{
}

GetAutoScalingGroupRecommendationsResult::GetAutoScalingGroupRecommendationsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

GetAutoScalingGroupRecommendationsResult& GetAutoScalingGroupRecommendationsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("nextToken"))
  {
    m_nextToken = jsonValue.GetString("nextToken");

  }

  if(jsonValue.ValueExists("autoScalingGroupRecommendations"))
  {
    Aws::Utils::Array<JsonView> autoScalingGroupRecommendationsJsonList = jsonValue.GetArray("autoScalingGroupRecommendations");
    for(unsigned autoScalingGroupRecommendationsIndex = 0; autoScalingGroupRecommendationsIndex < autoScalingGroupRecommendationsJsonList.GetLength(); ++autoScalingGroupRecommendationsIndex)
    {
      m_autoScalingGroupRecommendations.push_back(autoScalingGroupRecommendationsJsonList[autoScalingGroupRecommendationsIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("errors"))
  {
    Aws::Utils::Array<JsonView> errorsJsonList = jsonValue.GetArray("errors");
    for(unsigned errorsIndex = 0; errorsIndex < errorsJsonList.GetLength(); ++errorsIndex)
    {
      m_errors.push_back(errorsJsonList[errorsIndex].AsObject());
    }
  }



  return *this;
}
