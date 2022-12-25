/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/networkmanager/model/CoreNetworkChangeValues.h>
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

CoreNetworkChangeValues::CoreNetworkChangeValues() : 
    m_segmentNameHasBeenSet(false),
    m_edgeLocationsHasBeenSet(false),
    m_asn(0),
    m_asnHasBeenSet(false),
    m_cidrHasBeenSet(false),
    m_destinationIdentifierHasBeenSet(false),
    m_insideCidrBlocksHasBeenSet(false),
    m_sharedSegmentsHasBeenSet(false)
{
}

CoreNetworkChangeValues::CoreNetworkChangeValues(JsonView jsonValue) : 
    m_segmentNameHasBeenSet(false),
    m_edgeLocationsHasBeenSet(false),
    m_asn(0),
    m_asnHasBeenSet(false),
    m_cidrHasBeenSet(false),
    m_destinationIdentifierHasBeenSet(false),
    m_insideCidrBlocksHasBeenSet(false),
    m_sharedSegmentsHasBeenSet(false)
{
  *this = jsonValue;
}

CoreNetworkChangeValues& CoreNetworkChangeValues::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("SegmentName"))
  {
    m_segmentName = jsonValue.GetString("SegmentName");

    m_segmentNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("EdgeLocations"))
  {
    Aws::Utils::Array<JsonView> edgeLocationsJsonList = jsonValue.GetArray("EdgeLocations");
    for(unsigned edgeLocationsIndex = 0; edgeLocationsIndex < edgeLocationsJsonList.GetLength(); ++edgeLocationsIndex)
    {
      m_edgeLocations.push_back(edgeLocationsJsonList[edgeLocationsIndex].AsString());
    }
    m_edgeLocationsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Asn"))
  {
    m_asn = jsonValue.GetInt64("Asn");

    m_asnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Cidr"))
  {
    m_cidr = jsonValue.GetString("Cidr");

    m_cidrHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DestinationIdentifier"))
  {
    m_destinationIdentifier = jsonValue.GetString("DestinationIdentifier");

    m_destinationIdentifierHasBeenSet = true;
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

  if(jsonValue.ValueExists("SharedSegments"))
  {
    Aws::Utils::Array<JsonView> sharedSegmentsJsonList = jsonValue.GetArray("SharedSegments");
    for(unsigned sharedSegmentsIndex = 0; sharedSegmentsIndex < sharedSegmentsJsonList.GetLength(); ++sharedSegmentsIndex)
    {
      m_sharedSegments.push_back(sharedSegmentsJsonList[sharedSegmentsIndex].AsString());
    }
    m_sharedSegmentsHasBeenSet = true;
  }

  return *this;
}

JsonValue CoreNetworkChangeValues::Jsonize() const
{
  JsonValue payload;

  if(m_segmentNameHasBeenSet)
  {
   payload.WithString("SegmentName", m_segmentName);

  }

  if(m_edgeLocationsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> edgeLocationsJsonList(m_edgeLocations.size());
   for(unsigned edgeLocationsIndex = 0; edgeLocationsIndex < edgeLocationsJsonList.GetLength(); ++edgeLocationsIndex)
   {
     edgeLocationsJsonList[edgeLocationsIndex].AsString(m_edgeLocations[edgeLocationsIndex]);
   }
   payload.WithArray("EdgeLocations", std::move(edgeLocationsJsonList));

  }

  if(m_asnHasBeenSet)
  {
   payload.WithInt64("Asn", m_asn);

  }

  if(m_cidrHasBeenSet)
  {
   payload.WithString("Cidr", m_cidr);

  }

  if(m_destinationIdentifierHasBeenSet)
  {
   payload.WithString("DestinationIdentifier", m_destinationIdentifier);

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

  if(m_sharedSegmentsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> sharedSegmentsJsonList(m_sharedSegments.size());
   for(unsigned sharedSegmentsIndex = 0; sharedSegmentsIndex < sharedSegmentsJsonList.GetLength(); ++sharedSegmentsIndex)
   {
     sharedSegmentsJsonList[sharedSegmentsIndex].AsString(m_sharedSegments[sharedSegmentsIndex]);
   }
   payload.WithArray("SharedSegments", std::move(sharedSegmentsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace NetworkManager
} // namespace Aws
