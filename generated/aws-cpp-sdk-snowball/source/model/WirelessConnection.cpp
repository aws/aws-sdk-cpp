/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/snowball/model/WirelessConnection.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Snowball
{
namespace Model
{

WirelessConnection::WirelessConnection() : 
    m_isWifiEnabled(false),
    m_isWifiEnabledHasBeenSet(false)
{
}

WirelessConnection::WirelessConnection(JsonView jsonValue) : 
    m_isWifiEnabled(false),
    m_isWifiEnabledHasBeenSet(false)
{
  *this = jsonValue;
}

WirelessConnection& WirelessConnection::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("IsWifiEnabled"))
  {
    m_isWifiEnabled = jsonValue.GetBool("IsWifiEnabled");

    m_isWifiEnabledHasBeenSet = true;
  }

  return *this;
}

JsonValue WirelessConnection::Jsonize() const
{
  JsonValue payload;

  if(m_isWifiEnabledHasBeenSet)
  {
   payload.WithBool("IsWifiEnabled", m_isWifiEnabled);

  }

  return payload;
}

} // namespace Model
} // namespace Snowball
} // namespace Aws
