/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime-sdk-meetings/ChimeSDKMeetings_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/chime-sdk-meetings/model/MediaPlacement.h>
#include <aws/chime-sdk-meetings/model/MeetingFeaturesConfiguration.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
   * <p>A meeting created using the Amazon Chime SDK.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/chime-sdk-meetings-2021-07-15/Meeting">AWS
   * API Reference</a></p>
   */
  class Meeting
  {
  public:
    AWS_CHIMESDKMEETINGS_API Meeting() = default;
    AWS_CHIMESDKMEETINGS_API Meeting(Aws::Utils::Json::JsonView jsonValue);
    AWS_CHIMESDKMEETINGS_API Meeting& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CHIMESDKMEETINGS_API Aws::Utils::Json::JsonValue Jsonize() const;


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

    ///@{
    /**
     * <p>Reserved.</p>
     */
    inline const Aws::String& GetMeetingHostId() const { return m_meetingHostId; }
    inline bool MeetingHostIdHasBeenSet() const { return m_meetingHostIdHasBeenSet; }
    template<typename MeetingHostIdT = Aws::String>
    void SetMeetingHostId(MeetingHostIdT&& value) { m_meetingHostIdHasBeenSet = true; m_meetingHostId = std::forward<MeetingHostIdT>(value); }
    template<typename MeetingHostIdT = Aws::String>
    Meeting& WithMeetingHostId(MeetingHostIdT&& value) { SetMeetingHostId(std::forward<MeetingHostIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The external meeting ID.</p> <p>Pattern:
     * <code>[-_&amp;@+=,(){}\[\]\/«».:|'"#a-zA-Z0-9À-ÿ\s]*</code> </p> <p>Values that
     * begin with <code>aws:</code> are reserved. You can't configure a value that uses
     * this prefix. Case insensitive.</p>
     */
    inline const Aws::String& GetExternalMeetingId() const { return m_externalMeetingId; }
    inline bool ExternalMeetingIdHasBeenSet() const { return m_externalMeetingIdHasBeenSet; }
    template<typename ExternalMeetingIdT = Aws::String>
    void SetExternalMeetingId(ExternalMeetingIdT&& value) { m_externalMeetingIdHasBeenSet = true; m_externalMeetingId = std::forward<ExternalMeetingIdT>(value); }
    template<typename ExternalMeetingIdT = Aws::String>
    Meeting& WithExternalMeetingId(ExternalMeetingIdT&& value) { SetExternalMeetingId(std::forward<ExternalMeetingIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Region in which you create the meeting. Available values:
     * <code>af-south-1</code>, <code>ap-northeast-1</code>,
     * <code>ap-northeast-2</code>, <code>ap-south-1</code>,
     * <code>ap-southeast-1</code>, <code>ap-southeast-2</code>,
     * <code>ca-central-1</code>, <code>eu-central-1</code>, <code>eu-north-1</code>,
     * <code>eu-south-1</code>, <code>eu-west-1</code>, <code>eu-west-2</code>,
     * <code>eu-west-3</code>, <code>sa-east-1</code>, <code>us-east-1</code>,
     * <code>us-east-2</code>, <code>us-west-1</code>, <code>us-west-2</code>.</p>
     * <p>Available values in Amazon Web Services GovCloud (US) Regions:
     * <code>us-gov-east-1</code>, <code>us-gov-west-1</code>.</p>
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
     * <p>The features available to a meeting, such as echo reduction.</p>
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
     * <p>When specified, replicates the media from the primary meeting to this
     * meeting.</p>
     */
    inline const Aws::String& GetPrimaryMeetingId() const { return m_primaryMeetingId; }
    inline bool PrimaryMeetingIdHasBeenSet() const { return m_primaryMeetingIdHasBeenSet; }
    template<typename PrimaryMeetingIdT = Aws::String>
    void SetPrimaryMeetingId(PrimaryMeetingIdT&& value) { m_primaryMeetingIdHasBeenSet = true; m_primaryMeetingId = std::forward<PrimaryMeetingIdT>(value); }
    template<typename PrimaryMeetingIdT = Aws::String>
    Meeting& WithPrimaryMeetingId(PrimaryMeetingIdT&& value) { SetPrimaryMeetingId(std::forward<PrimaryMeetingIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Array of strings.</p>
     */
    inline const Aws::Vector<Aws::String>& GetTenantIds() const { return m_tenantIds; }
    inline bool TenantIdsHasBeenSet() const { return m_tenantIdsHasBeenSet; }
    template<typename TenantIdsT = Aws::Vector<Aws::String>>
    void SetTenantIds(TenantIdsT&& value) { m_tenantIdsHasBeenSet = true; m_tenantIds = std::forward<TenantIdsT>(value); }
    template<typename TenantIdsT = Aws::Vector<Aws::String>>
    Meeting& WithTenantIds(TenantIdsT&& value) { SetTenantIds(std::forward<TenantIdsT>(value)); return *this;}
    template<typename TenantIdsT = Aws::String>
    Meeting& AddTenantIds(TenantIdsT&& value) { m_tenantIdsHasBeenSet = true; m_tenantIds.emplace_back(std::forward<TenantIdsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The ARN of the meeting.</p>
     */
    inline const Aws::String& GetMeetingArn() const { return m_meetingArn; }
    inline bool MeetingArnHasBeenSet() const { return m_meetingArnHasBeenSet; }
    template<typename MeetingArnT = Aws::String>
    void SetMeetingArn(MeetingArnT&& value) { m_meetingArnHasBeenSet = true; m_meetingArn = std::forward<MeetingArnT>(value); }
    template<typename MeetingArnT = Aws::String>
    Meeting& WithMeetingArn(MeetingArnT&& value) { SetMeetingArn(std::forward<MeetingArnT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_meetingId;
    bool m_meetingIdHasBeenSet = false;

    Aws::String m_meetingHostId;
    bool m_meetingHostIdHasBeenSet = false;

    Aws::String m_externalMeetingId;
    bool m_externalMeetingIdHasBeenSet = false;

    Aws::String m_mediaRegion;
    bool m_mediaRegionHasBeenSet = false;

    MediaPlacement m_mediaPlacement;
    bool m_mediaPlacementHasBeenSet = false;

    MeetingFeaturesConfiguration m_meetingFeatures;
    bool m_meetingFeaturesHasBeenSet = false;

    Aws::String m_primaryMeetingId;
    bool m_primaryMeetingIdHasBeenSet = false;

    Aws::Vector<Aws::String> m_tenantIds;
    bool m_tenantIdsHasBeenSet = false;

    Aws::String m_meetingArn;
    bool m_meetingArnHasBeenSet = false;
  };

} // namespace Model
} // namespace ChimeSDKMeetings
} // namespace Aws
