﻿/*
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

#include <aws/mq/model/CreateBrokerRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::MQ::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateBrokerRequest::CreateBrokerRequest() : 
    m_autoMinorVersionUpgrade(false),
    m_autoMinorVersionUpgradeHasBeenSet(false),
    m_brokerNameHasBeenSet(false),
    m_configurationHasBeenSet(false),
    m_creatorRequestId(Aws::Utils::UUID::RandomUUID()),
    m_creatorRequestIdHasBeenSet(true),
    m_deploymentMode(DeploymentMode::NOT_SET),
    m_deploymentModeHasBeenSet(false),
    m_engineType(EngineType::NOT_SET),
    m_engineTypeHasBeenSet(false),
    m_engineVersionHasBeenSet(false),
    m_hostInstanceTypeHasBeenSet(false),
    m_maintenanceWindowStartTimeHasBeenSet(false),
    m_publiclyAccessible(false),
    m_publiclyAccessibleHasBeenSet(false),
    m_securityGroupsHasBeenSet(false),
    m_subnetIdsHasBeenSet(false),
    m_usersHasBeenSet(false)
{
}

Aws::String CreateBrokerRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_autoMinorVersionUpgradeHasBeenSet)
  {
   payload.WithBool("autoMinorVersionUpgrade", m_autoMinorVersionUpgrade);

  }

  if(m_brokerNameHasBeenSet)
  {
   payload.WithString("brokerName", m_brokerName);

  }

  if(m_configurationHasBeenSet)
  {
   payload.WithObject("configuration", m_configuration.Jsonize());

  }

  if(m_creatorRequestIdHasBeenSet)
  {
   payload.WithString("creatorRequestId", m_creatorRequestId);

  }

  if(m_deploymentModeHasBeenSet)
  {
   payload.WithString("deploymentMode", DeploymentModeMapper::GetNameForDeploymentMode(m_deploymentMode));
  }

  if(m_engineTypeHasBeenSet)
  {
   payload.WithString("engineType", EngineTypeMapper::GetNameForEngineType(m_engineType));
  }

  if(m_engineVersionHasBeenSet)
  {
   payload.WithString("engineVersion", m_engineVersion);

  }

  if(m_hostInstanceTypeHasBeenSet)
  {
   payload.WithString("hostInstanceType", m_hostInstanceType);

  }

  if(m_maintenanceWindowStartTimeHasBeenSet)
  {
   payload.WithObject("maintenanceWindowStartTime", m_maintenanceWindowStartTime.Jsonize());

  }

  if(m_publiclyAccessibleHasBeenSet)
  {
   payload.WithBool("publiclyAccessible", m_publiclyAccessible);

  }

  if(m_securityGroupsHasBeenSet)
  {
   Array<JsonValue> securityGroupsJsonList(m_securityGroups.size());
   for(unsigned securityGroupsIndex = 0; securityGroupsIndex < securityGroupsJsonList.GetLength(); ++securityGroupsIndex)
   {
     securityGroupsJsonList[securityGroupsIndex].AsString(m_securityGroups[securityGroupsIndex]);
   }
   payload.WithArray("securityGroups", std::move(securityGroupsJsonList));

  }

  if(m_subnetIdsHasBeenSet)
  {
   Array<JsonValue> subnetIdsJsonList(m_subnetIds.size());
   for(unsigned subnetIdsIndex = 0; subnetIdsIndex < subnetIdsJsonList.GetLength(); ++subnetIdsIndex)
   {
     subnetIdsJsonList[subnetIdsIndex].AsString(m_subnetIds[subnetIdsIndex]);
   }
   payload.WithArray("subnetIds", std::move(subnetIdsJsonList));

  }

  if(m_usersHasBeenSet)
  {
   Array<JsonValue> usersJsonList(m_users.size());
   for(unsigned usersIndex = 0; usersIndex < usersJsonList.GetLength(); ++usersIndex)
   {
     usersJsonList[usersIndex].AsObject(m_users[usersIndex].Jsonize());
   }
   payload.WithArray("users", std::move(usersJsonList));

  }

  return payload.WriteReadable();
}




