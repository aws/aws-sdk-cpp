/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/rekognition/model/StartTechnicalCueDetectionFilter.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Rekognition
{
namespace Model
{

StartTechnicalCueDetectionFilter::StartTechnicalCueDetectionFilter() : 
    m_minSegmentConfidence(0.0),
    m_minSegmentConfidenceHasBeenSet(false),
    m_blackFrameHasBeenSet(false)
{
}

StartTechnicalCueDetectionFilter::StartTechnicalCueDetectionFilter(JsonView jsonValue) : 
    m_minSegmentConfidence(0.0),
    m_minSegmentConfidenceHasBeenSet(false),
    m_blackFrameHasBeenSet(false)
{
  *this = jsonValue;
}

StartTechnicalCueDetectionFilter& StartTechnicalCueDetectionFilter::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("MinSegmentConfidence"))
  {
    m_minSegmentConfidence = jsonValue.GetDouble("MinSegmentConfidence");

    m_minSegmentConfidenceHasBeenSet = true;
  }

  if(jsonValue.ValueExists("BlackFrame"))
  {
    m_blackFrame = jsonValue.GetObject("BlackFrame");

    m_blackFrameHasBeenSet = true;
  }

  return *this;
}

JsonValue StartTechnicalCueDetectionFilter::Jsonize() const
{
  JsonValue payload;

  if(m_minSegmentConfidenceHasBeenSet)
  {
   payload.WithDouble("MinSegmentConfidence", m_minSegmentConfidence);

  }

  if(m_blackFrameHasBeenSet)
  {
   payload.WithObject("BlackFrame", m_blackFrame.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace Rekognition
} // namespace Aws
