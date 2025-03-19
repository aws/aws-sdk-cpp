/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/geo-places/model/AutocompleteResultItem.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace GeoPlaces
{
namespace Model
{

AutocompleteResultItem::AutocompleteResultItem(JsonView jsonValue)
{
  *this = jsonValue;
}

AutocompleteResultItem& AutocompleteResultItem::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("PlaceId"))
  {
    m_placeId = jsonValue.GetString("PlaceId");
    m_placeIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("PlaceType"))
  {
    m_placeType = PlaceTypeMapper::GetPlaceTypeForName(jsonValue.GetString("PlaceType"));
    m_placeTypeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Title"))
  {
    m_title = jsonValue.GetString("Title");
    m_titleHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Address"))
  {
    m_address = jsonValue.GetObject("Address");
    m_addressHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Distance"))
  {
    m_distance = jsonValue.GetInt64("Distance");
    m_distanceHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Language"))
  {
    m_language = jsonValue.GetString("Language");
    m_languageHasBeenSet = true;
  }
  if(jsonValue.ValueExists("PoliticalView"))
  {
    m_politicalView = jsonValue.GetString("PoliticalView");
    m_politicalViewHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Highlights"))
  {
    m_highlights = jsonValue.GetObject("Highlights");
    m_highlightsHasBeenSet = true;
  }
  return *this;
}

JsonValue AutocompleteResultItem::Jsonize() const
{
  JsonValue payload;

  if(m_placeIdHasBeenSet)
  {
   payload.WithString("PlaceId", m_placeId);

  }

  if(m_placeTypeHasBeenSet)
  {
   payload.WithString("PlaceType", PlaceTypeMapper::GetNameForPlaceType(m_placeType));
  }

  if(m_titleHasBeenSet)
  {
   payload.WithString("Title", m_title);

  }

  if(m_addressHasBeenSet)
  {
   payload.WithObject("Address", m_address.Jsonize());

  }

  if(m_distanceHasBeenSet)
  {
   payload.WithInt64("Distance", m_distance);

  }

  if(m_languageHasBeenSet)
  {
   payload.WithString("Language", m_language);

  }

  if(m_politicalViewHasBeenSet)
  {
   payload.WithString("PoliticalView", m_politicalView);

  }

  if(m_highlightsHasBeenSet)
  {
   payload.WithObject("Highlights", m_highlights.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace GeoPlaces
} // namespace Aws
