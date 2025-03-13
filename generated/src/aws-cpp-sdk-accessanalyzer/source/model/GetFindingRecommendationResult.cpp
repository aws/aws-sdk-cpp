/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/accessanalyzer/model/GetFindingRecommendationResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::AccessAnalyzer::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetFindingRecommendationResult::GetFindingRecommendationResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

GetFindingRecommendationResult& GetFindingRecommendationResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("startedAt"))
  {
    m_startedAt = jsonValue.GetString("startedAt");
    m_startedAtHasBeenSet = true;
  }
  if(jsonValue.ValueExists("completedAt"))
  {
    m_completedAt = jsonValue.GetString("completedAt");
    m_completedAtHasBeenSet = true;
  }
  if(jsonValue.ValueExists("nextToken"))
  {
    m_nextToken = jsonValue.GetString("nextToken");
    m_nextTokenHasBeenSet = true;
  }
  if(jsonValue.ValueExists("error"))
  {
    m_error = jsonValue.GetObject("error");
    m_errorHasBeenSet = true;
  }
  if(jsonValue.ValueExists("resourceArn"))
  {
    m_resourceArn = jsonValue.GetString("resourceArn");
    m_resourceArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("recommendedSteps"))
  {
    Aws::Utils::Array<JsonView> recommendedStepsJsonList = jsonValue.GetArray("recommendedSteps");
    for(unsigned recommendedStepsIndex = 0; recommendedStepsIndex < recommendedStepsJsonList.GetLength(); ++recommendedStepsIndex)
    {
      m_recommendedSteps.push_back(recommendedStepsJsonList[recommendedStepsIndex].AsObject());
    }
    m_recommendedStepsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("recommendationType"))
  {
    m_recommendationType = RecommendationTypeMapper::GetRecommendationTypeForName(jsonValue.GetString("recommendationType"));
    m_recommendationTypeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("status"))
  {
    m_status = StatusMapper::GetStatusForName(jsonValue.GetString("status"));
    m_statusHasBeenSet = true;
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
