﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/elasticmapreduce/model/JobFlowInstancesConfig.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace EMR
{
namespace Model
{

JobFlowInstancesConfig::JobFlowInstancesConfig(JsonView jsonValue)
{
  *this = jsonValue;
}

JobFlowInstancesConfig& JobFlowInstancesConfig::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("MasterInstanceType"))
  {
    m_masterInstanceType = jsonValue.GetString("MasterInstanceType");
    m_masterInstanceTypeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("SlaveInstanceType"))
  {
    m_slaveInstanceType = jsonValue.GetString("SlaveInstanceType");
    m_slaveInstanceTypeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("InstanceCount"))
  {
    m_instanceCount = jsonValue.GetInteger("InstanceCount");
    m_instanceCountHasBeenSet = true;
  }
  if(jsonValue.ValueExists("InstanceGroups"))
  {
    Aws::Utils::Array<JsonView> instanceGroupsJsonList = jsonValue.GetArray("InstanceGroups");
    for(unsigned instanceGroupsIndex = 0; instanceGroupsIndex < instanceGroupsJsonList.GetLength(); ++instanceGroupsIndex)
    {
      m_instanceGroups.push_back(instanceGroupsJsonList[instanceGroupsIndex].AsObject());
    }
    m_instanceGroupsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("InstanceFleets"))
  {
    Aws::Utils::Array<JsonView> instanceFleetsJsonList = jsonValue.GetArray("InstanceFleets");
    for(unsigned instanceFleetsIndex = 0; instanceFleetsIndex < instanceFleetsJsonList.GetLength(); ++instanceFleetsIndex)
    {
      m_instanceFleets.push_back(instanceFleetsJsonList[instanceFleetsIndex].AsObject());
    }
    m_instanceFleetsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Ec2KeyName"))
  {
    m_ec2KeyName = jsonValue.GetString("Ec2KeyName");
    m_ec2KeyNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Placement"))
  {
    m_placement = jsonValue.GetObject("Placement");
    m_placementHasBeenSet = true;
  }
  if(jsonValue.ValueExists("KeepJobFlowAliveWhenNoSteps"))
  {
    m_keepJobFlowAliveWhenNoSteps = jsonValue.GetBool("KeepJobFlowAliveWhenNoSteps");
    m_keepJobFlowAliveWhenNoStepsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("TerminationProtected"))
  {
    m_terminationProtected = jsonValue.GetBool("TerminationProtected");
    m_terminationProtectedHasBeenSet = true;
  }
  if(jsonValue.ValueExists("UnhealthyNodeReplacement"))
  {
    m_unhealthyNodeReplacement = jsonValue.GetBool("UnhealthyNodeReplacement");
    m_unhealthyNodeReplacementHasBeenSet = true;
  }
  if(jsonValue.ValueExists("HadoopVersion"))
  {
    m_hadoopVersion = jsonValue.GetString("HadoopVersion");
    m_hadoopVersionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Ec2SubnetId"))
  {
    m_ec2SubnetId = jsonValue.GetString("Ec2SubnetId");
    m_ec2SubnetIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Ec2SubnetIds"))
  {
    Aws::Utils::Array<JsonView> ec2SubnetIdsJsonList = jsonValue.GetArray("Ec2SubnetIds");
    for(unsigned ec2SubnetIdsIndex = 0; ec2SubnetIdsIndex < ec2SubnetIdsJsonList.GetLength(); ++ec2SubnetIdsIndex)
    {
      m_ec2SubnetIds.push_back(ec2SubnetIdsJsonList[ec2SubnetIdsIndex].AsString());
    }
    m_ec2SubnetIdsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("EmrManagedMasterSecurityGroup"))
  {
    m_emrManagedMasterSecurityGroup = jsonValue.GetString("EmrManagedMasterSecurityGroup");
    m_emrManagedMasterSecurityGroupHasBeenSet = true;
  }
  if(jsonValue.ValueExists("EmrManagedSlaveSecurityGroup"))
  {
    m_emrManagedSlaveSecurityGroup = jsonValue.GetString("EmrManagedSlaveSecurityGroup");
    m_emrManagedSlaveSecurityGroupHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ServiceAccessSecurityGroup"))
  {
    m_serviceAccessSecurityGroup = jsonValue.GetString("ServiceAccessSecurityGroup");
    m_serviceAccessSecurityGroupHasBeenSet = true;
  }
  if(jsonValue.ValueExists("AdditionalMasterSecurityGroups"))
  {
    Aws::Utils::Array<JsonView> additionalMasterSecurityGroupsJsonList = jsonValue.GetArray("AdditionalMasterSecurityGroups");
    for(unsigned additionalMasterSecurityGroupsIndex = 0; additionalMasterSecurityGroupsIndex < additionalMasterSecurityGroupsJsonList.GetLength(); ++additionalMasterSecurityGroupsIndex)
    {
      m_additionalMasterSecurityGroups.push_back(additionalMasterSecurityGroupsJsonList[additionalMasterSecurityGroupsIndex].AsString());
    }
    m_additionalMasterSecurityGroupsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("AdditionalSlaveSecurityGroups"))
  {
    Aws::Utils::Array<JsonView> additionalSlaveSecurityGroupsJsonList = jsonValue.GetArray("AdditionalSlaveSecurityGroups");
    for(unsigned additionalSlaveSecurityGroupsIndex = 0; additionalSlaveSecurityGroupsIndex < additionalSlaveSecurityGroupsJsonList.GetLength(); ++additionalSlaveSecurityGroupsIndex)
    {
      m_additionalSlaveSecurityGroups.push_back(additionalSlaveSecurityGroupsJsonList[additionalSlaveSecurityGroupsIndex].AsString());
    }
    m_additionalSlaveSecurityGroupsHasBeenSet = true;
  }
  return *this;
}

JsonValue JobFlowInstancesConfig::Jsonize() const
{
  JsonValue payload;

  if(m_masterInstanceTypeHasBeenSet)
  {
   payload.WithString("MasterInstanceType", m_masterInstanceType);

  }

  if(m_slaveInstanceTypeHasBeenSet)
  {
   payload.WithString("SlaveInstanceType", m_slaveInstanceType);

  }

  if(m_instanceCountHasBeenSet)
  {
   payload.WithInteger("InstanceCount", m_instanceCount);

  }

  if(m_instanceGroupsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> instanceGroupsJsonList(m_instanceGroups.size());
   for(unsigned instanceGroupsIndex = 0; instanceGroupsIndex < instanceGroupsJsonList.GetLength(); ++instanceGroupsIndex)
   {
     instanceGroupsJsonList[instanceGroupsIndex].AsObject(m_instanceGroups[instanceGroupsIndex].Jsonize());
   }
   payload.WithArray("InstanceGroups", std::move(instanceGroupsJsonList));

  }

  if(m_instanceFleetsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> instanceFleetsJsonList(m_instanceFleets.size());
   for(unsigned instanceFleetsIndex = 0; instanceFleetsIndex < instanceFleetsJsonList.GetLength(); ++instanceFleetsIndex)
   {
     instanceFleetsJsonList[instanceFleetsIndex].AsObject(m_instanceFleets[instanceFleetsIndex].Jsonize());
   }
   payload.WithArray("InstanceFleets", std::move(instanceFleetsJsonList));

  }

  if(m_ec2KeyNameHasBeenSet)
  {
   payload.WithString("Ec2KeyName", m_ec2KeyName);

  }

  if(m_placementHasBeenSet)
  {
   payload.WithObject("Placement", m_placement.Jsonize());

  }

  if(m_keepJobFlowAliveWhenNoStepsHasBeenSet)
  {
   payload.WithBool("KeepJobFlowAliveWhenNoSteps", m_keepJobFlowAliveWhenNoSteps);

  }

  if(m_terminationProtectedHasBeenSet)
  {
   payload.WithBool("TerminationProtected", m_terminationProtected);

  }

  if(m_unhealthyNodeReplacementHasBeenSet)
  {
   payload.WithBool("UnhealthyNodeReplacement", m_unhealthyNodeReplacement);

  }

  if(m_hadoopVersionHasBeenSet)
  {
   payload.WithString("HadoopVersion", m_hadoopVersion);

  }

  if(m_ec2SubnetIdHasBeenSet)
  {
   payload.WithString("Ec2SubnetId", m_ec2SubnetId);

  }

  if(m_ec2SubnetIdsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> ec2SubnetIdsJsonList(m_ec2SubnetIds.size());
   for(unsigned ec2SubnetIdsIndex = 0; ec2SubnetIdsIndex < ec2SubnetIdsJsonList.GetLength(); ++ec2SubnetIdsIndex)
   {
     ec2SubnetIdsJsonList[ec2SubnetIdsIndex].AsString(m_ec2SubnetIds[ec2SubnetIdsIndex]);
   }
   payload.WithArray("Ec2SubnetIds", std::move(ec2SubnetIdsJsonList));

  }

  if(m_emrManagedMasterSecurityGroupHasBeenSet)
  {
   payload.WithString("EmrManagedMasterSecurityGroup", m_emrManagedMasterSecurityGroup);

  }

  if(m_emrManagedSlaveSecurityGroupHasBeenSet)
  {
   payload.WithString("EmrManagedSlaveSecurityGroup", m_emrManagedSlaveSecurityGroup);

  }

  if(m_serviceAccessSecurityGroupHasBeenSet)
  {
   payload.WithString("ServiceAccessSecurityGroup", m_serviceAccessSecurityGroup);

  }

  if(m_additionalMasterSecurityGroupsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> additionalMasterSecurityGroupsJsonList(m_additionalMasterSecurityGroups.size());
   for(unsigned additionalMasterSecurityGroupsIndex = 0; additionalMasterSecurityGroupsIndex < additionalMasterSecurityGroupsJsonList.GetLength(); ++additionalMasterSecurityGroupsIndex)
   {
     additionalMasterSecurityGroupsJsonList[additionalMasterSecurityGroupsIndex].AsString(m_additionalMasterSecurityGroups[additionalMasterSecurityGroupsIndex]);
   }
   payload.WithArray("AdditionalMasterSecurityGroups", std::move(additionalMasterSecurityGroupsJsonList));

  }

  if(m_additionalSlaveSecurityGroupsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> additionalSlaveSecurityGroupsJsonList(m_additionalSlaveSecurityGroups.size());
   for(unsigned additionalSlaveSecurityGroupsIndex = 0; additionalSlaveSecurityGroupsIndex < additionalSlaveSecurityGroupsJsonList.GetLength(); ++additionalSlaveSecurityGroupsIndex)
   {
     additionalSlaveSecurityGroupsJsonList[additionalSlaveSecurityGroupsIndex].AsString(m_additionalSlaveSecurityGroups[additionalSlaveSecurityGroupsIndex]);
   }
   payload.WithArray("AdditionalSlaveSecurityGroups", std::move(additionalSlaveSecurityGroupsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace EMR
} // namespace Aws
