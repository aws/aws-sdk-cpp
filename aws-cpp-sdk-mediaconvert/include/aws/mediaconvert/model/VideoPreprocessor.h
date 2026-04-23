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
#include <aws/mediaconvert/model/ColorCorrector.h>
#include <aws/mediaconvert/model/Deinterlacer.h>
#include <aws/mediaconvert/model/ImageInserter.h>
#include <aws/mediaconvert/model/NoiseReducer.h>
#include <aws/mediaconvert/model/TimecodeBurnin.h>
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
   * Find additional transcoding features under Preprocessors (VideoPreprocessors).
   * Enable the features at each output individually. These features are disabled by
   * default.<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconvert-2017-08-29/VideoPreprocessor">AWS
   * API Reference</a></p>
   */
  class AWS_MEDIACONVERT_API VideoPreprocessor
  {
  public:
    VideoPreprocessor();
    VideoPreprocessor(Aws::Utils::Json::JsonView jsonValue);
    VideoPreprocessor& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * Enable the Color corrector (ColorCorrector) feature if necessary. Enable or
     * disable this feature for each output individually. This setting is disabled by
     * default.
     */
    inline const ColorCorrector& GetColorCorrector() const{ return m_colorCorrector; }

    /**
     * Enable the Color corrector (ColorCorrector) feature if necessary. Enable or
     * disable this feature for each output individually. This setting is disabled by
     * default.
     */
    inline bool ColorCorrectorHasBeenSet() const { return m_colorCorrectorHasBeenSet; }

    /**
     * Enable the Color corrector (ColorCorrector) feature if necessary. Enable or
     * disable this feature for each output individually. This setting is disabled by
     * default.
     */
    inline void SetColorCorrector(const ColorCorrector& value) { m_colorCorrectorHasBeenSet = true; m_colorCorrector = value; }

    /**
     * Enable the Color corrector (ColorCorrector) feature if necessary. Enable or
     * disable this feature for each output individually. This setting is disabled by
     * default.
     */
    inline void SetColorCorrector(ColorCorrector&& value) { m_colorCorrectorHasBeenSet = true; m_colorCorrector = std::move(value); }

    /**
     * Enable the Color corrector (ColorCorrector) feature if necessary. Enable or
     * disable this feature for each output individually. This setting is disabled by
     * default.
     */
    inline VideoPreprocessor& WithColorCorrector(const ColorCorrector& value) { SetColorCorrector(value); return *this;}

    /**
     * Enable the Color corrector (ColorCorrector) feature if necessary. Enable or
     * disable this feature for each output individually. This setting is disabled by
     * default.
     */
    inline VideoPreprocessor& WithColorCorrector(ColorCorrector&& value) { SetColorCorrector(std::move(value)); return *this;}


    /**
     * Use Deinterlacer (Deinterlacer) to produce smoother motion and a clearer
     * picture.
     */
    inline const Deinterlacer& GetDeinterlacer() const{ return m_deinterlacer; }

    /**
     * Use Deinterlacer (Deinterlacer) to produce smoother motion and a clearer
     * picture.
     */
    inline bool DeinterlacerHasBeenSet() const { return m_deinterlacerHasBeenSet; }

    /**
     * Use Deinterlacer (Deinterlacer) to produce smoother motion and a clearer
     * picture.
     */
    inline void SetDeinterlacer(const Deinterlacer& value) { m_deinterlacerHasBeenSet = true; m_deinterlacer = value; }

    /**
     * Use Deinterlacer (Deinterlacer) to produce smoother motion and a clearer
     * picture.
     */
    inline void SetDeinterlacer(Deinterlacer&& value) { m_deinterlacerHasBeenSet = true; m_deinterlacer = std::move(value); }

    /**
     * Use Deinterlacer (Deinterlacer) to produce smoother motion and a clearer
     * picture.
     */
    inline VideoPreprocessor& WithDeinterlacer(const Deinterlacer& value) { SetDeinterlacer(value); return *this;}

    /**
     * Use Deinterlacer (Deinterlacer) to produce smoother motion and a clearer
     * picture.
     */
    inline VideoPreprocessor& WithDeinterlacer(Deinterlacer&& value) { SetDeinterlacer(std::move(value)); return *this;}


    /**
     * Enable the Image inserter (ImageInserter) feature to include a graphic overlay
     * on your video. Enable or disable this feature for each output individually. This
     * setting is disabled by default.
     */
    inline const ImageInserter& GetImageInserter() const{ return m_imageInserter; }

    /**
     * Enable the Image inserter (ImageInserter) feature to include a graphic overlay
     * on your video. Enable or disable this feature for each output individually. This
     * setting is disabled by default.
     */
    inline bool ImageInserterHasBeenSet() const { return m_imageInserterHasBeenSet; }

    /**
     * Enable the Image inserter (ImageInserter) feature to include a graphic overlay
     * on your video. Enable or disable this feature for each output individually. This
     * setting is disabled by default.
     */
    inline void SetImageInserter(const ImageInserter& value) { m_imageInserterHasBeenSet = true; m_imageInserter = value; }

    /**
     * Enable the Image inserter (ImageInserter) feature to include a graphic overlay
     * on your video. Enable or disable this feature for each output individually. This
     * setting is disabled by default.
     */
    inline void SetImageInserter(ImageInserter&& value) { m_imageInserterHasBeenSet = true; m_imageInserter = std::move(value); }

    /**
     * Enable the Image inserter (ImageInserter) feature to include a graphic overlay
     * on your video. Enable or disable this feature for each output individually. This
     * setting is disabled by default.
     */
    inline VideoPreprocessor& WithImageInserter(const ImageInserter& value) { SetImageInserter(value); return *this;}

    /**
     * Enable the Image inserter (ImageInserter) feature to include a graphic overlay
     * on your video. Enable or disable this feature for each output individually. This
     * setting is disabled by default.
     */
    inline VideoPreprocessor& WithImageInserter(ImageInserter&& value) { SetImageInserter(std::move(value)); return *this;}


    /**
     * Enable the Noise reducer (NoiseReducer) feature to remove noise from your video
     * output if necessary. Enable or disable this feature for each output
     * individually. This setting is disabled by default.
     */
    inline const NoiseReducer& GetNoiseReducer() const{ return m_noiseReducer; }

    /**
     * Enable the Noise reducer (NoiseReducer) feature to remove noise from your video
     * output if necessary. Enable or disable this feature for each output
     * individually. This setting is disabled by default.
     */
    inline bool NoiseReducerHasBeenSet() const { return m_noiseReducerHasBeenSet; }

    /**
     * Enable the Noise reducer (NoiseReducer) feature to remove noise from your video
     * output if necessary. Enable or disable this feature for each output
     * individually. This setting is disabled by default.
     */
    inline void SetNoiseReducer(const NoiseReducer& value) { m_noiseReducerHasBeenSet = true; m_noiseReducer = value; }

    /**
     * Enable the Noise reducer (NoiseReducer) feature to remove noise from your video
     * output if necessary. Enable or disable this feature for each output
     * individually. This setting is disabled by default.
     */
    inline void SetNoiseReducer(NoiseReducer&& value) { m_noiseReducerHasBeenSet = true; m_noiseReducer = std::move(value); }

    /**
     * Enable the Noise reducer (NoiseReducer) feature to remove noise from your video
     * output if necessary. Enable or disable this feature for each output
     * individually. This setting is disabled by default.
     */
    inline VideoPreprocessor& WithNoiseReducer(const NoiseReducer& value) { SetNoiseReducer(value); return *this;}

    /**
     * Enable the Noise reducer (NoiseReducer) feature to remove noise from your video
     * output if necessary. Enable or disable this feature for each output
     * individually. This setting is disabled by default.
     */
    inline VideoPreprocessor& WithNoiseReducer(NoiseReducer&& value) { SetNoiseReducer(std::move(value)); return *this;}


    /**
     * Timecode burn-in (TimecodeBurnIn)--Burns the output timecode and specified
     * prefix into the output.
     */
    inline const TimecodeBurnin& GetTimecodeBurnin() const{ return m_timecodeBurnin; }

    /**
     * Timecode burn-in (TimecodeBurnIn)--Burns the output timecode and specified
     * prefix into the output.
     */
    inline bool TimecodeBurninHasBeenSet() const { return m_timecodeBurninHasBeenSet; }

    /**
     * Timecode burn-in (TimecodeBurnIn)--Burns the output timecode and specified
     * prefix into the output.
     */
    inline void SetTimecodeBurnin(const TimecodeBurnin& value) { m_timecodeBurninHasBeenSet = true; m_timecodeBurnin = value; }

    /**
     * Timecode burn-in (TimecodeBurnIn)--Burns the output timecode and specified
     * prefix into the output.
     */
    inline void SetTimecodeBurnin(TimecodeBurnin&& value) { m_timecodeBurninHasBeenSet = true; m_timecodeBurnin = std::move(value); }

    /**
     * Timecode burn-in (TimecodeBurnIn)--Burns the output timecode and specified
     * prefix into the output.
     */
    inline VideoPreprocessor& WithTimecodeBurnin(const TimecodeBurnin& value) { SetTimecodeBurnin(value); return *this;}

    /**
     * Timecode burn-in (TimecodeBurnIn)--Burns the output timecode and specified
     * prefix into the output.
     */
    inline VideoPreprocessor& WithTimecodeBurnin(TimecodeBurnin&& value) { SetTimecodeBurnin(std::move(value)); return *this;}

  private:

    ColorCorrector m_colorCorrector;
    bool m_colorCorrectorHasBeenSet;

    Deinterlacer m_deinterlacer;
    bool m_deinterlacerHasBeenSet;

    ImageInserter m_imageInserter;
    bool m_imageInserterHasBeenSet;

    NoiseReducer m_noiseReducer;
    bool m_noiseReducerHasBeenSet;

    TimecodeBurnin m_timecodeBurnin;
    bool m_timecodeBurninHasBeenSet;
  };

} // namespace Model
} // namespace MediaConvert
} // namespace Aws
