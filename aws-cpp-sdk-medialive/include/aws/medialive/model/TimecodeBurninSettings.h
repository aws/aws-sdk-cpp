/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/medialive/MediaLive_EXPORTS.h>
#include <aws/medialive/model/TimecodeBurninFontSize.h>
#include <aws/medialive/model/TimecodeBurninPosition.h>
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
namespace MediaLive
{
namespace Model
{

  /**
   * Timecode Burnin Settings<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/TimecodeBurninSettings">AWS
   * API Reference</a></p>
   */
  class TimecodeBurninSettings
  {
  public:
    AWS_MEDIALIVE_API TimecodeBurninSettings();
    AWS_MEDIALIVE_API TimecodeBurninSettings(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API TimecodeBurninSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * Choose a timecode burn-in font size
     */
    inline const TimecodeBurninFontSize& GetFontSize() const{ return m_fontSize; }

    /**
     * Choose a timecode burn-in font size
     */
    inline bool FontSizeHasBeenSet() const { return m_fontSizeHasBeenSet; }

    /**
     * Choose a timecode burn-in font size
     */
    inline void SetFontSize(const TimecodeBurninFontSize& value) { m_fontSizeHasBeenSet = true; m_fontSize = value; }

    /**
     * Choose a timecode burn-in font size
     */
    inline void SetFontSize(TimecodeBurninFontSize&& value) { m_fontSizeHasBeenSet = true; m_fontSize = std::move(value); }

    /**
     * Choose a timecode burn-in font size
     */
    inline TimecodeBurninSettings& WithFontSize(const TimecodeBurninFontSize& value) { SetFontSize(value); return *this;}

    /**
     * Choose a timecode burn-in font size
     */
    inline TimecodeBurninSettings& WithFontSize(TimecodeBurninFontSize&& value) { SetFontSize(std::move(value)); return *this;}


    /**
     * Choose a timecode burn-in output position
     */
    inline const TimecodeBurninPosition& GetPosition() const{ return m_position; }

    /**
     * Choose a timecode burn-in output position
     */
    inline bool PositionHasBeenSet() const { return m_positionHasBeenSet; }

    /**
     * Choose a timecode burn-in output position
     */
    inline void SetPosition(const TimecodeBurninPosition& value) { m_positionHasBeenSet = true; m_position = value; }

    /**
     * Choose a timecode burn-in output position
     */
    inline void SetPosition(TimecodeBurninPosition&& value) { m_positionHasBeenSet = true; m_position = std::move(value); }

    /**
     * Choose a timecode burn-in output position
     */
    inline TimecodeBurninSettings& WithPosition(const TimecodeBurninPosition& value) { SetPosition(value); return *this;}

    /**
     * Choose a timecode burn-in output position
     */
    inline TimecodeBurninSettings& WithPosition(TimecodeBurninPosition&& value) { SetPosition(std::move(value)); return *this;}


    /**
     * Create a timecode burn-in prefix (optional)
     */
    inline const Aws::String& GetPrefix() const{ return m_prefix; }

    /**
     * Create a timecode burn-in prefix (optional)
     */
    inline bool PrefixHasBeenSet() const { return m_prefixHasBeenSet; }

    /**
     * Create a timecode burn-in prefix (optional)
     */
    inline void SetPrefix(const Aws::String& value) { m_prefixHasBeenSet = true; m_prefix = value; }

    /**
     * Create a timecode burn-in prefix (optional)
     */
    inline void SetPrefix(Aws::String&& value) { m_prefixHasBeenSet = true; m_prefix = std::move(value); }

    /**
     * Create a timecode burn-in prefix (optional)
     */
    inline void SetPrefix(const char* value) { m_prefixHasBeenSet = true; m_prefix.assign(value); }

    /**
     * Create a timecode burn-in prefix (optional)
     */
    inline TimecodeBurninSettings& WithPrefix(const Aws::String& value) { SetPrefix(value); return *this;}

    /**
     * Create a timecode burn-in prefix (optional)
     */
    inline TimecodeBurninSettings& WithPrefix(Aws::String&& value) { SetPrefix(std::move(value)); return *this;}

    /**
     * Create a timecode burn-in prefix (optional)
     */
    inline TimecodeBurninSettings& WithPrefix(const char* value) { SetPrefix(value); return *this;}

  private:

    TimecodeBurninFontSize m_fontSize;
    bool m_fontSizeHasBeenSet = false;

    TimecodeBurninPosition m_position;
    bool m_positionHasBeenSet = false;

    Aws::String m_prefix;
    bool m_prefixHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaLive
} // namespace Aws
