/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/AwsRedshiftClusterVpcSecurityGroup.h>
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

AwsRedshiftClusterVpcSecurityGroup::AwsRedshiftClusterVpcSecurityGroup() : 
    m_statusHasBeenSet(false),
    m_vpcSecurityGroupIdHasBeenSet(false)
{
}

AwsRedshiftClusterVpcSecurityGroup::AwsRedshiftClusterVpcSecurityGroup(JsonView jsonValue) : 
    m_statusHasBeenSet(false),
    m_vpcSecurityGroupIdHasBeenSet(false)
{
  *this = jsonValue;
}

AwsRedshiftClusterVpcSecurityGroup& AwsRedshiftClusterVpcSecurityGroup::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Status"))
  {
    m_status = jsonValue.GetString("Status");

    m_statusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("VpcSecurityGroupId"))
  {
    m_vpcSecurityGroupId = jsonValue.GetString("VpcSecurityGroupId");

    m_vpcSecurityGroupIdHasBeenSet = true;
  }

  return *this;
}

JsonValue AwsRedshiftClusterVpcSecurityGroup::Jsonize() const
{
  JsonValue payload;

  if(m_statusHasBeenSet)
  {
   payload.WithString("Status", m_status);

  }

  if(m_vpcSecurityGroupIdHasBeenSet)
  {
   payload.WithString("VpcSecurityGroupId", m_vpcSecurityGroupId);

  }

  return payload;
}

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
