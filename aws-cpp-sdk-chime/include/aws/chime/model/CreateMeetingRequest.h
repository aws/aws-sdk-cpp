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
#include <aws/chime/Chime_EXPORTS.h>
#include <aws/chime/ChimeRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/chime/model/MeetingNotificationConfiguration.h>
#include <utility>
#include <aws/core/utils/UUID.h>

namespace Aws
{
namespace Chime
{
namespace Model
{

  /**
   */
  class AWS_CHIME_API CreateMeetingRequest : public ChimeRequest
  {
  public:
    CreateMeetingRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateMeeting"; }

    Aws::String SerializePayload() const override;


    /**
     * <p>The unique identifier for the client request. Use a different token for
     * different meetings.</p>
     */
    inline const Aws::String& GetClientRequestToken() const{ return m_clientRequestToken; }

    /**
     * <p>The unique identifier for the client request. Use a different token for
     * different meetings.</p>
     */
    inline bool ClientRequestTokenHasBeenSet() const { return m_clientRequestTokenHasBeenSet; }

    /**
     * <p>The unique identifier for the client request. Use a different token for
     * different meetings.</p>
     */
    inline void SetClientRequestToken(const Aws::String& value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken = value; }

    /**
     * <p>The unique identifier for the client request. Use a different token for
     * different meetings.</p>
     */
    inline void SetClientRequestToken(Aws::String&& value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken = std::move(value); }

    /**
     * <p>The unique identifier for the client request. Use a different token for
     * different meetings.</p>
     */
    inline void SetClientRequestToken(const char* value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken.assign(value); }

    /**
     * <p>The unique identifier for the client request. Use a different token for
     * different meetings.</p>
     */
    inline CreateMeetingRequest& WithClientRequestToken(const Aws::String& value) { SetClientRequestToken(value); return *this;}

    /**
     * <p>The unique identifier for the client request. Use a different token for
     * different meetings.</p>
     */
    inline CreateMeetingRequest& WithClientRequestToken(Aws::String&& value) { SetClientRequestToken(std::move(value)); return *this;}

    /**
     * <p>The unique identifier for the client request. Use a different token for
     * different meetings.</p>
     */
    inline CreateMeetingRequest& WithClientRequestToken(const char* value) { SetClientRequestToken(value); return *this;}


    /**
     * <p>Reserved.</p>
     */
    inline const Aws::String& GetMeetingHostId() const{ return m_meetingHostId; }

    /**
     * <p>Reserved.</p>
     */
    inline bool MeetingHostIdHasBeenSet() const { return m_meetingHostIdHasBeenSet; }

    /**
     * <p>Reserved.</p>
     */
    inline void SetMeetingHostId(const Aws::String& value) { m_meetingHostIdHasBeenSet = true; m_meetingHostId = value; }

    /**
     * <p>Reserved.</p>
     */
    inline void SetMeetingHostId(Aws::String&& value) { m_meetingHostIdHasBeenSet = true; m_meetingHostId = std::move(value); }

    /**
     * <p>Reserved.</p>
     */
    inline void SetMeetingHostId(const char* value) { m_meetingHostIdHasBeenSet = true; m_meetingHostId.assign(value); }

    /**
     * <p>Reserved.</p>
     */
    inline CreateMeetingRequest& WithMeetingHostId(const Aws::String& value) { SetMeetingHostId(value); return *this;}

    /**
     * <p>Reserved.</p>
     */
    inline CreateMeetingRequest& WithMeetingHostId(Aws::String&& value) { SetMeetingHostId(std::move(value)); return *this;}

    /**
     * <p>Reserved.</p>
     */
    inline CreateMeetingRequest& WithMeetingHostId(const char* value) { SetMeetingHostId(value); return *this;}


    /**
     * <p>The Region in which to create the meeting. Available values:
     * <code>ap-northeast-1</code>, <code>ap-southeast-1</code>,
     * <code>ap-southeast-2</code>, <code>ca-central-1</code>,
     * <code>eu-central-1</code>, <code>eu-north-1</code>, <code>eu-west-1</code>,
     * <code>eu-west-2</code>, <code>eu-west-3</code>, <code>sa-east-1</code>,
     * <code>us-east-1</code>, <code>us-east-2</code>, <code>us-west-1</code>,
     * <code>us-west-2</code>.</p>
     */
    inline const Aws::String& GetMediaRegion() const{ return m_mediaRegion; }

    /**
     * <p>The Region in which to create the meeting. Available values:
     * <code>ap-northeast-1</code>, <code>ap-southeast-1</code>,
     * <code>ap-southeast-2</code>, <code>ca-central-1</code>,
     * <code>eu-central-1</code>, <code>eu-north-1</code>, <code>eu-west-1</code>,
     * <code>eu-west-2</code>, <code>eu-west-3</code>, <code>sa-east-1</code>,
     * <code>us-east-1</code>, <code>us-east-2</code>, <code>us-west-1</code>,
     * <code>us-west-2</code>.</p>
     */
    inline bool MediaRegionHasBeenSet() const { return m_mediaRegionHasBeenSet; }

    /**
     * <p>The Region in which to create the meeting. Available values:
     * <code>ap-northeast-1</code>, <code>ap-southeast-1</code>,
     * <code>ap-southeast-2</code>, <code>ca-central-1</code>,
     * <code>eu-central-1</code>, <code>eu-north-1</code>, <code>eu-west-1</code>,
     * <code>eu-west-2</code>, <code>eu-west-3</code>, <code>sa-east-1</code>,
     * <code>us-east-1</code>, <code>us-east-2</code>, <code>us-west-1</code>,
     * <code>us-west-2</code>.</p>
     */
    inline void SetMediaRegion(const Aws::String& value) { m_mediaRegionHasBeenSet = true; m_mediaRegion = value; }

    /**
     * <p>The Region in which to create the meeting. Available values:
     * <code>ap-northeast-1</code>, <code>ap-southeast-1</code>,
     * <code>ap-southeast-2</code>, <code>ca-central-1</code>,
     * <code>eu-central-1</code>, <code>eu-north-1</code>, <code>eu-west-1</code>,
     * <code>eu-west-2</code>, <code>eu-west-3</code>, <code>sa-east-1</code>,
     * <code>us-east-1</code>, <code>us-east-2</code>, <code>us-west-1</code>,
     * <code>us-west-2</code>.</p>
     */
    inline void SetMediaRegion(Aws::String&& value) { m_mediaRegionHasBeenSet = true; m_mediaRegion = std::move(value); }

    /**
     * <p>The Region in which to create the meeting. Available values:
     * <code>ap-northeast-1</code>, <code>ap-southeast-1</code>,
     * <code>ap-southeast-2</code>, <code>ca-central-1</code>,
     * <code>eu-central-1</code>, <code>eu-north-1</code>, <code>eu-west-1</code>,
     * <code>eu-west-2</code>, <code>eu-west-3</code>, <code>sa-east-1</code>,
     * <code>us-east-1</code>, <code>us-east-2</code>, <code>us-west-1</code>,
     * <code>us-west-2</code>.</p>
     */
    inline void SetMediaRegion(const char* value) { m_mediaRegionHasBeenSet = true; m_mediaRegion.assign(value); }

    /**
     * <p>The Region in which to create the meeting. Available values:
     * <code>ap-northeast-1</code>, <code>ap-southeast-1</code>,
     * <code>ap-southeast-2</code>, <code>ca-central-1</code>,
     * <code>eu-central-1</code>, <code>eu-north-1</code>, <code>eu-west-1</code>,
     * <code>eu-west-2</code>, <code>eu-west-3</code>, <code>sa-east-1</code>,
     * <code>us-east-1</code>, <code>us-east-2</code>, <code>us-west-1</code>,
     * <code>us-west-2</code>.</p>
     */
    inline CreateMeetingRequest& WithMediaRegion(const Aws::String& value) { SetMediaRegion(value); return *this;}

    /**
     * <p>The Region in which to create the meeting. Available values:
     * <code>ap-northeast-1</code>, <code>ap-southeast-1</code>,
     * <code>ap-southeast-2</code>, <code>ca-central-1</code>,
     * <code>eu-central-1</code>, <code>eu-north-1</code>, <code>eu-west-1</code>,
     * <code>eu-west-2</code>, <code>eu-west-3</code>, <code>sa-east-1</code>,
     * <code>us-east-1</code>, <code>us-east-2</code>, <code>us-west-1</code>,
     * <code>us-west-2</code>.</p>
     */
    inline CreateMeetingRequest& WithMediaRegion(Aws::String&& value) { SetMediaRegion(std::move(value)); return *this;}

    /**
     * <p>The Region in which to create the meeting. Available values:
     * <code>ap-northeast-1</code>, <code>ap-southeast-1</code>,
     * <code>ap-southeast-2</code>, <code>ca-central-1</code>,
     * <code>eu-central-1</code>, <code>eu-north-1</code>, <code>eu-west-1</code>,
     * <code>eu-west-2</code>, <code>eu-west-3</code>, <code>sa-east-1</code>,
     * <code>us-east-1</code>, <code>us-east-2</code>, <code>us-west-1</code>,
     * <code>us-west-2</code>.</p>
     */
    inline CreateMeetingRequest& WithMediaRegion(const char* value) { SetMediaRegion(value); return *this;}


    /**
     * <p>The configuration for resource targets to receive notifications when meeting
     * and attendee events occur.</p>
     */
    inline const MeetingNotificationConfiguration& GetNotificationsConfiguration() const{ return m_notificationsConfiguration; }

    /**
     * <p>The configuration for resource targets to receive notifications when meeting
     * and attendee events occur.</p>
     */
    inline bool NotificationsConfigurationHasBeenSet() const { return m_notificationsConfigurationHasBeenSet; }

    /**
     * <p>The configuration for resource targets to receive notifications when meeting
     * and attendee events occur.</p>
     */
    inline void SetNotificationsConfiguration(const MeetingNotificationConfiguration& value) { m_notificationsConfigurationHasBeenSet = true; m_notificationsConfiguration = value; }

    /**
     * <p>The configuration for resource targets to receive notifications when meeting
     * and attendee events occur.</p>
     */
    inline void SetNotificationsConfiguration(MeetingNotificationConfiguration&& value) { m_notificationsConfigurationHasBeenSet = true; m_notificationsConfiguration = std::move(value); }

    /**
     * <p>The configuration for resource targets to receive notifications when meeting
     * and attendee events occur.</p>
     */
    inline CreateMeetingRequest& WithNotificationsConfiguration(const MeetingNotificationConfiguration& value) { SetNotificationsConfiguration(value); return *this;}

    /**
     * <p>The configuration for resource targets to receive notifications when meeting
     * and attendee events occur.</p>
     */
    inline CreateMeetingRequest& WithNotificationsConfiguration(MeetingNotificationConfiguration&& value) { SetNotificationsConfiguration(std::move(value)); return *this;}

  private:

    Aws::String m_clientRequestToken;
    bool m_clientRequestTokenHasBeenSet;

    Aws::String m_meetingHostId;
    bool m_meetingHostIdHasBeenSet;

    Aws::String m_mediaRegion;
    bool m_mediaRegionHasBeenSet;

    MeetingNotificationConfiguration m_notificationsConfiguration;
    bool m_notificationsConfigurationHasBeenSet;
  };

} // namespace Model
} // namespace Chime
} // namespace Aws
