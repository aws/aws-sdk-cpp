/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/AwsEc2NetworkInterfaceSecurityGroup.h>
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

AwsEc2NetworkInterfaceSecurityGroup::AwsEc2NetworkInterfaceSecurityGroup() : 
    m_groupNameHasBeenSet(false),
    m_groupIdHasBeenSet(false)
{
}

AwsEc2NetworkInterfaceSecurityGroup::AwsEc2NetworkInterfaceSecurityGroup(JsonView jsonValue) : 
    m_groupNameHasBeenSet(false),
    m_groupIdHasBeenSet(false)
{
  *this = jsonValue;
}

AwsEc2NetworkInterfaceSecurityGroup& AwsEc2NetworkInterfaceSecurityGroup::operator =(JsonView jsonValue)
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

  return *this;
}

JsonValue AwsEc2NetworkInterfaceSecurityGroup::Jsonize() const
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

  return payload;
}

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
