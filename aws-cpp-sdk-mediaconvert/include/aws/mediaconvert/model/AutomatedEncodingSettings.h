/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediaconvert/MediaConvert_EXPORTS.h>
#include <aws/mediaconvert/model/AutomatedAbrSettings.h>
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
   * Use automated encoding to have MediaConvert choose your encoding settings for
   * you, based on characteristics of your input video.<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconvert-2017-08-29/AutomatedEncodingSettings">AWS
   * API Reference</a></p>
   */
  class AutomatedEncodingSettings
  {
  public:
    AWS_MEDIACONVERT_API AutomatedEncodingSettings();
    AWS_MEDIACONVERT_API AutomatedEncodingSettings(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONVERT_API AutomatedEncodingSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONVERT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * Use automated ABR to have MediaConvert set up the renditions in your ABR package
     * for you automatically, based on characteristics of your input video. This
     * feature optimizes video quality while minimizing the overall size of your ABR
     * package.
     */
    inline const AutomatedAbrSettings& GetAbrSettings() const{ return m_abrSettings; }

    /**
     * Use automated ABR to have MediaConvert set up the renditions in your ABR package
     * for you automatically, based on characteristics of your input video. This
     * feature optimizes video quality while minimizing the overall size of your ABR
     * package.
     */
    inline bool AbrSettingsHasBeenSet() const { return m_abrSettingsHasBeenSet; }

    /**
     * Use automated ABR to have MediaConvert set up the renditions in your ABR package
     * for you automatically, based on characteristics of your input video. This
     * feature optimizes video quality while minimizing the overall size of your ABR
     * package.
     */
    inline void SetAbrSettings(const AutomatedAbrSettings& value) { m_abrSettingsHasBeenSet = true; m_abrSettings = value; }

    /**
     * Use automated ABR to have MediaConvert set up the renditions in your ABR package
     * for you automatically, based on characteristics of your input video. This
     * feature optimizes video quality while minimizing the overall size of your ABR
     * package.
     */
    inline void SetAbrSettings(AutomatedAbrSettings&& value) { m_abrSettingsHasBeenSet = true; m_abrSettings = std::move(value); }

    /**
     * Use automated ABR to have MediaConvert set up the renditions in your ABR package
     * for you automatically, based on characteristics of your input video. This
     * feature optimizes video quality while minimizing the overall size of your ABR
     * package.
     */
    inline AutomatedEncodingSettings& WithAbrSettings(const AutomatedAbrSettings& value) { SetAbrSettings(value); return *this;}

    /**
     * Use automated ABR to have MediaConvert set up the renditions in your ABR package
     * for you automatically, based on characteristics of your input video. This
     * feature optimizes video quality while minimizing the overall size of your ABR
     * package.
     */
    inline AutomatedEncodingSettings& WithAbrSettings(AutomatedAbrSettings&& value) { SetAbrSettings(std::move(value)); return *this;}

  private:

    AutomatedAbrSettings m_abrSettings;
    bool m_abrSettingsHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaConvert
} // namespace Aws
