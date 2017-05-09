/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#include <aws/lightsail/model/PortInfo.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Lightsail
{
namespace Model
{

PortInfo::PortInfo() : 
    m_fromPort(0),
    m_fromPortHasBeenSet(false),
    m_toPort(0),
    m_toPortHasBeenSet(false),
    m_protocol(NetworkProtocol::NOT_SET),
    m_protocolHasBeenSet(false)
{
}

PortInfo::PortInfo(const JsonValue& jsonValue) : 
    m_fromPort(0),
    m_fromPortHasBeenSet(false),
    m_toPort(0),
    m_toPortHasBeenSet(false),
    m_protocol(NetworkProtocol::NOT_SET),
    m_protocolHasBeenSet(false)
{
  *this = jsonValue;
}

PortInfo& PortInfo::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("fromPort"))
  {
    m_fromPort = jsonValue.GetInteger("fromPort");

    m_fromPortHasBeenSet = true;
  }

  if(jsonValue.ValueExists("toPort"))
  {
    m_toPort = jsonValue.GetInteger("toPort");

    m_toPortHasBeenSet = true;
  }

  if(jsonValue.ValueExists("protocol"))
  {
    m_protocol = NetworkProtocolMapper::GetNetworkProtocolForName(jsonValue.GetString("protocol"));

    m_protocolHasBeenSet = true;
  }

  return *this;
}

JsonValue PortInfo::Jsonize() const
{
  JsonValue payload;

  if(m_fromPortHasBeenSet)
  {
   payload.WithInteger("fromPort", m_fromPort);

  }

  if(m_toPortHasBeenSet)
  {
   payload.WithInteger("toPort", m_toPort);

  }

  if(m_protocolHasBeenSet)
  {
   payload.WithString("protocol", NetworkProtocolMapper::GetNameForNetworkProtocol(m_protocol));
  }

  return payload;
}

} // namespace Model
} // namespace Lightsail
} // namespace Aws