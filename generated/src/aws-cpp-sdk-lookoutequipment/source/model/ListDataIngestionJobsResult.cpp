﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lookoutequipment/model/ListDataIngestionJobsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::LookoutEquipment::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListDataIngestionJobsResult::ListDataIngestionJobsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListDataIngestionJobsResult& ListDataIngestionJobsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");
    m_nextTokenHasBeenSet = true;
  }
  if(jsonValue.ValueExists("DataIngestionJobSummaries"))
  {
    Aws::Utils::Array<JsonView> dataIngestionJobSummariesJsonList = jsonValue.GetArray("DataIngestionJobSummaries");
    for(unsigned dataIngestionJobSummariesIndex = 0; dataIngestionJobSummariesIndex < dataIngestionJobSummariesJsonList.GetLength(); ++dataIngestionJobSummariesIndex)
    {
      m_dataIngestionJobSummaries.push_back(dataIngestionJobSummariesJsonList[dataIngestionJobSummariesIndex].AsObject());
    }
    m_dataIngestionJobSummariesHasBeenSet = true;
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
