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

#include <aws/mediaconvert/model/TimecodeBurnin.h>
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

TimecodeBurnin::TimecodeBurnin() : 
    m_fontSize(0),
    m_fontSizeHasBeenSet(false),
    m_position(TimecodeBurninPosition::NOT_SET),
    m_positionHasBeenSet(false),
    m_prefixHasBeenSet(false)
{
}

TimecodeBurnin::TimecodeBurnin(const JsonValue& jsonValue) : 
    m_fontSize(0),
    m_fontSizeHasBeenSet(false),
    m_position(TimecodeBurninPosition::NOT_SET),
    m_positionHasBeenSet(false),
    m_prefixHasBeenSet(false)
{
  *this = jsonValue;
}

TimecodeBurnin& TimecodeBurnin::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("fontSize"))
  {
    m_fontSize = jsonValue.GetInteger("fontSize");

    m_fontSizeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("position"))
  {
    m_position = TimecodeBurninPositionMapper::GetTimecodeBurninPositionForName(jsonValue.GetString("position"));

    m_positionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("prefix"))
  {
    m_prefix = jsonValue.GetString("prefix");

    m_prefixHasBeenSet = true;
  }

  return *this;
}

JsonValue TimecodeBurnin::Jsonize() const
{
  JsonValue payload;

  if(m_fontSizeHasBeenSet)
  {
   payload.WithInteger("fontSize", m_fontSize);

  }

  if(m_positionHasBeenSet)
  {
   payload.WithString("position", TimecodeBurninPositionMapper::GetNameForTimecodeBurninPosition(m_position));
  }

  if(m_prefixHasBeenSet)
  {
   payload.WithString("prefix", m_prefix);

  }

  return payload;
}

} // namespace Model
} // namespace MediaConvert
} // namespace Aws
