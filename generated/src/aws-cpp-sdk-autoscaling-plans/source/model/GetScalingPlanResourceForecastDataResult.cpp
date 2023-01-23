/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/autoscaling-plans/model/GetScalingPlanResourceForecastDataResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::AutoScalingPlans::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetScalingPlanResourceForecastDataResult::GetScalingPlanResourceForecastDataResult()
{
}

GetScalingPlanResourceForecastDataResult::GetScalingPlanResourceForecastDataResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

GetScalingPlanResourceForecastDataResult& GetScalingPlanResourceForecastDataResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("Datapoints"))
  {
    Aws::Utils::Array<JsonView> datapointsJsonList = jsonValue.GetArray("Datapoints");
    for(unsigned datapointsIndex = 0; datapointsIndex < datapointsJsonList.GetLength(); ++datapointsIndex)
    {
      m_datapoints.push_back(datapointsJsonList[datapointsIndex].AsObject());
    }
  }



  return *this;
}
