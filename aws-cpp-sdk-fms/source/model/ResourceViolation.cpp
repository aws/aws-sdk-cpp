/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/fms/model/ResourceViolation.h>
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

ResourceViolation::ResourceViolation() : 
    m_awsVPCSecurityGroupViolationHasBeenSet(false),
    m_awsEc2NetworkInterfaceViolationHasBeenSet(false),
    m_awsEc2InstanceViolationHasBeenSet(false)
{
}

ResourceViolation::ResourceViolation(JsonView jsonValue) : 
    m_awsVPCSecurityGroupViolationHasBeenSet(false),
    m_awsEc2NetworkInterfaceViolationHasBeenSet(false),
    m_awsEc2InstanceViolationHasBeenSet(false)
{
  *this = jsonValue;
}

ResourceViolation& ResourceViolation::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("AwsVPCSecurityGroupViolation"))
  {
    m_awsVPCSecurityGroupViolation = jsonValue.GetObject("AwsVPCSecurityGroupViolation");

    m_awsVPCSecurityGroupViolationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AwsEc2NetworkInterfaceViolation"))
  {
    m_awsEc2NetworkInterfaceViolation = jsonValue.GetObject("AwsEc2NetworkInterfaceViolation");

    m_awsEc2NetworkInterfaceViolationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AwsEc2InstanceViolation"))
  {
    m_awsEc2InstanceViolation = jsonValue.GetObject("AwsEc2InstanceViolation");

    m_awsEc2InstanceViolationHasBeenSet = true;
  }

  return *this;
}

JsonValue ResourceViolation::Jsonize() const
{
  JsonValue payload;

  if(m_awsVPCSecurityGroupViolationHasBeenSet)
  {
   payload.WithObject("AwsVPCSecurityGroupViolation", m_awsVPCSecurityGroupViolation.Jsonize());

  }

  if(m_awsEc2NetworkInterfaceViolationHasBeenSet)
  {
   payload.WithObject("AwsEc2NetworkInterfaceViolation", m_awsEc2NetworkInterfaceViolation.Jsonize());

  }

  if(m_awsEc2InstanceViolationHasBeenSet)
  {
   payload.WithObject("AwsEc2InstanceViolation", m_awsEc2InstanceViolation.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace FMS
} // namespace Aws
