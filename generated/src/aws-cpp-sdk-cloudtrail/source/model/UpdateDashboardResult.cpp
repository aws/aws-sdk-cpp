/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudtrail/model/UpdateDashboardResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::CloudTrail::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

UpdateDashboardResult::UpdateDashboardResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

UpdateDashboardResult& UpdateDashboardResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("DashboardArn"))
  {
    m_dashboardArn = jsonValue.GetString("DashboardArn");
    m_dashboardArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");
    m_nameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Type"))
  {
    m_type = DashboardTypeMapper::GetDashboardTypeForName(jsonValue.GetString("Type"));
    m_typeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Widgets"))
  {
    Aws::Utils::Array<JsonView> widgetsJsonList = jsonValue.GetArray("Widgets");
    for(unsigned widgetsIndex = 0; widgetsIndex < widgetsJsonList.GetLength(); ++widgetsIndex)
    {
      m_widgets.push_back(widgetsJsonList[widgetsIndex].AsObject());
    }
    m_widgetsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("RefreshSchedule"))
  {
    m_refreshSchedule = jsonValue.GetObject("RefreshSchedule");
    m_refreshScheduleHasBeenSet = true;
  }
  if(jsonValue.ValueExists("TerminationProtectionEnabled"))
  {
    m_terminationProtectionEnabled = jsonValue.GetBool("TerminationProtectionEnabled");
    m_terminationProtectionEnabledHasBeenSet = true;
  }
  if(jsonValue.ValueExists("CreatedTimestamp"))
  {
    m_createdTimestamp = jsonValue.GetDouble("CreatedTimestamp");
    m_createdTimestampHasBeenSet = true;
  }
  if(jsonValue.ValueExists("UpdatedTimestamp"))
  {
    m_updatedTimestamp = jsonValue.GetDouble("UpdatedTimestamp");
    m_updatedTimestampHasBeenSet = true;
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
