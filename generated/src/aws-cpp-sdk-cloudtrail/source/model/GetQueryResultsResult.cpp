/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudtrail/model/GetQueryResultsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::CloudTrail::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetQueryResultsResult::GetQueryResultsResult() : 
    m_queryStatus(QueryStatus::NOT_SET)
{
}

GetQueryResultsResult::GetQueryResultsResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_queryStatus(QueryStatus::NOT_SET)
{
  *this = result;
}

GetQueryResultsResult& GetQueryResultsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("QueryStatus"))
  {
    m_queryStatus = QueryStatusMapper::GetQueryStatusForName(jsonValue.GetString("QueryStatus"));

  }

  if(jsonValue.ValueExists("QueryStatistics"))
  {
    m_queryStatistics = jsonValue.GetObject("QueryStatistics");

  }

  if(jsonValue.ValueExists("QueryResultRows"))
  {
    Aws::Utils::Array<JsonView> queryResultRowsJsonList = jsonValue.GetArray("QueryResultRows");
    for(unsigned queryResultRowsIndex = 0; queryResultRowsIndex < queryResultRowsJsonList.GetLength(); ++queryResultRowsIndex)
    {
      Aws::Utils::Array<JsonView> queryResultRowJsonList = queryResultRowsJsonList[queryResultRowsIndex].AsArray();
      Aws::Vector<Aws::Map<Aws::String, Aws::String>> queryResultRowList;
      queryResultRowList.reserve((size_t)queryResultRowJsonList.GetLength());
      for(unsigned queryResultRowIndex = 0; queryResultRowIndex < queryResultRowJsonList.GetLength(); ++queryResultRowIndex)
      {
        Aws::Map<Aws::String, JsonView> queryResultColumnJsonMap = queryResultRowJsonList[queryResultRowIndex].GetAllObjects();
        Aws::Map<Aws::String, Aws::String> queryResultColumnMap;
        for(auto& queryResultColumnItem : queryResultColumnJsonMap)
        {
          queryResultColumnMap[queryResultColumnItem.first] = queryResultColumnItem.second.AsString();
        }
        queryResultRowList.push_back(std::move(queryResultColumnMap));
      }
      m_queryResultRows.push_back(std::move(queryResultRowList));
    }
  }

  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }

  if(jsonValue.ValueExists("ErrorMessage"))
  {
    m_errorMessage = jsonValue.GetString("ErrorMessage");

  }



  return *this;
}
