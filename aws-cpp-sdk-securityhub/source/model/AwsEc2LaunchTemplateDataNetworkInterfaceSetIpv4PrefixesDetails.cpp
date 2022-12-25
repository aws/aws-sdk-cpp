/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/AwsEc2LaunchTemplateDataNetworkInterfaceSetIpv4PrefixesDetails.h>
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

AwsEc2LaunchTemplateDataNetworkInterfaceSetIpv4PrefixesDetails::AwsEc2LaunchTemplateDataNetworkInterfaceSetIpv4PrefixesDetails() : 
    m_ipv4PrefixHasBeenSet(false)
{
}

AwsEc2LaunchTemplateDataNetworkInterfaceSetIpv4PrefixesDetails::AwsEc2LaunchTemplateDataNetworkInterfaceSetIpv4PrefixesDetails(JsonView jsonValue) : 
    m_ipv4PrefixHasBeenSet(false)
{
  *this = jsonValue;
}

AwsEc2LaunchTemplateDataNetworkInterfaceSetIpv4PrefixesDetails& AwsEc2LaunchTemplateDataNetworkInterfaceSetIpv4PrefixesDetails::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Ipv4Prefix"))
  {
    m_ipv4Prefix = jsonValue.GetString("Ipv4Prefix");

    m_ipv4PrefixHasBeenSet = true;
  }

  return *this;
}

JsonValue AwsEc2LaunchTemplateDataNetworkInterfaceSetIpv4PrefixesDetails::Jsonize() const
{
  JsonValue payload;

  if(m_ipv4PrefixHasBeenSet)
  {
   payload.WithString("Ipv4Prefix", m_ipv4Prefix);

  }

  return payload;
}

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
