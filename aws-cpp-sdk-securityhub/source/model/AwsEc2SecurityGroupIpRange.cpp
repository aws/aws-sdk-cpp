/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/AwsEc2SecurityGroupIpRange.h>
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

AwsEc2SecurityGroupIpRange::AwsEc2SecurityGroupIpRange() : 
    m_cidrIpHasBeenSet(false)
{
}

AwsEc2SecurityGroupIpRange::AwsEc2SecurityGroupIpRange(JsonView jsonValue) : 
    m_cidrIpHasBeenSet(false)
{
  *this = jsonValue;
}

AwsEc2SecurityGroupIpRange& AwsEc2SecurityGroupIpRange::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("CidrIp"))
  {
    m_cidrIp = jsonValue.GetString("CidrIp");

    m_cidrIpHasBeenSet = true;
  }

  return *this;
}

JsonValue AwsEc2SecurityGroupIpRange::Jsonize() const
{
  JsonValue payload;

  if(m_cidrIpHasBeenSet)
  {
   payload.WithString("CidrIp", m_cidrIp);

  }

  return payload;
}

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
