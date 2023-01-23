/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotsitewise/model/ListDashboardsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::IoTSiteWise::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListDashboardsResult::ListDashboardsResult()
{
}

ListDashboardsResult::ListDashboardsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListDashboardsResult& ListDashboardsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("dashboardSummaries"))
  {
    Aws::Utils::Array<JsonView> dashboardSummariesJsonList = jsonValue.GetArray("dashboardSummaries");
    for(unsigned dashboardSummariesIndex = 0; dashboardSummariesIndex < dashboardSummariesJsonList.GetLength(); ++dashboardSummariesIndex)
    {
      m_dashboardSummaries.push_back(dashboardSummariesJsonList[dashboardSummariesIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("nextToken"))
  {
    m_nextToken = jsonValue.GetString("nextToken");

  }



  return *this;
}
