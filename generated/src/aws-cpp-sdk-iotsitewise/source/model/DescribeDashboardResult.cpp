/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotsitewise/model/DescribeDashboardResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::IoTSiteWise::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

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
    m_dashboardIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("dashboardArn"))
  {
    m_dashboardArn = jsonValue.GetString("dashboardArn");
    m_dashboardArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("dashboardName"))
  {
    m_dashboardName = jsonValue.GetString("dashboardName");
    m_dashboardNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("projectId"))
  {
    m_projectId = jsonValue.GetString("projectId");
    m_projectIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("dashboardDescription"))
  {
    m_dashboardDescription = jsonValue.GetString("dashboardDescription");
    m_dashboardDescriptionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("dashboardDefinition"))
  {
    m_dashboardDefinition = jsonValue.GetString("dashboardDefinition");
    m_dashboardDefinitionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("dashboardCreationDate"))
  {
    m_dashboardCreationDate = jsonValue.GetDouble("dashboardCreationDate");
    m_dashboardCreationDateHasBeenSet = true;
  }
  if(jsonValue.ValueExists("dashboardLastUpdateDate"))
  {
    m_dashboardLastUpdateDate = jsonValue.GetDouble("dashboardLastUpdateDate");
    m_dashboardLastUpdateDateHasBeenSet = true;
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
