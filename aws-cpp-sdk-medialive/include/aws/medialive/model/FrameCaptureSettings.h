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
   * Frame Capture Settings<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/FrameCaptureSettings">AWS
   * API Reference</a></p>
   */
  class AWS_MEDIALIVE_API FrameCaptureSettings
  {
  public:
    FrameCaptureSettings();
    FrameCaptureSettings(Aws::Utils::Json::JsonView jsonValue);
    FrameCaptureSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * The frequency, in seconds, for capturing frames for inclusion in the output. 
     * For example, "10" means capture a frame every 10 seconds.
     */
    inline int GetCaptureInterval() const{ return m_captureInterval; }

    /**
     * The frequency, in seconds, for capturing frames for inclusion in the output. 
     * For example, "10" means capture a frame every 10 seconds.
     */
    inline bool CaptureIntervalHasBeenSet() const { return m_captureIntervalHasBeenSet; }

    /**
     * The frequency, in seconds, for capturing frames for inclusion in the output. 
     * For example, "10" means capture a frame every 10 seconds.
     */
    inline void SetCaptureInterval(int value) { m_captureIntervalHasBeenSet = true; m_captureInterval = value; }

    /**
     * The frequency, in seconds, for capturing frames for inclusion in the output. 
     * For example, "10" means capture a frame every 10 seconds.
     */
    inline FrameCaptureSettings& WithCaptureInterval(int value) { SetCaptureInterval(value); return *this;}

  private:

    int m_captureInterval;
    bool m_captureIntervalHasBeenSet;
  };

} // namespace Model
} // namespace MediaLive
} // namespace Aws
