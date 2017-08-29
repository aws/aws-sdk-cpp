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

NeighborConnectionDetail::NeighborConnectionDetail(const JsonValue& jsonValue) : 
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

NeighborConnectionDetail& NeighborConnectionDetail::operator =(const JsonValue& jsonValue)
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
