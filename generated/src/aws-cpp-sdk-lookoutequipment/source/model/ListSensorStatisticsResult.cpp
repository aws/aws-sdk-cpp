﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lookoutequipment/model/ListSensorStatisticsResult.h>
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

ListSensorStatisticsResult::ListSensorStatisticsResult()
{
}

ListSensorStatisticsResult::ListSensorStatisticsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListSensorStatisticsResult& ListSensorStatisticsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("SensorStatisticsSummaries"))
  {
    Aws::Utils::Array<JsonView> sensorStatisticsSummariesJsonList = jsonValue.GetArray("SensorStatisticsSummaries");
    for(unsigned sensorStatisticsSummariesIndex = 0; sensorStatisticsSummariesIndex < sensorStatisticsSummariesJsonList.GetLength(); ++sensorStatisticsSummariesIndex)
    {
      m_sensorStatisticsSummaries.push_back(sensorStatisticsSummariesJsonList[sensorStatisticsSummariesIndex].AsObject());
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
