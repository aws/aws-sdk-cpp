/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/devicefarm/model/DeviceProxy.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace DeviceFarm
{
namespace Model
{

DeviceProxy::DeviceProxy(JsonView jsonValue)
{
  *this = jsonValue;
}

DeviceProxy& DeviceProxy::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("host"))
  {
    m_host = jsonValue.GetString("host");
    m_hostHasBeenSet = true;
  }
  if(jsonValue.ValueExists("port"))
  {
    m_port = jsonValue.GetInteger("port");
    m_portHasBeenSet = true;
  }
  return *this;
}

JsonValue DeviceProxy::Jsonize() const
{
  JsonValue payload;

  if(m_hostHasBeenSet)
  {
   payload.WithString("host", m_host);

  }

  if(m_portHasBeenSet)
  {
   payload.WithInteger("port", m_port);

  }

  return payload;
}

} // namespace Model
} // namespace DeviceFarm
} // namespace Aws
