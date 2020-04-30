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
#include <aws/mediaconvert/model/MxfAfdSignaling.h>
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
   * MXF settings<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconvert-2017-08-29/MxfSettings">AWS
   * API Reference</a></p>
   */
  class AWS_MEDIACONVERT_API MxfSettings
  {
  public:
    MxfSettings();
    MxfSettings(Aws::Utils::Json::JsonView jsonValue);
    MxfSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * Optional. When you have AFD signaling set up in your output video stream, use
     * this setting to choose whether to also include it in the MXF wrapper. Choose
     * Don't copy (NO_COPY) to exclude AFD signaling from the MXF wrapper. Choose Copy
     * from video stream (COPY_FROM_VIDEO) to copy the AFD values from the video stream
     * for this output to the MXF wrapper. Regardless of which option you choose, the
     * AFD values remain in the video stream. Related settings: To set up your output
     * to include or exclude AFD values, see AfdSignaling, under VideoDescription. On
     * the console, find AFD signaling under the output's video encoding settings.
     */
    inline const MxfAfdSignaling& GetAfdSignaling() const{ return m_afdSignaling; }

    /**
     * Optional. When you have AFD signaling set up in your output video stream, use
     * this setting to choose whether to also include it in the MXF wrapper. Choose
     * Don't copy (NO_COPY) to exclude AFD signaling from the MXF wrapper. Choose Copy
     * from video stream (COPY_FROM_VIDEO) to copy the AFD values from the video stream
     * for this output to the MXF wrapper. Regardless of which option you choose, the
     * AFD values remain in the video stream. Related settings: To set up your output
     * to include or exclude AFD values, see AfdSignaling, under VideoDescription. On
     * the console, find AFD signaling under the output's video encoding settings.
     */
    inline bool AfdSignalingHasBeenSet() const { return m_afdSignalingHasBeenSet; }

    /**
     * Optional. When you have AFD signaling set up in your output video stream, use
     * this setting to choose whether to also include it in the MXF wrapper. Choose
     * Don't copy (NO_COPY) to exclude AFD signaling from the MXF wrapper. Choose Copy
     * from video stream (COPY_FROM_VIDEO) to copy the AFD values from the video stream
     * for this output to the MXF wrapper. Regardless of which option you choose, the
     * AFD values remain in the video stream. Related settings: To set up your output
     * to include or exclude AFD values, see AfdSignaling, under VideoDescription. On
     * the console, find AFD signaling under the output's video encoding settings.
     */
    inline void SetAfdSignaling(const MxfAfdSignaling& value) { m_afdSignalingHasBeenSet = true; m_afdSignaling = value; }

    /**
     * Optional. When you have AFD signaling set up in your output video stream, use
     * this setting to choose whether to also include it in the MXF wrapper. Choose
     * Don't copy (NO_COPY) to exclude AFD signaling from the MXF wrapper. Choose Copy
     * from video stream (COPY_FROM_VIDEO) to copy the AFD values from the video stream
     * for this output to the MXF wrapper. Regardless of which option you choose, the
     * AFD values remain in the video stream. Related settings: To set up your output
     * to include or exclude AFD values, see AfdSignaling, under VideoDescription. On
     * the console, find AFD signaling under the output's video encoding settings.
     */
    inline void SetAfdSignaling(MxfAfdSignaling&& value) { m_afdSignalingHasBeenSet = true; m_afdSignaling = std::move(value); }

    /**
     * Optional. When you have AFD signaling set up in your output video stream, use
     * this setting to choose whether to also include it in the MXF wrapper. Choose
     * Don't copy (NO_COPY) to exclude AFD signaling from the MXF wrapper. Choose Copy
     * from video stream (COPY_FROM_VIDEO) to copy the AFD values from the video stream
     * for this output to the MXF wrapper. Regardless of which option you choose, the
     * AFD values remain in the video stream. Related settings: To set up your output
     * to include or exclude AFD values, see AfdSignaling, under VideoDescription. On
     * the console, find AFD signaling under the output's video encoding settings.
     */
    inline MxfSettings& WithAfdSignaling(const MxfAfdSignaling& value) { SetAfdSignaling(value); return *this;}

    /**
     * Optional. When you have AFD signaling set up in your output video stream, use
     * this setting to choose whether to also include it in the MXF wrapper. Choose
     * Don't copy (NO_COPY) to exclude AFD signaling from the MXF wrapper. Choose Copy
     * from video stream (COPY_FROM_VIDEO) to copy the AFD values from the video stream
     * for this output to the MXF wrapper. Regardless of which option you choose, the
     * AFD values remain in the video stream. Related settings: To set up your output
     * to include or exclude AFD values, see AfdSignaling, under VideoDescription. On
     * the console, find AFD signaling under the output's video encoding settings.
     */
    inline MxfSettings& WithAfdSignaling(MxfAfdSignaling&& value) { SetAfdSignaling(std::move(value)); return *this;}

  private:

    MxfAfdSignaling m_afdSignaling;
    bool m_afdSignalingHasBeenSet;
  };

} // namespace Model
} // namespace MediaConvert
} // namespace Aws
