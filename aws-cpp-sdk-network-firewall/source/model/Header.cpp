/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/network-firewall/model/Header.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace NetworkFirewall
{
namespace Model
{

Header::Header() : 
    m_protocol(StatefulRuleProtocol::NOT_SET),
    m_protocolHasBeenSet(false),
    m_sourceHasBeenSet(false),
    m_sourcePortHasBeenSet(false),
    m_direction(StatefulRuleDirection::NOT_SET),
    m_directionHasBeenSet(false),
    m_destinationHasBeenSet(false),
    m_destinationPortHasBeenSet(false)
{
}

Header::Header(JsonView jsonValue) : 
    m_protocol(StatefulRuleProtocol::NOT_SET),
    m_protocolHasBeenSet(false),
    m_sourceHasBeenSet(false),
    m_sourcePortHasBeenSet(false),
    m_direction(StatefulRuleDirection::NOT_SET),
    m_directionHasBeenSet(false),
    m_destinationHasBeenSet(false),
    m_destinationPortHasBeenSet(false)
{
  *this = jsonValue;
}

Header& Header::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Protocol"))
  {
    m_protocol = StatefulRuleProtocolMapper::GetStatefulRuleProtocolForName(jsonValue.GetString("Protocol"));

    m_protocolHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Source"))
  {
    m_source = jsonValue.GetString("Source");

    m_sourceHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SourcePort"))
  {
    m_sourcePort = jsonValue.GetString("SourcePort");

    m_sourcePortHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Direction"))
  {
    m_direction = StatefulRuleDirectionMapper::GetStatefulRuleDirectionForName(jsonValue.GetString("Direction"));

    m_directionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Destination"))
  {
    m_destination = jsonValue.GetString("Destination");

    m_destinationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DestinationPort"))
  {
    m_destinationPort = jsonValue.GetString("DestinationPort");

    m_destinationPortHasBeenSet = true;
  }

  return *this;
}

JsonValue Header::Jsonize() const
{
  JsonValue payload;

  if(m_protocolHasBeenSet)
  {
   payload.WithString("Protocol", StatefulRuleProtocolMapper::GetNameForStatefulRuleProtocol(m_protocol));
  }

  if(m_sourceHasBeenSet)
  {
   payload.WithString("Source", m_source);

  }

  if(m_sourcePortHasBeenSet)
  {
   payload.WithString("SourcePort", m_sourcePort);

  }

  if(m_directionHasBeenSet)
  {
   payload.WithString("Direction", StatefulRuleDirectionMapper::GetNameForStatefulRuleDirection(m_direction));
  }

  if(m_destinationHasBeenSet)
  {
   payload.WithString("Destination", m_destination);

  }

  if(m_destinationPortHasBeenSet)
  {
   payload.WithString("DestinationPort", m_destinationPort);

  }

  return payload;
}

} // namespace Model
} // namespace NetworkFirewall
} // namespace Aws
