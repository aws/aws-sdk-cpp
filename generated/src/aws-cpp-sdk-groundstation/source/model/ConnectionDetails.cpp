/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/groundstation/model/ConnectionDetails.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace GroundStation
{
namespace Model
{

ConnectionDetails::ConnectionDetails() : 
    m_mtu(0),
    m_mtuHasBeenSet(false),
    m_socketAddressHasBeenSet(false)
{
}

ConnectionDetails::ConnectionDetails(JsonView jsonValue) : 
    m_mtu(0),
    m_mtuHasBeenSet(false),
    m_socketAddressHasBeenSet(false)
{
  *this = jsonValue;
}

ConnectionDetails& ConnectionDetails::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("mtu"))
  {
    m_mtu = jsonValue.GetInteger("mtu");

    m_mtuHasBeenSet = true;
  }

  if(jsonValue.ValueExists("socketAddress"))
  {
    m_socketAddress = jsonValue.GetObject("socketAddress");

    m_socketAddressHasBeenSet = true;
  }

  return *this;
}

JsonValue ConnectionDetails::Jsonize() const
{
  JsonValue payload;

  if(m_mtuHasBeenSet)
  {
   payload.WithInteger("mtu", m_mtu);

  }

  if(m_socketAddressHasBeenSet)
  {
   payload.WithObject("socketAddress", m_socketAddress.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace GroundStation
} // namespace Aws
