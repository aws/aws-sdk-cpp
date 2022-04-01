/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/panorama/model/EthernetPayload.h>
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

EthernetPayload::EthernetPayload() : 
    m_connectionType(ConnectionType::NOT_SET),
    m_connectionTypeHasBeenSet(false),
    m_staticIpConnectionInfoHasBeenSet(false)
{
}

EthernetPayload::EthernetPayload(JsonView jsonValue) : 
    m_connectionType(ConnectionType::NOT_SET),
    m_connectionTypeHasBeenSet(false),
    m_staticIpConnectionInfoHasBeenSet(false)
{
  *this = jsonValue;
}

EthernetPayload& EthernetPayload::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ConnectionType"))
  {
    m_connectionType = ConnectionTypeMapper::GetConnectionTypeForName(jsonValue.GetString("ConnectionType"));

    m_connectionTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("StaticIpConnectionInfo"))
  {
    m_staticIpConnectionInfo = jsonValue.GetObject("StaticIpConnectionInfo");

    m_staticIpConnectionInfoHasBeenSet = true;
  }

  return *this;
}

JsonValue EthernetPayload::Jsonize() const
{
  JsonValue payload;

  if(m_connectionTypeHasBeenSet)
  {
   payload.WithString("ConnectionType", ConnectionTypeMapper::GetNameForConnectionType(m_connectionType));
  }

  if(m_staticIpConnectionInfoHasBeenSet)
  {
   payload.WithObject("StaticIpConnectionInfo", m_staticIpConnectionInfo.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace Panorama
} // namespace Aws
