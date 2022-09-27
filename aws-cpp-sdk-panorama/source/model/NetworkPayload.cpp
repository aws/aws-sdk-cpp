/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/panorama/model/NetworkPayload.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Panorama
{
namespace Model
{

NetworkPayload::NetworkPayload() : 
    m_ethernet0HasBeenSet(false),
    m_ethernet1HasBeenSet(false),
    m_ntpHasBeenSet(false)
{
}

NetworkPayload::NetworkPayload(JsonView jsonValue) : 
    m_ethernet0HasBeenSet(false),
    m_ethernet1HasBeenSet(false),
    m_ntpHasBeenSet(false)
{
  *this = jsonValue;
}

NetworkPayload& NetworkPayload::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Ethernet0"))
  {
    m_ethernet0 = jsonValue.GetObject("Ethernet0");

    m_ethernet0HasBeenSet = true;
  }

  if(jsonValue.ValueExists("Ethernet1"))
  {
    m_ethernet1 = jsonValue.GetObject("Ethernet1");

    m_ethernet1HasBeenSet = true;
  }

  if(jsonValue.ValueExists("Ntp"))
  {
    m_ntp = jsonValue.GetObject("Ntp");

    m_ntpHasBeenSet = true;
  }

  return *this;
}

JsonValue NetworkPayload::Jsonize() const
{
  JsonValue payload;

  if(m_ethernet0HasBeenSet)
  {
   payload.WithObject("Ethernet0", m_ethernet0.Jsonize());

  }

  if(m_ethernet1HasBeenSet)
  {
   payload.WithObject("Ethernet1", m_ethernet1.Jsonize());

  }

  if(m_ntpHasBeenSet)
  {
   payload.WithObject("Ntp", m_ntp.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace Panorama
} // namespace Aws
