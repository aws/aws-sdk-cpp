/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/network-firewall/model/SubnetMapping.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace NetworkFirewall
{
namespace Model
{

SubnetMapping::SubnetMapping() : 
    m_subnetIdHasBeenSet(false),
    m_iPAddressType(IPAddressType::NOT_SET),
    m_iPAddressTypeHasBeenSet(false)
{
}

SubnetMapping::SubnetMapping(JsonView jsonValue) : 
    m_subnetIdHasBeenSet(false),
    m_iPAddressType(IPAddressType::NOT_SET),
    m_iPAddressTypeHasBeenSet(false)
{
  *this = jsonValue;
}

SubnetMapping& SubnetMapping::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("SubnetId"))
  {
    m_subnetId = jsonValue.GetString("SubnetId");

    m_subnetIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("IPAddressType"))
  {
    m_iPAddressType = IPAddressTypeMapper::GetIPAddressTypeForName(jsonValue.GetString("IPAddressType"));

    m_iPAddressTypeHasBeenSet = true;
  }

  return *this;
}

JsonValue SubnetMapping::Jsonize() const
{
  JsonValue payload;

  if(m_subnetIdHasBeenSet)
  {
   payload.WithString("SubnetId", m_subnetId);

  }

  if(m_iPAddressTypeHasBeenSet)
  {
   payload.WithString("IPAddressType", IPAddressTypeMapper::GetNameForIPAddressType(m_iPAddressType));
  }

  return payload;
}

} // namespace Model
} // namespace NetworkFirewall
} // namespace Aws
