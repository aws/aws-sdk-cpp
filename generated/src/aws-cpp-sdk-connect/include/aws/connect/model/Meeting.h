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
    AWS_CONNECT_API Meeting() = default;
    AWS_CONNECT_API Meeting(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API Meeting& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Web Services Region in which you create the meeting.</p>
     */
    inline const Aws::String& GetMediaRegion() const { return m_mediaRegion; }
    inline bool MediaRegionHasBeenSet() const { return m_mediaRegionHasBeenSet; }
    template<typename MediaRegionT = Aws::String>
    void SetMediaRegion(MediaRegionT&& value) { m_mediaRegionHasBeenSet = true; m_mediaRegion = std::forward<MediaRegionT>(value); }
    template<typename MediaRegionT = Aws::String>
    Meeting& WithMediaRegion(MediaRegionT&& value) { SetMediaRegion(std::forward<MediaRegionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The media placement for the meeting.</p>
     */
    inline const MediaPlacement& GetMediaPlacement() const { return m_mediaPlacement; }
    inline bool MediaPlacementHasBeenSet() const { return m_mediaPlacementHasBeenSet; }
    template<typename MediaPlacementT = MediaPlacement>
    void SetMediaPlacement(MediaPlacementT&& value) { m_mediaPlacementHasBeenSet = true; m_mediaPlacement = std::forward<MediaPlacementT>(value); }
    template<typename MediaPlacementT = MediaPlacement>
    Meeting& WithMediaPlacement(MediaPlacementT&& value) { SetMediaPlacement(std::forward<MediaPlacementT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The configuration settings of the features available to a meeting.</p>
     */
    inline const MeetingFeaturesConfiguration& GetMeetingFeatures() const { return m_meetingFeatures; }
    inline bool MeetingFeaturesHasBeenSet() const { return m_meetingFeaturesHasBeenSet; }
    template<typename MeetingFeaturesT = MeetingFeaturesConfiguration>
    void SetMeetingFeatures(MeetingFeaturesT&& value) { m_meetingFeaturesHasBeenSet = true; m_meetingFeatures = std::forward<MeetingFeaturesT>(value); }
    template<typename MeetingFeaturesT = MeetingFeaturesConfiguration>
    Meeting& WithMeetingFeatures(MeetingFeaturesT&& value) { SetMeetingFeatures(std::forward<MeetingFeaturesT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Chime SDK meeting ID.</p>
     */
    inline const Aws::String& GetMeetingId() const { return m_meetingId; }
    inline bool MeetingIdHasBeenSet() const { return m_meetingIdHasBeenSet; }
    template<typename MeetingIdT = Aws::String>
    void SetMeetingId(MeetingIdT&& value) { m_meetingIdHasBeenSet = true; m_meetingId = std::forward<MeetingIdT>(value); }
    template<typename MeetingIdT = Aws::String>
    Meeting& WithMeetingId(MeetingIdT&& value) { SetMeetingId(std::forward<MeetingIdT>(value)); return *this;}
    ///@}
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
