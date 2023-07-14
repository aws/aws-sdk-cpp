/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/dms/model/VpcSecurityGroupMembership.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace DatabaseMigrationService
{
namespace Model
{

VpcSecurityGroupMembership::VpcSecurityGroupMembership() : 
    m_vpcSecurityGroupIdHasBeenSet(false),
    m_statusHasBeenSet(false)
{
}

VpcSecurityGroupMembership::VpcSecurityGroupMembership(JsonView jsonValue) : 
    m_vpcSecurityGroupIdHasBeenSet(false),
    m_statusHasBeenSet(false)
{
  *this = jsonValue;
}

VpcSecurityGroupMembership& VpcSecurityGroupMembership::operator =(JsonView jsonValue)
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

JsonValue VpcSecurityGroupMembership::Jsonize() const
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
} // namespace DatabaseMigrationService
} // namespace Aws
