/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/globalaccelerator/model/CustomRoutingDestinationDescription.h>
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

CustomRoutingDestinationDescription::CustomRoutingDestinationDescription() : 
    m_fromPort(0),
    m_fromPortHasBeenSet(false),
    m_toPort(0),
    m_toPortHasBeenSet(false),
    m_protocolsHasBeenSet(false)
{
}

CustomRoutingDestinationDescription::CustomRoutingDestinationDescription(JsonView jsonValue) : 
    m_fromPort(0),
    m_fromPortHasBeenSet(false),
    m_toPort(0),
    m_toPortHasBeenSet(false),
    m_protocolsHasBeenSet(false)
{
  *this = jsonValue;
}

CustomRoutingDestinationDescription& CustomRoutingDestinationDescription::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("FromPort"))
  {
    m_fromPort = jsonValue.GetInteger("FromPort");

    m_fromPortHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ToPort"))
  {
    m_toPort = jsonValue.GetInteger("ToPort");

    m_toPortHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Protocols"))
  {
    Aws::Utils::Array<JsonView> protocolsJsonList = jsonValue.GetArray("Protocols");
    for(unsigned protocolsIndex = 0; protocolsIndex < protocolsJsonList.GetLength(); ++protocolsIndex)
    {
      m_protocols.push_back(ProtocolMapper::GetProtocolForName(protocolsJsonList[protocolsIndex].AsString()));
    }
    m_protocolsHasBeenSet = true;
  }

  return *this;
}

JsonValue CustomRoutingDestinationDescription::Jsonize() const
{
  JsonValue payload;

  if(m_fromPortHasBeenSet)
  {
   payload.WithInteger("FromPort", m_fromPort);

  }

  if(m_toPortHasBeenSet)
  {
   payload.WithInteger("ToPort", m_toPort);

  }

  if(m_protocolsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> protocolsJsonList(m_protocols.size());
   for(unsigned protocolsIndex = 0; protocolsIndex < protocolsJsonList.GetLength(); ++protocolsIndex)
   {
     protocolsJsonList[protocolsIndex].AsString(ProtocolMapper::GetNameForProtocol(m_protocols[protocolsIndex]));
   }
   payload.WithArray("Protocols", std::move(protocolsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace GlobalAccelerator
} // namespace Aws
