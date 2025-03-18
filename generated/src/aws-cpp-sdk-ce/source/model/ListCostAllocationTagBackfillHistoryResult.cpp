﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ce/model/ListCostAllocationTagBackfillHistoryResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::CostExplorer::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListCostAllocationTagBackfillHistoryResult::ListCostAllocationTagBackfillHistoryResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListCostAllocationTagBackfillHistoryResult& ListCostAllocationTagBackfillHistoryResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("BackfillRequests"))
  {
    Aws::Utils::Array<JsonView> backfillRequestsJsonList = jsonValue.GetArray("BackfillRequests");
    for(unsigned backfillRequestsIndex = 0; backfillRequestsIndex < backfillRequestsJsonList.GetLength(); ++backfillRequestsIndex)
    {
      m_backfillRequests.push_back(backfillRequestsJsonList[backfillRequestsIndex].AsObject());
    }
    m_backfillRequestsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");
    m_nextTokenHasBeenSet = true;
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
