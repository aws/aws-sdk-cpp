/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/waf-regional/model/GeoMatchSet.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace WAFRegional
{
namespace Model
{

GeoMatchSet::GeoMatchSet() : 
    m_geoMatchSetIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_geoMatchConstraintsHasBeenSet(false)
{
}

GeoMatchSet::GeoMatchSet(JsonView jsonValue) : 
    m_geoMatchSetIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_geoMatchConstraintsHasBeenSet(false)
{
  *this = jsonValue;
}

GeoMatchSet& GeoMatchSet::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("GeoMatchSetId"))
  {
    m_geoMatchSetId = jsonValue.GetString("GeoMatchSetId");

    m_geoMatchSetIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("GeoMatchConstraints"))
  {
    Aws::Utils::Array<JsonView> geoMatchConstraintsJsonList = jsonValue.GetArray("GeoMatchConstraints");
    for(unsigned geoMatchConstraintsIndex = 0; geoMatchConstraintsIndex < geoMatchConstraintsJsonList.GetLength(); ++geoMatchConstraintsIndex)
    {
      m_geoMatchConstraints.push_back(geoMatchConstraintsJsonList[geoMatchConstraintsIndex].AsObject());
    }
    m_geoMatchConstraintsHasBeenSet = true;
  }

  return *this;
}

JsonValue GeoMatchSet::Jsonize() const
{
  JsonValue payload;

  if(m_geoMatchSetIdHasBeenSet)
  {
   payload.WithString("GeoMatchSetId", m_geoMatchSetId);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_geoMatchConstraintsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> geoMatchConstraintsJsonList(m_geoMatchConstraints.size());
   for(unsigned geoMatchConstraintsIndex = 0; geoMatchConstraintsIndex < geoMatchConstraintsJsonList.GetLength(); ++geoMatchConstraintsIndex)
   {
     geoMatchConstraintsJsonList[geoMatchConstraintsIndex].AsObject(m_geoMatchConstraints[geoMatchConstraintsIndex].Jsonize());
   }
   payload.WithArray("GeoMatchConstraints", std::move(geoMatchConstraintsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace WAFRegional
} // namespace Aws
