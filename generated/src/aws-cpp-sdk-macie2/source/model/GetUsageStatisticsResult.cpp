/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/macie2/model/GetUsageStatisticsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::Macie2::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetUsageStatisticsResult::GetUsageStatisticsResult() : 
    m_timeRange(TimeRange::NOT_SET)
{
}

GetUsageStatisticsResult::GetUsageStatisticsResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_timeRange(TimeRange::NOT_SET)
{
  *this = result;
}

GetUsageStatisticsResult& GetUsageStatisticsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("nextToken"))
  {
    m_nextToken = jsonValue.GetString("nextToken");

  }

  if(jsonValue.ValueExists("records"))
  {
    Aws::Utils::Array<JsonView> recordsJsonList = jsonValue.GetArray("records");
    for(unsigned recordsIndex = 0; recordsIndex < recordsJsonList.GetLength(); ++recordsIndex)
    {
      m_records.push_back(recordsJsonList[recordsIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("timeRange"))
  {
    m_timeRange = TimeRangeMapper::GetTimeRangeForName(jsonValue.GetString("timeRange"));

  }



  return *this;
}
