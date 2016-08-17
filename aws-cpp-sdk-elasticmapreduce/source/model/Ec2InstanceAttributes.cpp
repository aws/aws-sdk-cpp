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
#include <aws/elasticmapreduce/model/Ec2InstanceAttributes.h>
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

Ec2InstanceAttributes::Ec2InstanceAttributes() : 
    m_ec2KeyNameHasBeenSet(false),
    m_ec2SubnetIdHasBeenSet(false),
    m_ec2AvailabilityZoneHasBeenSet(false),
    m_iamInstanceProfileHasBeenSet(false),
    m_emrManagedMasterSecurityGroupHasBeenSet(false),
    m_emrManagedSlaveSecurityGroupHasBeenSet(false),
    m_serviceAccessSecurityGroupHasBeenSet(false),
    m_additionalMasterSecurityGroupsHasBeenSet(false),
    m_additionalSlaveSecurityGroupsHasBeenSet(false)
{
}

Ec2InstanceAttributes::Ec2InstanceAttributes(const JsonValue& jsonValue) : 
    m_ec2KeyNameHasBeenSet(false),
    m_ec2SubnetIdHasBeenSet(false),
    m_ec2AvailabilityZoneHasBeenSet(false),
    m_iamInstanceProfileHasBeenSet(false),
    m_emrManagedMasterSecurityGroupHasBeenSet(false),
    m_emrManagedSlaveSecurityGroupHasBeenSet(false),
    m_serviceAccessSecurityGroupHasBeenSet(false),
    m_additionalMasterSecurityGroupsHasBeenSet(false),
    m_additionalSlaveSecurityGroupsHasBeenSet(false)
{
  *this = jsonValue;
}

Ec2InstanceAttributes& Ec2InstanceAttributes::operator =(const JsonValue& jsonValue)
{
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

  if(jsonValue.ValueExists("Ec2AvailabilityZone"))
  {
    m_ec2AvailabilityZone = jsonValue.GetString("Ec2AvailabilityZone");

    m_ec2AvailabilityZoneHasBeenSet = true;
  }

  if(jsonValue.ValueExists("IamInstanceProfile"))
  {
    m_iamInstanceProfile = jsonValue.GetString("IamInstanceProfile");

    m_iamInstanceProfileHasBeenSet = true;
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
    Array<JsonValue> additionalMasterSecurityGroupsJsonList = jsonValue.GetArray("AdditionalMasterSecurityGroups");
    for(unsigned additionalMasterSecurityGroupsIndex = 0; additionalMasterSecurityGroupsIndex < additionalMasterSecurityGroupsJsonList.GetLength(); ++additionalMasterSecurityGroupsIndex)
    {
      m_additionalMasterSecurityGroups.push_back(additionalMasterSecurityGroupsJsonList[additionalMasterSecurityGroupsIndex].AsString());
    }
    m_additionalMasterSecurityGroupsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AdditionalSlaveSecurityGroups"))
  {
    Array<JsonValue> additionalSlaveSecurityGroupsJsonList = jsonValue.GetArray("AdditionalSlaveSecurityGroups");
    for(unsigned additionalSlaveSecurityGroupsIndex = 0; additionalSlaveSecurityGroupsIndex < additionalSlaveSecurityGroupsJsonList.GetLength(); ++additionalSlaveSecurityGroupsIndex)
    {
      m_additionalSlaveSecurityGroups.push_back(additionalSlaveSecurityGroupsJsonList[additionalSlaveSecurityGroupsIndex].AsString());
    }
    m_additionalSlaveSecurityGroupsHasBeenSet = true;
  }

  return *this;
}

JsonValue Ec2InstanceAttributes::Jsonize() const
{
  JsonValue payload;

  if(m_ec2KeyNameHasBeenSet)
  {
   payload.WithString("Ec2KeyName", m_ec2KeyName);

  }

  if(m_ec2SubnetIdHasBeenSet)
  {
   payload.WithString("Ec2SubnetId", m_ec2SubnetId);

  }

  if(m_ec2AvailabilityZoneHasBeenSet)
  {
   payload.WithString("Ec2AvailabilityZone", m_ec2AvailabilityZone);

  }

  if(m_iamInstanceProfileHasBeenSet)
  {
   payload.WithString("IamInstanceProfile", m_iamInstanceProfile);

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
   Array<JsonValue> additionalMasterSecurityGroupsJsonList(m_additionalMasterSecurityGroups.size());
   for(unsigned additionalMasterSecurityGroupsIndex = 0; additionalMasterSecurityGroupsIndex < additionalMasterSecurityGroupsJsonList.GetLength(); ++additionalMasterSecurityGroupsIndex)
   {
     additionalMasterSecurityGroupsJsonList[additionalMasterSecurityGroupsIndex].AsString(m_additionalMasterSecurityGroups[additionalMasterSecurityGroupsIndex]);
   }
   payload.WithArray("AdditionalMasterSecurityGroups", std::move(additionalMasterSecurityGroupsJsonList));

  }

  if(m_additionalSlaveSecurityGroupsHasBeenSet)
  {
   Array<JsonValue> additionalSlaveSecurityGroupsJsonList(m_additionalSlaveSecurityGroups.size());
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