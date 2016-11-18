/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/snowball/model/KeyRange.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Snowball
{
namespace Model
{

KeyRange::KeyRange() : 
    m_beginMarkerHasBeenSet(false),
    m_endMarkerHasBeenSet(false)
{
}

KeyRange::KeyRange(const JsonValue& jsonValue) : 
    m_beginMarkerHasBeenSet(false),
    m_endMarkerHasBeenSet(false)
{
  *this = jsonValue;
}

KeyRange& KeyRange::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("BeginMarker"))
  {
    m_beginMarker = jsonValue.GetString("BeginMarker");

    m_beginMarkerHasBeenSet = true;
  }

  if(jsonValue.ValueExists("EndMarker"))
  {
    m_endMarker = jsonValue.GetString("EndMarker");

    m_endMarkerHasBeenSet = true;
  }

  return *this;
}

JsonValue KeyRange::Jsonize() const
{
  JsonValue payload;

  if(m_beginMarkerHasBeenSet)
  {
   payload.WithString("BeginMarker", m_beginMarker);

  }

  if(m_endMarkerHasBeenSet)
  {
   payload.WithString("EndMarker", m_endMarker);

  }

  return payload;
}

} // namespace Model
} // namespace Snowball
} // namespace Aws