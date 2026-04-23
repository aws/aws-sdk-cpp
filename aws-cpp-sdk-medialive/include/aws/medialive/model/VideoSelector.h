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
#include <aws/medialive/MediaLive_EXPORTS.h>
#include <aws/medialive/model/VideoSelectorColorSpace.h>
#include <aws/medialive/model/VideoSelectorColorSpaceUsage.h>
#include <aws/medialive/model/VideoSelectorSettings.h>
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
   * Specifies a particular video stream within an input source. An input may have
   * only a single video selector.<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/VideoSelector">AWS
   * API Reference</a></p>
   */
  class AWS_MEDIALIVE_API VideoSelector
  {
  public:
    VideoSelector();
    VideoSelector(Aws::Utils::Json::JsonView jsonValue);
    VideoSelector& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * Specifies the colorspace of an input. This setting works in tandem with
     * colorSpaceConversion to determine if any conversion will be performed.
     */
    inline const VideoSelectorColorSpace& GetColorSpace() const{ return m_colorSpace; }

    /**
     * Specifies the colorspace of an input. This setting works in tandem with
     * colorSpaceConversion to determine if any conversion will be performed.
     */
    inline bool ColorSpaceHasBeenSet() const { return m_colorSpaceHasBeenSet; }

    /**
     * Specifies the colorspace of an input. This setting works in tandem with
     * colorSpaceConversion to determine if any conversion will be performed.
     */
    inline void SetColorSpace(const VideoSelectorColorSpace& value) { m_colorSpaceHasBeenSet = true; m_colorSpace = value; }

    /**
     * Specifies the colorspace of an input. This setting works in tandem with
     * colorSpaceConversion to determine if any conversion will be performed.
     */
    inline void SetColorSpace(VideoSelectorColorSpace&& value) { m_colorSpaceHasBeenSet = true; m_colorSpace = std::move(value); }

    /**
     * Specifies the colorspace of an input. This setting works in tandem with
     * colorSpaceConversion to determine if any conversion will be performed.
     */
    inline VideoSelector& WithColorSpace(const VideoSelectorColorSpace& value) { SetColorSpace(value); return *this;}

    /**
     * Specifies the colorspace of an input. This setting works in tandem with
     * colorSpaceConversion to determine if any conversion will be performed.
     */
    inline VideoSelector& WithColorSpace(VideoSelectorColorSpace&& value) { SetColorSpace(std::move(value)); return *this;}


    /**
     * Applies only if colorSpace is a value other than follow. This field controls how
     * the value in the colorSpace field will be used. fallback means that when the
     * input does include color space data, that data will be used, but when the input
     * has no color space data, the value in colorSpace will be used. Choose fallback
     * if your input is sometimes missing color space data, but when it does have color
     * space data, that data is correct. force means to always use the value in
     * colorSpace. Choose force if your input usually has no color space data or might
     * have unreliable color space data.
     */
    inline const VideoSelectorColorSpaceUsage& GetColorSpaceUsage() const{ return m_colorSpaceUsage; }

    /**
     * Applies only if colorSpace is a value other than follow. This field controls how
     * the value in the colorSpace field will be used. fallback means that when the
     * input does include color space data, that data will be used, but when the input
     * has no color space data, the value in colorSpace will be used. Choose fallback
     * if your input is sometimes missing color space data, but when it does have color
     * space data, that data is correct. force means to always use the value in
     * colorSpace. Choose force if your input usually has no color space data or might
     * have unreliable color space data.
     */
    inline bool ColorSpaceUsageHasBeenSet() const { return m_colorSpaceUsageHasBeenSet; }

    /**
     * Applies only if colorSpace is a value other than follow. This field controls how
     * the value in the colorSpace field will be used. fallback means that when the
     * input does include color space data, that data will be used, but when the input
     * has no color space data, the value in colorSpace will be used. Choose fallback
     * if your input is sometimes missing color space data, but when it does have color
     * space data, that data is correct. force means to always use the value in
     * colorSpace. Choose force if your input usually has no color space data or might
     * have unreliable color space data.
     */
    inline void SetColorSpaceUsage(const VideoSelectorColorSpaceUsage& value) { m_colorSpaceUsageHasBeenSet = true; m_colorSpaceUsage = value; }

    /**
     * Applies only if colorSpace is a value other than follow. This field controls how
     * the value in the colorSpace field will be used. fallback means that when the
     * input does include color space data, that data will be used, but when the input
     * has no color space data, the value in colorSpace will be used. Choose fallback
     * if your input is sometimes missing color space data, but when it does have color
     * space data, that data is correct. force means to always use the value in
     * colorSpace. Choose force if your input usually has no color space data or might
     * have unreliable color space data.
     */
    inline void SetColorSpaceUsage(VideoSelectorColorSpaceUsage&& value) { m_colorSpaceUsageHasBeenSet = true; m_colorSpaceUsage = std::move(value); }

    /**
     * Applies only if colorSpace is a value other than follow. This field controls how
     * the value in the colorSpace field will be used. fallback means that when the
     * input does include color space data, that data will be used, but when the input
     * has no color space data, the value in colorSpace will be used. Choose fallback
     * if your input is sometimes missing color space data, but when it does have color
     * space data, that data is correct. force means to always use the value in
     * colorSpace. Choose force if your input usually has no color space data or might
     * have unreliable color space data.
     */
    inline VideoSelector& WithColorSpaceUsage(const VideoSelectorColorSpaceUsage& value) { SetColorSpaceUsage(value); return *this;}

    /**
     * Applies only if colorSpace is a value other than follow. This field controls how
     * the value in the colorSpace field will be used. fallback means that when the
     * input does include color space data, that data will be used, but when the input
     * has no color space data, the value in colorSpace will be used. Choose fallback
     * if your input is sometimes missing color space data, but when it does have color
     * space data, that data is correct. force means to always use the value in
     * colorSpace. Choose force if your input usually has no color space data or might
     * have unreliable color space data.
     */
    inline VideoSelector& WithColorSpaceUsage(VideoSelectorColorSpaceUsage&& value) { SetColorSpaceUsage(std::move(value)); return *this;}


    /**
     * The video selector settings.
     */
    inline const VideoSelectorSettings& GetSelectorSettings() const{ return m_selectorSettings; }

    /**
     * The video selector settings.
     */
    inline bool SelectorSettingsHasBeenSet() const { return m_selectorSettingsHasBeenSet; }

    /**
     * The video selector settings.
     */
    inline void SetSelectorSettings(const VideoSelectorSettings& value) { m_selectorSettingsHasBeenSet = true; m_selectorSettings = value; }

    /**
     * The video selector settings.
     */
    inline void SetSelectorSettings(VideoSelectorSettings&& value) { m_selectorSettingsHasBeenSet = true; m_selectorSettings = std::move(value); }

    /**
     * The video selector settings.
     */
    inline VideoSelector& WithSelectorSettings(const VideoSelectorSettings& value) { SetSelectorSettings(value); return *this;}

    /**
     * The video selector settings.
     */
    inline VideoSelector& WithSelectorSettings(VideoSelectorSettings&& value) { SetSelectorSettings(std::move(value)); return *this;}

  private:

    VideoSelectorColorSpace m_colorSpace;
    bool m_colorSpaceHasBeenSet;

    VideoSelectorColorSpaceUsage m_colorSpaceUsage;
    bool m_colorSpaceUsageHasBeenSet;

    VideoSelectorSettings m_selectorSettings;
    bool m_selectorSettingsHasBeenSet;
  };

} // namespace Model
} // namespace MediaLive
} // namespace Aws
