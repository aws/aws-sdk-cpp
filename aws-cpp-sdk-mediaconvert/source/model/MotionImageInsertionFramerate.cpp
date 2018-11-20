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

#include <aws/mediaconvert/model/MotionImageInsertionFramerate.h>
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

MotionImageInsertionFramerate::MotionImageInsertionFramerate() : 
    m_framerateDenominator(0),
    m_framerateDenominatorHasBeenSet(false),
    m_framerateNumerator(0),
    m_framerateNumeratorHasBeenSet(false)
{
}

MotionImageInsertionFramerate::MotionImageInsertionFramerate(JsonView jsonValue) : 
    m_framerateDenominator(0),
    m_framerateDenominatorHasBeenSet(false),
    m_framerateNumerator(0),
    m_framerateNumeratorHasBeenSet(false)
{
  *this = jsonValue;
}

MotionImageInsertionFramerate& MotionImageInsertionFramerate::operator =(JsonView jsonValue)
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

  return *this;
}

JsonValue MotionImageInsertionFramerate::Jsonize() const
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

  return payload;
}

} // namespace Model
} // namespace MediaConvert
} // namespace Aws
