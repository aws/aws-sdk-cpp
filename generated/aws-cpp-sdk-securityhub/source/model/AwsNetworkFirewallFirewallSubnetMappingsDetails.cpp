/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/AwsNetworkFirewallFirewallSubnetMappingsDetails.h>
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

AwsNetworkFirewallFirewallSubnetMappingsDetails::AwsNetworkFirewallFirewallSubnetMappingsDetails() : 
    m_subnetIdHasBeenSet(false)
{
}

AwsNetworkFirewallFirewallSubnetMappingsDetails::AwsNetworkFirewallFirewallSubnetMappingsDetails(JsonView jsonValue) : 
    m_subnetIdHasBeenSet(false)
{
  *this = jsonValue;
}

AwsNetworkFirewallFirewallSubnetMappingsDetails& AwsNetworkFirewallFirewallSubnetMappingsDetails::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("SubnetId"))
  {
    m_subnetId = jsonValue.GetString("SubnetId");

    m_subnetIdHasBeenSet = true;
  }

  return *this;
}

JsonValue AwsNetworkFirewallFirewallSubnetMappingsDetails::Jsonize() const
{
  JsonValue payload;

  if(m_subnetIdHasBeenSet)
  {
   payload.WithString("SubnetId", m_subnetId);

  }

  return payload;
}

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
