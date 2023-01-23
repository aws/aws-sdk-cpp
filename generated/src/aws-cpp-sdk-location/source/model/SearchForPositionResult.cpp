/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/location/model/SearchForPositionResult.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace LocationService
{
namespace Model
{

SearchForPositionResult::SearchForPositionResult() : 
    m_distance(0.0),
    m_distanceHasBeenSet(false),
    m_placeHasBeenSet(false),
    m_placeIdHasBeenSet(false)
{
}

SearchForPositionResult::SearchForPositionResult(JsonView jsonValue) : 
    m_distance(0.0),
    m_distanceHasBeenSet(false),
    m_placeHasBeenSet(false),
    m_placeIdHasBeenSet(false)
{
  *this = jsonValue;
}

SearchForPositionResult& SearchForPositionResult::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Distance"))
  {
    m_distance = jsonValue.GetDouble("Distance");

    m_distanceHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Place"))
  {
    m_place = jsonValue.GetObject("Place");

    m_placeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("PlaceId"))
  {
    m_placeId = jsonValue.GetString("PlaceId");

    m_placeIdHasBeenSet = true;
  }

  return *this;
}

JsonValue SearchForPositionResult::Jsonize() const
{
  JsonValue payload;

  if(m_distanceHasBeenSet)
  {
   payload.WithDouble("Distance", m_distance);

  }

  if(m_placeHasBeenSet)
  {
   payload.WithObject("Place", m_place.Jsonize());

  }

  if(m_placeIdHasBeenSet)
  {
   payload.WithString("PlaceId", m_placeId);

  }

  return payload;
}

} // namespace Model
} // namespace LocationService
} // namespace Aws
