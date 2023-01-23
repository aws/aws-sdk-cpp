/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/logs/model/GetQueryResultsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::CloudWatchLogs::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetQueryResultsResult::GetQueryResultsResult() : 
    m_status(QueryStatus::NOT_SET)
{
}

GetQueryResultsResult::GetQueryResultsResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_status(QueryStatus::NOT_SET)
{
  *this = result;
}

GetQueryResultsResult& GetQueryResultsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("results"))
  {
    Aws::Utils::Array<JsonView> resultsJsonList = jsonValue.GetArray("results");
    for(unsigned resultsIndex = 0; resultsIndex < resultsJsonList.GetLength(); ++resultsIndex)
    {
      Aws::Utils::Array<JsonView> resultRowsJsonList = resultsJsonList[resultsIndex].AsArray();
      Aws::Vector<ResultField> resultRowsList;
      resultRowsList.reserve((size_t)resultRowsJsonList.GetLength());
      for(unsigned resultRowsIndex = 0; resultRowsIndex < resultRowsJsonList.GetLength(); ++resultRowsIndex)
      {
        resultRowsList.push_back(resultRowsJsonList[resultRowsIndex].AsObject());
      }
      m_results.push_back(std::move(resultRowsList));
    }
  }

  if(jsonValue.ValueExists("statistics"))
  {
    m_statistics = jsonValue.GetObject("statistics");

  }

  if(jsonValue.ValueExists("status"))
  {
    m_status = QueryStatusMapper::GetQueryStatusForName(jsonValue.GetString("status"));

  }



  return *this;
}
