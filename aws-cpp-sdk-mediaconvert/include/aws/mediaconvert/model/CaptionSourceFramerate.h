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
   * Ignore this setting unless your input captions format is SCC. To have the
   * service compensate for differing framerates between your input captions and
   * input video, specify the framerate of the captions file. Specify this value as a
   * fraction, using the settings Framerate numerator (framerateNumerator) and
   * Framerate denominator (framerateDenominator). For example, you might specify 24
   * / 1 for 24 fps, 25 / 1 for 25 fps, 24000 / 1001 for 23.976 fps, or 30000 / 1001
   * for 29.97 fps.<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconvert-2017-08-29/CaptionSourceFramerate">AWS
   * API Reference</a></p>
   */
  class AWS_MEDIACONVERT_API CaptionSourceFramerate
  {
  public:
    CaptionSourceFramerate();
    CaptionSourceFramerate(Aws::Utils::Json::JsonView jsonValue);
    CaptionSourceFramerate& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * Specify the denominator of the fraction that represents the framerate for the
     * setting Caption source framerate (CaptionSourceFramerate). Use this setting
     * along with the setting Framerate numerator (framerateNumerator).
     */
    inline int GetFramerateDenominator() const{ return m_framerateDenominator; }

    /**
     * Specify the denominator of the fraction that represents the framerate for the
     * setting Caption source framerate (CaptionSourceFramerate). Use this setting
     * along with the setting Framerate numerator (framerateNumerator).
     */
    inline bool FramerateDenominatorHasBeenSet() const { return m_framerateDenominatorHasBeenSet; }

    /**
     * Specify the denominator of the fraction that represents the framerate for the
     * setting Caption source framerate (CaptionSourceFramerate). Use this setting
     * along with the setting Framerate numerator (framerateNumerator).
     */
    inline void SetFramerateDenominator(int value) { m_framerateDenominatorHasBeenSet = true; m_framerateDenominator = value; }

    /**
     * Specify the denominator of the fraction that represents the framerate for the
     * setting Caption source framerate (CaptionSourceFramerate). Use this setting
     * along with the setting Framerate numerator (framerateNumerator).
     */
    inline CaptionSourceFramerate& WithFramerateDenominator(int value) { SetFramerateDenominator(value); return *this;}


    /**
     * Specify the numerator of the fraction that represents the framerate for the
     * setting Caption source framerate (CaptionSourceFramerate). Use this setting
     * along with the setting Framerate denominator (framerateDenominator).
     */
    inline int GetFramerateNumerator() const{ return m_framerateNumerator; }

    /**
     * Specify the numerator of the fraction that represents the framerate for the
     * setting Caption source framerate (CaptionSourceFramerate). Use this setting
     * along with the setting Framerate denominator (framerateDenominator).
     */
    inline bool FramerateNumeratorHasBeenSet() const { return m_framerateNumeratorHasBeenSet; }

    /**
     * Specify the numerator of the fraction that represents the framerate for the
     * setting Caption source framerate (CaptionSourceFramerate). Use this setting
     * along with the setting Framerate denominator (framerateDenominator).
     */
    inline void SetFramerateNumerator(int value) { m_framerateNumeratorHasBeenSet = true; m_framerateNumerator = value; }

    /**
     * Specify the numerator of the fraction that represents the framerate for the
     * setting Caption source framerate (CaptionSourceFramerate). Use this setting
     * along with the setting Framerate denominator (framerateDenominator).
     */
    inline CaptionSourceFramerate& WithFramerateNumerator(int value) { SetFramerateNumerator(value); return *this;}

  private:

    int m_framerateDenominator;
    bool m_framerateDenominatorHasBeenSet;

    int m_framerateNumerator;
    bool m_framerateNumeratorHasBeenSet;
  };

} // namespace Model
} // namespace MediaConvert
} // namespace Aws
