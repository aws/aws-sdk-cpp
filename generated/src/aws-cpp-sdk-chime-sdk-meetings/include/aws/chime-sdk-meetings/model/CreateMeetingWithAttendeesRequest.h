/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime-sdk-meetings/ChimeSDKMeetings_EXPORTS.h>
#include <aws/chime-sdk-meetings/ChimeSDKMeetingsRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/chime-sdk-meetings/model/MeetingFeaturesConfiguration.h>
#include <aws/chime-sdk-meetings/model/NotificationsConfiguration.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/chime-sdk-meetings/model/CreateAttendeeRequestItem.h>
#include <aws/chime-sdk-meetings/model/Tag.h>
#include <utility>
#include <aws/core/utils/UUID.h>

namespace Aws
{
namespace ChimeSDKMeetings
{
namespace Model
{

  /**
   */
  class CreateMeetingWithAttendeesRequest : public ChimeSDKMeetingsRequest
  {
  public:
    AWS_CHIMESDKMEETINGS_API CreateMeetingWithAttendeesRequest();

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
    inline const Aws::String& GetClientRequestToken() const{ return m_clientRequestToken; }
    inline bool ClientRequestTokenHasBeenSet() const { return m_clientRequestTokenHasBeenSet; }
    inline void SetClientRequestToken(const Aws::String& value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken = value; }
    inline void SetClientRequestToken(Aws::String&& value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken = std::move(value); }
    inline void SetClientRequestToken(const char* value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken.assign(value); }
    inline CreateMeetingWithAttendeesRequest& WithClientRequestToken(const Aws::String& value) { SetClientRequestToken(value); return *this;}
    inline CreateMeetingWithAttendeesRequest& WithClientRequestToken(Aws::String&& value) { SetClientRequestToken(std::move(value)); return *this;}
    inline CreateMeetingWithAttendeesRequest& WithClientRequestToken(const char* value) { SetClientRequestToken(value); return *this;}
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
    inline const Aws::String& GetMediaRegion() const{ return m_mediaRegion; }
    inline bool MediaRegionHasBeenSet() const { return m_mediaRegionHasBeenSet; }
    inline void SetMediaRegion(const Aws::String& value) { m_mediaRegionHasBeenSet = true; m_mediaRegion = value; }
    inline void SetMediaRegion(Aws::String&& value) { m_mediaRegionHasBeenSet = true; m_mediaRegion = std::move(value); }
    inline void SetMediaRegion(const char* value) { m_mediaRegionHasBeenSet = true; m_mediaRegion.assign(value); }
    inline CreateMeetingWithAttendeesRequest& WithMediaRegion(const Aws::String& value) { SetMediaRegion(value); return *this;}
    inline CreateMeetingWithAttendeesRequest& WithMediaRegion(Aws::String&& value) { SetMediaRegion(std::move(value)); return *this;}
    inline CreateMeetingWithAttendeesRequest& WithMediaRegion(const char* value) { SetMediaRegion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Reserved.</p>
     */
    inline const Aws::String& GetMeetingHostId() const{ return m_meetingHostId; }
    inline bool MeetingHostIdHasBeenSet() const { return m_meetingHostIdHasBeenSet; }
    inline void SetMeetingHostId(const Aws::String& value) { m_meetingHostIdHasBeenSet = true; m_meetingHostId = value; }
    inline void SetMeetingHostId(Aws::String&& value) { m_meetingHostIdHasBeenSet = true; m_meetingHostId = std::move(value); }
    inline void SetMeetingHostId(const char* value) { m_meetingHostIdHasBeenSet = true; m_meetingHostId.assign(value); }
    inline CreateMeetingWithAttendeesRequest& WithMeetingHostId(const Aws::String& value) { SetMeetingHostId(value); return *this;}
    inline CreateMeetingWithAttendeesRequest& WithMeetingHostId(Aws::String&& value) { SetMeetingHostId(std::move(value)); return *this;}
    inline CreateMeetingWithAttendeesRequest& WithMeetingHostId(const char* value) { SetMeetingHostId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The external meeting ID.</p> <p>Pattern:
     * <code>[-_&amp;@+=,(){}\[\]\/«».:|'"#a-zA-Z0-9À-ÿ\s]*</code> </p> <p>Values that
     * begin with <code>aws:</code> are reserved. You can't configure a value that uses
     * this prefix. Case insensitive.</p>
     */
    inline const Aws::String& GetExternalMeetingId() const{ return m_externalMeetingId; }
    inline bool ExternalMeetingIdHasBeenSet() const { return m_externalMeetingIdHasBeenSet; }
    inline void SetExternalMeetingId(const Aws::String& value) { m_externalMeetingIdHasBeenSet = true; m_externalMeetingId = value; }
    inline void SetExternalMeetingId(Aws::String&& value) { m_externalMeetingIdHasBeenSet = true; m_externalMeetingId = std::move(value); }
    inline void SetExternalMeetingId(const char* value) { m_externalMeetingIdHasBeenSet = true; m_externalMeetingId.assign(value); }
    inline CreateMeetingWithAttendeesRequest& WithExternalMeetingId(const Aws::String& value) { SetExternalMeetingId(value); return *this;}
    inline CreateMeetingWithAttendeesRequest& WithExternalMeetingId(Aws::String&& value) { SetExternalMeetingId(std::move(value)); return *this;}
    inline CreateMeetingWithAttendeesRequest& WithExternalMeetingId(const char* value) { SetExternalMeetingId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Lists the audio and video features enabled for a meeting, such as echo
     * reduction.</p>
     */
    inline const MeetingFeaturesConfiguration& GetMeetingFeatures() const{ return m_meetingFeatures; }
    inline bool MeetingFeaturesHasBeenSet() const { return m_meetingFeaturesHasBeenSet; }
    inline void SetMeetingFeatures(const MeetingFeaturesConfiguration& value) { m_meetingFeaturesHasBeenSet = true; m_meetingFeatures = value; }
    inline void SetMeetingFeatures(MeetingFeaturesConfiguration&& value) { m_meetingFeaturesHasBeenSet = true; m_meetingFeatures = std::move(value); }
    inline CreateMeetingWithAttendeesRequest& WithMeetingFeatures(const MeetingFeaturesConfiguration& value) { SetMeetingFeatures(value); return *this;}
    inline CreateMeetingWithAttendeesRequest& WithMeetingFeatures(MeetingFeaturesConfiguration&& value) { SetMeetingFeatures(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The configuration for resource targets to receive notifications when meeting
     * and attendee events occur.</p>
     */
    inline const NotificationsConfiguration& GetNotificationsConfiguration() const{ return m_notificationsConfiguration; }
    inline bool NotificationsConfigurationHasBeenSet() const { return m_notificationsConfigurationHasBeenSet; }
    inline void SetNotificationsConfiguration(const NotificationsConfiguration& value) { m_notificationsConfigurationHasBeenSet = true; m_notificationsConfiguration = value; }
    inline void SetNotificationsConfiguration(NotificationsConfiguration&& value) { m_notificationsConfigurationHasBeenSet = true; m_notificationsConfiguration = std::move(value); }
    inline CreateMeetingWithAttendeesRequest& WithNotificationsConfiguration(const NotificationsConfiguration& value) { SetNotificationsConfiguration(value); return *this;}
    inline CreateMeetingWithAttendeesRequest& WithNotificationsConfiguration(NotificationsConfiguration&& value) { SetNotificationsConfiguration(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The attendee information, including attendees' IDs and join tokens.</p>
     */
    inline const Aws::Vector<CreateAttendeeRequestItem>& GetAttendees() const{ return m_attendees; }
    inline bool AttendeesHasBeenSet() const { return m_attendeesHasBeenSet; }
    inline void SetAttendees(const Aws::Vector<CreateAttendeeRequestItem>& value) { m_attendeesHasBeenSet = true; m_attendees = value; }
    inline void SetAttendees(Aws::Vector<CreateAttendeeRequestItem>&& value) { m_attendeesHasBeenSet = true; m_attendees = std::move(value); }
    inline CreateMeetingWithAttendeesRequest& WithAttendees(const Aws::Vector<CreateAttendeeRequestItem>& value) { SetAttendees(value); return *this;}
    inline CreateMeetingWithAttendeesRequest& WithAttendees(Aws::Vector<CreateAttendeeRequestItem>&& value) { SetAttendees(std::move(value)); return *this;}
    inline CreateMeetingWithAttendeesRequest& AddAttendees(const CreateAttendeeRequestItem& value) { m_attendeesHasBeenSet = true; m_attendees.push_back(value); return *this; }
    inline CreateMeetingWithAttendeesRequest& AddAttendees(CreateAttendeeRequestItem&& value) { m_attendeesHasBeenSet = true; m_attendees.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>When specified, replicates the media from the primary meeting to the new
     * meeting.</p>
     */
    inline const Aws::String& GetPrimaryMeetingId() const{ return m_primaryMeetingId; }
    inline bool PrimaryMeetingIdHasBeenSet() const { return m_primaryMeetingIdHasBeenSet; }
    inline void SetPrimaryMeetingId(const Aws::String& value) { m_primaryMeetingIdHasBeenSet = true; m_primaryMeetingId = value; }
    inline void SetPrimaryMeetingId(Aws::String&& value) { m_primaryMeetingIdHasBeenSet = true; m_primaryMeetingId = std::move(value); }
    inline void SetPrimaryMeetingId(const char* value) { m_primaryMeetingIdHasBeenSet = true; m_primaryMeetingId.assign(value); }
    inline CreateMeetingWithAttendeesRequest& WithPrimaryMeetingId(const Aws::String& value) { SetPrimaryMeetingId(value); return *this;}
    inline CreateMeetingWithAttendeesRequest& WithPrimaryMeetingId(Aws::String&& value) { SetPrimaryMeetingId(std::move(value)); return *this;}
    inline CreateMeetingWithAttendeesRequest& WithPrimaryMeetingId(const char* value) { SetPrimaryMeetingId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A consistent and opaque identifier, created and maintained by the builder to
     * represent a segment of their users.</p>
     */
    inline const Aws::Vector<Aws::String>& GetTenantIds() const{ return m_tenantIds; }
    inline bool TenantIdsHasBeenSet() const { return m_tenantIdsHasBeenSet; }
    inline void SetTenantIds(const Aws::Vector<Aws::String>& value) { m_tenantIdsHasBeenSet = true; m_tenantIds = value; }
    inline void SetTenantIds(Aws::Vector<Aws::String>&& value) { m_tenantIdsHasBeenSet = true; m_tenantIds = std::move(value); }
    inline CreateMeetingWithAttendeesRequest& WithTenantIds(const Aws::Vector<Aws::String>& value) { SetTenantIds(value); return *this;}
    inline CreateMeetingWithAttendeesRequest& WithTenantIds(Aws::Vector<Aws::String>&& value) { SetTenantIds(std::move(value)); return *this;}
    inline CreateMeetingWithAttendeesRequest& AddTenantIds(const Aws::String& value) { m_tenantIdsHasBeenSet = true; m_tenantIds.push_back(value); return *this; }
    inline CreateMeetingWithAttendeesRequest& AddTenantIds(Aws::String&& value) { m_tenantIdsHasBeenSet = true; m_tenantIds.push_back(std::move(value)); return *this; }
    inline CreateMeetingWithAttendeesRequest& AddTenantIds(const char* value) { m_tenantIdsHasBeenSet = true; m_tenantIds.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The tags in the request.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }
    inline CreateMeetingWithAttendeesRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}
    inline CreateMeetingWithAttendeesRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}
    inline CreateMeetingWithAttendeesRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }
    inline CreateMeetingWithAttendeesRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }
    ///@}
  private:

    Aws::String m_clientRequestToken;
    bool m_clientRequestTokenHasBeenSet = false;

    Aws::String m_mediaRegion;
    bool m_mediaRegionHasBeenSet = false;

    Aws::String m_meetingHostId;
    bool m_meetingHostIdHasBeenSet = false;

    Aws::String m_externalMeetingId;
    bool m_externalMeetingIdHasBeenSet = false;

    MeetingFeaturesConfiguration m_meetingFeatures;
    bool m_meetingFeaturesHasBeenSet = false;

    NotificationsConfiguration m_notificationsConfiguration;
    bool m_notificationsConfigurationHasBeenSet = false;

    Aws::Vector<CreateAttendeeRequestItem> m_attendees;
    bool m_attendeesHasBeenSet = false;

    Aws::String m_primaryMeetingId;
    bool m_primaryMeetingIdHasBeenSet = false;

    Aws::Vector<Aws::String> m_tenantIds;
    bool m_tenantIdsHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace ChimeSDKMeetings
} // namespace Aws
