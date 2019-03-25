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

#pragma once
#include <aws/mediaconvert/MediaConvert_EXPORTS.h>
#include <aws/mediaconvert/model/TimecodeBurninPosition.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace MediaConvert
{
namespace Model
{

  /**
   * Timecode burn-in (TimecodeBurnIn)--Burns the output timecode and specified
   * prefix into the output.<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconvert-2017-08-29/TimecodeBurnin">AWS
   * API Reference</a></p>
   */
  class AWS_MEDIACONVERT_API TimecodeBurnin
  {
  public:
    TimecodeBurnin();
    TimecodeBurnin(Aws::Utils::Json::JsonView jsonValue);
    TimecodeBurnin& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * Use Font Size (FontSize) to set the font size of any burned-in timecode. Valid
     * values are 10, 16, 32, 48.
     */
    inline int GetFontSize() const{ return m_fontSize; }

    /**
     * Use Font Size (FontSize) to set the font size of any burned-in timecode. Valid
     * values are 10, 16, 32, 48.
     */
    inline bool FontSizeHasBeenSet() const { return m_fontSizeHasBeenSet; }

    /**
     * Use Font Size (FontSize) to set the font size of any burned-in timecode. Valid
     * values are 10, 16, 32, 48.
     */
    inline void SetFontSize(int value) { m_fontSizeHasBeenSet = true; m_fontSize = value; }

    /**
     * Use Font Size (FontSize) to set the font size of any burned-in timecode. Valid
     * values are 10, 16, 32, 48.
     */
    inline TimecodeBurnin& WithFontSize(int value) { SetFontSize(value); return *this;}


    /**
     * Use Position (Position) under under Timecode burn-in (TimecodeBurnIn) to specify
     * the location the burned-in timecode on output video.
     */
    inline const TimecodeBurninPosition& GetPosition() const{ return m_position; }

    /**
     * Use Position (Position) under under Timecode burn-in (TimecodeBurnIn) to specify
     * the location the burned-in timecode on output video.
     */
    inline bool PositionHasBeenSet() const { return m_positionHasBeenSet; }

    /**
     * Use Position (Position) under under Timecode burn-in (TimecodeBurnIn) to specify
     * the location the burned-in timecode on output video.
     */
    inline void SetPosition(const TimecodeBurninPosition& value) { m_positionHasBeenSet = true; m_position = value; }

    /**
     * Use Position (Position) under under Timecode burn-in (TimecodeBurnIn) to specify
     * the location the burned-in timecode on output video.
     */
    inline void SetPosition(TimecodeBurninPosition&& value) { m_positionHasBeenSet = true; m_position = std::move(value); }

    /**
     * Use Position (Position) under under Timecode burn-in (TimecodeBurnIn) to specify
     * the location the burned-in timecode on output video.
     */
    inline TimecodeBurnin& WithPosition(const TimecodeBurninPosition& value) { SetPosition(value); return *this;}

    /**
     * Use Position (Position) under under Timecode burn-in (TimecodeBurnIn) to specify
     * the location the burned-in timecode on output video.
     */
    inline TimecodeBurnin& WithPosition(TimecodeBurninPosition&& value) { SetPosition(std::move(value)); return *this;}


    /**
     * Use Prefix (Prefix) to place ASCII characters before any burned-in timecode. For
     * example, a prefix of "EZ-" will result in the timecode "EZ-00:00:00:00". Provide
     * either the characters themselves or the ASCII code equivalents. The supported
     * range of characters is 0x20 through 0x7e. This includes letters, numbers, and
     * all special characters represented on a standard English keyboard.
     */
    inline const Aws::String& GetPrefix() const{ return m_prefix; }

    /**
     * Use Prefix (Prefix) to place ASCII characters before any burned-in timecode. For
     * example, a prefix of "EZ-" will result in the timecode "EZ-00:00:00:00". Provide
     * either the characters themselves or the ASCII code equivalents. The supported
     * range of characters is 0x20 through 0x7e. This includes letters, numbers, and
     * all special characters represented on a standard English keyboard.
     */
    inline bool PrefixHasBeenSet() const { return m_prefixHasBeenSet; }

    /**
     * Use Prefix (Prefix) to place ASCII characters before any burned-in timecode. For
     * example, a prefix of "EZ-" will result in the timecode "EZ-00:00:00:00". Provide
     * either the characters themselves or the ASCII code equivalents. The supported
     * range of characters is 0x20 through 0x7e. This includes letters, numbers, and
     * all special characters represented on a standard English keyboard.
     */
    inline void SetPrefix(const Aws::String& value) { m_prefixHasBeenSet = true; m_prefix = value; }

    /**
     * Use Prefix (Prefix) to place ASCII characters before any burned-in timecode. For
     * example, a prefix of "EZ-" will result in the timecode "EZ-00:00:00:00". Provide
     * either the characters themselves or the ASCII code equivalents. The supported
     * range of characters is 0x20 through 0x7e. This includes letters, numbers, and
     * all special characters represented on a standard English keyboard.
     */
    inline void SetPrefix(Aws::String&& value) { m_prefixHasBeenSet = true; m_prefix = std::move(value); }

    /**
     * Use Prefix (Prefix) to place ASCII characters before any burned-in timecode. For
     * example, a prefix of "EZ-" will result in the timecode "EZ-00:00:00:00". Provide
     * either the characters themselves or the ASCII code equivalents. The supported
     * range of characters is 0x20 through 0x7e. This includes letters, numbers, and
     * all special characters represented on a standard English keyboard.
     */
    inline void SetPrefix(const char* value) { m_prefixHasBeenSet = true; m_prefix.assign(value); }

    /**
     * Use Prefix (Prefix) to place ASCII characters before any burned-in timecode. For
     * example, a prefix of "EZ-" will result in the timecode "EZ-00:00:00:00". Provide
     * either the characters themselves or the ASCII code equivalents. The supported
     * range of characters is 0x20 through 0x7e. This includes letters, numbers, and
     * all special characters represented on a standard English keyboard.
     */
    inline TimecodeBurnin& WithPrefix(const Aws::String& value) { SetPrefix(value); return *this;}

    /**
     * Use Prefix (Prefix) to place ASCII characters before any burned-in timecode. For
     * example, a prefix of "EZ-" will result in the timecode "EZ-00:00:00:00". Provide
     * either the characters themselves or the ASCII code equivalents. The supported
     * range of characters is 0x20 through 0x7e. This includes letters, numbers, and
     * all special characters represented on a standard English keyboard.
     */
    inline TimecodeBurnin& WithPrefix(Aws::String&& value) { SetPrefix(std::move(value)); return *this;}

    /**
     * Use Prefix (Prefix) to place ASCII characters before any burned-in timecode. For
     * example, a prefix of "EZ-" will result in the timecode "EZ-00:00:00:00". Provide
     * either the characters themselves or the ASCII code equivalents. The supported
     * range of characters is 0x20 through 0x7e. This includes letters, numbers, and
     * all special characters represented on a standard English keyboard.
     */
    inline TimecodeBurnin& WithPrefix(const char* value) { SetPrefix(value); return *this;}

  private:

    int m_fontSize;
    bool m_fontSizeHasBeenSet;

    TimecodeBurninPosition m_position;
    bool m_positionHasBeenSet;

    Aws::String m_prefix;
    bool m_prefixHasBeenSet;
  };

} // namespace Model
} // namespace MediaConvert
} // namespace Aws
