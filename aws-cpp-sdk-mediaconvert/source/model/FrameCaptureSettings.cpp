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

#include <aws/mediaconvert/model/FrameCaptureSettings.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace MediaConvert
{
namespace Model
{

FrameCaptureSettings::FrameCaptureSettings() : 
    m_framerateDenominator(0),
    m_framerateDenominatorHasBeenSet(false),
    m_framerateNumerator(0),
    m_framerateNumeratorHasBeenSet(false),
    m_maxCaptures(0),
    m_maxCapturesHasBeenSet(false),
    m_quality(0),
    m_qualityHasBeenSet(false)
{
}

FrameCaptureSettings::FrameCaptureSettings(const JsonValue& jsonValue) : 
    m_framerateDenominator(0),
    m_framerateDenominatorHasBeenSet(false),
    m_framerateNumerator(0),
    m_framerateNumeratorHasBeenSet(false),
    m_maxCaptures(0),
    m_maxCapturesHasBeenSet(false),
    m_quality(0),
    m_qualityHasBeenSet(false)
{
  *this = jsonValue;
}

FrameCaptureSettings& FrameCaptureSettings::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("framerateDenominator"))
  {
    m_framerateDenominator = jsonValue.GetInteger("framerateDenominator");

    m_framerateDenominatorHasBeenSet = true;
  }

  if(jsonValue.ValueExists("framerateNumerator"))
  {
    m_framerateNumerator = jsonValue.GetInteger("framerateNumerator");

    m_framerateNumeratorHasBeenSet = true;
  }

  if(jsonValue.ValueExists("maxCaptures"))
  {
    m_maxCaptures = jsonValue.GetInteger("maxCaptures");

    m_maxCapturesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("quality"))
  {
    m_quality = jsonValue.GetInteger("quality");

    m_qualityHasBeenSet = true;
  }

  return *this;
}

JsonValue FrameCaptureSettings::Jsonize() const
{
  JsonValue payload;

  if(m_framerateDenominatorHasBeenSet)
  {
   payload.WithInteger("framerateDenominator", m_framerateDenominator);

  }

  if(m_framerateNumeratorHasBeenSet)
  {
   payload.WithInteger("framerateNumerator", m_framerateNumerator);

  }

  if(m_maxCapturesHasBeenSet)
  {
   payload.WithInteger("maxCaptures", m_maxCaptures);

  }

  if(m_qualityHasBeenSet)
  {
   payload.WithInteger("quality", m_quality);

  }

  return payload;
}

} // namespace Model
} // namespace MediaConvert
} // namespace Aws
