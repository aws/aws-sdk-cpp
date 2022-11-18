/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ssm-sap/model/Host.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SsmSap
{
namespace Model
{

Host::Host() : 
    m_hostNameHasBeenSet(false),
    m_hostRole(HostRole::NOT_SET),
    m_hostRoleHasBeenSet(false),
    m_hostIpHasBeenSet(false),
    m_instanceIdHasBeenSet(false)
{
}

Host::Host(JsonView jsonValue) : 
    m_hostNameHasBeenSet(false),
    m_hostRole(HostRole::NOT_SET),
    m_hostRoleHasBeenSet(false),
    m_hostIpHasBeenSet(false),
    m_instanceIdHasBeenSet(false)
{
  *this = jsonValue;
}

Host& Host::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("HostName"))
  {
    m_hostName = jsonValue.GetString("HostName");

    m_hostNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("HostRole"))
  {
    m_hostRole = HostRoleMapper::GetHostRoleForName(jsonValue.GetString("HostRole"));

    m_hostRoleHasBeenSet = true;
  }

  if(jsonValue.ValueExists("HostIp"))
  {
    m_hostIp = jsonValue.GetString("HostIp");

    m_hostIpHasBeenSet = true;
  }

  if(jsonValue.ValueExists("InstanceId"))
  {
    m_instanceId = jsonValue.GetString("InstanceId");

    m_instanceIdHasBeenSet = true;
  }

  return *this;
}

JsonValue Host::Jsonize() const
{
  JsonValue payload;

  if(m_hostNameHasBeenSet)
  {
   payload.WithString("HostName", m_hostName);

  }

  if(m_hostRoleHasBeenSet)
  {
   payload.WithString("HostRole", HostRoleMapper::GetNameForHostRole(m_hostRole));
  }

  if(m_hostIpHasBeenSet)
  {
   payload.WithString("HostIp", m_hostIp);

  }

  if(m_instanceIdHasBeenSet)
  {
   payload.WithString("InstanceId", m_instanceId);

  }

  return payload;
}

} // namespace Model
} // namespace SsmSap
} // namespace Aws
