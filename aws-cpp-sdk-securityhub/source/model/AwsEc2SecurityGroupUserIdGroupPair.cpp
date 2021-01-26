/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/AwsEc2SecurityGroupUserIdGroupPair.h>
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

AwsEc2SecurityGroupUserIdGroupPair::AwsEc2SecurityGroupUserIdGroupPair() : 
    m_groupIdHasBeenSet(false),
    m_groupNameHasBeenSet(false),
    m_peeringStatusHasBeenSet(false),
    m_userIdHasBeenSet(false),
    m_vpcIdHasBeenSet(false),
    m_vpcPeeringConnectionIdHasBeenSet(false)
{
}

AwsEc2SecurityGroupUserIdGroupPair::AwsEc2SecurityGroupUserIdGroupPair(JsonView jsonValue) : 
    m_groupIdHasBeenSet(false),
    m_groupNameHasBeenSet(false),
    m_peeringStatusHasBeenSet(false),
    m_userIdHasBeenSet(false),
    m_vpcIdHasBeenSet(false),
    m_vpcPeeringConnectionIdHasBeenSet(false)
{
  *this = jsonValue;
}

AwsEc2SecurityGroupUserIdGroupPair& AwsEc2SecurityGroupUserIdGroupPair::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("GroupId"))
  {
    m_groupId = jsonValue.GetString("GroupId");

    m_groupIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("GroupName"))
  {
    m_groupName = jsonValue.GetString("GroupName");

    m_groupNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("PeeringStatus"))
  {
    m_peeringStatus = jsonValue.GetString("PeeringStatus");

    m_peeringStatusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("UserId"))
  {
    m_userId = jsonValue.GetString("UserId");

    m_userIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("VpcId"))
  {
    m_vpcId = jsonValue.GetString("VpcId");

    m_vpcIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("VpcPeeringConnectionId"))
  {
    m_vpcPeeringConnectionId = jsonValue.GetString("VpcPeeringConnectionId");

    m_vpcPeeringConnectionIdHasBeenSet = true;
  }

  return *this;
}

JsonValue AwsEc2SecurityGroupUserIdGroupPair::Jsonize() const
{
  JsonValue payload;

  if(m_groupIdHasBeenSet)
  {
   payload.WithString("GroupId", m_groupId);

  }

  if(m_groupNameHasBeenSet)
  {
   payload.WithString("GroupName", m_groupName);

  }

  if(m_peeringStatusHasBeenSet)
  {
   payload.WithString("PeeringStatus", m_peeringStatus);

  }

  if(m_userIdHasBeenSet)
  {
   payload.WithString("UserId", m_userId);

  }

  if(m_vpcIdHasBeenSet)
  {
   payload.WithString("VpcId", m_vpcId);

  }

  if(m_vpcPeeringConnectionIdHasBeenSet)
  {
   payload.WithString("VpcPeeringConnectionId", m_vpcPeeringConnectionId);

  }

  return payload;
}

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
