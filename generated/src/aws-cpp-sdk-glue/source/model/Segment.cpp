/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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

Segment::Segment(JsonView jsonValue) : 
    m_segmentNumber(0),
    m_segmentNumberHasBeenSet(false),
    m_totalSegments(0),
    m_totalSegmentsHasBeenSet(false)
{
  *this = jsonValue;
}

Segment& Segment::operator =(JsonView jsonValue)
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
