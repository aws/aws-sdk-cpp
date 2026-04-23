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
#include <aws/mediaconvert/model/NoiseReducerFilter.h>
#include <aws/mediaconvert/model/NoiseReducerFilterSettings.h>
#include <aws/mediaconvert/model/NoiseReducerSpatialFilterSettings.h>
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
   * Enable the Noise reducer (NoiseReducer) feature to remove noise from your video
   * output if necessary. Enable or disable this feature for each output
   * individually. This setting is disabled by default. When you enable Noise reducer
   * (NoiseReducer), you must also select a value for Noise reducer filter
   * (NoiseReducerFilter).<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconvert-2017-08-29/NoiseReducer">AWS
   * API Reference</a></p>
   */
  class AWS_MEDIACONVERT_API NoiseReducer
  {
  public:
    NoiseReducer();
    NoiseReducer(Aws::Utils::Json::JsonView jsonValue);
    NoiseReducer& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * Use Noise reducer filter (NoiseReducerFilter) to select one of the following
     * spatial image filtering functions. To use this setting, you must also enable
     * Noise reducer (NoiseReducer). * Bilateral is an edge preserving noise reduction
     * filter. * Mean (softest), Gaussian, Lanczos, and Sharpen (sharpest) are
     * convolution filters. * Conserve is a min/max noise reduction filter. * Spatial
     * is a frequency-domain filter based on JND principles.
     */
    inline const NoiseReducerFilter& GetFilter() const{ return m_filter; }

    /**
     * Use Noise reducer filter (NoiseReducerFilter) to select one of the following
     * spatial image filtering functions. To use this setting, you must also enable
     * Noise reducer (NoiseReducer). * Bilateral is an edge preserving noise reduction
     * filter. * Mean (softest), Gaussian, Lanczos, and Sharpen (sharpest) are
     * convolution filters. * Conserve is a min/max noise reduction filter. * Spatial
     * is a frequency-domain filter based on JND principles.
     */
    inline bool FilterHasBeenSet() const { return m_filterHasBeenSet; }

    /**
     * Use Noise reducer filter (NoiseReducerFilter) to select one of the following
     * spatial image filtering functions. To use this setting, you must also enable
     * Noise reducer (NoiseReducer). * Bilateral is an edge preserving noise reduction
     * filter. * Mean (softest), Gaussian, Lanczos, and Sharpen (sharpest) are
     * convolution filters. * Conserve is a min/max noise reduction filter. * Spatial
     * is a frequency-domain filter based on JND principles.
     */
    inline void SetFilter(const NoiseReducerFilter& value) { m_filterHasBeenSet = true; m_filter = value; }

    /**
     * Use Noise reducer filter (NoiseReducerFilter) to select one of the following
     * spatial image filtering functions. To use this setting, you must also enable
     * Noise reducer (NoiseReducer). * Bilateral is an edge preserving noise reduction
     * filter. * Mean (softest), Gaussian, Lanczos, and Sharpen (sharpest) are
     * convolution filters. * Conserve is a min/max noise reduction filter. * Spatial
     * is a frequency-domain filter based on JND principles.
     */
    inline void SetFilter(NoiseReducerFilter&& value) { m_filterHasBeenSet = true; m_filter = std::move(value); }

    /**
     * Use Noise reducer filter (NoiseReducerFilter) to select one of the following
     * spatial image filtering functions. To use this setting, you must also enable
     * Noise reducer (NoiseReducer). * Bilateral is an edge preserving noise reduction
     * filter. * Mean (softest), Gaussian, Lanczos, and Sharpen (sharpest) are
     * convolution filters. * Conserve is a min/max noise reduction filter. * Spatial
     * is a frequency-domain filter based on JND principles.
     */
    inline NoiseReducer& WithFilter(const NoiseReducerFilter& value) { SetFilter(value); return *this;}

    /**
     * Use Noise reducer filter (NoiseReducerFilter) to select one of the following
     * spatial image filtering functions. To use this setting, you must also enable
     * Noise reducer (NoiseReducer). * Bilateral is an edge preserving noise reduction
     * filter. * Mean (softest), Gaussian, Lanczos, and Sharpen (sharpest) are
     * convolution filters. * Conserve is a min/max noise reduction filter. * Spatial
     * is a frequency-domain filter based on JND principles.
     */
    inline NoiseReducer& WithFilter(NoiseReducerFilter&& value) { SetFilter(std::move(value)); return *this;}


    /**
     * Settings for a noise reducer filter
     */
    inline const NoiseReducerFilterSettings& GetFilterSettings() const{ return m_filterSettings; }

    /**
     * Settings for a noise reducer filter
     */
    inline bool FilterSettingsHasBeenSet() const { return m_filterSettingsHasBeenSet; }

    /**
     * Settings for a noise reducer filter
     */
    inline void SetFilterSettings(const NoiseReducerFilterSettings& value) { m_filterSettingsHasBeenSet = true; m_filterSettings = value; }

    /**
     * Settings for a noise reducer filter
     */
    inline void SetFilterSettings(NoiseReducerFilterSettings&& value) { m_filterSettingsHasBeenSet = true; m_filterSettings = std::move(value); }

    /**
     * Settings for a noise reducer filter
     */
    inline NoiseReducer& WithFilterSettings(const NoiseReducerFilterSettings& value) { SetFilterSettings(value); return *this;}

    /**
     * Settings for a noise reducer filter
     */
    inline NoiseReducer& WithFilterSettings(NoiseReducerFilterSettings&& value) { SetFilterSettings(std::move(value)); return *this;}


    /**
     * Noise reducer filter settings for spatial filter.
     */
    inline const NoiseReducerSpatialFilterSettings& GetSpatialFilterSettings() const{ return m_spatialFilterSettings; }

    /**
     * Noise reducer filter settings for spatial filter.
     */
    inline bool SpatialFilterSettingsHasBeenSet() const { return m_spatialFilterSettingsHasBeenSet; }

    /**
     * Noise reducer filter settings for spatial filter.
     */
    inline void SetSpatialFilterSettings(const NoiseReducerSpatialFilterSettings& value) { m_spatialFilterSettingsHasBeenSet = true; m_spatialFilterSettings = value; }

    /**
     * Noise reducer filter settings for spatial filter.
     */
    inline void SetSpatialFilterSettings(NoiseReducerSpatialFilterSettings&& value) { m_spatialFilterSettingsHasBeenSet = true; m_spatialFilterSettings = std::move(value); }

    /**
     * Noise reducer filter settings for spatial filter.
     */
    inline NoiseReducer& WithSpatialFilterSettings(const NoiseReducerSpatialFilterSettings& value) { SetSpatialFilterSettings(value); return *this;}

    /**
     * Noise reducer filter settings for spatial filter.
     */
    inline NoiseReducer& WithSpatialFilterSettings(NoiseReducerSpatialFilterSettings&& value) { SetSpatialFilterSettings(std::move(value)); return *this;}

  private:

    NoiseReducerFilter m_filter;
    bool m_filterHasBeenSet;

    NoiseReducerFilterSettings m_filterSettings;
    bool m_filterSettingsHasBeenSet;

    NoiseReducerSpatialFilterSettings m_spatialFilterSettings;
    bool m_spatialFilterSettingsHasBeenSet;
  };

} // namespace Model
} // namespace MediaConvert
} // namespace Aws
