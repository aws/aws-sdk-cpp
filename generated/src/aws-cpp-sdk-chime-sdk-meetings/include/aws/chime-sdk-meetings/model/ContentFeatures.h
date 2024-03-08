/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime-sdk-meetings/ChimeSDKMeetings_EXPORTS.h>
#include <aws/chime-sdk-meetings/model/ContentResolution.h>
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
   * <p>Lists the content (screen share) features for the meeting. Applies to all
   * attendees.</p>  <p>If you specify
   * <code>MeetingFeatures:Content:MaxResolution:None</code> when you create a
   * meeting, all API requests that include <code>SendReceive</code>,
   * <code>Send</code>, or <code>Receive</code> for
   * <code>AttendeeCapabilities:Content</code> will be rejected with
   * <code>ValidationError 400</code>.</p> <p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/chime-sdk-meetings-2021-07-15/ContentFeatures">AWS
   * API Reference</a></p>
   */
  class ContentFeatures
  {
  public:
    AWS_CHIMESDKMEETINGS_API ContentFeatures();
    AWS_CHIMESDKMEETINGS_API ContentFeatures(Aws::Utils::Json::JsonView jsonValue);
    AWS_CHIMESDKMEETINGS_API ContentFeatures& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CHIMESDKMEETINGS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The maximum resolution for the meeting content.</p>  <p>Defaults to
     * <code>FHD</code>. To use <code>UHD</code>, you must also provide a
     * <code>MeetingFeatures:Attendee:MaxCount</code> value and override the default
     * size limit of 250 attendees.</p> 
     */
    inline const ContentResolution& GetMaxResolution() const{ return m_maxResolution; }

    /**
     * <p>The maximum resolution for the meeting content.</p>  <p>Defaults to
     * <code>FHD</code>. To use <code>UHD</code>, you must also provide a
     * <code>MeetingFeatures:Attendee:MaxCount</code> value and override the default
     * size limit of 250 attendees.</p> 
     */
    inline bool MaxResolutionHasBeenSet() const { return m_maxResolutionHasBeenSet; }

    /**
     * <p>The maximum resolution for the meeting content.</p>  <p>Defaults to
     * <code>FHD</code>. To use <code>UHD</code>, you must also provide a
     * <code>MeetingFeatures:Attendee:MaxCount</code> value and override the default
     * size limit of 250 attendees.</p> 
     */
    inline void SetMaxResolution(const ContentResolution& value) { m_maxResolutionHasBeenSet = true; m_maxResolution = value; }

    /**
     * <p>The maximum resolution for the meeting content.</p>  <p>Defaults to
     * <code>FHD</code>. To use <code>UHD</code>, you must also provide a
     * <code>MeetingFeatures:Attendee:MaxCount</code> value and override the default
     * size limit of 250 attendees.</p> 
     */
    inline void SetMaxResolution(ContentResolution&& value) { m_maxResolutionHasBeenSet = true; m_maxResolution = std::move(value); }

    /**
     * <p>The maximum resolution for the meeting content.</p>  <p>Defaults to
     * <code>FHD</code>. To use <code>UHD</code>, you must also provide a
     * <code>MeetingFeatures:Attendee:MaxCount</code> value and override the default
     * size limit of 250 attendees.</p> 
     */
    inline ContentFeatures& WithMaxResolution(const ContentResolution& value) { SetMaxResolution(value); return *this;}

    /**
     * <p>The maximum resolution for the meeting content.</p>  <p>Defaults to
     * <code>FHD</code>. To use <code>UHD</code>, you must also provide a
     * <code>MeetingFeatures:Attendee:MaxCount</code> value and override the default
     * size limit of 250 attendees.</p> 
     */
    inline ContentFeatures& WithMaxResolution(ContentResolution&& value) { SetMaxResolution(std::move(value)); return *this;}

  private:

    ContentResolution m_maxResolution;
    bool m_maxResolutionHasBeenSet = false;
  };

} // namespace Model
} // namespace ChimeSDKMeetings
} // namespace Aws
