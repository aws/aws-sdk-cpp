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
   * Required when you set (Codec) under (VideoDescription)>(CodecSettings) to the
   * value FRAME_CAPTURE.<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconvert-2017-08-29/FrameCaptureSettings">AWS
   * API Reference</a></p>
   */
  class AWS_MEDIACONVERT_API FrameCaptureSettings
  {
  public:
    FrameCaptureSettings();
    FrameCaptureSettings(Aws::Utils::Json::JsonView jsonValue);
    FrameCaptureSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * Frame capture will encode the first frame of the output stream, then one frame
     * every framerateDenominator/framerateNumerator seconds. For example, settings of
     * framerateNumerator = 1 and framerateDenominator = 3 (a rate of 1/3 frame per
     * second) will capture the first frame, then 1 frame every 3s. Files will be named
     * as filename.n.jpg where n is the 0-based sequence number of each Capture.
     */
    inline int GetFramerateDenominator() const{ return m_framerateDenominator; }

    /**
     * Frame capture will encode the first frame of the output stream, then one frame
     * every framerateDenominator/framerateNumerator seconds. For example, settings of
     * framerateNumerator = 1 and framerateDenominator = 3 (a rate of 1/3 frame per
     * second) will capture the first frame, then 1 frame every 3s. Files will be named
     * as filename.n.jpg where n is the 0-based sequence number of each Capture.
     */
    inline bool FramerateDenominatorHasBeenSet() const { return m_framerateDenominatorHasBeenSet; }

    /**
     * Frame capture will encode the first frame of the output stream, then one frame
     * every framerateDenominator/framerateNumerator seconds. For example, settings of
     * framerateNumerator = 1 and framerateDenominator = 3 (a rate of 1/3 frame per
     * second) will capture the first frame, then 1 frame every 3s. Files will be named
     * as filename.n.jpg where n is the 0-based sequence number of each Capture.
     */
    inline void SetFramerateDenominator(int value) { m_framerateDenominatorHasBeenSet = true; m_framerateDenominator = value; }

    /**
     * Frame capture will encode the first frame of the output stream, then one frame
     * every framerateDenominator/framerateNumerator seconds. For example, settings of
     * framerateNumerator = 1 and framerateDenominator = 3 (a rate of 1/3 frame per
     * second) will capture the first frame, then 1 frame every 3s. Files will be named
     * as filename.n.jpg where n is the 0-based sequence number of each Capture.
     */
    inline FrameCaptureSettings& WithFramerateDenominator(int value) { SetFramerateDenominator(value); return *this;}


    /**
     * Frame capture will encode the first frame of the output stream, then one frame
     * every framerateDenominator/framerateNumerator seconds. For example, settings of
     * framerateNumerator = 1 and framerateDenominator = 3 (a rate of 1/3 frame per
     * second) will capture the first frame, then 1 frame every 3s. Files will be named
     * as filename.NNNNNNN.jpg where N is the 0-based frame sequence number zero padded
     * to 7 decimal places.
     */
    inline int GetFramerateNumerator() const{ return m_framerateNumerator; }

    /**
     * Frame capture will encode the first frame of the output stream, then one frame
     * every framerateDenominator/framerateNumerator seconds. For example, settings of
     * framerateNumerator = 1 and framerateDenominator = 3 (a rate of 1/3 frame per
     * second) will capture the first frame, then 1 frame every 3s. Files will be named
     * as filename.NNNNNNN.jpg where N is the 0-based frame sequence number zero padded
     * to 7 decimal places.
     */
    inline bool FramerateNumeratorHasBeenSet() const { return m_framerateNumeratorHasBeenSet; }

    /**
     * Frame capture will encode the first frame of the output stream, then one frame
     * every framerateDenominator/framerateNumerator seconds. For example, settings of
     * framerateNumerator = 1 and framerateDenominator = 3 (a rate of 1/3 frame per
     * second) will capture the first frame, then 1 frame every 3s. Files will be named
     * as filename.NNNNNNN.jpg where N is the 0-based frame sequence number zero padded
     * to 7 decimal places.
     */
    inline void SetFramerateNumerator(int value) { m_framerateNumeratorHasBeenSet = true; m_framerateNumerator = value; }

    /**
     * Frame capture will encode the first frame of the output stream, then one frame
     * every framerateDenominator/framerateNumerator seconds. For example, settings of
     * framerateNumerator = 1 and framerateDenominator = 3 (a rate of 1/3 frame per
     * second) will capture the first frame, then 1 frame every 3s. Files will be named
     * as filename.NNNNNNN.jpg where N is the 0-based frame sequence number zero padded
     * to 7 decimal places.
     */
    inline FrameCaptureSettings& WithFramerateNumerator(int value) { SetFramerateNumerator(value); return *this;}


    /**
     * Maximum number of captures (encoded jpg output files).
     */
    inline int GetMaxCaptures() const{ return m_maxCaptures; }

    /**
     * Maximum number of captures (encoded jpg output files).
     */
    inline bool MaxCapturesHasBeenSet() const { return m_maxCapturesHasBeenSet; }

    /**
     * Maximum number of captures (encoded jpg output files).
     */
    inline void SetMaxCaptures(int value) { m_maxCapturesHasBeenSet = true; m_maxCaptures = value; }

    /**
     * Maximum number of captures (encoded jpg output files).
     */
    inline FrameCaptureSettings& WithMaxCaptures(int value) { SetMaxCaptures(value); return *this;}


    /**
     * JPEG Quality - a higher value equals higher quality.
     */
    inline int GetQuality() const{ return m_quality; }

    /**
     * JPEG Quality - a higher value equals higher quality.
     */
    inline bool QualityHasBeenSet() const { return m_qualityHasBeenSet; }

    /**
     * JPEG Quality - a higher value equals higher quality.
     */
    inline void SetQuality(int value) { m_qualityHasBeenSet = true; m_quality = value; }

    /**
     * JPEG Quality - a higher value equals higher quality.
     */
    inline FrameCaptureSettings& WithQuality(int value) { SetQuality(value); return *this;}

  private:

    int m_framerateDenominator;
    bool m_framerateDenominatorHasBeenSet;

    int m_framerateNumerator;
    bool m_framerateNumeratorHasBeenSet;

    int m_maxCaptures;
    bool m_maxCapturesHasBeenSet;

    int m_quality;
    bool m_qualityHasBeenSet;
  };

} // namespace Model
} // namespace MediaConvert
} // namespace Aws
