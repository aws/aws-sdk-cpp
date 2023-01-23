/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/discovery/model/AgentNetworkInfo.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ApplicationDiscoveryService
{
namespace Model
{

AgentNetworkInfo::AgentNetworkInfo() : 
    m_ipAddressHasBeenSet(false),
    m_macAddressHasBeenSet(false)
{
}

AgentNetworkInfo::AgentNetworkInfo(JsonView jsonValue) : 
    m_ipAddressHasBeenSet(false),
    m_macAddressHasBeenSet(false)
{
  *this = jsonValue;
}

AgentNetworkInfo& AgentNetworkInfo::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ipAddress"))
  {
    m_ipAddress = jsonValue.GetString("ipAddress");

    m_ipAddressHasBeenSet = true;
  }

  if(jsonValue.ValueExists("macAddress"))
  {
    m_macAddress = jsonValue.GetString("macAddress");

    m_macAddressHasBeenSet = true;
  }

  return *this;
}

JsonValue AgentNetworkInfo::Jsonize() const
{
  JsonValue payload;

  if(m_ipAddressHasBeenSet)
  {
   payload.WithString("ipAddress", m_ipAddress);

  }

  if(m_macAddressHasBeenSet)
  {
   payload.WithString("macAddress", m_macAddress);

  }

  return payload;
}

} // namespace Model
} // namespace ApplicationDiscoveryService
} // namespace Aws
