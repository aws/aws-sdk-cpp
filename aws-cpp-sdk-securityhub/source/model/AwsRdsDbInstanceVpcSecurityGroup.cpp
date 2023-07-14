/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/AwsRdsDbInstanceVpcSecurityGroup.h>
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

AwsRdsDbInstanceVpcSecurityGroup::AwsRdsDbInstanceVpcSecurityGroup() : 
    m_vpcSecurityGroupIdHasBeenSet(false),
    m_statusHasBeenSet(false)
{
}

AwsRdsDbInstanceVpcSecurityGroup::AwsRdsDbInstanceVpcSecurityGroup(JsonView jsonValue) : 
    m_vpcSecurityGroupIdHasBeenSet(false),
    m_statusHasBeenSet(false)
{
  *this = jsonValue;
}

AwsRdsDbInstanceVpcSecurityGroup& AwsRdsDbInstanceVpcSecurityGroup::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("VpcSecurityGroupId"))
  {
    m_vpcSecurityGroupId = jsonValue.GetString("VpcSecurityGroupId");

    m_vpcSecurityGroupIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Status"))
  {
    m_status = jsonValue.GetString("Status");

    m_statusHasBeenSet = true;
  }

  return *this;
}

JsonValue AwsRdsDbInstanceVpcSecurityGroup::Jsonize() const
{
  JsonValue payload;

  if(m_vpcSecurityGroupIdHasBeenSet)
  {
   payload.WithString("VpcSecurityGroupId", m_vpcSecurityGroupId);

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
