/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ecs/model/HostEntry.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ECS
{
namespace Model
{

HostEntry::HostEntry() : 
    m_hostnameHasBeenSet(false),
    m_ipAddressHasBeenSet(false)
{
}

HostEntry::HostEntry(JsonView jsonValue) : 
    m_hostnameHasBeenSet(false),
    m_ipAddressHasBeenSet(false)
{
  *this = jsonValue;
}

HostEntry& HostEntry::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("hostname"))
  {
    m_hostname = jsonValue.GetString("hostname");

    m_hostnameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ipAddress"))
  {
    m_ipAddress = jsonValue.GetString("ipAddress");

    m_ipAddressHasBeenSet = true;
  }

  return *this;
}

JsonValue HostEntry::Jsonize() const
{
  JsonValue payload;

  if(m_hostnameHasBeenSet)
  {
   payload.WithString("hostname", m_hostname);

  }

  if(m_ipAddressHasBeenSet)
  {
   payload.WithString("ipAddress", m_ipAddress);

  }

  return payload;
}

} // namespace Model
} // namespace ECS
} // namespace Aws
