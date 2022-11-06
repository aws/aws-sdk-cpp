/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/globalaccelerator/model/Listener.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace GlobalAccelerator
{
namespace Model
{

Listener::Listener() : 
    m_listenerArnHasBeenSet(false),
    m_portRangesHasBeenSet(false),
    m_protocol(Protocol::NOT_SET),
    m_protocolHasBeenSet(false),
    m_clientAffinity(ClientAffinity::NOT_SET),
    m_clientAffinityHasBeenSet(false)
{
}

Listener::Listener(JsonView jsonValue) : 
    m_listenerArnHasBeenSet(false),
    m_portRangesHasBeenSet(false),
    m_protocol(Protocol::NOT_SET),
    m_protocolHasBeenSet(false),
    m_clientAffinity(ClientAffinity::NOT_SET),
    m_clientAffinityHasBeenSet(false)
{
  *this = jsonValue;
}

Listener& Listener::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ListenerArn"))
  {
    m_listenerArn = jsonValue.GetString("ListenerArn");

    m_listenerArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("PortRanges"))
  {
    Aws::Utils::Array<JsonView> portRangesJsonList = jsonValue.GetArray("PortRanges");
    for(unsigned portRangesIndex = 0; portRangesIndex < portRangesJsonList.GetLength(); ++portRangesIndex)
    {
      m_portRanges.push_back(portRangesJsonList[portRangesIndex].AsObject());
    }
    m_portRangesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Protocol"))
  {
    m_protocol = ProtocolMapper::GetProtocolForName(jsonValue.GetString("Protocol"));

    m_protocolHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ClientAffinity"))
  {
    m_clientAffinity = ClientAffinityMapper::GetClientAffinityForName(jsonValue.GetString("ClientAffinity"));

    m_clientAffinityHasBeenSet = true;
  }

  return *this;
}

JsonValue Listener::Jsonize() const
{
  JsonValue payload;

  if(m_listenerArnHasBeenSet)
  {
   payload.WithString("ListenerArn", m_listenerArn);

  }

  if(m_portRangesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> portRangesJsonList(m_portRanges.size());
   for(unsigned portRangesIndex = 0; portRangesIndex < portRangesJsonList.GetLength(); ++portRangesIndex)
   {
     portRangesJsonList[portRangesIndex].AsObject(m_portRanges[portRangesIndex].Jsonize());
   }
   payload.WithArray("PortRanges", std::move(portRangesJsonList));

  }

  if(m_protocolHasBeenSet)
  {
   payload.WithString("Protocol", ProtocolMapper::GetNameForProtocol(m_protocol));
  }

  if(m_clientAffinityHasBeenSet)
  {
   payload.WithString("ClientAffinity", ClientAffinityMapper::GetNameForClientAffinity(m_clientAffinity));
  }

  return payload;
}

} // namespace Model
} // namespace GlobalAccelerator
} // namespace Aws
