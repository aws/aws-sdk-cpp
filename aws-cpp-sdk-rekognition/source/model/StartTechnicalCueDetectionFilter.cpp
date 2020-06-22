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
    m_minSegmentConfidenceHasBeenSet(false)
{
}

StartTechnicalCueDetectionFilter::StartTechnicalCueDetectionFilter(JsonView jsonValue) : 
    m_minSegmentConfidence(0.0),
    m_minSegmentConfidenceHasBeenSet(false)
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

  return *this;
}

JsonValue StartTechnicalCueDetectionFilter::Jsonize() const
{
  JsonValue payload;

  if(m_minSegmentConfidenceHasBeenSet)
  {
   payload.WithDouble("MinSegmentConfidence", m_minSegmentConfidence);

  }

  return payload;
}

} // namespace Model
} // namespace Rekognition
} // namespace Aws
