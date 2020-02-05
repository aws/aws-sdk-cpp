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

#include <aws/securityhub/model/AwsEc2SecurityGroupDetails.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SecurityHub
{
namespace Model
{

AwsEc2SecurityGroupDetails::AwsEc2SecurityGroupDetails() : 
    m_groupNameHasBeenSet(false),
    m_groupIdHasBeenSet(false),
    m_ownerIdHasBeenSet(false),
    m_vpcIdHasBeenSet(false),
    m_ipPermissionsHasBeenSet(false),
    m_ipPermissionsEgressHasBeenSet(false)
{
}

AwsEc2SecurityGroupDetails::AwsEc2SecurityGroupDetails(JsonView jsonValue) : 
    m_groupNameHasBeenSet(false),
    m_groupIdHasBeenSet(false),
    m_ownerIdHasBeenSet(false),
    m_vpcIdHasBeenSet(false),
    m_ipPermissionsHasBeenSet(false),
    m_ipPermissionsEgressHasBeenSet(false)
{
  *this = jsonValue;
}

AwsEc2SecurityGroupDetails& AwsEc2SecurityGroupDetails::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("GroupName"))
  {
    m_groupName = jsonValue.GetString("GroupName");

    m_groupNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("GroupId"))
  {
    m_groupId = jsonValue.GetString("GroupId");

    m_groupIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("OwnerId"))
  {
    m_ownerId = jsonValue.GetString("OwnerId");

    m_ownerIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("VpcId"))
  {
    m_vpcId = jsonValue.GetString("VpcId");

    m_vpcIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("IpPermissions"))
  {
    Array<JsonView> ipPermissionsJsonList = jsonValue.GetArray("IpPermissions");
    for(unsigned ipPermissionsIndex = 0; ipPermissionsIndex < ipPermissionsJsonList.GetLength(); ++ipPermissionsIndex)
    {
      m_ipPermissions.push_back(ipPermissionsJsonList[ipPermissionsIndex].AsObject());
    }
    m_ipPermissionsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("IpPermissionsEgress"))
  {
    Array<JsonView> ipPermissionsEgressJsonList = jsonValue.GetArray("IpPermissionsEgress");
    for(unsigned ipPermissionsEgressIndex = 0; ipPermissionsEgressIndex < ipPermissionsEgressJsonList.GetLength(); ++ipPermissionsEgressIndex)
    {
      m_ipPermissionsEgress.push_back(ipPermissionsEgressJsonList[ipPermissionsEgressIndex].AsObject());
    }
    m_ipPermissionsEgressHasBeenSet = true;
  }

  return *this;
}

JsonValue AwsEc2SecurityGroupDetails::Jsonize() const
{
  JsonValue payload;

  if(m_groupNameHasBeenSet)
  {
   payload.WithString("GroupName", m_groupName);

  }

  if(m_groupIdHasBeenSet)
  {
   payload.WithString("GroupId", m_groupId);

  }

  if(m_ownerIdHasBeenSet)
  {
   payload.WithString("OwnerId", m_ownerId);

  }

  if(m_vpcIdHasBeenSet)
  {
   payload.WithString("VpcId", m_vpcId);

  }

  if(m_ipPermissionsHasBeenSet)
  {
   Array<JsonValue> ipPermissionsJsonList(m_ipPermissions.size());
   for(unsigned ipPermissionsIndex = 0; ipPermissionsIndex < ipPermissionsJsonList.GetLength(); ++ipPermissionsIndex)
   {
     ipPermissionsJsonList[ipPermissionsIndex].AsObject(m_ipPermissions[ipPermissionsIndex].Jsonize());
   }
   payload.WithArray("IpPermissions", std::move(ipPermissionsJsonList));

  }

  if(m_ipPermissionsEgressHasBeenSet)
  {
   Array<JsonValue> ipPermissionsEgressJsonList(m_ipPermissionsEgress.size());
   for(unsigned ipPermissionsEgressIndex = 0; ipPermissionsEgressIndex < ipPermissionsEgressJsonList.GetLength(); ++ipPermissionsEgressIndex)
   {
     ipPermissionsEgressJsonList[ipPermissionsEgressIndex].AsObject(m_ipPermissionsEgress[ipPermissionsEgressIndex].Jsonize());
   }
   payload.WithArray("IpPermissionsEgress", std::move(ipPermissionsEgressJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
