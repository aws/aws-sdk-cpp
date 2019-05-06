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
#include <utility>

namespace Aws
{
namespace AlexaForBusiness
{
namespace Model
{

  /**
   */
  class AWS_ALEXAFORBUSINESS_API UpdateRoomRequest : public AlexaForBusinessRequest
  {
  public:
    UpdateRoomRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateRoom"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The ARN of the room to update. </p>
     */
    inline const Aws::String& GetRoomArn() const{ return m_roomArn; }

    /**
     * <p>The ARN of the room to update. </p>
     */
    inline bool RoomArnHasBeenSet() const { return m_roomArnHasBeenSet; }

    /**
     * <p>The ARN of the room to update. </p>
     */
    inline void SetRoomArn(const Aws::String& value) { m_roomArnHasBeenSet = true; m_roomArn = value; }

    /**
     * <p>The ARN of the room to update. </p>
     */
    inline void SetRoomArn(Aws::String&& value) { m_roomArnHasBeenSet = true; m_roomArn = std::move(value); }

    /**
     * <p>The ARN of the room to update. </p>
     */
    inline void SetRoomArn(const char* value) { m_roomArnHasBeenSet = true; m_roomArn.assign(value); }

    /**
     * <p>The ARN of the room to update. </p>
     */
    inline UpdateRoomRequest& WithRoomArn(const Aws::String& value) { SetRoomArn(value); return *this;}

    /**
     * <p>The ARN of the room to update. </p>
     */
    inline UpdateRoomRequest& WithRoomArn(Aws::String&& value) { SetRoomArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the room to update. </p>
     */
    inline UpdateRoomRequest& WithRoomArn(const char* value) { SetRoomArn(value); return *this;}


    /**
     * <p>The updated name for the room.</p>
     */
    inline const Aws::String& GetRoomName() const{ return m_roomName; }

    /**
     * <p>The updated name for the room.</p>
     */
    inline bool RoomNameHasBeenSet() const { return m_roomNameHasBeenSet; }

    /**
     * <p>The updated name for the room.</p>
     */
    inline void SetRoomName(const Aws::String& value) { m_roomNameHasBeenSet = true; m_roomName = value; }

    /**
     * <p>The updated name for the room.</p>
     */
    inline void SetRoomName(Aws::String&& value) { m_roomNameHasBeenSet = true; m_roomName = std::move(value); }

    /**
     * <p>The updated name for the room.</p>
     */
    inline void SetRoomName(const char* value) { m_roomNameHasBeenSet = true; m_roomName.assign(value); }

    /**
     * <p>The updated name for the room.</p>
     */
    inline UpdateRoomRequest& WithRoomName(const Aws::String& value) { SetRoomName(value); return *this;}

    /**
     * <p>The updated name for the room.</p>
     */
    inline UpdateRoomRequest& WithRoomName(Aws::String&& value) { SetRoomName(std::move(value)); return *this;}

    /**
     * <p>The updated name for the room.</p>
     */
    inline UpdateRoomRequest& WithRoomName(const char* value) { SetRoomName(value); return *this;}


    /**
     * <p>The updated description for the room.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>The updated description for the room.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>The updated description for the room.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>The updated description for the room.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>The updated description for the room.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>The updated description for the room.</p>
     */
    inline UpdateRoomRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The updated description for the room.</p>
     */
    inline UpdateRoomRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>The updated description for the room.</p>
     */
    inline UpdateRoomRequest& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The updated provider calendar ARN for the room.</p>
     */
    inline const Aws::String& GetProviderCalendarId() const{ return m_providerCalendarId; }

    /**
     * <p>The updated provider calendar ARN for the room.</p>
     */
    inline bool ProviderCalendarIdHasBeenSet() const { return m_providerCalendarIdHasBeenSet; }

    /**
     * <p>The updated provider calendar ARN for the room.</p>
     */
    inline void SetProviderCalendarId(const Aws::String& value) { m_providerCalendarIdHasBeenSet = true; m_providerCalendarId = value; }

    /**
     * <p>The updated provider calendar ARN for the room.</p>
     */
    inline void SetProviderCalendarId(Aws::String&& value) { m_providerCalendarIdHasBeenSet = true; m_providerCalendarId = std::move(value); }

    /**
     * <p>The updated provider calendar ARN for the room.</p>
     */
    inline void SetProviderCalendarId(const char* value) { m_providerCalendarIdHasBeenSet = true; m_providerCalendarId.assign(value); }

    /**
     * <p>The updated provider calendar ARN for the room.</p>
     */
    inline UpdateRoomRequest& WithProviderCalendarId(const Aws::String& value) { SetProviderCalendarId(value); return *this;}

    /**
     * <p>The updated provider calendar ARN for the room.</p>
     */
    inline UpdateRoomRequest& WithProviderCalendarId(Aws::String&& value) { SetProviderCalendarId(std::move(value)); return *this;}

    /**
     * <p>The updated provider calendar ARN for the room.</p>
     */
    inline UpdateRoomRequest& WithProviderCalendarId(const char* value) { SetProviderCalendarId(value); return *this;}


    /**
     * <p>The updated profile ARN for the room.</p>
     */
    inline const Aws::String& GetProfileArn() const{ return m_profileArn; }

    /**
     * <p>The updated profile ARN for the room.</p>
     */
    inline bool ProfileArnHasBeenSet() const { return m_profileArnHasBeenSet; }

    /**
     * <p>The updated profile ARN for the room.</p>
     */
    inline void SetProfileArn(const Aws::String& value) { m_profileArnHasBeenSet = true; m_profileArn = value; }

    /**
     * <p>The updated profile ARN for the room.</p>
     */
    inline void SetProfileArn(Aws::String&& value) { m_profileArnHasBeenSet = true; m_profileArn = std::move(value); }

    /**
     * <p>The updated profile ARN for the room.</p>
     */
    inline void SetProfileArn(const char* value) { m_profileArnHasBeenSet = true; m_profileArn.assign(value); }

    /**
     * <p>The updated profile ARN for the room.</p>
     */
    inline UpdateRoomRequest& WithProfileArn(const Aws::String& value) { SetProfileArn(value); return *this;}

    /**
     * <p>The updated profile ARN for the room.</p>
     */
    inline UpdateRoomRequest& WithProfileArn(Aws::String&& value) { SetProfileArn(std::move(value)); return *this;}

    /**
     * <p>The updated profile ARN for the room.</p>
     */
    inline UpdateRoomRequest& WithProfileArn(const char* value) { SetProfileArn(value); return *this;}

  private:

    Aws::String m_roomArn;
    bool m_roomArnHasBeenSet;

    Aws::String m_roomName;
    bool m_roomNameHasBeenSet;

    Aws::String m_description;
    bool m_descriptionHasBeenSet;

    Aws::String m_providerCalendarId;
    bool m_providerCalendarIdHasBeenSet;

    Aws::String m_profileArn;
    bool m_profileArnHasBeenSet;
  };

} // namespace Model
} // namespace AlexaForBusiness
} // namespace Aws
