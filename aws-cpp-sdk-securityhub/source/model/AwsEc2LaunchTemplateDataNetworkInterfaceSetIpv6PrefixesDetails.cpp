/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/AwsEc2LaunchTemplateDataNetworkInterfaceSetIpv6PrefixesDetails.h>
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

AwsEc2LaunchTemplateDataNetworkInterfaceSetIpv6PrefixesDetails::AwsEc2LaunchTemplateDataNetworkInterfaceSetIpv6PrefixesDetails() : 
    m_ipv6PrefixHasBeenSet(false)
{
}

AwsEc2LaunchTemplateDataNetworkInterfaceSetIpv6PrefixesDetails::AwsEc2LaunchTemplateDataNetworkInterfaceSetIpv6PrefixesDetails(JsonView jsonValue) : 
    m_ipv6PrefixHasBeenSet(false)
{
  *this = jsonValue;
}

AwsEc2LaunchTemplateDataNetworkInterfaceSetIpv6PrefixesDetails& AwsEc2LaunchTemplateDataNetworkInterfaceSetIpv6PrefixesDetails::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Ipv6Prefix"))
  {
    m_ipv6Prefix = jsonValue.GetString("Ipv6Prefix");

    m_ipv6PrefixHasBeenSet = true;
  }

  return *this;
}

JsonValue AwsEc2LaunchTemplateDataNetworkInterfaceSetIpv6PrefixesDetails::Jsonize() const
{
  JsonValue payload;

  if(m_ipv6PrefixHasBeenSet)
  {
   payload.WithString("Ipv6Prefix", m_ipv6Prefix);

  }

  return payload;
}

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
