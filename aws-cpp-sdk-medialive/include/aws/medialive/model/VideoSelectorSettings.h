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
#include <aws/medialive/model/VideoSelectorPid.h>
#include <aws/medialive/model/VideoSelectorProgramId.h>
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
   * Video Selector Settings<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/VideoSelectorSettings">AWS
   * API Reference</a></p>
   */
  class AWS_MEDIALIVE_API VideoSelectorSettings
  {
  public:
    VideoSelectorSettings();
    VideoSelectorSettings(Aws::Utils::Json::JsonView jsonValue);
    VideoSelectorSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    
    inline const VideoSelectorPid& GetVideoSelectorPid() const{ return m_videoSelectorPid; }

    
    inline bool VideoSelectorPidHasBeenSet() const { return m_videoSelectorPidHasBeenSet; }

    
    inline void SetVideoSelectorPid(const VideoSelectorPid& value) { m_videoSelectorPidHasBeenSet = true; m_videoSelectorPid = value; }

    
    inline void SetVideoSelectorPid(VideoSelectorPid&& value) { m_videoSelectorPidHasBeenSet = true; m_videoSelectorPid = std::move(value); }

    
    inline VideoSelectorSettings& WithVideoSelectorPid(const VideoSelectorPid& value) { SetVideoSelectorPid(value); return *this;}

    
    inline VideoSelectorSettings& WithVideoSelectorPid(VideoSelectorPid&& value) { SetVideoSelectorPid(std::move(value)); return *this;}


    
    inline const VideoSelectorProgramId& GetVideoSelectorProgramId() const{ return m_videoSelectorProgramId; }

    
    inline bool VideoSelectorProgramIdHasBeenSet() const { return m_videoSelectorProgramIdHasBeenSet; }

    
    inline void SetVideoSelectorProgramId(const VideoSelectorProgramId& value) { m_videoSelectorProgramIdHasBeenSet = true; m_videoSelectorProgramId = value; }

    
    inline void SetVideoSelectorProgramId(VideoSelectorProgramId&& value) { m_videoSelectorProgramIdHasBeenSet = true; m_videoSelectorProgramId = std::move(value); }

    
    inline VideoSelectorSettings& WithVideoSelectorProgramId(const VideoSelectorProgramId& value) { SetVideoSelectorProgramId(value); return *this;}

    
    inline VideoSelectorSettings& WithVideoSelectorProgramId(VideoSelectorProgramId&& value) { SetVideoSelectorProgramId(std::move(value)); return *this;}

  private:

    VideoSelectorPid m_videoSelectorPid;
    bool m_videoSelectorPidHasBeenSet;

    VideoSelectorProgramId m_videoSelectorProgramId;
    bool m_videoSelectorProgramIdHasBeenSet;
  };

} // namespace Model
} // namespace MediaLive
} // namespace Aws
