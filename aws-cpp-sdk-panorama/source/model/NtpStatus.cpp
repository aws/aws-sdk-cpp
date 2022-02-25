/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/panorama/model/NtpStatus.h>
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

NtpStatus::NtpStatus() : 
    m_connectionStatus(NetworkConnectionStatus::NOT_SET),
    m_connectionStatusHasBeenSet(false),
    m_ipAddressHasBeenSet(false),
    m_ntpServerNameHasBeenSet(false)
{
}

NtpStatus::NtpStatus(JsonView jsonValue) : 
    m_connectionStatus(NetworkConnectionStatus::NOT_SET),
    m_connectionStatusHasBeenSet(false),
    m_ipAddressHasBeenSet(false),
    m_ntpServerNameHasBeenSet(false)
{
  *this = jsonValue;
}

NtpStatus& NtpStatus::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ConnectionStatus"))
  {
    m_connectionStatus = NetworkConnectionStatusMapper::GetNetworkConnectionStatusForName(jsonValue.GetString("ConnectionStatus"));

    m_connectionStatusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("IpAddress"))
  {
    m_ipAddress = jsonValue.GetString("IpAddress");

    m_ipAddressHasBeenSet = true;
  }

  if(jsonValue.ValueExists("NtpServerName"))
  {
    m_ntpServerName = jsonValue.GetString("NtpServerName");

    m_ntpServerNameHasBeenSet = true;
  }

  return *this;
}

JsonValue NtpStatus::Jsonize() const
{
  JsonValue payload;

  if(m_connectionStatusHasBeenSet)
  {
   payload.WithString("ConnectionStatus", NetworkConnectionStatusMapper::GetNameForNetworkConnectionStatus(m_connectionStatus));
  }

  if(m_ipAddressHasBeenSet)
  {
   payload.WithString("IpAddress", m_ipAddress);

  }

  if(m_ntpServerNameHasBeenSet)
  {
   payload.WithString("NtpServerName", m_ntpServerName);

  }

  return payload;
}

} // namespace Model
} // namespace Panorama
} // namespace Aws
