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
#include <aws/alexaforbusiness/AlexaForBusiness_EXPORTS.h>
#include <aws/alexaforbusiness/AlexaForBusinessRequest.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/alexaforbusiness/model/Content.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/alexaforbusiness/model/Filter.h>
#include <utility>
#include <aws/core/utils/UUID.h>

namespace Aws
{
namespace AlexaForBusiness
{
namespace Model
{

  /**
   */
  class AWS_ALEXAFORBUSINESS_API SendAnnouncementRequest : public AlexaForBusinessRequest
  {
  public:
    SendAnnouncementRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "SendAnnouncement"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The filters to use to send an announcement to a specified list of rooms. The
     * supported filter keys are RoomName, ProfileName, RoomArn, and ProfileArn. To
     * send to all rooms, specify an empty RoomFilters list.</p>
     */
    inline const Aws::Vector<Filter>& GetRoomFilters() const{ return m_roomFilters; }

    /**
     * <p>The filters to use to send an announcement to a specified list of rooms. The
     * supported filter keys are RoomName, ProfileName, RoomArn, and ProfileArn. To
     * send to all rooms, specify an empty RoomFilters list.</p>
     */
    inline bool RoomFiltersHasBeenSet() const { return m_roomFiltersHasBeenSet; }

    /**
     * <p>The filters to use to send an announcement to a specified list of rooms. The
     * supported filter keys are RoomName, ProfileName, RoomArn, and ProfileArn. To
     * send to all rooms, specify an empty RoomFilters list.</p>
     */
    inline void SetRoomFilters(const Aws::Vector<Filter>& value) { m_roomFiltersHasBeenSet = true; m_roomFilters = value; }

    /**
     * <p>The filters to use to send an announcement to a specified list of rooms. The
     * supported filter keys are RoomName, ProfileName, RoomArn, and ProfileArn. To
     * send to all rooms, specify an empty RoomFilters list.</p>
     */
    inline void SetRoomFilters(Aws::Vector<Filter>&& value) { m_roomFiltersHasBeenSet = true; m_roomFilters = std::move(value); }

    /**
     * <p>The filters to use to send an announcement to a specified list of rooms. The
     * supported filter keys are RoomName, ProfileName, RoomArn, and ProfileArn. To
     * send to all rooms, specify an empty RoomFilters list.</p>
     */
    inline SendAnnouncementRequest& WithRoomFilters(const Aws::Vector<Filter>& value) { SetRoomFilters(value); return *this;}

    /**
     * <p>The filters to use to send an announcement to a specified list of rooms. The
     * supported filter keys are RoomName, ProfileName, RoomArn, and ProfileArn. To
     * send to all rooms, specify an empty RoomFilters list.</p>
     */
    inline SendAnnouncementRequest& WithRoomFilters(Aws::Vector<Filter>&& value) { SetRoomFilters(std::move(value)); return *this;}

    /**
     * <p>The filters to use to send an announcement to a specified list of rooms. The
     * supported filter keys are RoomName, ProfileName, RoomArn, and ProfileArn. To
     * send to all rooms, specify an empty RoomFilters list.</p>
     */
    inline SendAnnouncementRequest& AddRoomFilters(const Filter& value) { m_roomFiltersHasBeenSet = true; m_roomFilters.push_back(value); return *this; }

    /**
     * <p>The filters to use to send an announcement to a specified list of rooms. The
     * supported filter keys are RoomName, ProfileName, RoomArn, and ProfileArn. To
     * send to all rooms, specify an empty RoomFilters list.</p>
     */
    inline SendAnnouncementRequest& AddRoomFilters(Filter&& value) { m_roomFiltersHasBeenSet = true; m_roomFilters.push_back(std::move(value)); return *this; }


    /**
     * <p>The announcement content. This can contain only one of the three possible
     * announcement types (text, SSML or audio).</p>
     */
    inline const Content& GetContent() const{ return m_content; }

    /**
     * <p>The announcement content. This can contain only one of the three possible
     * announcement types (text, SSML or audio).</p>
     */
    inline bool ContentHasBeenSet() const { return m_contentHasBeenSet; }

    /**
     * <p>The announcement content. This can contain only one of the three possible
     * announcement types (text, SSML or audio).</p>
     */
    inline void SetContent(const Content& value) { m_contentHasBeenSet = true; m_content = value; }

    /**
     * <p>The announcement content. This can contain only one of the three possible
     * announcement types (text, SSML or audio).</p>
     */
    inline void SetContent(Content&& value) { m_contentHasBeenSet = true; m_content = std::move(value); }

    /**
     * <p>The announcement content. This can contain only one of the three possible
     * announcement types (text, SSML or audio).</p>
     */
    inline SendAnnouncementRequest& WithContent(const Content& value) { SetContent(value); return *this;}

    /**
     * <p>The announcement content. This can contain only one of the three possible
     * announcement types (text, SSML or audio).</p>
     */
    inline SendAnnouncementRequest& WithContent(Content&& value) { SetContent(std::move(value)); return *this;}


    /**
     * <p>The time to live for an announcement. Default is 300. If delivery doesn't
     * occur within this time, the announcement is not delivered.</p>
     */
    inline int GetTimeToLiveInSeconds() const{ return m_timeToLiveInSeconds; }

    /**
     * <p>The time to live for an announcement. Default is 300. If delivery doesn't
     * occur within this time, the announcement is not delivered.</p>
     */
    inline bool TimeToLiveInSecondsHasBeenSet() const { return m_timeToLiveInSecondsHasBeenSet; }

    /**
     * <p>The time to live for an announcement. Default is 300. If delivery doesn't
     * occur within this time, the announcement is not delivered.</p>
     */
    inline void SetTimeToLiveInSeconds(int value) { m_timeToLiveInSecondsHasBeenSet = true; m_timeToLiveInSeconds = value; }

    /**
     * <p>The time to live for an announcement. Default is 300. If delivery doesn't
     * occur within this time, the announcement is not delivered.</p>
     */
    inline SendAnnouncementRequest& WithTimeToLiveInSeconds(int value) { SetTimeToLiveInSeconds(value); return *this;}


    /**
     * <p>The unique, user-specified identifier for the request that ensures
     * idempotency.</p>
     */
    inline const Aws::String& GetClientRequestToken() const{ return m_clientRequestToken; }

    /**
     * <p>The unique, user-specified identifier for the request that ensures
     * idempotency.</p>
     */
    inline bool ClientRequestTokenHasBeenSet() const { return m_clientRequestTokenHasBeenSet; }

    /**
     * <p>The unique, user-specified identifier for the request that ensures
     * idempotency.</p>
     */
    inline void SetClientRequestToken(const Aws::String& value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken = value; }

    /**
     * <p>The unique, user-specified identifier for the request that ensures
     * idempotency.</p>
     */
    inline void SetClientRequestToken(Aws::String&& value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken = std::move(value); }

    /**
     * <p>The unique, user-specified identifier for the request that ensures
     * idempotency.</p>
     */
    inline void SetClientRequestToken(const char* value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken.assign(value); }

    /**
     * <p>The unique, user-specified identifier for the request that ensures
     * idempotency.</p>
     */
    inline SendAnnouncementRequest& WithClientRequestToken(const Aws::String& value) { SetClientRequestToken(value); return *this;}

    /**
     * <p>The unique, user-specified identifier for the request that ensures
     * idempotency.</p>
     */
    inline SendAnnouncementRequest& WithClientRequestToken(Aws::String&& value) { SetClientRequestToken(std::move(value)); return *this;}

    /**
     * <p>The unique, user-specified identifier for the request that ensures
     * idempotency.</p>
     */
    inline SendAnnouncementRequest& WithClientRequestToken(const char* value) { SetClientRequestToken(value); return *this;}

  private:

    Aws::Vector<Filter> m_roomFilters;
    bool m_roomFiltersHasBeenSet;

    Content m_content;
    bool m_contentHasBeenSet;

    int m_timeToLiveInSeconds;
    bool m_timeToLiveInSecondsHasBeenSet;

    Aws::String m_clientRequestToken;
    bool m_clientRequestTokenHasBeenSet;
  };

} // namespace Model
} // namespace AlexaForBusiness
} // namespace Aws
