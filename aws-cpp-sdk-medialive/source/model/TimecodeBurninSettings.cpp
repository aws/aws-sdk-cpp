/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/medialive/model/TimecodeBurninSettings.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace MediaLive
{
namespace Model
{

TimecodeBurninSettings::TimecodeBurninSettings() : 
    m_fontSize(TimecodeBurninFontSize::NOT_SET),
    m_fontSizeHasBeenSet(false),
    m_position(TimecodeBurninPosition::NOT_SET),
    m_positionHasBeenSet(false),
    m_prefixHasBeenSet(false)
{
}

TimecodeBurninSettings::TimecodeBurninSettings(JsonView jsonValue) : 
    m_fontSize(TimecodeBurninFontSize::NOT_SET),
    m_fontSizeHasBeenSet(false),
    m_position(TimecodeBurninPosition::NOT_SET),
    m_positionHasBeenSet(false),
    m_prefixHasBeenSet(false)
{
  *this = jsonValue;
}

TimecodeBurninSettings& TimecodeBurninSettings::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("fontSize"))
  {
    m_fontSize = TimecodeBurninFontSizeMapper::GetTimecodeBurninFontSizeForName(jsonValue.GetString("fontSize"));

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

JsonValue TimecodeBurninSettings::Jsonize() const
{
  JsonValue payload;

  if(m_fontSizeHasBeenSet)
  {
   payload.WithString("fontSize", TimecodeBurninFontSizeMapper::GetNameForTimecodeBurninFontSize(m_fontSize));
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
} // namespace MediaLive
} // namespace Aws
