/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/pinpoint/model/SegmentBehaviors.h>
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

SegmentBehaviors::SegmentBehaviors() : 
    m_recencyHasBeenSet(false)
{
}

SegmentBehaviors::SegmentBehaviors(JsonView jsonValue) : 
    m_recencyHasBeenSet(false)
{
  *this = jsonValue;
}

SegmentBehaviors& SegmentBehaviors::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Recency"))
  {
    m_recency = jsonValue.GetObject("Recency");

    m_recencyHasBeenSet = true;
  }

  return *this;
}

JsonValue SegmentBehaviors::Jsonize() const
{
  JsonValue payload;

  if(m_recencyHasBeenSet)
  {
   payload.WithObject("Recency", m_recency.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace Pinpoint
} // namespace Aws
