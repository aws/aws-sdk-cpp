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
#include <aws/medialive/model/InputLossActionForUdpOut.h>
#include <aws/medialive/model/UdpTimedMetadataId3Frame.h>
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
   * Udp Group Settings<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/UdpGroupSettings">AWS
   * API Reference</a></p>
   */
  class AWS_MEDIALIVE_API UdpGroupSettings
  {
  public:
    UdpGroupSettings();
    UdpGroupSettings(Aws::Utils::Json::JsonView jsonValue);
    UdpGroupSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * Specifies behavior of last resort when input video is lost, and no more backup
     * inputs are available. When dropTs is selected the entire transport stream will
     * stop being emitted.  When dropProgram is selected the program can be dropped
     * from the transport stream (and replaced with null packets to meet the TS bitrate
     * requirement).  Or, when emitProgram is chosen the transport stream will continue
     * to be produced normally with repeat frames, black frames, or slate frames
     * substituted for the absent input video.
     */
    inline const InputLossActionForUdpOut& GetInputLossAction() const{ return m_inputLossAction; }

    /**
     * Specifies behavior of last resort when input video is lost, and no more backup
     * inputs are available. When dropTs is selected the entire transport stream will
     * stop being emitted.  When dropProgram is selected the program can be dropped
     * from the transport stream (and replaced with null packets to meet the TS bitrate
     * requirement).  Or, when emitProgram is chosen the transport stream will continue
     * to be produced normally with repeat frames, black frames, or slate frames
     * substituted for the absent input video.
     */
    inline bool InputLossActionHasBeenSet() const { return m_inputLossActionHasBeenSet; }

    /**
     * Specifies behavior of last resort when input video is lost, and no more backup
     * inputs are available. When dropTs is selected the entire transport stream will
     * stop being emitted.  When dropProgram is selected the program can be dropped
     * from the transport stream (and replaced with null packets to meet the TS bitrate
     * requirement).  Or, when emitProgram is chosen the transport stream will continue
     * to be produced normally with repeat frames, black frames, or slate frames
     * substituted for the absent input video.
     */
    inline void SetInputLossAction(const InputLossActionForUdpOut& value) { m_inputLossActionHasBeenSet = true; m_inputLossAction = value; }

    /**
     * Specifies behavior of last resort when input video is lost, and no more backup
     * inputs are available. When dropTs is selected the entire transport stream will
     * stop being emitted.  When dropProgram is selected the program can be dropped
     * from the transport stream (and replaced with null packets to meet the TS bitrate
     * requirement).  Or, when emitProgram is chosen the transport stream will continue
     * to be produced normally with repeat frames, black frames, or slate frames
     * substituted for the absent input video.
     */
    inline void SetInputLossAction(InputLossActionForUdpOut&& value) { m_inputLossActionHasBeenSet = true; m_inputLossAction = std::move(value); }

    /**
     * Specifies behavior of last resort when input video is lost, and no more backup
     * inputs are available. When dropTs is selected the entire transport stream will
     * stop being emitted.  When dropProgram is selected the program can be dropped
     * from the transport stream (and replaced with null packets to meet the TS bitrate
     * requirement).  Or, when emitProgram is chosen the transport stream will continue
     * to be produced normally with repeat frames, black frames, or slate frames
     * substituted for the absent input video.
     */
    inline UdpGroupSettings& WithInputLossAction(const InputLossActionForUdpOut& value) { SetInputLossAction(value); return *this;}

    /**
     * Specifies behavior of last resort when input video is lost, and no more backup
     * inputs are available. When dropTs is selected the entire transport stream will
     * stop being emitted.  When dropProgram is selected the program can be dropped
     * from the transport stream (and replaced with null packets to meet the TS bitrate
     * requirement).  Or, when emitProgram is chosen the transport stream will continue
     * to be produced normally with repeat frames, black frames, or slate frames
     * substituted for the absent input video.
     */
    inline UdpGroupSettings& WithInputLossAction(InputLossActionForUdpOut&& value) { SetInputLossAction(std::move(value)); return *this;}


    /**
     * Indicates ID3 frame that has the timecode.
     */
    inline const UdpTimedMetadataId3Frame& GetTimedMetadataId3Frame() const{ return m_timedMetadataId3Frame; }

    /**
     * Indicates ID3 frame that has the timecode.
     */
    inline bool TimedMetadataId3FrameHasBeenSet() const { return m_timedMetadataId3FrameHasBeenSet; }

    /**
     * Indicates ID3 frame that has the timecode.
     */
    inline void SetTimedMetadataId3Frame(const UdpTimedMetadataId3Frame& value) { m_timedMetadataId3FrameHasBeenSet = true; m_timedMetadataId3Frame = value; }

    /**
     * Indicates ID3 frame that has the timecode.
     */
    inline void SetTimedMetadataId3Frame(UdpTimedMetadataId3Frame&& value) { m_timedMetadataId3FrameHasBeenSet = true; m_timedMetadataId3Frame = std::move(value); }

    /**
     * Indicates ID3 frame that has the timecode.
     */
    inline UdpGroupSettings& WithTimedMetadataId3Frame(const UdpTimedMetadataId3Frame& value) { SetTimedMetadataId3Frame(value); return *this;}

    /**
     * Indicates ID3 frame that has the timecode.
     */
    inline UdpGroupSettings& WithTimedMetadataId3Frame(UdpTimedMetadataId3Frame&& value) { SetTimedMetadataId3Frame(std::move(value)); return *this;}


    /**
     * Timed Metadata interval in seconds.
     */
    inline int GetTimedMetadataId3Period() const{ return m_timedMetadataId3Period; }

    /**
     * Timed Metadata interval in seconds.
     */
    inline bool TimedMetadataId3PeriodHasBeenSet() const { return m_timedMetadataId3PeriodHasBeenSet; }

    /**
     * Timed Metadata interval in seconds.
     */
    inline void SetTimedMetadataId3Period(int value) { m_timedMetadataId3PeriodHasBeenSet = true; m_timedMetadataId3Period = value; }

    /**
     * Timed Metadata interval in seconds.
     */
    inline UdpGroupSettings& WithTimedMetadataId3Period(int value) { SetTimedMetadataId3Period(value); return *this;}

  private:

    InputLossActionForUdpOut m_inputLossAction;
    bool m_inputLossActionHasBeenSet;

    UdpTimedMetadataId3Frame m_timedMetadataId3Frame;
    bool m_timedMetadataId3FrameHasBeenSet;

    int m_timedMetadataId3Period;
    bool m_timedMetadataId3PeriodHasBeenSet;
  };

} // namespace Model
} // namespace MediaLive
} // namespace Aws
