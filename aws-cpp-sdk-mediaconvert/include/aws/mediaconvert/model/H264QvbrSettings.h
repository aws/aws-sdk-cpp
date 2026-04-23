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
   * Settings for quality-defined variable bitrate encoding with the H.264 codec.
   * Required when you set Rate control mode to QVBR. Not valid when you set Rate
   * control mode to a value other than QVBR, or when you don't define Rate control
   * mode.<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconvert-2017-08-29/H264QvbrSettings">AWS
   * API Reference</a></p>
   */
  class AWS_MEDIACONVERT_API H264QvbrSettings
  {
  public:
    H264QvbrSettings();
    H264QvbrSettings(Aws::Utils::Json::JsonView jsonValue);
    H264QvbrSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * Use this setting only when Rate control mode is QVBR and Quality tuning level is
     * Multi-pass HQ. For Max average bitrate values suited to the complexity of your
     * input video, the service limits the average bitrate of the video part of this
     * output to the value you choose. That is, the total size of the video element is
     * less than or equal to the value you set multiplied by the number of seconds of
     * encoded output.
     */
    inline int GetMaxAverageBitrate() const{ return m_maxAverageBitrate; }

    /**
     * Use this setting only when Rate control mode is QVBR and Quality tuning level is
     * Multi-pass HQ. For Max average bitrate values suited to the complexity of your
     * input video, the service limits the average bitrate of the video part of this
     * output to the value you choose. That is, the total size of the video element is
     * less than or equal to the value you set multiplied by the number of seconds of
     * encoded output.
     */
    inline bool MaxAverageBitrateHasBeenSet() const { return m_maxAverageBitrateHasBeenSet; }

    /**
     * Use this setting only when Rate control mode is QVBR and Quality tuning level is
     * Multi-pass HQ. For Max average bitrate values suited to the complexity of your
     * input video, the service limits the average bitrate of the video part of this
     * output to the value you choose. That is, the total size of the video element is
     * less than or equal to the value you set multiplied by the number of seconds of
     * encoded output.
     */
    inline void SetMaxAverageBitrate(int value) { m_maxAverageBitrateHasBeenSet = true; m_maxAverageBitrate = value; }

    /**
     * Use this setting only when Rate control mode is QVBR and Quality tuning level is
     * Multi-pass HQ. For Max average bitrate values suited to the complexity of your
     * input video, the service limits the average bitrate of the video part of this
     * output to the value you choose. That is, the total size of the video element is
     * less than or equal to the value you set multiplied by the number of seconds of
     * encoded output.
     */
    inline H264QvbrSettings& WithMaxAverageBitrate(int value) { SetMaxAverageBitrate(value); return *this;}


    /**
     * Required when you use QVBR rate control mode. That is, when you specify
     * qvbrSettings within h264Settings. Specify the target quality level for this
     * output, from 1 to 10. Use higher numbers for greater quality. Level 10 results
     * in nearly lossless compression. The quality level for most broadcast-quality
     * transcodes is between 6 and 9.
     */
    inline int GetQvbrQualityLevel() const{ return m_qvbrQualityLevel; }

    /**
     * Required when you use QVBR rate control mode. That is, when you specify
     * qvbrSettings within h264Settings. Specify the target quality level for this
     * output, from 1 to 10. Use higher numbers for greater quality. Level 10 results
     * in nearly lossless compression. The quality level for most broadcast-quality
     * transcodes is between 6 and 9.
     */
    inline bool QvbrQualityLevelHasBeenSet() const { return m_qvbrQualityLevelHasBeenSet; }

    /**
     * Required when you use QVBR rate control mode. That is, when you specify
     * qvbrSettings within h264Settings. Specify the target quality level for this
     * output, from 1 to 10. Use higher numbers for greater quality. Level 10 results
     * in nearly lossless compression. The quality level for most broadcast-quality
     * transcodes is between 6 and 9.
     */
    inline void SetQvbrQualityLevel(int value) { m_qvbrQualityLevelHasBeenSet = true; m_qvbrQualityLevel = value; }

    /**
     * Required when you use QVBR rate control mode. That is, when you specify
     * qvbrSettings within h264Settings. Specify the target quality level for this
     * output, from 1 to 10. Use higher numbers for greater quality. Level 10 results
     * in nearly lossless compression. The quality level for most broadcast-quality
     * transcodes is between 6 and 9.
     */
    inline H264QvbrSettings& WithQvbrQualityLevel(int value) { SetQvbrQualityLevel(value); return *this;}

  private:

    int m_maxAverageBitrate;
    bool m_maxAverageBitrateHasBeenSet;

    int m_qvbrQualityLevel;
    bool m_qvbrQualityLevelHasBeenSet;
  };

} // namespace Model
} // namespace MediaConvert
} // namespace Aws
