/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/geo-routes/model/IsolineAvoidanceZoneCategory.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace GeoRoutes
{
namespace Model
{

IsolineAvoidanceZoneCategory::IsolineAvoidanceZoneCategory(JsonView jsonValue)
{
  *this = jsonValue;
}

IsolineAvoidanceZoneCategory& IsolineAvoidanceZoneCategory::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Category"))
  {
    m_category = IsolineZoneCategoryMapper::GetIsolineZoneCategoryForName(jsonValue.GetString("Category"));
    m_categoryHasBeenSet = true;
  }
  return *this;
}

JsonValue IsolineAvoidanceZoneCategory::Jsonize() const
{
  JsonValue payload;

  if(m_categoryHasBeenSet)
  {
   payload.WithString("Category", IsolineZoneCategoryMapper::GetNameForIsolineZoneCategory(m_category));
  }

  return payload;
}

} // namespace Model
} // namespace GeoRoutes
} // namespace Aws
