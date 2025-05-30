﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codeguruprofiler/model/GetRecommendationsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::CodeGuruProfiler::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetRecommendationsResult::GetRecommendationsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

GetRecommendationsResult& GetRecommendationsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("anomalies"))
  {
    Aws::Utils::Array<JsonView> anomaliesJsonList = jsonValue.GetArray("anomalies");
    for(unsigned anomaliesIndex = 0; anomaliesIndex < anomaliesJsonList.GetLength(); ++anomaliesIndex)
    {
      m_anomalies.push_back(anomaliesJsonList[anomaliesIndex].AsObject());
    }
    m_anomaliesHasBeenSet = true;
  }
  if(jsonValue.ValueExists("profileEndTime"))
  {
    m_profileEndTime = jsonValue.GetString("profileEndTime");
    m_profileEndTimeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("profileStartTime"))
  {
    m_profileStartTime = jsonValue.GetString("profileStartTime");
    m_profileStartTimeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("profilingGroupName"))
  {
    m_profilingGroupName = jsonValue.GetString("profilingGroupName");
    m_profilingGroupNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("recommendations"))
  {
    Aws::Utils::Array<JsonView> recommendationsJsonList = jsonValue.GetArray("recommendations");
    for(unsigned recommendationsIndex = 0; recommendationsIndex < recommendationsJsonList.GetLength(); ++recommendationsIndex)
    {
      m_recommendations.push_back(recommendationsJsonList[recommendationsIndex].AsObject());
    }
    m_recommendationsHasBeenSet = true;
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
