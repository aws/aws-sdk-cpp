/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/elasticmapreduce/model/JobFlowInstancesDetail.h>
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

JobFlowInstancesDetail::JobFlowInstancesDetail() : 
    m_masterInstanceTypeHasBeenSet(false),
    m_masterPublicDnsNameHasBeenSet(false),
    m_masterInstanceIdHasBeenSet(false),
    m_slaveInstanceTypeHasBeenSet(false),
    m_instanceCount(0),
    m_instanceCountHasBeenSet(false),
    m_instanceGroupsHasBeenSet(false),
    m_normalizedInstanceHours(0),
    m_normalizedInstanceHoursHasBeenSet(false),
    m_ec2KeyNameHasBeenSet(false),
    m_ec2SubnetIdHasBeenSet(false),
    m_placementHasBeenSet(false),
    m_keepJobFlowAliveWhenNoSteps(false),
    m_keepJobFlowAliveWhenNoStepsHasBeenSet(false),
    m_terminationProtected(false),
    m_terminationProtectedHasBeenSet(false),
    m_hadoopVersionHasBeenSet(false)
{
}

JobFlowInstancesDetail::JobFlowInstancesDetail(const JsonValue& jsonValue) : 
    m_masterInstanceTypeHasBeenSet(false),
    m_masterPublicDnsNameHasBeenSet(false),
    m_masterInstanceIdHasBeenSet(false),
    m_slaveInstanceTypeHasBeenSet(false),
    m_instanceCount(0),
    m_instanceCountHasBeenSet(false),
    m_instanceGroupsHasBeenSet(false),
    m_normalizedInstanceHours(0),
    m_normalizedInstanceHoursHasBeenSet(false),
    m_ec2KeyNameHasBeenSet(false),
    m_ec2SubnetIdHasBeenSet(false),
    m_placementHasBeenSet(false),
    m_keepJobFlowAliveWhenNoSteps(false),
    m_keepJobFlowAliveWhenNoStepsHasBeenSet(false),
    m_terminationProtected(false),
    m_terminationProtectedHasBeenSet(false),
    m_hadoopVersionHasBeenSet(false)
{
  *this = jsonValue;
}

JobFlowInstancesDetail& JobFlowInstancesDetail::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("MasterInstanceType"))
  {
    m_masterInstanceType = jsonValue.GetString("MasterInstanceType");

    m_masterInstanceTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("MasterPublicDnsName"))
  {
    m_masterPublicDnsName = jsonValue.GetString("MasterPublicDnsName");

    m_masterPublicDnsNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("MasterInstanceId"))
  {
    m_masterInstanceId = jsonValue.GetString("MasterInstanceId");

    m_masterInstanceIdHasBeenSet = true;
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
    Array<JsonValue> instanceGroupsJsonList = jsonValue.GetArray("InstanceGroups");
    for(unsigned instanceGroupsIndex = 0; instanceGroupsIndex < instanceGroupsJsonList.GetLength(); ++instanceGroupsIndex)
    {
      m_instanceGroups.push_back(instanceGroupsJsonList[instanceGroupsIndex].AsObject());
    }
    m_instanceGroupsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("NormalizedInstanceHours"))
  {
    m_normalizedInstanceHours = jsonValue.GetInteger("NormalizedInstanceHours");

    m_normalizedInstanceHoursHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Ec2KeyName"))
  {
    m_ec2KeyName = jsonValue.GetString("Ec2KeyName");

    m_ec2KeyNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Ec2SubnetId"))
  {
    m_ec2SubnetId = jsonValue.GetString("Ec2SubnetId");

    m_ec2SubnetIdHasBeenSet = true;
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

  if(jsonValue.ValueExists("HadoopVersion"))
  {
    m_hadoopVersion = jsonValue.GetString("HadoopVersion");

    m_hadoopVersionHasBeenSet = true;
  }

  return *this;
}

JsonValue JobFlowInstancesDetail::Jsonize() const
{
  JsonValue payload;

  if(m_masterInstanceTypeHasBeenSet)
  {
   payload.WithString("MasterInstanceType", m_masterInstanceType);

  }

  if(m_masterPublicDnsNameHasBeenSet)
  {
   payload.WithString("MasterPublicDnsName", m_masterPublicDnsName);

  }

  if(m_masterInstanceIdHasBeenSet)
  {
   payload.WithString("MasterInstanceId", m_masterInstanceId);

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
   Array<JsonValue> instanceGroupsJsonList(m_instanceGroups.size());
   for(unsigned instanceGroupsIndex = 0; instanceGroupsIndex < instanceGroupsJsonList.GetLength(); ++instanceGroupsIndex)
   {
     instanceGroupsJsonList[instanceGroupsIndex].AsObject(m_instanceGroups[instanceGroupsIndex].Jsonize());
   }
   payload.WithArray("InstanceGroups", std::move(instanceGroupsJsonList));

  }

  if(m_normalizedInstanceHoursHasBeenSet)
  {
   payload.WithInteger("NormalizedInstanceHours", m_normalizedInstanceHours);

  }

  if(m_ec2KeyNameHasBeenSet)
  {
   payload.WithString("Ec2KeyName", m_ec2KeyName);

  }

  if(m_ec2SubnetIdHasBeenSet)
  {
   payload.WithString("Ec2SubnetId", m_ec2SubnetId);

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

  if(m_hadoopVersionHasBeenSet)
  {
   payload.WithString("HadoopVersion", m_hadoopVersion);

  }

  return payload;
}

} // namespace Model
} // namespace EMR
} // namespace Aws