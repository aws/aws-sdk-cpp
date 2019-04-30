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

#include <aws/managedblockchain/model/NodeFabricAttributes.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ManagedBlockchain
{
namespace Model
{

NodeFabricAttributes::NodeFabricAttributes() : 
    m_peerEndpointHasBeenSet(false),
    m_peerEventEndpointHasBeenSet(false)
{
}

NodeFabricAttributes::NodeFabricAttributes(JsonView jsonValue) : 
    m_peerEndpointHasBeenSet(false),
    m_peerEventEndpointHasBeenSet(false)
{
  *this = jsonValue;
}

NodeFabricAttributes& NodeFabricAttributes::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("PeerEndpoint"))
  {
    m_peerEndpoint = jsonValue.GetString("PeerEndpoint");

    m_peerEndpointHasBeenSet = true;
  }

  if(jsonValue.ValueExists("PeerEventEndpoint"))
  {
    m_peerEventEndpoint = jsonValue.GetString("PeerEventEndpoint");

    m_peerEventEndpointHasBeenSet = true;
  }

  return *this;
}

JsonValue NodeFabricAttributes::Jsonize() const
{
  JsonValue payload;

  if(m_peerEndpointHasBeenSet)
  {
   payload.WithString("PeerEndpoint", m_peerEndpoint);

  }

  if(m_peerEventEndpointHasBeenSet)
  {
   payload.WithString("PeerEventEndpoint", m_peerEventEndpoint);

  }

  return payload;
}

} // namespace Model
} // namespace ManagedBlockchain
} // namespace Aws
