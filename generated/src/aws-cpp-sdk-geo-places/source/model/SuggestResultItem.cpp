/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/geo-places/model/SuggestResultItem.h>
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

SuggestResultItem::SuggestResultItem(JsonView jsonValue)
{
  *this = jsonValue;
}

SuggestResultItem& SuggestResultItem::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Title"))
  {
    m_title = jsonValue.GetString("Title");
    m_titleHasBeenSet = true;
  }
  if(jsonValue.ValueExists("SuggestResultItemType"))
  {
    m_suggestResultItemType = SuggestResultItemTypeMapper::GetSuggestResultItemTypeForName(jsonValue.GetString("SuggestResultItemType"));
    m_suggestResultItemTypeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Place"))
  {
    m_place = jsonValue.GetObject("Place");
    m_placeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Query"))
  {
    m_query = jsonValue.GetObject("Query");
    m_queryHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Highlights"))
  {
    m_highlights = jsonValue.GetObject("Highlights");
    m_highlightsHasBeenSet = true;
  }
  return *this;
}

JsonValue SuggestResultItem::Jsonize() const
{
  JsonValue payload;

  if(m_titleHasBeenSet)
  {
   payload.WithString("Title", m_title);

  }

  if(m_suggestResultItemTypeHasBeenSet)
  {
   payload.WithString("SuggestResultItemType", SuggestResultItemTypeMapper::GetNameForSuggestResultItemType(m_suggestResultItemType));
  }

  if(m_placeHasBeenSet)
  {
   payload.WithObject("Place", m_place.Jsonize());

  }

  if(m_queryHasBeenSet)
  {
   payload.WithObject("Query", m_query.Jsonize());

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
