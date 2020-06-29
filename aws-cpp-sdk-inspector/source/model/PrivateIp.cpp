/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/inspector/model/PrivateIp.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Inspector
{
namespace Model
{

PrivateIp::PrivateIp() : 
    m_privateDnsNameHasBeenSet(false),
    m_privateIpAddressHasBeenSet(false)
{
}

PrivateIp::PrivateIp(JsonView jsonValue) : 
    m_privateDnsNameHasBeenSet(false),
    m_privateIpAddressHasBeenSet(false)
{
  *this = jsonValue;
}

PrivateIp& PrivateIp::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("privateDnsName"))
  {
    m_privateDnsName = jsonValue.GetString("privateDnsName");

    m_privateDnsNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("privateIpAddress"))
  {
    m_privateIpAddress = jsonValue.GetString("privateIpAddress");

    m_privateIpAddressHasBeenSet = true;
  }

  return *this;
}

JsonValue PrivateIp::Jsonize() const
{
  JsonValue payload;

  if(m_privateDnsNameHasBeenSet)
  {
   payload.WithString("privateDnsName", m_privateDnsName);

  }

  if(m_privateIpAddressHasBeenSet)
  {
   payload.WithString("privateIpAddress", m_privateIpAddress);

  }

  return payload;
}

} // namespace Model
} // namespace Inspector
} // namespace Aws
