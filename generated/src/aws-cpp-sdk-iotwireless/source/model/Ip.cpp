/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotwireless/model/Ip.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace IoTWireless
{
namespace Model
{

Ip::Ip() : 
    m_ipAddressHasBeenSet(false)
{
}

Ip::Ip(JsonView jsonValue) : 
    m_ipAddressHasBeenSet(false)
{
  *this = jsonValue;
}

Ip& Ip::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("IpAddress"))
  {
    m_ipAddress = jsonValue.GetString("IpAddress");

    m_ipAddressHasBeenSet = true;
  }

  return *this;
}

JsonValue Ip::Jsonize() const
{
  JsonValue payload;

  if(m_ipAddressHasBeenSet)
  {
   payload.WithString("IpAddress", m_ipAddress);

  }

  return payload;
}

} // namespace Model
} // namespace IoTWireless
} // namespace Aws
