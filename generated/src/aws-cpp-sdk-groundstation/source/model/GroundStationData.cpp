/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/groundstation/model/GroundStationData.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace GroundStation
{
namespace Model
{

GroundStationData::GroundStationData() : 
    m_groundStationIdHasBeenSet(false),
    m_groundStationNameHasBeenSet(false),
    m_regionHasBeenSet(false)
{
}

GroundStationData::GroundStationData(JsonView jsonValue) : 
    m_groundStationIdHasBeenSet(false),
    m_groundStationNameHasBeenSet(false),
    m_regionHasBeenSet(false)
{
  *this = jsonValue;
}

GroundStationData& GroundStationData::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("groundStationId"))
  {
    m_groundStationId = jsonValue.GetString("groundStationId");

    m_groundStationIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("groundStationName"))
  {
    m_groundStationName = jsonValue.GetString("groundStationName");

    m_groundStationNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("region"))
  {
    m_region = jsonValue.GetString("region");

    m_regionHasBeenSet = true;
  }

  return *this;
}

JsonValue GroundStationData::Jsonize() const
{
  JsonValue payload;

  if(m_groundStationIdHasBeenSet)
  {
   payload.WithString("groundStationId", m_groundStationId);

  }

  if(m_groundStationNameHasBeenSet)
  {
   payload.WithString("groundStationName", m_groundStationName);

  }

  if(m_regionHasBeenSet)
  {
   payload.WithString("region", m_region);

  }

  return payload;
}

} // namespace Model
} // namespace GroundStation
} // namespace Aws
