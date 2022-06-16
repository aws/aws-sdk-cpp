/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/VpcInfoIpv6CidrBlockSetDetails.h>
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

VpcInfoIpv6CidrBlockSetDetails::VpcInfoIpv6CidrBlockSetDetails() : 
    m_ipv6CidrBlockHasBeenSet(false)
{
}

VpcInfoIpv6CidrBlockSetDetails::VpcInfoIpv6CidrBlockSetDetails(JsonView jsonValue) : 
    m_ipv6CidrBlockHasBeenSet(false)
{
  *this = jsonValue;
}

VpcInfoIpv6CidrBlockSetDetails& VpcInfoIpv6CidrBlockSetDetails::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Ipv6CidrBlock"))
  {
    m_ipv6CidrBlock = jsonValue.GetString("Ipv6CidrBlock");

    m_ipv6CidrBlockHasBeenSet = true;
  }

  return *this;
}

JsonValue VpcInfoIpv6CidrBlockSetDetails::Jsonize() const
{
  JsonValue payload;

  if(m_ipv6CidrBlockHasBeenSet)
  {
   payload.WithString("Ipv6CidrBlock", m_ipv6CidrBlock);

  }

  return payload;
}

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
