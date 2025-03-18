/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/macie2/model/GetUsageTotalsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Macie2::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetUsageTotalsResult::GetUsageTotalsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

GetUsageTotalsResult& GetUsageTotalsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("timeRange"))
  {
    m_timeRange = TimeRangeMapper::GetTimeRangeForName(jsonValue.GetString("timeRange"));
    m_timeRangeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("usageTotals"))
  {
    Aws::Utils::Array<JsonView> usageTotalsJsonList = jsonValue.GetArray("usageTotals");
    for(unsigned usageTotalsIndex = 0; usageTotalsIndex < usageTotalsJsonList.GetLength(); ++usageTotalsIndex)
    {
      m_usageTotals.push_back(usageTotalsJsonList[usageTotalsIndex].AsObject());
    }
    m_usageTotalsHasBeenSet = true;
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
