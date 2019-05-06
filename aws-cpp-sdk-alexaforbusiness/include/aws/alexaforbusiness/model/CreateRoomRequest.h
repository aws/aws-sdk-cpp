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
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/alexaforbusiness/model/Tag.h>
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
  class AWS_ALEXAFORBUSINESS_API CreateRoomRequest : public AlexaForBusinessRequest
  {
  public:
    CreateRoomRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateRoom"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The name for the room.</p>
     */
    inline const Aws::String& GetRoomName() const{ return m_roomName; }

    /**
     * <p>The name for the room.</p>
     */
    inline bool RoomNameHasBeenSet() const { return m_roomNameHasBeenSet; }

    /**
     * <p>The name for the room.</p>
     */
    inline void SetRoomName(const Aws::String& value) { m_roomNameHasBeenSet = true; m_roomName = value; }

    /**
     * <p>The name for the room.</p>
     */
    inline void SetRoomName(Aws::String&& value) { m_roomNameHasBeenSet = true; m_roomName = std::move(value); }

    /**
     * <p>The name for the room.</p>
     */
    inline void SetRoomName(const char* value) { m_roomNameHasBeenSet = true; m_roomName.assign(value); }

    /**
     * <p>The name for the room.</p>
     */
    inline CreateRoomRequest& WithRoomName(const Aws::String& value) { SetRoomName(value); return *this;}

    /**
     * <p>The name for the room.</p>
     */
    inline CreateRoomRequest& WithRoomName(Aws::String&& value) { SetRoomName(std::move(value)); return *this;}

    /**
     * <p>The name for the room.</p>
     */
    inline CreateRoomRequest& WithRoomName(const char* value) { SetRoomName(value); return *this;}


    /**
     * <p>The description for the room.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>The description for the room.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>The description for the room.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>The description for the room.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>The description for the room.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>The description for the room.</p>
     */
    inline CreateRoomRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The description for the room.</p>
     */
    inline CreateRoomRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>The description for the room.</p>
     */
    inline CreateRoomRequest& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The profile ARN for the room.</p>
     */
    inline const Aws::String& GetProfileArn() const{ return m_profileArn; }

    /**
     * <p>The profile ARN for the room.</p>
     */
    inline bool ProfileArnHasBeenSet() const { return m_profileArnHasBeenSet; }

    /**
     * <p>The profile ARN for the room.</p>
     */
    inline void SetProfileArn(const Aws::String& value) { m_profileArnHasBeenSet = true; m_profileArn = value; }

    /**
     * <p>The profile ARN for the room.</p>
     */
    inline void SetProfileArn(Aws::String&& value) { m_profileArnHasBeenSet = true; m_profileArn = std::move(value); }

    /**
     * <p>The profile ARN for the room.</p>
     */
    inline void SetProfileArn(const char* value) { m_profileArnHasBeenSet = true; m_profileArn.assign(value); }

    /**
     * <p>The profile ARN for the room.</p>
     */
    inline CreateRoomRequest& WithProfileArn(const Aws::String& value) { SetProfileArn(value); return *this;}

    /**
     * <p>The profile ARN for the room.</p>
     */
    inline CreateRoomRequest& WithProfileArn(Aws::String&& value) { SetProfileArn(std::move(value)); return *this;}

    /**
     * <p>The profile ARN for the room.</p>
     */
    inline CreateRoomRequest& WithProfileArn(const char* value) { SetProfileArn(value); return *this;}


    /**
     * <p>The calendar ARN for the room.</p>
     */
    inline const Aws::String& GetProviderCalendarId() const{ return m_providerCalendarId; }

    /**
     * <p>The calendar ARN for the room.</p>
     */
    inline bool ProviderCalendarIdHasBeenSet() const { return m_providerCalendarIdHasBeenSet; }

    /**
     * <p>The calendar ARN for the room.</p>
     */
    inline void SetProviderCalendarId(const Aws::String& value) { m_providerCalendarIdHasBeenSet = true; m_providerCalendarId = value; }

    /**
     * <p>The calendar ARN for the room.</p>
     */
    inline void SetProviderCalendarId(Aws::String&& value) { m_providerCalendarIdHasBeenSet = true; m_providerCalendarId = std::move(value); }

    /**
     * <p>The calendar ARN for the room.</p>
     */
    inline void SetProviderCalendarId(const char* value) { m_providerCalendarIdHasBeenSet = true; m_providerCalendarId.assign(value); }

    /**
     * <p>The calendar ARN for the room.</p>
     */
    inline CreateRoomRequest& WithProviderCalendarId(const Aws::String& value) { SetProviderCalendarId(value); return *this;}

    /**
     * <p>The calendar ARN for the room.</p>
     */
    inline CreateRoomRequest& WithProviderCalendarId(Aws::String&& value) { SetProviderCalendarId(std::move(value)); return *this;}

    /**
     * <p>The calendar ARN for the room.</p>
     */
    inline CreateRoomRequest& WithProviderCalendarId(const char* value) { SetProviderCalendarId(value); return *this;}


    /**
     * <p>A unique, user-specified identifier for this request that ensures
     * idempotency. </p>
     */
    inline const Aws::String& GetClientRequestToken() const{ return m_clientRequestToken; }

    /**
     * <p>A unique, user-specified identifier for this request that ensures
     * idempotency. </p>
     */
    inline bool ClientRequestTokenHasBeenSet() const { return m_clientRequestTokenHasBeenSet; }

    /**
     * <p>A unique, user-specified identifier for this request that ensures
     * idempotency. </p>
     */
    inline void SetClientRequestToken(const Aws::String& value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken = value; }

    /**
     * <p>A unique, user-specified identifier for this request that ensures
     * idempotency. </p>
     */
    inline void SetClientRequestToken(Aws::String&& value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken = std::move(value); }

    /**
     * <p>A unique, user-specified identifier for this request that ensures
     * idempotency. </p>
     */
    inline void SetClientRequestToken(const char* value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken.assign(value); }

    /**
     * <p>A unique, user-specified identifier for this request that ensures
     * idempotency. </p>
     */
    inline CreateRoomRequest& WithClientRequestToken(const Aws::String& value) { SetClientRequestToken(value); return *this;}

    /**
     * <p>A unique, user-specified identifier for this request that ensures
     * idempotency. </p>
     */
    inline CreateRoomRequest& WithClientRequestToken(Aws::String&& value) { SetClientRequestToken(std::move(value)); return *this;}

    /**
     * <p>A unique, user-specified identifier for this request that ensures
     * idempotency. </p>
     */
    inline CreateRoomRequest& WithClientRequestToken(const char* value) { SetClientRequestToken(value); return *this;}


    /**
     * <p>The tags for the room.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /**
     * <p>The tags for the room.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>The tags for the room.</p>
     */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>The tags for the room.</p>
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>The tags for the room.</p>
     */
    inline CreateRoomRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>The tags for the room.</p>
     */
    inline CreateRoomRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>The tags for the room.</p>
     */
    inline CreateRoomRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>The tags for the room.</p>
     */
    inline CreateRoomRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_roomName;
    bool m_roomNameHasBeenSet;

    Aws::String m_description;
    bool m_descriptionHasBeenSet;

    Aws::String m_profileArn;
    bool m_profileArnHasBeenSet;

    Aws::String m_providerCalendarId;
    bool m_providerCalendarIdHasBeenSet;

    Aws::String m_clientRequestToken;
    bool m_clientRequestTokenHasBeenSet;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet;
  };

} // namespace Model
} // namespace AlexaForBusiness
} // namespace Aws
