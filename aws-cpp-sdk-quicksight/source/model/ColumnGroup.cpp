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

#include <aws/quicksight/model/ColumnGroup.h>
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

ColumnGroup::ColumnGroup() : 
    m_geoSpatialColumnGroupHasBeenSet(false)
{
}

ColumnGroup::ColumnGroup(JsonView jsonValue) : 
    m_geoSpatialColumnGroupHasBeenSet(false)
{
  *this = jsonValue;
}

ColumnGroup& ColumnGroup::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("GeoSpatialColumnGroup"))
  {
    m_geoSpatialColumnGroup = jsonValue.GetObject("GeoSpatialColumnGroup");

    m_geoSpatialColumnGroupHasBeenSet = true;
  }

  return *this;
}

JsonValue ColumnGroup::Jsonize() const
{
  JsonValue payload;

  if(m_geoSpatialColumnGroupHasBeenSet)
  {
   payload.WithObject("GeoSpatialColumnGroup", m_geoSpatialColumnGroup.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace QuickSight
} // namespace Aws
