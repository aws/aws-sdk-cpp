/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
   * Use automated ABR to have MediaConvert set up the renditions in your ABR package
   * for you automatically, based on characteristics of your input video. This
   * feature optimizes video quality while minimizing the overall size of your ABR
   * package.<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconvert-2017-08-29/AutomatedAbrSettings">AWS
   * API Reference</a></p>
   */
  class AWS_MEDIACONVERT_API AutomatedAbrSettings
  {
  public:
    AutomatedAbrSettings();
    AutomatedAbrSettings(Aws::Utils::Json::JsonView jsonValue);
    AutomatedAbrSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * Optional. The maximum target bit rate used in your automated ABR stack. Use this
     * value to set an upper limit on the bandwidth consumed by the highest-quality
     * rendition. This is the rendition that is delivered to viewers with the fastest
     * internet connections. If you don't specify a value, MediaConvert uses 8,000,000
     * (8 mb/s) by default.
     */
    inline int GetMaxAbrBitrate() const{ return m_maxAbrBitrate; }

    /**
     * Optional. The maximum target bit rate used in your automated ABR stack. Use this
     * value to set an upper limit on the bandwidth consumed by the highest-quality
     * rendition. This is the rendition that is delivered to viewers with the fastest
     * internet connections. If you don't specify a value, MediaConvert uses 8,000,000
     * (8 mb/s) by default.
     */
    inline bool MaxAbrBitrateHasBeenSet() const { return m_maxAbrBitrateHasBeenSet; }

    /**
     * Optional. The maximum target bit rate used in your automated ABR stack. Use this
     * value to set an upper limit on the bandwidth consumed by the highest-quality
     * rendition. This is the rendition that is delivered to viewers with the fastest
     * internet connections. If you don't specify a value, MediaConvert uses 8,000,000
     * (8 mb/s) by default.
     */
    inline void SetMaxAbrBitrate(int value) { m_maxAbrBitrateHasBeenSet = true; m_maxAbrBitrate = value; }

    /**
     * Optional. The maximum target bit rate used in your automated ABR stack. Use this
     * value to set an upper limit on the bandwidth consumed by the highest-quality
     * rendition. This is the rendition that is delivered to viewers with the fastest
     * internet connections. If you don't specify a value, MediaConvert uses 8,000,000
     * (8 mb/s) by default.
     */
    inline AutomatedAbrSettings& WithMaxAbrBitrate(int value) { SetMaxAbrBitrate(value); return *this;}


    /**
     * Optional. The maximum number of renditions that MediaConvert will create in your
     * automated ABR stack. The number of renditions is determined automatically, based
     * on analysis of each job, but will never exceed this limit. When you set this to
     * Auto in the console, which is equivalent to excluding it from your JSON job
     * specification, MediaConvert defaults to a limit of 15.
     */
    inline int GetMaxRenditions() const{ return m_maxRenditions; }

    /**
     * Optional. The maximum number of renditions that MediaConvert will create in your
     * automated ABR stack. The number of renditions is determined automatically, based
     * on analysis of each job, but will never exceed this limit. When you set this to
     * Auto in the console, which is equivalent to excluding it from your JSON job
     * specification, MediaConvert defaults to a limit of 15.
     */
    inline bool MaxRenditionsHasBeenSet() const { return m_maxRenditionsHasBeenSet; }

    /**
     * Optional. The maximum number of renditions that MediaConvert will create in your
     * automated ABR stack. The number of renditions is determined automatically, based
     * on analysis of each job, but will never exceed this limit. When you set this to
     * Auto in the console, which is equivalent to excluding it from your JSON job
     * specification, MediaConvert defaults to a limit of 15.
     */
    inline void SetMaxRenditions(int value) { m_maxRenditionsHasBeenSet = true; m_maxRenditions = value; }

    /**
     * Optional. The maximum number of renditions that MediaConvert will create in your
     * automated ABR stack. The number of renditions is determined automatically, based
     * on analysis of each job, but will never exceed this limit. When you set this to
     * Auto in the console, which is equivalent to excluding it from your JSON job
     * specification, MediaConvert defaults to a limit of 15.
     */
    inline AutomatedAbrSettings& WithMaxRenditions(int value) { SetMaxRenditions(value); return *this;}


    /**
     * Optional. The minimum target bitrate used in your automated ABR stack. Use this
     * value to set a lower limit on the bitrate of video delivered to viewers with
     * slow internet connections. If you don't specify a value, MediaConvert uses
     * 600,000 (600 kb/s) by default.
     */
    inline int GetMinAbrBitrate() const{ return m_minAbrBitrate; }

    /**
     * Optional. The minimum target bitrate used in your automated ABR stack. Use this
     * value to set a lower limit on the bitrate of video delivered to viewers with
     * slow internet connections. If you don't specify a value, MediaConvert uses
     * 600,000 (600 kb/s) by default.
     */
    inline bool MinAbrBitrateHasBeenSet() const { return m_minAbrBitrateHasBeenSet; }

    /**
     * Optional. The minimum target bitrate used in your automated ABR stack. Use this
     * value to set a lower limit on the bitrate of video delivered to viewers with
     * slow internet connections. If you don't specify a value, MediaConvert uses
     * 600,000 (600 kb/s) by default.
     */
    inline void SetMinAbrBitrate(int value) { m_minAbrBitrateHasBeenSet = true; m_minAbrBitrate = value; }

    /**
     * Optional. The minimum target bitrate used in your automated ABR stack. Use this
     * value to set a lower limit on the bitrate of video delivered to viewers with
     * slow internet connections. If you don't specify a value, MediaConvert uses
     * 600,000 (600 kb/s) by default.
     */
    inline AutomatedAbrSettings& WithMinAbrBitrate(int value) { SetMinAbrBitrate(value); return *this;}

  private:

    int m_maxAbrBitrate;
    bool m_maxAbrBitrateHasBeenSet;

    int m_maxRenditions;
    bool m_maxRenditionsHasBeenSet;

    int m_minAbrBitrate;
    bool m_minAbrBitrateHasBeenSet;
  };

} // namespace Model
} // namespace MediaConvert
} // namespace Aws
