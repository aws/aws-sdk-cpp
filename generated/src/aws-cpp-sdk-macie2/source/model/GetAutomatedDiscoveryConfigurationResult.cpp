/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/macie2/model/GetAutomatedDiscoveryConfigurationResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::Macie2::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetAutomatedDiscoveryConfigurationResult::GetAutomatedDiscoveryConfigurationResult() : 
    m_status(AutomatedDiscoveryStatus::NOT_SET)
{
}

GetAutomatedDiscoveryConfigurationResult::GetAutomatedDiscoveryConfigurationResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_status(AutomatedDiscoveryStatus::NOT_SET)
{
  *this = result;
}

GetAutomatedDiscoveryConfigurationResult& GetAutomatedDiscoveryConfigurationResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("classificationScopeId"))
  {
    m_classificationScopeId = jsonValue.GetString("classificationScopeId");

  }

  if(jsonValue.ValueExists("disabledAt"))
  {
    m_disabledAt = jsonValue.GetString("disabledAt");

  }

  if(jsonValue.ValueExists("firstEnabledAt"))
  {
    m_firstEnabledAt = jsonValue.GetString("firstEnabledAt");

  }

  if(jsonValue.ValueExists("lastUpdatedAt"))
  {
    m_lastUpdatedAt = jsonValue.GetString("lastUpdatedAt");

  }

  if(jsonValue.ValueExists("sensitivityInspectionTemplateId"))
  {
    m_sensitivityInspectionTemplateId = jsonValue.GetString("sensitivityInspectionTemplateId");

  }

  if(jsonValue.ValueExists("status"))
  {
    m_status = AutomatedDiscoveryStatusMapper::GetAutomatedDiscoveryStatusForName(jsonValue.GetString("status"));

  }



  return *this;
}
