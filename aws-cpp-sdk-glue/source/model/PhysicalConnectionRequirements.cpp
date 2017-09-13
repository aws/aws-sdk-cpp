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

#include <aws/glue/model/PhysicalConnectionRequirements.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Glue
{
namespace Model
{

PhysicalConnectionRequirements::PhysicalConnectionRequirements() : 
    m_subnetIdHasBeenSet(false),
    m_securityGroupIdListHasBeenSet(false),
    m_availabilityZoneHasBeenSet(false)
{
}

PhysicalConnectionRequirements::PhysicalConnectionRequirements(const JsonValue& jsonValue) : 
    m_subnetIdHasBeenSet(false),
    m_securityGroupIdListHasBeenSet(false),
    m_availabilityZoneHasBeenSet(false)
{
  *this = jsonValue;
}

PhysicalConnectionRequirements& PhysicalConnectionRequirements::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("SubnetId"))
  {
    m_subnetId = jsonValue.GetString("SubnetId");

    m_subnetIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SecurityGroupIdList"))
  {
    Array<JsonValue> securityGroupIdListJsonList = jsonValue.GetArray("SecurityGroupIdList");
    for(unsigned securityGroupIdListIndex = 0; securityGroupIdListIndex < securityGroupIdListJsonList.GetLength(); ++securityGroupIdListIndex)
    {
      m_securityGroupIdList.push_back(securityGroupIdListJsonList[securityGroupIdListIndex].AsString());
    }
    m_securityGroupIdListHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AvailabilityZone"))
  {
    m_availabilityZone = jsonValue.GetString("AvailabilityZone");

    m_availabilityZoneHasBeenSet = true;
  }

  return *this;
}

JsonValue PhysicalConnectionRequirements::Jsonize() const
{
  JsonValue payload;

  if(m_subnetIdHasBeenSet)
  {
   payload.WithString("SubnetId", m_subnetId);

  }

  if(m_securityGroupIdListHasBeenSet)
  {
   Array<JsonValue> securityGroupIdListJsonList(m_securityGroupIdList.size());
   for(unsigned securityGroupIdListIndex = 0; securityGroupIdListIndex < securityGroupIdListJsonList.GetLength(); ++securityGroupIdListIndex)
   {
     securityGroupIdListJsonList[securityGroupIdListIndex].AsString(m_securityGroupIdList[securityGroupIdListIndex]);
   }
   payload.WithArray("SecurityGroupIdList", std::move(securityGroupIdListJsonList));

  }

  if(m_availabilityZoneHasBeenSet)
  {
   payload.WithString("AvailabilityZone", m_availabilityZone);

  }

  return payload;
}

} // namespace Model
} // namespace Glue
} // namespace Aws
