﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ce/model/GetReservationCoverageResult.h>
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

GetReservationCoverageResult::GetReservationCoverageResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

GetReservationCoverageResult& GetReservationCoverageResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("CoveragesByTime"))
  {
    Aws::Utils::Array<JsonView> coveragesByTimeJsonList = jsonValue.GetArray("CoveragesByTime");
    for(unsigned coveragesByTimeIndex = 0; coveragesByTimeIndex < coveragesByTimeJsonList.GetLength(); ++coveragesByTimeIndex)
    {
      m_coveragesByTime.push_back(coveragesByTimeJsonList[coveragesByTimeIndex].AsObject());
    }
    m_coveragesByTimeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Total"))
  {
    m_total = jsonValue.GetObject("Total");
    m_totalHasBeenSet = true;
  }
  if(jsonValue.ValueExists("NextPageToken"))
  {
    m_nextPageToken = jsonValue.GetString("NextPageToken");
    m_nextPageTokenHasBeenSet = true;
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
