/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/groundstation/model/SocketAddress.h>
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

SocketAddress::SocketAddress() : 
    m_nameHasBeenSet(false),
    m_port(0),
    m_portHasBeenSet(false)
{
}

SocketAddress::SocketAddress(JsonView jsonValue) : 
    m_nameHasBeenSet(false),
    m_port(0),
    m_portHasBeenSet(false)
{
  *this = jsonValue;
}

SocketAddress& SocketAddress::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("port"))
  {
    m_port = jsonValue.GetInteger("port");

    m_portHasBeenSet = true;
  }

  return *this;
}

JsonValue SocketAddress::Jsonize() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_portHasBeenSet)
  {
   payload.WithInteger("port", m_port);

  }

  return payload;
}

} // namespace Model
} // namespace GroundStation
} // namespace Aws
