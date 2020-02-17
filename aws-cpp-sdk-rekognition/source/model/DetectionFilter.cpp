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

#include <aws/rekognition/model/DetectionFilter.h>
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

DetectionFilter::DetectionFilter() : 
    m_minConfidence(0.0),
    m_minConfidenceHasBeenSet(false),
    m_minBoundingBoxHeight(0.0),
    m_minBoundingBoxHeightHasBeenSet(false),
    m_minBoundingBoxWidth(0.0),
    m_minBoundingBoxWidthHasBeenSet(false)
{
}

DetectionFilter::DetectionFilter(JsonView jsonValue) : 
    m_minConfidence(0.0),
    m_minConfidenceHasBeenSet(false),
    m_minBoundingBoxHeight(0.0),
    m_minBoundingBoxHeightHasBeenSet(false),
    m_minBoundingBoxWidth(0.0),
    m_minBoundingBoxWidthHasBeenSet(false)
{
  *this = jsonValue;
}

DetectionFilter& DetectionFilter::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("MinConfidence"))
  {
    m_minConfidence = jsonValue.GetDouble("MinConfidence");

    m_minConfidenceHasBeenSet = true;
  }

  if(jsonValue.ValueExists("MinBoundingBoxHeight"))
  {
    m_minBoundingBoxHeight = jsonValue.GetDouble("MinBoundingBoxHeight");

    m_minBoundingBoxHeightHasBeenSet = true;
  }

  if(jsonValue.ValueExists("MinBoundingBoxWidth"))
  {
    m_minBoundingBoxWidth = jsonValue.GetDouble("MinBoundingBoxWidth");

    m_minBoundingBoxWidthHasBeenSet = true;
  }

  return *this;
}

JsonValue DetectionFilter::Jsonize() const
{
  JsonValue payload;

  if(m_minConfidenceHasBeenSet)
  {
   payload.WithDouble("MinConfidence", m_minConfidence);

  }

  if(m_minBoundingBoxHeightHasBeenSet)
  {
   payload.WithDouble("MinBoundingBoxHeight", m_minBoundingBoxHeight);

  }

  if(m_minBoundingBoxWidthHasBeenSet)
  {
   payload.WithDouble("MinBoundingBoxWidth", m_minBoundingBoxWidth);

  }

  return payload;
}

} // namespace Model
} // namespace Rekognition
} // namespace Aws
