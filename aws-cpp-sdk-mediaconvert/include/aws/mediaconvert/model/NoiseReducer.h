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
    NoiseReducer(const Aws::Utils::Json::JsonValue& jsonValue);
    NoiseReducer& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    
    inline const NoiseReducerFilter& GetFilter() const{ return m_filter; }

    
    inline void SetFilter(const NoiseReducerFilter& value) { m_filterHasBeenSet = true; m_filter = value; }

    
    inline void SetFilter(NoiseReducerFilter&& value) { m_filterHasBeenSet = true; m_filter = std::move(value); }

    
    inline NoiseReducer& WithFilter(const NoiseReducerFilter& value) { SetFilter(value); return *this;}

    
    inline NoiseReducer& WithFilter(NoiseReducerFilter&& value) { SetFilter(std::move(value)); return *this;}


    
    inline const NoiseReducerFilterSettings& GetFilterSettings() const{ return m_filterSettings; }

    
    inline void SetFilterSettings(const NoiseReducerFilterSettings& value) { m_filterSettingsHasBeenSet = true; m_filterSettings = value; }

    
    inline void SetFilterSettings(NoiseReducerFilterSettings&& value) { m_filterSettingsHasBeenSet = true; m_filterSettings = std::move(value); }

    
    inline NoiseReducer& WithFilterSettings(const NoiseReducerFilterSettings& value) { SetFilterSettings(value); return *this;}

    
    inline NoiseReducer& WithFilterSettings(NoiseReducerFilterSettings&& value) { SetFilterSettings(std::move(value)); return *this;}


    
    inline const NoiseReducerSpatialFilterSettings& GetSpatialFilterSettings() const{ return m_spatialFilterSettings; }

    
    inline void SetSpatialFilterSettings(const NoiseReducerSpatialFilterSettings& value) { m_spatialFilterSettingsHasBeenSet = true; m_spatialFilterSettings = value; }

    
    inline void SetSpatialFilterSettings(NoiseReducerSpatialFilterSettings&& value) { m_spatialFilterSettingsHasBeenSet = true; m_spatialFilterSettings = std::move(value); }

    
    inline NoiseReducer& WithSpatialFilterSettings(const NoiseReducerSpatialFilterSettings& value) { SetSpatialFilterSettings(value); return *this;}

    
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
