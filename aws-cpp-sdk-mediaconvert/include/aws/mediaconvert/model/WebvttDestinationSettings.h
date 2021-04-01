/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediaconvert/MediaConvert_EXPORTS.h>
#include <aws/mediaconvert/model/WebvttStylePassthrough.h>
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
   * WEBVTT Destination Settings<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconvert-2017-08-29/WebvttDestinationSettings">AWS
   * API Reference</a></p>
   */
  class AWS_MEDIACONVERT_API WebvttDestinationSettings
  {
  public:
    WebvttDestinationSettings();
    WebvttDestinationSettings(Aws::Utils::Json::JsonView jsonValue);
    WebvttDestinationSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * If your input captions format is teletext or teletext inside of STL, enable this
     * setting to pass through style, color, and position information to your WebVTT
     * output captions.
     */
    inline const WebvttStylePassthrough& GetStylePassthrough() const{ return m_stylePassthrough; }

    /**
     * If your input captions format is teletext or teletext inside of STL, enable this
     * setting to pass through style, color, and position information to your WebVTT
     * output captions.
     */
    inline bool StylePassthroughHasBeenSet() const { return m_stylePassthroughHasBeenSet; }

    /**
     * If your input captions format is teletext or teletext inside of STL, enable this
     * setting to pass through style, color, and position information to your WebVTT
     * output captions.
     */
    inline void SetStylePassthrough(const WebvttStylePassthrough& value) { m_stylePassthroughHasBeenSet = true; m_stylePassthrough = value; }

    /**
     * If your input captions format is teletext or teletext inside of STL, enable this
     * setting to pass through style, color, and position information to your WebVTT
     * output captions.
     */
    inline void SetStylePassthrough(WebvttStylePassthrough&& value) { m_stylePassthroughHasBeenSet = true; m_stylePassthrough = std::move(value); }

    /**
     * If your input captions format is teletext or teletext inside of STL, enable this
     * setting to pass through style, color, and position information to your WebVTT
     * output captions.
     */
    inline WebvttDestinationSettings& WithStylePassthrough(const WebvttStylePassthrough& value) { SetStylePassthrough(value); return *this;}

    /**
     * If your input captions format is teletext or teletext inside of STL, enable this
     * setting to pass through style, color, and position information to your WebVTT
     * output captions.
     */
    inline WebvttDestinationSettings& WithStylePassthrough(WebvttStylePassthrough&& value) { SetStylePassthrough(std::move(value)); return *this;}

  private:

    WebvttStylePassthrough m_stylePassthrough;
    bool m_stylePassthroughHasBeenSet;
  };

} // namespace Model
} // namespace MediaConvert
} // namespace Aws
