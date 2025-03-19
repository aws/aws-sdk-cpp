/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kendra/model/DescribeQuerySuggestionsConfigResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::kendra::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DescribeQuerySuggestionsConfigResult::DescribeQuerySuggestionsConfigResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

DescribeQuerySuggestionsConfigResult& DescribeQuerySuggestionsConfigResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("Mode"))
  {
    m_mode = ModeMapper::GetModeForName(jsonValue.GetString("Mode"));
    m_modeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Status"))
  {
    m_status = QuerySuggestionsStatusMapper::GetQuerySuggestionsStatusForName(jsonValue.GetString("Status"));
    m_statusHasBeenSet = true;
  }
  if(jsonValue.ValueExists("QueryLogLookBackWindowInDays"))
  {
    m_queryLogLookBackWindowInDays = jsonValue.GetInteger("QueryLogLookBackWindowInDays");
    m_queryLogLookBackWindowInDaysHasBeenSet = true;
  }
  if(jsonValue.ValueExists("IncludeQueriesWithoutUserInformation"))
  {
    m_includeQueriesWithoutUserInformation = jsonValue.GetBool("IncludeQueriesWithoutUserInformation");
    m_includeQueriesWithoutUserInformationHasBeenSet = true;
  }
  if(jsonValue.ValueExists("MinimumNumberOfQueryingUsers"))
  {
    m_minimumNumberOfQueryingUsers = jsonValue.GetInteger("MinimumNumberOfQueryingUsers");
    m_minimumNumberOfQueryingUsersHasBeenSet = true;
  }
  if(jsonValue.ValueExists("MinimumQueryCount"))
  {
    m_minimumQueryCount = jsonValue.GetInteger("MinimumQueryCount");
    m_minimumQueryCountHasBeenSet = true;
  }
  if(jsonValue.ValueExists("LastSuggestionsBuildTime"))
  {
    m_lastSuggestionsBuildTime = jsonValue.GetDouble("LastSuggestionsBuildTime");
    m_lastSuggestionsBuildTimeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("LastClearTime"))
  {
    m_lastClearTime = jsonValue.GetDouble("LastClearTime");
    m_lastClearTimeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("TotalSuggestionsCount"))
  {
    m_totalSuggestionsCount = jsonValue.GetInteger("TotalSuggestionsCount");
    m_totalSuggestionsCountHasBeenSet = true;
  }
  if(jsonValue.ValueExists("AttributeSuggestionsConfig"))
  {
    m_attributeSuggestionsConfig = jsonValue.GetObject("AttributeSuggestionsConfig");
    m_attributeSuggestionsConfigHasBeenSet = true;
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
