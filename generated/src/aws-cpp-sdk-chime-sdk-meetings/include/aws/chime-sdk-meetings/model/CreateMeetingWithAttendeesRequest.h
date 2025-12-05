/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime-sdk-meetings/ChimeSDKMeetingsRequest.h>
#include <aws/chime-sdk-meetings/ChimeSDKMeetings_EXPORTS.h>
#include <aws/chime-sdk-meetings/model/CreateAttendeeRequestItem.h>
#include <aws/chime-sdk-meetings/model/MediaPlacementNetworkType.h>
#include <aws/chime-sdk-meetings/model/MeetingFeaturesConfiguration.h>
#include <aws/chime-sdk-meetings/model/NotificationsConfiguration.h>
#include <aws/chime-sdk-meetings/model/Tag.h>
#include <aws/core/utils/UUID.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <utility>

namespace Aws {
namespace ChimeSDKMeetings {
namespace Model {

/**
 */
class CreateMeetingWithAttendeesRequest : public ChimeSDKMeetingsRequest {
 public:
  AWS_CHIMESDKMEETINGS_API CreateMeetingWithAttendeesRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "CreateMeetingWithAttendees"; }

  AWS_CHIMESDKMEETINGS_API Aws::String SerializePayload() const override;

  ///@{
  /**
   * <p>The unique identifier for the client request. Use a different token for
   * different meetings.</p>
   */
  inline const Aws::String& GetClientRequestToken() const { return m_clientRequestToken; }
  inline bool ClientRequestTokenHasBeenSet() const { return m_clientRequestTokenHasBeenSet; }
  template <typename ClientRequestTokenT = Aws::String>
  void SetClientRequestToken(ClientRequestTokenT&& value) {
    m_clientRequestTokenHasBeenSet = true;
    m_clientRequestToken = std::forward<ClientRequestTokenT>(value);
  }
  template <typename ClientRequestTokenT = Aws::String>
  CreateMeetingWithAttendeesRequest& WithClientRequestToken(ClientRequestTokenT&& value) {
    SetClientRequestToken(std::forward<ClientRequestTokenT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Region in which to create the meeting.</p> <p> Available values:
   * <code>af-south-1</code>, <code>ap-northeast-1</code>,
   * <code>ap-northeast-2</code>, <code>ap-south-1</code>,
   * <code>ap-southeast-1</code>, <code>ap-southeast-2</code>,
   * <code>ca-central-1</code>, <code>eu-central-1</code>, <code>eu-north-1</code>,
   * <code>eu-south-1</code>, <code>eu-west-1</code>, <code>eu-west-2</code>,
   * <code>eu-west-3</code>, <code>sa-east-1</code>, <code>us-east-1</code>,
   * <code>us-east-2</code>, <code>us-west-1</code>, <code>us-west-2</code>. </p>
   * <p>Available values in Amazon Web Services GovCloud (US) Regions:
   * <code>us-gov-east-1</code>, <code>us-gov-west-1</code>.</p>
   */
  inline const Aws::String& GetMediaRegion() const { return m_mediaRegion; }
  inline bool MediaRegionHasBeenSet() const { return m_mediaRegionHasBeenSet; }
  template <typename MediaRegionT = Aws::String>
  void SetMediaRegion(MediaRegionT&& value) {
    m_mediaRegionHasBeenSet = true;
    m_mediaRegion = std::forward<MediaRegionT>(value);
  }
  template <typename MediaRegionT = Aws::String>
  CreateMeetingWithAttendeesRequest& WithMediaRegion(MediaRegionT&& value) {
    SetMediaRegion(std::forward<MediaRegionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Reserved.</p>
   */
  inline const Aws::String& GetMeetingHostId() const { return m_meetingHostId; }
  inline bool MeetingHostIdHasBeenSet() const { return m_meetingHostIdHasBeenSet; }
  template <typename MeetingHostIdT = Aws::String>
  void SetMeetingHostId(MeetingHostIdT&& value) {
    m_meetingHostIdHasBeenSet = true;
    m_meetingHostId = std::forward<MeetingHostIdT>(value);
  }
  template <typename MeetingHostIdT = Aws::String>
  CreateMeetingWithAttendeesRequest& WithMeetingHostId(MeetingHostIdT&& value) {
    SetMeetingHostId(std::forward<MeetingHostIdT>(value));
    return *this;
  }
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
  template <typename ExternalMeetingIdT = Aws::String>
  void SetExternalMeetingId(ExternalMeetingIdT&& value) {
    m_externalMeetingIdHasBeenSet = true;
    m_externalMeetingId = std::forward<ExternalMeetingIdT>(value);
  }
  template <typename ExternalMeetingIdT = Aws::String>
  CreateMeetingWithAttendeesRequest& WithExternalMeetingId(ExternalMeetingIdT&& value) {
    SetExternalMeetingId(std::forward<ExternalMeetingIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Lists the audio and video features enabled for a meeting, such as echo
   * reduction.</p>
   */
  inline const MeetingFeaturesConfiguration& GetMeetingFeatures() const { return m_meetingFeatures; }
  inline bool MeetingFeaturesHasBeenSet() const { return m_meetingFeaturesHasBeenSet; }
  template <typename MeetingFeaturesT = MeetingFeaturesConfiguration>
  void SetMeetingFeatures(MeetingFeaturesT&& value) {
    m_meetingFeaturesHasBeenSet = true;
    m_meetingFeatures = std::forward<MeetingFeaturesT>(value);
  }
  template <typename MeetingFeaturesT = MeetingFeaturesConfiguration>
  CreateMeetingWithAttendeesRequest& WithMeetingFeatures(MeetingFeaturesT&& value) {
    SetMeetingFeatures(std::forward<MeetingFeaturesT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The configuration for resource targets to receive notifications when meeting
   * and attendee events occur.</p>
   */
  inline const NotificationsConfiguration& GetNotificationsConfiguration() const { return m_notificationsConfiguration; }
  inline bool NotificationsConfigurationHasBeenSet() const { return m_notificationsConfigurationHasBeenSet; }
  template <typename NotificationsConfigurationT = NotificationsConfiguration>
  void SetNotificationsConfiguration(NotificationsConfigurationT&& value) {
    m_notificationsConfigurationHasBeenSet = true;
    m_notificationsConfiguration = std::forward<NotificationsConfigurationT>(value);
  }
  template <typename NotificationsConfigurationT = NotificationsConfiguration>
  CreateMeetingWithAttendeesRequest& WithNotificationsConfiguration(NotificationsConfigurationT&& value) {
    SetNotificationsConfiguration(std::forward<NotificationsConfigurationT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The attendee information, including attendees' IDs and join tokens.</p>
   */
  inline const Aws::Vector<CreateAttendeeRequestItem>& GetAttendees() const { return m_attendees; }
  inline bool AttendeesHasBeenSet() const { return m_attendeesHasBeenSet; }
  template <typename AttendeesT = Aws::Vector<CreateAttendeeRequestItem>>
  void SetAttendees(AttendeesT&& value) {
    m_attendeesHasBeenSet = true;
    m_attendees = std::forward<AttendeesT>(value);
  }
  template <typename AttendeesT = Aws::Vector<CreateAttendeeRequestItem>>
  CreateMeetingWithAttendeesRequest& WithAttendees(AttendeesT&& value) {
    SetAttendees(std::forward<AttendeesT>(value));
    return *this;
  }
  template <typename AttendeesT = CreateAttendeeRequestItem>
  CreateMeetingWithAttendeesRequest& AddAttendees(AttendeesT&& value) {
    m_attendeesHasBeenSet = true;
    m_attendees.emplace_back(std::forward<AttendeesT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>When specified, replicates the media from the primary meeting to the new
   * meeting.</p>
   */
  inline const Aws::String& GetPrimaryMeetingId() const { return m_primaryMeetingId; }
  inline bool PrimaryMeetingIdHasBeenSet() const { return m_primaryMeetingIdHasBeenSet; }
  template <typename PrimaryMeetingIdT = Aws::String>
  void SetPrimaryMeetingId(PrimaryMeetingIdT&& value) {
    m_primaryMeetingIdHasBeenSet = true;
    m_primaryMeetingId = std::forward<PrimaryMeetingIdT>(value);
  }
  template <typename PrimaryMeetingIdT = Aws::String>
  CreateMeetingWithAttendeesRequest& WithPrimaryMeetingId(PrimaryMeetingIdT&& value) {
    SetPrimaryMeetingId(std::forward<PrimaryMeetingIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A consistent and opaque identifier, created and maintained by the builder to
   * represent a segment of their users.</p>
   */
  inline const Aws::Vector<Aws::String>& GetTenantIds() const { return m_tenantIds; }
  inline bool TenantIdsHasBeenSet() const { return m_tenantIdsHasBeenSet; }
  template <typename TenantIdsT = Aws::Vector<Aws::String>>
  void SetTenantIds(TenantIdsT&& value) {
    m_tenantIdsHasBeenSet = true;
    m_tenantIds = std::forward<TenantIdsT>(value);
  }
  template <typename TenantIdsT = Aws::Vector<Aws::String>>
  CreateMeetingWithAttendeesRequest& WithTenantIds(TenantIdsT&& value) {
    SetTenantIds(std::forward<TenantIdsT>(value));
    return *this;
  }
  template <typename TenantIdsT = Aws::String>
  CreateMeetingWithAttendeesRequest& AddTenantIds(TenantIdsT&& value) {
    m_tenantIdsHasBeenSet = true;
    m_tenantIds.emplace_back(std::forward<TenantIdsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The tags in the request.</p>
   */
  inline const Aws::Vector<Tag>& GetTags() const { return m_tags; }
  inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
  template <typename TagsT = Aws::Vector<Tag>>
  void SetTags(TagsT&& value) {
    m_tagsHasBeenSet = true;
    m_tags = std::forward<TagsT>(value);
  }
  template <typename TagsT = Aws::Vector<Tag>>
  CreateMeetingWithAttendeesRequest& WithTags(TagsT&& value) {
    SetTags(std::forward<TagsT>(value));
    return *this;
  }
  template <typename TagsT = Tag>
  CreateMeetingWithAttendeesRequest& AddTags(TagsT&& value) {
    m_tagsHasBeenSet = true;
    m_tags.emplace_back(std::forward<TagsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The type of network for the media placement. Either IPv4 only or dual-stack
   * (IPv4 and IPv6).</p>
   */
  inline MediaPlacementNetworkType GetMediaPlacementNetworkType() const { return m_mediaPlacementNetworkType; }
  inline bool MediaPlacementNetworkTypeHasBeenSet() const { return m_mediaPlacementNetworkTypeHasBeenSet; }
  inline void SetMediaPlacementNetworkType(MediaPlacementNetworkType value) {
    m_mediaPlacementNetworkTypeHasBeenSet = true;
    m_mediaPlacementNetworkType = value;
  }
  inline CreateMeetingWithAttendeesRequest& WithMediaPlacementNetworkType(MediaPlacementNetworkType value) {
    SetMediaPlacementNetworkType(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_clientRequestToken{Aws::Utils::UUID::PseudoRandomUUID()};

  Aws::String m_mediaRegion;

  Aws::String m_meetingHostId;

  Aws::String m_externalMeetingId;

  MeetingFeaturesConfiguration m_meetingFeatures;

  NotificationsConfiguration m_notificationsConfiguration;

  Aws::Vector<CreateAttendeeRequestItem> m_attendees;

  Aws::String m_primaryMeetingId;

  Aws::Vector<Aws::String> m_tenantIds;

  Aws::Vector<Tag> m_tags;

  MediaPlacementNetworkType m_mediaPlacementNetworkType{MediaPlacementNetworkType::NOT_SET};
  bool m_clientRequestTokenHasBeenSet = true;
  bool m_mediaRegionHasBeenSet = false;
  bool m_meetingHostIdHasBeenSet = false;
  bool m_externalMeetingIdHasBeenSet = false;
  bool m_meetingFeaturesHasBeenSet = false;
  bool m_notificationsConfigurationHasBeenSet = false;
  bool m_attendeesHasBeenSet = false;
  bool m_primaryMeetingIdHasBeenSet = false;
  bool m_tenantIdsHasBeenSet = false;
  bool m_tagsHasBeenSet = false;
  bool m_mediaPlacementNetworkTypeHasBeenSet = false;
};

}  // namespace Model
}  // namespace ChimeSDKMeetings
}  // namespace Aws
