/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/redshift-serverless/model/VpcSecurityGroupMembership.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace RedshiftServerless
{
namespace Model
{

VpcSecurityGroupMembership::VpcSecurityGroupMembership() : 
    m_statusHasBeenSet(false),
    m_vpcSecurityGroupIdHasBeenSet(false)
{
}

VpcSecurityGroupMembership::VpcSecurityGroupMembership(JsonView jsonValue) : 
    m_statusHasBeenSet(false),
    m_vpcSecurityGroupIdHasBeenSet(false)
{
  *this = jsonValue;
}

VpcSecurityGroupMembership& VpcSecurityGroupMembership::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("status"))
  {
    m_status = jsonValue.GetString("status");

    m_statusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("vpcSecurityGroupId"))
  {
    m_vpcSecurityGroupId = jsonValue.GetString("vpcSecurityGroupId");

    m_vpcSecurityGroupIdHasBeenSet = true;
  }

  return *this;
}

JsonValue VpcSecurityGroupMembership::Jsonize() const
{
  JsonValue payload;

  if(m_statusHasBeenSet)
  {
   payload.WithString("status", m_status);

  }

  if(m_vpcSecurityGroupIdHasBeenSet)
  {
   payload.WithString("vpcSecurityGroupId", m_vpcSecurityGroupId);

  }

  return payload;
}

} // namespace Model
} // namespace RedshiftServerless
} // namespace Aws
