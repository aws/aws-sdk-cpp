﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ce/model/GetAnomalySubscriptionsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::CostExplorer::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetAnomalySubscriptionsResult::GetAnomalySubscriptionsResult()
{
}

GetAnomalySubscriptionsResult::GetAnomalySubscriptionsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

GetAnomalySubscriptionsResult& GetAnomalySubscriptionsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("AnomalySubscriptions"))
  {
    Array<JsonView> anomalySubscriptionsJsonList = jsonValue.GetArray("AnomalySubscriptions");
    for(unsigned anomalySubscriptionsIndex = 0; anomalySubscriptionsIndex < anomalySubscriptionsJsonList.GetLength(); ++anomalySubscriptionsIndex)
    {
      m_anomalySubscriptions.push_back(anomalySubscriptionsJsonList[anomalySubscriptionsIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("NextPageToken"))
  {
    m_nextPageToken = jsonValue.GetString("NextPageToken");

  }



  return *this;
}
