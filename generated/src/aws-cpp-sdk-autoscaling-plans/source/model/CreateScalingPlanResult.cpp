/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/autoscaling-plans/model/CreateScalingPlanResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::AutoScalingPlans::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

CreateScalingPlanResult::CreateScalingPlanResult() : 
    m_scalingPlanVersion(0)
{
}

CreateScalingPlanResult::CreateScalingPlanResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_scalingPlanVersion(0)
{
  *this = result;
}

CreateScalingPlanResult& CreateScalingPlanResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("ScalingPlanVersion"))
  {
    m_scalingPlanVersion = jsonValue.GetInt64("ScalingPlanVersion");

  }



  return *this;
}
