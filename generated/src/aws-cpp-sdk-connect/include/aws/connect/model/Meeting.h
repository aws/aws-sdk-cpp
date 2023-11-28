/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/connect/model/MediaPlacement.h>
#include <aws/connect/model/MeetingFeaturesConfiguration.h>
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
namespace Connect
{
namespace Model
{

  /**
   * <p>A meeting created using the Amazon Chime SDK.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/Meeting">AWS API
   * Reference</a></p>
   */
  class Meeting
  {
  public:
    AWS_CONNECT_API Meeting();
    AWS_CONNECT_API Meeting(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API Meeting& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The Amazon Web Services Region in which you create the meeting.</p>
     */
    inline const Aws::String& GetMediaRegion() const{ return m_mediaRegion; }

    /**
     * <p>The Amazon Web Services Region in which you create the meeting.</p>
     */
    inline bool MediaRegionHasBeenSet() const { return m_mediaRegionHasBeenSet; }

    /**
     * <p>The Amazon Web Services Region in which you create the meeting.</p>
     */
    inline void SetMediaRegion(const Aws::String& value) { m_mediaRegionHasBeenSet = true; m_mediaRegion = value; }

    /**
     * <p>The Amazon Web Services Region in which you create the meeting.</p>
     */
    inline void SetMediaRegion(Aws::String&& value) { m_mediaRegionHasBeenSet = true; m_mediaRegion = std::move(value); }

    /**
     * <p>The Amazon Web Services Region in which you create the meeting.</p>
     */
    inline void SetMediaRegion(const char* value) { m_mediaRegionHasBeenSet = true; m_mediaRegion.assign(value); }

    /**
     * <p>The Amazon Web Services Region in which you create the meeting.</p>
     */
    inline Meeting& WithMediaRegion(const Aws::String& value) { SetMediaRegion(value); return *this;}

    /**
     * <p>The Amazon Web Services Region in which you create the meeting.</p>
     */
    inline Meeting& WithMediaRegion(Aws::String&& value) { SetMediaRegion(std::move(value)); return *this;}

    /**
     * <p>The Amazon Web Services Region in which you create the meeting.</p>
     */
    inline Meeting& WithMediaRegion(const char* value) { SetMediaRegion(value); return *this;}


    /**
     * <p>The media placement for the meeting.</p>
     */
    inline const MediaPlacement& GetMediaPlacement() const{ return m_mediaPlacement; }

    /**
     * <p>The media placement for the meeting.</p>
     */
    inline bool MediaPlacementHasBeenSet() const { return m_mediaPlacementHasBeenSet; }

    /**
     * <p>The media placement for the meeting.</p>
     */
    inline void SetMediaPlacement(const MediaPlacement& value) { m_mediaPlacementHasBeenSet = true; m_mediaPlacement = value; }

    /**
     * <p>The media placement for the meeting.</p>
     */
    inline void SetMediaPlacement(MediaPlacement&& value) { m_mediaPlacementHasBeenSet = true; m_mediaPlacement = std::move(value); }

    /**
     * <p>The media placement for the meeting.</p>
     */
    inline Meeting& WithMediaPlacement(const MediaPlacement& value) { SetMediaPlacement(value); return *this;}

    /**
     * <p>The media placement for the meeting.</p>
     */
    inline Meeting& WithMediaPlacement(MediaPlacement&& value) { SetMediaPlacement(std::move(value)); return *this;}


    /**
     * <p>The configuration settings of the features available to a meeting.</p>
     */
    inline const MeetingFeaturesConfiguration& GetMeetingFeatures() const{ return m_meetingFeatures; }

    /**
     * <p>The configuration settings of the features available to a meeting.</p>
     */
    inline bool MeetingFeaturesHasBeenSet() const { return m_meetingFeaturesHasBeenSet; }

    /**
     * <p>The configuration settings of the features available to a meeting.</p>
     */
    inline void SetMeetingFeatures(const MeetingFeaturesConfiguration& value) { m_meetingFeaturesHasBeenSet = true; m_meetingFeatures = value; }

    /**
     * <p>The configuration settings of the features available to a meeting.</p>
     */
    inline void SetMeetingFeatures(MeetingFeaturesConfiguration&& value) { m_meetingFeaturesHasBeenSet = true; m_meetingFeatures = std::move(value); }

    /**
     * <p>The configuration settings of the features available to a meeting.</p>
     */
    inline Meeting& WithMeetingFeatures(const MeetingFeaturesConfiguration& value) { SetMeetingFeatures(value); return *this;}

    /**
     * <p>The configuration settings of the features available to a meeting.</p>
     */
    inline Meeting& WithMeetingFeatures(MeetingFeaturesConfiguration&& value) { SetMeetingFeatures(std::move(value)); return *this;}


    /**
     * <p>The Amazon Chime SDK meeting ID.</p>
     */
    inline const Aws::String& GetMeetingId() const{ return m_meetingId; }

    /**
     * <p>The Amazon Chime SDK meeting ID.</p>
     */
    inline bool MeetingIdHasBeenSet() const { return m_meetingIdHasBeenSet; }

    /**
     * <p>The Amazon Chime SDK meeting ID.</p>
     */
    inline void SetMeetingId(const Aws::String& value) { m_meetingIdHasBeenSet = true; m_meetingId = value; }

    /**
     * <p>The Amazon Chime SDK meeting ID.</p>
     */
    inline void SetMeetingId(Aws::String&& value) { m_meetingIdHasBeenSet = true; m_meetingId = std::move(value); }

    /**
     * <p>The Amazon Chime SDK meeting ID.</p>
     */
    inline void SetMeetingId(const char* value) { m_meetingIdHasBeenSet = true; m_meetingId.assign(value); }

    /**
     * <p>The Amazon Chime SDK meeting ID.</p>
     */
    inline Meeting& WithMeetingId(const Aws::String& value) { SetMeetingId(value); return *this;}

    /**
     * <p>The Amazon Chime SDK meeting ID.</p>
     */
    inline Meeting& WithMeetingId(Aws::String&& value) { SetMeetingId(std::move(value)); return *this;}

    /**
     * <p>The Amazon Chime SDK meeting ID.</p>
     */
    inline Meeting& WithMeetingId(const char* value) { SetMeetingId(value); return *this;}

  private:

    Aws::String m_mediaRegion;
    bool m_mediaRegionHasBeenSet = false;

    MediaPlacement m_mediaPlacement;
    bool m_mediaPlacementHasBeenSet = false;

    MeetingFeaturesConfiguration m_meetingFeatures;
    bool m_meetingFeaturesHasBeenSet = false;

    Aws::String m_meetingId;
    bool m_meetingIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
