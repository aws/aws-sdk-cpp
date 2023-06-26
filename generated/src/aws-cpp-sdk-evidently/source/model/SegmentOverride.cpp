/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/evidently/model/SegmentOverride.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace CloudWatchEvidently
{
namespace Model
{

SegmentOverride::SegmentOverride() : 
    m_evaluationOrder(0),
    m_evaluationOrderHasBeenSet(false),
    m_segmentHasBeenSet(false),
    m_weightsHasBeenSet(false)
{
}

SegmentOverride::SegmentOverride(JsonView jsonValue) : 
    m_evaluationOrder(0),
    m_evaluationOrderHasBeenSet(false),
    m_segmentHasBeenSet(false),
    m_weightsHasBeenSet(false)
{
  *this = jsonValue;
}

SegmentOverride& SegmentOverride::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("evaluationOrder"))
  {
    m_evaluationOrder = jsonValue.GetInt64("evaluationOrder");

    m_evaluationOrderHasBeenSet = true;
  }

  if(jsonValue.ValueExists("segment"))
  {
    m_segment = jsonValue.GetString("segment");

    m_segmentHasBeenSet = true;
  }

  if(jsonValue.ValueExists("weights"))
  {
    Aws::Map<Aws::String, JsonView> weightsJsonMap = jsonValue.GetObject("weights").GetAllObjects();
    for(auto& weightsItem : weightsJsonMap)
    {
      m_weights[weightsItem.first] = weightsItem.second.AsInt64();
    }
    m_weightsHasBeenSet = true;
  }

  return *this;
}

JsonValue SegmentOverride::Jsonize() const
{
  JsonValue payload;

  if(m_evaluationOrderHasBeenSet)
  {
   payload.WithInt64("evaluationOrder", m_evaluationOrder);

  }

  if(m_segmentHasBeenSet)
  {
   payload.WithString("segment", m_segment);

  }

  if(m_weightsHasBeenSet)
  {
   JsonValue weightsJsonMap;
   for(auto& weightsItem : m_weights)
   {
     weightsJsonMap.WithInt64(weightsItem.first, weightsItem.second);
   }
   payload.WithObject("weights", std::move(weightsJsonMap));

  }

  return payload;
}

} // namespace Model
} // namespace CloudWatchEvidently
} // namespace Aws
