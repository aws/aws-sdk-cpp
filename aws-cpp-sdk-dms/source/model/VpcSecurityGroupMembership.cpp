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

VpcSecurityGroupMembership::VpcSecurityGroupMembership(const JsonValue& jsonValue) : 
    m_vpcSecurityGroupIdHasBeenSet(false),
    m_statusHasBeenSet(false)
{
  *this = jsonValue;
}

VpcSecurityGroupMembership& VpcSecurityGroupMembership::operator =(const JsonValue& jsonValue)
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