/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/ColumnTag.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace QuickSight
{
namespace Model
{

ColumnTag::ColumnTag() : 
    m_columnGeographicRole(GeoSpatialDataRole::NOT_SET),
    m_columnGeographicRoleHasBeenSet(false),
    m_columnDescriptionHasBeenSet(false)
{
}

ColumnTag::ColumnTag(JsonView jsonValue) : 
    m_columnGeographicRole(GeoSpatialDataRole::NOT_SET),
    m_columnGeographicRoleHasBeenSet(false),
    m_columnDescriptionHasBeenSet(false)
{
  *this = jsonValue;
}

ColumnTag& ColumnTag::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ColumnGeographicRole"))
  {
    m_columnGeographicRole = GeoSpatialDataRoleMapper::GetGeoSpatialDataRoleForName(jsonValue.GetString("ColumnGeographicRole"));

    m_columnGeographicRoleHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ColumnDescription"))
  {
    m_columnDescription = jsonValue.GetObject("ColumnDescription");

    m_columnDescriptionHasBeenSet = true;
  }

  return *this;
}

JsonValue ColumnTag::Jsonize() const
{
  JsonValue payload;

  if(m_columnGeographicRoleHasBeenSet)
  {
   payload.WithString("ColumnGeographicRole", GeoSpatialDataRoleMapper::GetNameForGeoSpatialDataRole(m_columnGeographicRole));
  }

  if(m_columnDescriptionHasBeenSet)
  {
   payload.WithObject("ColumnDescription", m_columnDescription.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace QuickSight
} // namespace Aws
