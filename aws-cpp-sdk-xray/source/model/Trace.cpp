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

#include <aws/xray/model/Trace.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace XRay
{
namespace Model
{

Trace::Trace() : 
    m_idHasBeenSet(false),
    m_duration(0.0),
    m_durationHasBeenSet(false),
    m_segmentsHasBeenSet(false)
{
}

Trace::Trace(const JsonValue& jsonValue) : 
    m_idHasBeenSet(false),
    m_duration(0.0),
    m_durationHasBeenSet(false),
    m_segmentsHasBeenSet(false)
{
  *this = jsonValue;
}

Trace& Trace::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("Id"))
  {
    m_id = jsonValue.GetString("Id");

    m_idHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Duration"))
  {
    m_duration = jsonValue.GetDouble("Duration");

    m_durationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Segments"))
  {
    Array<JsonValue> segmentsJsonList = jsonValue.GetArray("Segments");
    for(unsigned segmentsIndex = 0; segmentsIndex < segmentsJsonList.GetLength(); ++segmentsIndex)
    {
      m_segments.push_back(segmentsJsonList[segmentsIndex].AsObject());
    }
    m_segmentsHasBeenSet = true;
  }

  return *this;
}

JsonValue Trace::Jsonize() const
{
  JsonValue payload;

  if(m_idHasBeenSet)
  {
   payload.WithString("Id", m_id);

  }

  if(m_durationHasBeenSet)
  {
   payload.WithDouble("Duration", m_duration);

  }

  if(m_segmentsHasBeenSet)
  {
   Array<JsonValue> segmentsJsonList(m_segments.size());
   for(unsigned segmentsIndex = 0; segmentsIndex < segmentsJsonList.GetLength(); ++segmentsIndex)
   {
     segmentsJsonList[segmentsIndex].AsObject(m_segments[segmentsIndex].Jsonize());
   }
   payload.WithArray("Segments", std::move(segmentsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace XRay
} // namespace Aws