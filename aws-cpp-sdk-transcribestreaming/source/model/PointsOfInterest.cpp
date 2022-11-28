/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/transcribestreaming/model/PointsOfInterest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace TranscribeStreamingService
{
namespace Model
{

PointsOfInterest::PointsOfInterest() : 
    m_timestampRangesHasBeenSet(false)
{
}

PointsOfInterest::PointsOfInterest(JsonView jsonValue) : 
    m_timestampRangesHasBeenSet(false)
{
  *this = jsonValue;
}

PointsOfInterest& PointsOfInterest::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("TimestampRanges"))
  {
    Aws::Utils::Array<JsonView> timestampRangesJsonList = jsonValue.GetArray("TimestampRanges");
    for(unsigned timestampRangesIndex = 0; timestampRangesIndex < timestampRangesJsonList.GetLength(); ++timestampRangesIndex)
    {
      m_timestampRanges.push_back(timestampRangesJsonList[timestampRangesIndex].AsObject());
    }
    m_timestampRangesHasBeenSet = true;
  }

  return *this;
}

JsonValue PointsOfInterest::Jsonize() const
{
  JsonValue payload;

  if(m_timestampRangesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> timestampRangesJsonList(m_timestampRanges.size());
   for(unsigned timestampRangesIndex = 0; timestampRangesIndex < timestampRangesJsonList.GetLength(); ++timestampRangesIndex)
   {
     timestampRangesJsonList[timestampRangesIndex].AsObject(m_timestampRanges[timestampRangesIndex].Jsonize());
   }
   payload.WithArray("TimestampRanges", std::move(timestampRangesJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace TranscribeStreamingService
} // namespace Aws
