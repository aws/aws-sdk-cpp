﻿/*
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

#include <aws/waf-regional/model/GeoMatchSetSummary.h>
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

GeoMatchSetSummary::GeoMatchSetSummary() : 
    m_geoMatchSetIdHasBeenSet(false),
    m_nameHasBeenSet(false)
{
}

GeoMatchSetSummary::GeoMatchSetSummary(JsonView jsonValue) : 
    m_geoMatchSetIdHasBeenSet(false),
    m_nameHasBeenSet(false)
{
  *this = jsonValue;
}

GeoMatchSetSummary& GeoMatchSetSummary::operator =(JsonView jsonValue)
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

  return *this;
}

JsonValue GeoMatchSetSummary::Jsonize() const
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

  return payload;
}

} // namespace Model
} // namespace WAFRegional
} // namespace Aws
