﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/dataexchange/model/ListReceivedDataGrantsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::DataExchange::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListReceivedDataGrantsResult::ListReceivedDataGrantsResult()
{
}

ListReceivedDataGrantsResult::ListReceivedDataGrantsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListReceivedDataGrantsResult& ListReceivedDataGrantsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("DataGrantSummaries"))
  {
    Aws::Utils::Array<JsonView> dataGrantSummariesJsonList = jsonValue.GetArray("DataGrantSummaries");
    for(unsigned dataGrantSummariesIndex = 0; dataGrantSummariesIndex < dataGrantSummariesJsonList.GetLength(); ++dataGrantSummariesIndex)
    {
      m_dataGrantSummaries.push_back(dataGrantSummariesJsonList[dataGrantSummariesIndex].AsObject());
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
