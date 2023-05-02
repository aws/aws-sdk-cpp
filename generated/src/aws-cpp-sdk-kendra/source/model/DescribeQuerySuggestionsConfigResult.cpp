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

DescribeQuerySuggestionsConfigResult::DescribeQuerySuggestionsConfigResult() : 
    m_mode(Mode::NOT_SET),
    m_status(QuerySuggestionsStatus::NOT_SET),
    m_queryLogLookBackWindowInDays(0),
    m_includeQueriesWithoutUserInformation(false),
    m_minimumNumberOfQueryingUsers(0),
    m_minimumQueryCount(0),
    m_totalSuggestionsCount(0)
{
}

DescribeQuerySuggestionsConfigResult::DescribeQuerySuggestionsConfigResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_mode(Mode::NOT_SET),
    m_status(QuerySuggestionsStatus::NOT_SET),
    m_queryLogLookBackWindowInDays(0),
    m_includeQueriesWithoutUserInformation(false),
    m_minimumNumberOfQueryingUsers(0),
    m_minimumQueryCount(0),
    m_totalSuggestionsCount(0)
{
  *this = result;
}

DescribeQuerySuggestionsConfigResult& DescribeQuerySuggestionsConfigResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("Mode"))
  {
    m_mode = ModeMapper::GetModeForName(jsonValue.GetString("Mode"));

  }

  if(jsonValue.ValueExists("Status"))
  {
    m_status = QuerySuggestionsStatusMapper::GetQuerySuggestionsStatusForName(jsonValue.GetString("Status"));

  }

  if(jsonValue.ValueExists("QueryLogLookBackWindowInDays"))
  {
    m_queryLogLookBackWindowInDays = jsonValue.GetInteger("QueryLogLookBackWindowInDays");

  }

  if(jsonValue.ValueExists("IncludeQueriesWithoutUserInformation"))
  {
    m_includeQueriesWithoutUserInformation = jsonValue.GetBool("IncludeQueriesWithoutUserInformation");

  }

  if(jsonValue.ValueExists("MinimumNumberOfQueryingUsers"))
  {
    m_minimumNumberOfQueryingUsers = jsonValue.GetInteger("MinimumNumberOfQueryingUsers");

  }

  if(jsonValue.ValueExists("MinimumQueryCount"))
  {
    m_minimumQueryCount = jsonValue.GetInteger("MinimumQueryCount");

  }

  if(jsonValue.ValueExists("LastSuggestionsBuildTime"))
  {
    m_lastSuggestionsBuildTime = jsonValue.GetDouble("LastSuggestionsBuildTime");

  }

  if(jsonValue.ValueExists("LastClearTime"))
  {
    m_lastClearTime = jsonValue.GetDouble("LastClearTime");

  }

  if(jsonValue.ValueExists("TotalSuggestionsCount"))
  {
    m_totalSuggestionsCount = jsonValue.GetInteger("TotalSuggestionsCount");

  }

  if(jsonValue.ValueExists("AttributeSuggestionsConfig"))
  {
    m_attributeSuggestionsConfig = jsonValue.GetObject("AttributeSuggestionsConfig");

  }


  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
  }


  return *this;
}
