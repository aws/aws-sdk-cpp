/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mq/model/UpdateBrokerResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::MQ::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

UpdateBrokerResult::UpdateBrokerResult() : 
    m_authenticationStrategy(AuthenticationStrategy::NOT_SET),
    m_autoMinorVersionUpgrade(false)
{
}

UpdateBrokerResult::UpdateBrokerResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_authenticationStrategy(AuthenticationStrategy::NOT_SET),
    m_autoMinorVersionUpgrade(false)
{
  *this = result;
}

UpdateBrokerResult& UpdateBrokerResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("authenticationStrategy"))
  {
    m_authenticationStrategy = AuthenticationStrategyMapper::GetAuthenticationStrategyForName(jsonValue.GetString("authenticationStrategy"));

  }

  if(jsonValue.ValueExists("autoMinorVersionUpgrade"))
  {
    m_autoMinorVersionUpgrade = jsonValue.GetBool("autoMinorVersionUpgrade");

  }

  if(jsonValue.ValueExists("brokerId"))
  {
    m_brokerId = jsonValue.GetString("brokerId");

  }

  if(jsonValue.ValueExists("configuration"))
  {
    m_configuration = jsonValue.GetObject("configuration");

  }

  if(jsonValue.ValueExists("engineVersion"))
  {
    m_engineVersion = jsonValue.GetString("engineVersion");

  }

  if(jsonValue.ValueExists("hostInstanceType"))
  {
    m_hostInstanceType = jsonValue.GetString("hostInstanceType");

  }

  if(jsonValue.ValueExists("ldapServerMetadata"))
  {
    m_ldapServerMetadata = jsonValue.GetObject("ldapServerMetadata");

  }

  if(jsonValue.ValueExists("logs"))
  {
    m_logs = jsonValue.GetObject("logs");

  }

  if(jsonValue.ValueExists("maintenanceWindowStartTime"))
  {
    m_maintenanceWindowStartTime = jsonValue.GetObject("maintenanceWindowStartTime");

  }

  if(jsonValue.ValueExists("securityGroups"))
  {
    Aws::Utils::Array<JsonView> securityGroupsJsonList = jsonValue.GetArray("securityGroups");
    for(unsigned securityGroupsIndex = 0; securityGroupsIndex < securityGroupsJsonList.GetLength(); ++securityGroupsIndex)
    {
      m_securityGroups.push_back(securityGroupsJsonList[securityGroupsIndex].AsString());
    }
  }



  return *this;
}
