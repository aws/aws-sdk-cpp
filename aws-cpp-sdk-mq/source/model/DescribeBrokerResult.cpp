/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#include <aws/mq/model/DescribeBrokerResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::MQ::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DescribeBrokerResult::DescribeBrokerResult() : 
    m_autoMinorVersionUpgrade(false),
    m_brokerState(BrokerState::NOT_SET),
    m_deploymentMode(DeploymentMode::NOT_SET),
    m_engineType(EngineType::NOT_SET),
    m_publiclyAccessible(false)
{
}

DescribeBrokerResult::DescribeBrokerResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_autoMinorVersionUpgrade(false),
    m_brokerState(BrokerState::NOT_SET),
    m_deploymentMode(DeploymentMode::NOT_SET),
    m_engineType(EngineType::NOT_SET),
    m_publiclyAccessible(false)
{
  *this = result;
}

DescribeBrokerResult& DescribeBrokerResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("autoMinorVersionUpgrade"))
  {
    m_autoMinorVersionUpgrade = jsonValue.GetBool("autoMinorVersionUpgrade");

  }

  if(jsonValue.ValueExists("brokerArn"))
  {
    m_brokerArn = jsonValue.GetString("brokerArn");

  }

  if(jsonValue.ValueExists("brokerId"))
  {
    m_brokerId = jsonValue.GetString("brokerId");

  }

  if(jsonValue.ValueExists("brokerInstances"))
  {
    Array<JsonView> brokerInstancesJsonList = jsonValue.GetArray("brokerInstances");
    for(unsigned brokerInstancesIndex = 0; brokerInstancesIndex < brokerInstancesJsonList.GetLength(); ++brokerInstancesIndex)
    {
      m_brokerInstances.push_back(brokerInstancesJsonList[brokerInstancesIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("brokerName"))
  {
    m_brokerName = jsonValue.GetString("brokerName");

  }

  if(jsonValue.ValueExists("brokerState"))
  {
    m_brokerState = BrokerStateMapper::GetBrokerStateForName(jsonValue.GetString("brokerState"));

  }

  if(jsonValue.ValueExists("configurations"))
  {
    m_configurations = jsonValue.GetObject("configurations");

  }

  if(jsonValue.ValueExists("created"))
  {
    m_created = jsonValue.GetString("created");

  }

  if(jsonValue.ValueExists("deploymentMode"))
  {
    m_deploymentMode = DeploymentModeMapper::GetDeploymentModeForName(jsonValue.GetString("deploymentMode"));

  }

  if(jsonValue.ValueExists("encryptionOptions"))
  {
    m_encryptionOptions = jsonValue.GetObject("encryptionOptions");

  }

  if(jsonValue.ValueExists("engineType"))
  {
    m_engineType = EngineTypeMapper::GetEngineTypeForName(jsonValue.GetString("engineType"));

  }

  if(jsonValue.ValueExists("engineVersion"))
  {
    m_engineVersion = jsonValue.GetString("engineVersion");

  }

  if(jsonValue.ValueExists("hostInstanceType"))
  {
    m_hostInstanceType = jsonValue.GetString("hostInstanceType");

  }

  if(jsonValue.ValueExists("logs"))
  {
    m_logs = jsonValue.GetObject("logs");

  }

  if(jsonValue.ValueExists("maintenanceWindowStartTime"))
  {
    m_maintenanceWindowStartTime = jsonValue.GetObject("maintenanceWindowStartTime");

  }

  if(jsonValue.ValueExists("pendingEngineVersion"))
  {
    m_pendingEngineVersion = jsonValue.GetString("pendingEngineVersion");

  }

  if(jsonValue.ValueExists("publiclyAccessible"))
  {
    m_publiclyAccessible = jsonValue.GetBool("publiclyAccessible");

  }

  if(jsonValue.ValueExists("securityGroups"))
  {
    Array<JsonView> securityGroupsJsonList = jsonValue.GetArray("securityGroups");
    for(unsigned securityGroupsIndex = 0; securityGroupsIndex < securityGroupsJsonList.GetLength(); ++securityGroupsIndex)
    {
      m_securityGroups.push_back(securityGroupsJsonList[securityGroupsIndex].AsString());
    }
  }

  if(jsonValue.ValueExists("subnetIds"))
  {
    Array<JsonView> subnetIdsJsonList = jsonValue.GetArray("subnetIds");
    for(unsigned subnetIdsIndex = 0; subnetIdsIndex < subnetIdsJsonList.GetLength(); ++subnetIdsIndex)
    {
      m_subnetIds.push_back(subnetIdsJsonList[subnetIdsIndex].AsString());
    }
  }

  if(jsonValue.ValueExists("tags"))
  {
    Aws::Map<Aws::String, JsonView> tagsJsonMap = jsonValue.GetObject("tags").GetAllObjects();
    for(auto& tagsItem : tagsJsonMap)
    {
      m_tags[tagsItem.first] = tagsItem.second.AsString();
    }
  }

  if(jsonValue.ValueExists("users"))
  {
    Array<JsonView> usersJsonList = jsonValue.GetArray("users");
    for(unsigned usersIndex = 0; usersIndex < usersJsonList.GetLength(); ++usersIndex)
    {
      m_users.push_back(usersJsonList[usersIndex].AsObject());
    }
  }



  return *this;
}
