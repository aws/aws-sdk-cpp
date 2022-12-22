/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/AwsEc2LaunchTemplateDataNetworkInterfaceSetPrivateIpAddressesDetails.h>
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

AwsEc2LaunchTemplateDataNetworkInterfaceSetPrivateIpAddressesDetails::AwsEc2LaunchTemplateDataNetworkInterfaceSetPrivateIpAddressesDetails() : 
    m_primary(false),
    m_primaryHasBeenSet(false),
    m_privateIpAddressHasBeenSet(false)
{
}

AwsEc2LaunchTemplateDataNetworkInterfaceSetPrivateIpAddressesDetails::AwsEc2LaunchTemplateDataNetworkInterfaceSetPrivateIpAddressesDetails(JsonView jsonValue) : 
    m_primary(false),
    m_primaryHasBeenSet(false),
    m_privateIpAddressHasBeenSet(false)
{
  *this = jsonValue;
}

AwsEc2LaunchTemplateDataNetworkInterfaceSetPrivateIpAddressesDetails& AwsEc2LaunchTemplateDataNetworkInterfaceSetPrivateIpAddressesDetails::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Primary"))
  {
    m_primary = jsonValue.GetBool("Primary");

    m_primaryHasBeenSet = true;
  }

  if(jsonValue.ValueExists("PrivateIpAddress"))
  {
    m_privateIpAddress = jsonValue.GetString("PrivateIpAddress");

    m_privateIpAddressHasBeenSet = true;
  }

  return *this;
}

JsonValue AwsEc2LaunchTemplateDataNetworkInterfaceSetPrivateIpAddressesDetails::Jsonize() const
{
  JsonValue payload;

  if(m_primaryHasBeenSet)
  {
   payload.WithBool("Primary", m_primary);

  }

  if(m_privateIpAddressHasBeenSet)
  {
   payload.WithString("PrivateIpAddress", m_privateIpAddress);

  }

  return payload;
}

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
