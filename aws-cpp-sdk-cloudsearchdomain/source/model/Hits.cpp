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
#include <aws/cloudsearchdomain/model/Hits.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace CloudSearchDomain
{
namespace Model
{

Hits::Hits() : 
    m_found(0),
    m_foundHasBeenSet(false),
    m_start(0),
    m_startHasBeenSet(false),
    m_cursorHasBeenSet(false),
    m_hitHasBeenSet(false)
{
}

Hits::Hits(const JsonValue& jsonValue) : 
    m_found(0),
    m_foundHasBeenSet(false),
    m_start(0),
    m_startHasBeenSet(false),
    m_cursorHasBeenSet(false),
    m_hitHasBeenSet(false)
{
  *this = jsonValue;
}

Hits& Hits::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("found"))
  {
    m_found = jsonValue.GetInt64("found");

    m_foundHasBeenSet = true;
  }

  if(jsonValue.ValueExists("start"))
  {
    m_start = jsonValue.GetInt64("start");

    m_startHasBeenSet = true;
  }

  if(jsonValue.ValueExists("cursor"))
  {
    m_cursor = jsonValue.GetString("cursor");

    m_cursorHasBeenSet = true;
  }

  if(jsonValue.ValueExists("hit"))
  {
    Array<JsonValue> hitJsonList = jsonValue.GetArray("hit");
    for(unsigned hitIndex = 0; hitIndex < hitJsonList.GetLength(); ++hitIndex)
    {
      m_hit.push_back(hitJsonList[hitIndex].AsObject());
    }
    m_hitHasBeenSet = true;
  }

  return *this;
}

JsonValue Hits::Jsonize() const
{
  JsonValue payload;

  if(m_foundHasBeenSet)
  {
   payload.WithInt64("found", m_found);

  }

  if(m_startHasBeenSet)
  {
   payload.WithInt64("start", m_start);

  }

  if(m_cursorHasBeenSet)
  {
   payload.WithString("cursor", m_cursor);

  }

  if(m_hitHasBeenSet)
  {
   Array<JsonValue> hitJsonList(m_hit.size());
   for(unsigned hitIndex = 0; hitIndex < hitJsonList.GetLength(); ++hitIndex)
   {
     hitJsonList[hitIndex].AsObject(m_hit[hitIndex].Jsonize());
   }
   payload.WithArray("hit", std::move(hitJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace CloudSearchDomain
} // namespace Aws