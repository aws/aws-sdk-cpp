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

#include <aws/mediaconvert/model/MotionImageInsertionOffset.h>
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

MotionImageInsertionOffset::MotionImageInsertionOffset() : 
    m_imageX(0),
    m_imageXHasBeenSet(false),
    m_imageY(0),
    m_imageYHasBeenSet(false)
{
}

MotionImageInsertionOffset::MotionImageInsertionOffset(JsonView jsonValue) : 
    m_imageX(0),
    m_imageXHasBeenSet(false),
    m_imageY(0),
    m_imageYHasBeenSet(false)
{
  *this = jsonValue;
}

MotionImageInsertionOffset& MotionImageInsertionOffset::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("imageX"))
  {
    m_imageX = jsonValue.GetInteger("imageX");

    m_imageXHasBeenSet = true;
  }

  if(jsonValue.ValueExists("imageY"))
  {
    m_imageY = jsonValue.GetInteger("imageY");

    m_imageYHasBeenSet = true;
  }

  return *this;
}

JsonValue MotionImageInsertionOffset::Jsonize() const
{
  JsonValue payload;

  if(m_imageXHasBeenSet)
  {
   payload.WithInteger("imageX", m_imageX);

  }

  if(m_imageYHasBeenSet)
  {
   payload.WithInteger("imageY", m_imageY);

  }

  return payload;
}

} // namespace Model
} // namespace MediaConvert
} // namespace Aws
