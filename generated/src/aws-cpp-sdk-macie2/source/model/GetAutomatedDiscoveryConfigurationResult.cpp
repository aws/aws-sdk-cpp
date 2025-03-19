/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/macie2/model/GetAutomatedDiscoveryConfigurationResult.h>
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

GetAutomatedDiscoveryConfigurationResult::GetAutomatedDiscoveryConfigurationResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

GetAutomatedDiscoveryConfigurationResult& GetAutomatedDiscoveryConfigurationResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("autoEnableOrganizationMembers"))
  {
    m_autoEnableOrganizationMembers = AutoEnableModeMapper::GetAutoEnableModeForName(jsonValue.GetString("autoEnableOrganizationMembers"));
    m_autoEnableOrganizationMembersHasBeenSet = true;
  }
  if(jsonValue.ValueExists("classificationScopeId"))
  {
    m_classificationScopeId = jsonValue.GetString("classificationScopeId");
    m_classificationScopeIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("disabledAt"))
  {
    m_disabledAt = jsonValue.GetString("disabledAt");
    m_disabledAtHasBeenSet = true;
  }
  if(jsonValue.ValueExists("firstEnabledAt"))
  {
    m_firstEnabledAt = jsonValue.GetString("firstEnabledAt");
    m_firstEnabledAtHasBeenSet = true;
  }
  if(jsonValue.ValueExists("lastUpdatedAt"))
  {
    m_lastUpdatedAt = jsonValue.GetString("lastUpdatedAt");
    m_lastUpdatedAtHasBeenSet = true;
  }
  if(jsonValue.ValueExists("sensitivityInspectionTemplateId"))
  {
    m_sensitivityInspectionTemplateId = jsonValue.GetString("sensitivityInspectionTemplateId");
    m_sensitivityInspectionTemplateIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("status"))
  {
    m_status = AutomatedDiscoveryStatusMapper::GetAutomatedDiscoveryStatusForName(jsonValue.GetString("status"));
    m_statusHasBeenSet = true;
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
