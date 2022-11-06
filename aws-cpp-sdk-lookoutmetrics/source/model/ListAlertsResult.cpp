/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lookoutmetrics/model/ListAlertsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::LookoutMetrics::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListAlertsResult::ListAlertsResult()
{
}

ListAlertsResult::ListAlertsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListAlertsResult& ListAlertsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("AlertSummaryList"))
  {
    Aws::Utils::Array<JsonView> alertSummaryListJsonList = jsonValue.GetArray("AlertSummaryList");
    for(unsigned alertSummaryListIndex = 0; alertSummaryListIndex < alertSummaryListJsonList.GetLength(); ++alertSummaryListIndex)
    {
      m_alertSummaryList.push_back(alertSummaryListJsonList[alertSummaryListIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }



  return *this;
}
