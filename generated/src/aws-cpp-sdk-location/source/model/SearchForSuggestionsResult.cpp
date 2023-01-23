/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/location/model/SearchForSuggestionsResult.h>
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

SearchForSuggestionsResult::SearchForSuggestionsResult() : 
    m_placeIdHasBeenSet(false),
    m_textHasBeenSet(false)
{
}

SearchForSuggestionsResult::SearchForSuggestionsResult(JsonView jsonValue) : 
    m_placeIdHasBeenSet(false),
    m_textHasBeenSet(false)
{
  *this = jsonValue;
}

SearchForSuggestionsResult& SearchForSuggestionsResult::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("PlaceId"))
  {
    m_placeId = jsonValue.GetString("PlaceId");

    m_placeIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Text"))
  {
    m_text = jsonValue.GetString("Text");

    m_textHasBeenSet = true;
  }

  return *this;
}

JsonValue SearchForSuggestionsResult::Jsonize() const
{
  JsonValue payload;

  if(m_placeIdHasBeenSet)
  {
   payload.WithString("PlaceId", m_placeId);

  }

  if(m_textHasBeenSet)
  {
   payload.WithString("Text", m_text);

  }

  return payload;
}

} // namespace Model
} // namespace LocationService
} // namespace Aws
