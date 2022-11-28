/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotwireless/model/WiFiAccessPoint.h>
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

WiFiAccessPoint::WiFiAccessPoint() : 
    m_macAddressHasBeenSet(false),
    m_rss(0),
    m_rssHasBeenSet(false)
{
}

WiFiAccessPoint::WiFiAccessPoint(JsonView jsonValue) : 
    m_macAddressHasBeenSet(false),
    m_rss(0),
    m_rssHasBeenSet(false)
{
  *this = jsonValue;
}

WiFiAccessPoint& WiFiAccessPoint::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("MacAddress"))
  {
    m_macAddress = jsonValue.GetString("MacAddress");

    m_macAddressHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Rss"))
  {
    m_rss = jsonValue.GetInteger("Rss");

    m_rssHasBeenSet = true;
  }

  return *this;
}

JsonValue WiFiAccessPoint::Jsonize() const
{
  JsonValue payload;

  if(m_macAddressHasBeenSet)
  {
   payload.WithString("MacAddress", m_macAddress);

  }

  if(m_rssHasBeenSet)
  {
   payload.WithInteger("Rss", m_rss);

  }

  return payload;
}

} // namespace Model
} // namespace IoTWireless
} // namespace Aws
