/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/geo-places/model/StreetComponents.h>
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

StreetComponents::StreetComponents(JsonView jsonValue)
{
  *this = jsonValue;
}

StreetComponents& StreetComponents::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("BaseName"))
  {
    m_baseName = jsonValue.GetString("BaseName");
    m_baseNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Type"))
  {
    m_type = jsonValue.GetString("Type");
    m_typeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("TypePlacement"))
  {
    m_typePlacement = TypePlacementMapper::GetTypePlacementForName(jsonValue.GetString("TypePlacement"));
    m_typePlacementHasBeenSet = true;
  }
  if(jsonValue.ValueExists("TypeSeparator"))
  {
    m_typeSeparator = jsonValue.GetString("TypeSeparator");
    m_typeSeparatorHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Prefix"))
  {
    m_prefix = jsonValue.GetString("Prefix");
    m_prefixHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Suffix"))
  {
    m_suffix = jsonValue.GetString("Suffix");
    m_suffixHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Direction"))
  {
    m_direction = jsonValue.GetString("Direction");
    m_directionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Language"))
  {
    m_language = jsonValue.GetString("Language");
    m_languageHasBeenSet = true;
  }
  return *this;
}

JsonValue StreetComponents::Jsonize() const
{
  JsonValue payload;

  if(m_baseNameHasBeenSet)
  {
   payload.WithString("BaseName", m_baseName);

  }

  if(m_typeHasBeenSet)
  {
   payload.WithString("Type", m_type);

  }

  if(m_typePlacementHasBeenSet)
  {
   payload.WithString("TypePlacement", TypePlacementMapper::GetNameForTypePlacement(m_typePlacement));
  }

  if(m_typeSeparatorHasBeenSet)
  {
   payload.WithString("TypeSeparator", m_typeSeparator);

  }

  if(m_prefixHasBeenSet)
  {
   payload.WithString("Prefix", m_prefix);

  }

  if(m_suffixHasBeenSet)
  {
   payload.WithString("Suffix", m_suffix);

  }

  if(m_directionHasBeenSet)
  {
   payload.WithString("Direction", m_direction);

  }

  if(m_languageHasBeenSet)
  {
   payload.WithString("Language", m_language);

  }

  return payload;
}

} // namespace Model
} // namespace GeoPlaces
} // namespace Aws
