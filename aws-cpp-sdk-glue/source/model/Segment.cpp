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

#include <aws/glue/model/Segment.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Glue
{
namespace Model
{

Segment::Segment() : 
    m_segmentNumber(0),
    m_segmentNumberHasBeenSet(false),
    m_totalSegments(0),
    m_totalSegmentsHasBeenSet(false)
{
}

Segment::Segment(const JsonValue& jsonValue) : 
    m_segmentNumber(0),
    m_segmentNumberHasBeenSet(false),
    m_totalSegments(0),
    m_totalSegmentsHasBeenSet(false)
{
  *this = jsonValue;
}

Segment& Segment::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("SegmentNumber"))
  {
    m_segmentNumber = jsonValue.GetInteger("SegmentNumber");

    m_segmentNumberHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TotalSegments"))
  {
    m_totalSegments = jsonValue.GetInteger("TotalSegments");

    m_totalSegmentsHasBeenSet = true;
  }

  return *this;
}

JsonValue Segment::Jsonize() const
{
  JsonValue payload;

  if(m_segmentNumberHasBeenSet)
  {
   payload.WithInteger("SegmentNumber", m_segmentNumber);

  }

  if(m_totalSegmentsHasBeenSet)
  {
   payload.WithInteger("TotalSegments", m_totalSegments);

  }

  return payload;
}

} // namespace Model
} // namespace Glue
} // namespace Aws
