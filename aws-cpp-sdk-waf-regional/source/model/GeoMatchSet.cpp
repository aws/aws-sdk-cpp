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

GeoMatchSet::GeoMatchSet(const JsonValue& jsonValue) : 
    m_geoMatchSetIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_geoMatchConstraintsHasBeenSet(false)
{
  *this = jsonValue;
}

GeoMatchSet& GeoMatchSet::operator =(const JsonValue& jsonValue)
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
    Array<JsonValue> geoMatchConstraintsJsonList = jsonValue.GetArray("GeoMatchConstraints");
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
   Array<JsonValue> geoMatchConstraintsJsonList(m_geoMatchConstraints.size());
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
