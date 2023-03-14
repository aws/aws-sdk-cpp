/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lakeformation/model/GetQueryStatisticsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::LakeFormation::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetQueryStatisticsResult::GetQueryStatisticsResult()
{
}

GetQueryStatisticsResult::GetQueryStatisticsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

GetQueryStatisticsResult& GetQueryStatisticsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("ExecutionStatistics"))
  {
    m_executionStatistics = jsonValue.GetObject("ExecutionStatistics");

  }

  if(jsonValue.ValueExists("PlanningStatistics"))
  {
    m_planningStatistics = jsonValue.GetObject("PlanningStatistics");

  }

  if(jsonValue.ValueExists("QuerySubmissionTime"))
  {
    m_querySubmissionTime = jsonValue.GetString("QuerySubmissionTime");

  }


  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
  }


  return *this;
}
