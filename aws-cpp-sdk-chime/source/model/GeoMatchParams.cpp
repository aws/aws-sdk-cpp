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

#include <aws/chime/model/GeoMatchParams.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Chime
{
namespace Model
{

GeoMatchParams::GeoMatchParams() : 
    m_countryHasBeenSet(false),
    m_areaCodeHasBeenSet(false)
{
}

GeoMatchParams::GeoMatchParams(JsonView jsonValue) : 
    m_countryHasBeenSet(false),
    m_areaCodeHasBeenSet(false)
{
  *this = jsonValue;
}

GeoMatchParams& GeoMatchParams::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Country"))
  {
    m_country = jsonValue.GetString("Country");

    m_countryHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AreaCode"))
  {
    m_areaCode = jsonValue.GetString("AreaCode");

    m_areaCodeHasBeenSet = true;
  }

  return *this;
}

JsonValue GeoMatchParams::Jsonize() const
{
  JsonValue payload;

  if(m_countryHasBeenSet)
  {
   payload.WithString("Country", m_country);

  }

  if(m_areaCodeHasBeenSet)
  {
   payload.WithString("AreaCode", m_areaCode);

  }

  return payload;
}

} // namespace Model
} // namespace Chime
} // namespace Aws
