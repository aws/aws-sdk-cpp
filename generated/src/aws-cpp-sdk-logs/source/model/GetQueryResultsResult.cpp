/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/logs/model/GetQueryResultsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::CloudWatchLogs::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetQueryResultsResult::GetQueryResultsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

GetQueryResultsResult& GetQueryResultsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("queryLanguage"))
  {
    m_queryLanguage = QueryLanguageMapper::GetQueryLanguageForName(jsonValue.GetString("queryLanguage"));
    m_queryLanguageHasBeenSet = true;
  }
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
    m_resultsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("statistics"))
  {
    m_statistics = jsonValue.GetObject("statistics");
    m_statisticsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("status"))
  {
    m_status = QueryStatusMapper::GetQueryStatusForName(jsonValue.GetString("status"));
    m_statusHasBeenSet = true;
  }
  if(jsonValue.ValueExists("encryptionKey"))
  {
    m_encryptionKey = jsonValue.GetString("encryptionKey");
    m_encryptionKeyHasBeenSet = true;
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
