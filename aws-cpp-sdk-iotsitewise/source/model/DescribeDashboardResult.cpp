/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotsitewise/model/DescribeDashboardResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::IoTSiteWise::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DescribeDashboardResult::DescribeDashboardResult()
{
}

DescribeDashboardResult::DescribeDashboardResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

DescribeDashboardResult& DescribeDashboardResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("dashboardId"))
  {
    m_dashboardId = jsonValue.GetString("dashboardId");

  }

  if(jsonValue.ValueExists("dashboardArn"))
  {
    m_dashboardArn = jsonValue.GetString("dashboardArn");

  }

  if(jsonValue.ValueExists("dashboardName"))
  {
    m_dashboardName = jsonValue.GetString("dashboardName");

  }

  if(jsonValue.ValueExists("projectId"))
  {
    m_projectId = jsonValue.GetString("projectId");

  }

  if(jsonValue.ValueExists("dashboardDescription"))
  {
    m_dashboardDescription = jsonValue.GetString("dashboardDescription");

  }

  if(jsonValue.ValueExists("dashboardDefinition"))
  {
    m_dashboardDefinition = jsonValue.GetString("dashboardDefinition");

  }

  if(jsonValue.ValueExists("dashboardCreationDate"))
  {
    m_dashboardCreationDate = jsonValue.GetDouble("dashboardCreationDate");

  }

  if(jsonValue.ValueExists("dashboardLastUpdateDate"))
  {
    m_dashboardLastUpdateDate = jsonValue.GetDouble("dashboardLastUpdateDate");

  }



  return *this;
}
