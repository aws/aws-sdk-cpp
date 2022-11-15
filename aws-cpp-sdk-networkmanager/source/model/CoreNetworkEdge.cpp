/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/networkmanager/model/CoreNetworkEdge.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace NetworkManager
{
namespace Model
{

CoreNetworkEdge::CoreNetworkEdge() : 
    m_edgeLocationHasBeenSet(false),
    m_asn(0),
    m_asnHasBeenSet(false),
    m_insideCidrBlocksHasBeenSet(false)
{
}

CoreNetworkEdge::CoreNetworkEdge(JsonView jsonValue) : 
    m_edgeLocationHasBeenSet(false),
    m_asn(0),
    m_asnHasBeenSet(false),
    m_insideCidrBlocksHasBeenSet(false)
{
  *this = jsonValue;
}

CoreNetworkEdge& CoreNetworkEdge::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("EdgeLocation"))
  {
    m_edgeLocation = jsonValue.GetString("EdgeLocation");

    m_edgeLocationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Asn"))
  {
    m_asn = jsonValue.GetInt64("Asn");

    m_asnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("InsideCidrBlocks"))
  {
    Aws::Utils::Array<JsonView> insideCidrBlocksJsonList = jsonValue.GetArray("InsideCidrBlocks");
    for(unsigned insideCidrBlocksIndex = 0; insideCidrBlocksIndex < insideCidrBlocksJsonList.GetLength(); ++insideCidrBlocksIndex)
    {
      m_insideCidrBlocks.push_back(insideCidrBlocksJsonList[insideCidrBlocksIndex].AsString());
    }
    m_insideCidrBlocksHasBeenSet = true;
  }

  return *this;
}

JsonValue CoreNetworkEdge::Jsonize() const
{
  JsonValue payload;

  if(m_edgeLocationHasBeenSet)
  {
   payload.WithString("EdgeLocation", m_edgeLocation);

  }

  if(m_asnHasBeenSet)
  {
   payload.WithInt64("Asn", m_asn);

  }

  if(m_insideCidrBlocksHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> insideCidrBlocksJsonList(m_insideCidrBlocks.size());
   for(unsigned insideCidrBlocksIndex = 0; insideCidrBlocksIndex < insideCidrBlocksJsonList.GetLength(); ++insideCidrBlocksIndex)
   {
     insideCidrBlocksJsonList[insideCidrBlocksIndex].AsString(m_insideCidrBlocks[insideCidrBlocksIndex]);
   }
   payload.WithArray("InsideCidrBlocks", std::move(insideCidrBlocksJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace NetworkManager
} // namespace Aws
