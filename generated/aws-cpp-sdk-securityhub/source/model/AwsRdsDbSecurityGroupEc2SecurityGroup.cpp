/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/AwsRdsDbSecurityGroupEc2SecurityGroup.h>
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

AwsRdsDbSecurityGroupEc2SecurityGroup::AwsRdsDbSecurityGroupEc2SecurityGroup() : 
    m_ec2SecurityGroupIdHasBeenSet(false),
    m_ec2SecurityGroupNameHasBeenSet(false),
    m_ec2SecurityGroupOwnerIdHasBeenSet(false),
    m_statusHasBeenSet(false)
{
}

AwsRdsDbSecurityGroupEc2SecurityGroup::AwsRdsDbSecurityGroupEc2SecurityGroup(JsonView jsonValue) : 
    m_ec2SecurityGroupIdHasBeenSet(false),
    m_ec2SecurityGroupNameHasBeenSet(false),
    m_ec2SecurityGroupOwnerIdHasBeenSet(false),
    m_statusHasBeenSet(false)
{
  *this = jsonValue;
}

AwsRdsDbSecurityGroupEc2SecurityGroup& AwsRdsDbSecurityGroupEc2SecurityGroup::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Ec2SecurityGroupId"))
  {
    m_ec2SecurityGroupId = jsonValue.GetString("Ec2SecurityGroupId");

    m_ec2SecurityGroupIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Ec2SecurityGroupName"))
  {
    m_ec2SecurityGroupName = jsonValue.GetString("Ec2SecurityGroupName");

    m_ec2SecurityGroupNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Ec2SecurityGroupOwnerId"))
  {
    m_ec2SecurityGroupOwnerId = jsonValue.GetString("Ec2SecurityGroupOwnerId");

    m_ec2SecurityGroupOwnerIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Status"))
  {
    m_status = jsonValue.GetString("Status");

    m_statusHasBeenSet = true;
  }

  return *this;
}

JsonValue AwsRdsDbSecurityGroupEc2SecurityGroup::Jsonize() const
{
  JsonValue payload;

  if(m_ec2SecurityGroupIdHasBeenSet)
  {
   payload.WithString("Ec2SecurityGroupId", m_ec2SecurityGroupId);

  }

  if(m_ec2SecurityGroupNameHasBeenSet)
  {
   payload.WithString("Ec2SecurityGroupName", m_ec2SecurityGroupName);

  }

  if(m_ec2SecurityGroupOwnerIdHasBeenSet)
  {
   payload.WithString("Ec2SecurityGroupOwnerId", m_ec2SecurityGroupOwnerId);

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("Status", m_status);

  }

  return payload;
}

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
