/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/fms/model/AwsEc2NetworkInterfaceViolation.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace FMS
{
namespace Model
{

AwsEc2NetworkInterfaceViolation::AwsEc2NetworkInterfaceViolation() : 
    m_violationTargetHasBeenSet(false),
    m_violatingSecurityGroupsHasBeenSet(false)
{
}

AwsEc2NetworkInterfaceViolation::AwsEc2NetworkInterfaceViolation(JsonView jsonValue) : 
    m_violationTargetHasBeenSet(false),
    m_violatingSecurityGroupsHasBeenSet(false)
{
  *this = jsonValue;
}

AwsEc2NetworkInterfaceViolation& AwsEc2NetworkInterfaceViolation::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ViolationTarget"))
  {
    m_violationTarget = jsonValue.GetString("ViolationTarget");

    m_violationTargetHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ViolatingSecurityGroups"))
  {
    Aws::Utils::Array<JsonView> violatingSecurityGroupsJsonList = jsonValue.GetArray("ViolatingSecurityGroups");
    for(unsigned violatingSecurityGroupsIndex = 0; violatingSecurityGroupsIndex < violatingSecurityGroupsJsonList.GetLength(); ++violatingSecurityGroupsIndex)
    {
      m_violatingSecurityGroups.push_back(violatingSecurityGroupsJsonList[violatingSecurityGroupsIndex].AsString());
    }
    m_violatingSecurityGroupsHasBeenSet = true;
  }

  return *this;
}

JsonValue AwsEc2NetworkInterfaceViolation::Jsonize() const
{
  JsonValue payload;

  if(m_violationTargetHasBeenSet)
  {
   payload.WithString("ViolationTarget", m_violationTarget);

  }

  if(m_violatingSecurityGroupsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> violatingSecurityGroupsJsonList(m_violatingSecurityGroups.size());
   for(unsigned violatingSecurityGroupsIndex = 0; violatingSecurityGroupsIndex < violatingSecurityGroupsJsonList.GetLength(); ++violatingSecurityGroupsIndex)
   {
     violatingSecurityGroupsJsonList[violatingSecurityGroupsIndex].AsString(m_violatingSecurityGroups[violatingSecurityGroupsIndex]);
   }
   payload.WithArray("ViolatingSecurityGroups", std::move(violatingSecurityGroupsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace FMS
} // namespace Aws
