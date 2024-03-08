/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/internetmonitor/model/GetQueryResultsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::InternetMonitor::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetQueryResultsResult::GetQueryResultsResult()
{
}

GetQueryResultsResult::GetQueryResultsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

GetQueryResultsResult& GetQueryResultsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("Fields"))
  {
    Aws::Utils::Array<JsonView> fieldsJsonList = jsonValue.GetArray("Fields");
    for(unsigned fieldsIndex = 0; fieldsIndex < fieldsJsonList.GetLength(); ++fieldsIndex)
    {
      m_fields.push_back(fieldsJsonList[fieldsIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("Data"))
  {
    Aws::Utils::Array<JsonView> dataJsonList = jsonValue.GetArray("Data");
    for(unsigned dataIndex = 0; dataIndex < dataJsonList.GetLength(); ++dataIndex)
    {
      Aws::Utils::Array<JsonView> queryRowJsonList = dataJsonList[dataIndex].AsArray();
      Aws::Vector<Aws::String> queryRowList;
      queryRowList.reserve((size_t)queryRowJsonList.GetLength());
      for(unsigned queryRowIndex = 0; queryRowIndex < queryRowJsonList.GetLength(); ++queryRowIndex)
      {
        queryRowList.push_back(queryRowJsonList[queryRowIndex].AsString());
      }
      m_data.push_back(std::move(queryRowList));
    }
  }

  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }


  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
  }


  return *this;
}
