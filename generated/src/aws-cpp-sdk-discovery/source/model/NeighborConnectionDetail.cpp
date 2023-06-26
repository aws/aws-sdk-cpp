/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/discovery/model/NeighborConnectionDetail.h>
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

NeighborConnectionDetail::NeighborConnectionDetail() : 
    m_sourceServerIdHasBeenSet(false),
    m_destinationServerIdHasBeenSet(false),
    m_destinationPort(0),
    m_destinationPortHasBeenSet(false),
    m_transportProtocolHasBeenSet(false),
    m_connectionsCount(0),
    m_connectionsCountHasBeenSet(false)
{
}

NeighborConnectionDetail::NeighborConnectionDetail(JsonView jsonValue) : 
    m_sourceServerIdHasBeenSet(false),
    m_destinationServerIdHasBeenSet(false),
    m_destinationPort(0),
    m_destinationPortHasBeenSet(false),
    m_transportProtocolHasBeenSet(false),
    m_connectionsCount(0),
    m_connectionsCountHasBeenSet(false)
{
  *this = jsonValue;
}

NeighborConnectionDetail& NeighborConnectionDetail::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("sourceServerId"))
  {
    m_sourceServerId = jsonValue.GetString("sourceServerId");

    m_sourceServerIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("destinationServerId"))
  {
    m_destinationServerId = jsonValue.GetString("destinationServerId");

    m_destinationServerIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("destinationPort"))
  {
    m_destinationPort = jsonValue.GetInteger("destinationPort");

    m_destinationPortHasBeenSet = true;
  }

  if(jsonValue.ValueExists("transportProtocol"))
  {
    m_transportProtocol = jsonValue.GetString("transportProtocol");

    m_transportProtocolHasBeenSet = true;
  }

  if(jsonValue.ValueExists("connectionsCount"))
  {
    m_connectionsCount = jsonValue.GetInt64("connectionsCount");

    m_connectionsCountHasBeenSet = true;
  }

  return *this;
}

JsonValue NeighborConnectionDetail::Jsonize() const
{
  JsonValue payload;

  if(m_sourceServerIdHasBeenSet)
  {
   payload.WithString("sourceServerId", m_sourceServerId);

  }

  if(m_destinationServerIdHasBeenSet)
  {
   payload.WithString("destinationServerId", m_destinationServerId);

  }

  if(m_destinationPortHasBeenSet)
  {
   payload.WithInteger("destinationPort", m_destinationPort);

  }

  if(m_transportProtocolHasBeenSet)
  {
   payload.WithString("transportProtocol", m_transportProtocol);

  }

  if(m_connectionsCountHasBeenSet)
  {
   payload.WithInt64("connectionsCount", m_connectionsCount);

  }

  return payload;
}

} // namespace Model
} // namespace ApplicationDiscoveryService
} // namespace Aws
