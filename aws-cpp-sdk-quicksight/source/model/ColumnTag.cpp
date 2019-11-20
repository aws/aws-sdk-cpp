/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
    m_columnGeographicRoleHasBeenSet(false)
{
}

ColumnTag::ColumnTag(JsonView jsonValue) : 
    m_columnGeographicRole(GeoSpatialDataRole::NOT_SET),
    m_columnGeographicRoleHasBeenSet(false)
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

  return *this;
}

JsonValue ColumnTag::Jsonize() const
{
  JsonValue payload;

  if(m_columnGeographicRoleHasBeenSet)
  {
   payload.WithString("ColumnGeographicRole", GeoSpatialDataRoleMapper::GetNameForGeoSpatialDataRole(m_columnGeographicRole));
  }

  return payload;
}

} // namespace Model
} // namespace QuickSight
} // namespace Aws
