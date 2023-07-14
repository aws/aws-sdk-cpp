/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/pinpoint/model/SegmentCondition.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Pinpoint
{
namespace Model
{

SegmentCondition::SegmentCondition() : 
    m_segmentIdHasBeenSet(false)
{
}

SegmentCondition::SegmentCondition(JsonView jsonValue) : 
    m_segmentIdHasBeenSet(false)
{
  *this = jsonValue;
}

SegmentCondition& SegmentCondition::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("SegmentId"))
  {
    m_segmentId = jsonValue.GetString("SegmentId");

    m_segmentIdHasBeenSet = true;
  }

  return *this;
}

JsonValue SegmentCondition::Jsonize() const
{
  JsonValue payload;

  if(m_segmentIdHasBeenSet)
  {
   payload.WithString("SegmentId", m_segmentId);

  }

  return payload;
}

} // namespace Model
} // namespace Pinpoint
} // namespace Aws
