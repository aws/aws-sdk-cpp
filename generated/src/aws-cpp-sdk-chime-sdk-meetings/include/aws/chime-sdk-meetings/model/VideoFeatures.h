/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime-sdk-meetings/ChimeSDKMeetings_EXPORTS.h>
#include <aws/chime-sdk-meetings/model/VideoResolution.h>
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
namespace ChimeSDKMeetings
{
namespace Model
{

  /**
   * <p>The video features set for the meeting. Applies to all attendees.</p> 
   * <p>If you specify <code>MeetingFeatures:Video:MaxResolution:None</code> when you
   * create a meeting, all API requests that include <code>SendReceive</code>,
   * <code>Send</code>, or <code>Receive</code> for
   * <code>AttendeeCapabilities:Video</code> will be rejected with
   * <code>ValidationError 400</code>.</p> <p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/chime-sdk-meetings-2021-07-15/VideoFeatures">AWS
   * API Reference</a></p>
   */
  class VideoFeatures
  {
  public:
    AWS_CHIMESDKMEETINGS_API VideoFeatures();
    AWS_CHIMESDKMEETINGS_API VideoFeatures(Aws::Utils::Json::JsonView jsonValue);
    AWS_CHIMESDKMEETINGS_API VideoFeatures& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CHIMESDKMEETINGS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The maximum video resolution for the meeting. Applies to all attendees.</p>
     *  <p>Defaults to <code>HD</code>. To use <code>FHD</code>, you must also
     * provide a <code>MeetingFeatures:Attendee:MaxCount</code> value and override the
     * default size limit of 250 attendees.</p> 
     */
    inline const VideoResolution& GetMaxResolution() const{ return m_maxResolution; }

    /**
     * <p>The maximum video resolution for the meeting. Applies to all attendees.</p>
     *  <p>Defaults to <code>HD</code>. To use <code>FHD</code>, you must also
     * provide a <code>MeetingFeatures:Attendee:MaxCount</code> value and override the
     * default size limit of 250 attendees.</p> 
     */
    inline bool MaxResolutionHasBeenSet() const { return m_maxResolutionHasBeenSet; }

    /**
     * <p>The maximum video resolution for the meeting. Applies to all attendees.</p>
     *  <p>Defaults to <code>HD</code>. To use <code>FHD</code>, you must also
     * provide a <code>MeetingFeatures:Attendee:MaxCount</code> value and override the
     * default size limit of 250 attendees.</p> 
     */
    inline void SetMaxResolution(const VideoResolution& value) { m_maxResolutionHasBeenSet = true; m_maxResolution = value; }

    /**
     * <p>The maximum video resolution for the meeting. Applies to all attendees.</p>
     *  <p>Defaults to <code>HD</code>. To use <code>FHD</code>, you must also
     * provide a <code>MeetingFeatures:Attendee:MaxCount</code> value and override the
     * default size limit of 250 attendees.</p> 
     */
    inline void SetMaxResolution(VideoResolution&& value) { m_maxResolutionHasBeenSet = true; m_maxResolution = std::move(value); }

    /**
     * <p>The maximum video resolution for the meeting. Applies to all attendees.</p>
     *  <p>Defaults to <code>HD</code>. To use <code>FHD</code>, you must also
     * provide a <code>MeetingFeatures:Attendee:MaxCount</code> value and override the
     * default size limit of 250 attendees.</p> 
     */
    inline VideoFeatures& WithMaxResolution(const VideoResolution& value) { SetMaxResolution(value); return *this;}

    /**
     * <p>The maximum video resolution for the meeting. Applies to all attendees.</p>
     *  <p>Defaults to <code>HD</code>. To use <code>FHD</code>, you must also
     * provide a <code>MeetingFeatures:Attendee:MaxCount</code> value and override the
     * default size limit of 250 attendees.</p> 
     */
    inline VideoFeatures& WithMaxResolution(VideoResolution&& value) { SetMaxResolution(std::move(value)); return *this;}

  private:

    VideoResolution m_maxResolution;
    bool m_maxResolutionHasBeenSet = false;
  };

} // namespace Model
} // namespace ChimeSDKMeetings
} // namespace Aws
