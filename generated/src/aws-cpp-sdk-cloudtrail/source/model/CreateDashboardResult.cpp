/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudtrail/model/CreateDashboardResult.h>
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

CreateDashboardResult::CreateDashboardResult() : 
    m_type(DashboardType::NOT_SET),
    m_terminationProtectionEnabled(false)
{
}

CreateDashboardResult::CreateDashboardResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
  : CreateDashboardResult()
{
  *this = result;
}

CreateDashboardResult& CreateDashboardResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("DashboardArn"))
  {
    m_dashboardArn = jsonValue.GetString("DashboardArn");

  }

  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");

  }

  if(jsonValue.ValueExists("Type"))
  {
    m_type = DashboardTypeMapper::GetDashboardTypeForName(jsonValue.GetString("Type"));

  }

  if(jsonValue.ValueExists("Widgets"))
  {
    Aws::Utils::Array<JsonView> widgetsJsonList = jsonValue.GetArray("Widgets");
    for(unsigned widgetsIndex = 0; widgetsIndex < widgetsJsonList.GetLength(); ++widgetsIndex)
    {
      m_widgets.push_back(widgetsJsonList[widgetsIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("TagsList"))
  {
    Aws::Utils::Array<JsonView> tagsListJsonList = jsonValue.GetArray("TagsList");
    for(unsigned tagsListIndex = 0; tagsListIndex < tagsListJsonList.GetLength(); ++tagsListIndex)
    {
      m_tagsList.push_back(tagsListJsonList[tagsListIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("RefreshSchedule"))
  {
    m_refreshSchedule = jsonValue.GetObject("RefreshSchedule");

  }

  if(jsonValue.ValueExists("TerminationProtectionEnabled"))
  {
    m_terminationProtectionEnabled = jsonValue.GetBool("TerminationProtectionEnabled");

  }


  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
  }


  return *this;
}
