/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/AwsEc2SecurityGroupIpv6Range.h>
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

AwsEc2SecurityGroupIpv6Range::AwsEc2SecurityGroupIpv6Range() : 
    m_cidrIpv6HasBeenSet(false)
{
}

AwsEc2SecurityGroupIpv6Range::AwsEc2SecurityGroupIpv6Range(JsonView jsonValue) : 
    m_cidrIpv6HasBeenSet(false)
{
  *this = jsonValue;
}

AwsEc2SecurityGroupIpv6Range& AwsEc2SecurityGroupIpv6Range::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("CidrIpv6"))
  {
    m_cidrIpv6 = jsonValue.GetString("CidrIpv6");

    m_cidrIpv6HasBeenSet = true;
  }

  return *this;
}

JsonValue AwsEc2SecurityGroupIpv6Range::Jsonize() const
{
  JsonValue payload;

  if(m_cidrIpv6HasBeenSet)
  {
   payload.WithString("CidrIpv6", m_cidrIpv6);

  }

  return payload;
}

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
