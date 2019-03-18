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
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace AlexaForBusiness
{
namespace Model
{

  /**
   * <p>The data of a room.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/alexaforbusiness-2017-11-09/RoomData">AWS
   * API Reference</a></p>
   */
  class AWS_ALEXAFORBUSINESS_API RoomData
  {
  public:
    RoomData();
    RoomData(Aws::Utils::Json::JsonView jsonValue);
    RoomData& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The ARN of a room.</p>
     */
    inline const Aws::String& GetRoomArn() const{ return m_roomArn; }

    /**
     * <p>The ARN of a room.</p>
     */
    inline bool RoomArnHasBeenSet() const { return m_roomArnHasBeenSet; }

    /**
     * <p>The ARN of a room.</p>
     */
    inline void SetRoomArn(const Aws::String& value) { m_roomArnHasBeenSet = true; m_roomArn = value; }

    /**
     * <p>The ARN of a room.</p>
     */
    inline void SetRoomArn(Aws::String&& value) { m_roomArnHasBeenSet = true; m_roomArn = std::move(value); }

    /**
     * <p>The ARN of a room.</p>
     */
    inline void SetRoomArn(const char* value) { m_roomArnHasBeenSet = true; m_roomArn.assign(value); }

    /**
     * <p>The ARN of a room.</p>
     */
    inline RoomData& WithRoomArn(const Aws::String& value) { SetRoomArn(value); return *this;}

    /**
     * <p>The ARN of a room.</p>
     */
    inline RoomData& WithRoomArn(Aws::String&& value) { SetRoomArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of a room.</p>
     */
    inline RoomData& WithRoomArn(const char* value) { SetRoomArn(value); return *this;}


    /**
     * <p>The name of a room.</p>
     */
    inline const Aws::String& GetRoomName() const{ return m_roomName; }

    /**
     * <p>The name of a room.</p>
     */
    inline bool RoomNameHasBeenSet() const { return m_roomNameHasBeenSet; }

    /**
     * <p>The name of a room.</p>
     */
    inline void SetRoomName(const Aws::String& value) { m_roomNameHasBeenSet = true; m_roomName = value; }

    /**
     * <p>The name of a room.</p>
     */
    inline void SetRoomName(Aws::String&& value) { m_roomNameHasBeenSet = true; m_roomName = std::move(value); }

    /**
     * <p>The name of a room.</p>
     */
    inline void SetRoomName(const char* value) { m_roomNameHasBeenSet = true; m_roomName.assign(value); }

    /**
     * <p>The name of a room.</p>
     */
    inline RoomData& WithRoomName(const Aws::String& value) { SetRoomName(value); return *this;}

    /**
     * <p>The name of a room.</p>
     */
    inline RoomData& WithRoomName(Aws::String&& value) { SetRoomName(std::move(value)); return *this;}

    /**
     * <p>The name of a room.</p>
     */
    inline RoomData& WithRoomName(const char* value) { SetRoomName(value); return *this;}


    /**
     * <p>The description of a room.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>The description of a room.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>The description of a room.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>The description of a room.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>The description of a room.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>The description of a room.</p>
     */
    inline RoomData& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The description of a room.</p>
     */
    inline RoomData& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>The description of a room.</p>
     */
    inline RoomData& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The provider calendar ARN of a room.</p>
     */
    inline const Aws::String& GetProviderCalendarId() const{ return m_providerCalendarId; }

    /**
     * <p>The provider calendar ARN of a room.</p>
     */
    inline bool ProviderCalendarIdHasBeenSet() const { return m_providerCalendarIdHasBeenSet; }

    /**
     * <p>The provider calendar ARN of a room.</p>
     */
    inline void SetProviderCalendarId(const Aws::String& value) { m_providerCalendarIdHasBeenSet = true; m_providerCalendarId = value; }

    /**
     * <p>The provider calendar ARN of a room.</p>
     */
    inline void SetProviderCalendarId(Aws::String&& value) { m_providerCalendarIdHasBeenSet = true; m_providerCalendarId = std::move(value); }

    /**
     * <p>The provider calendar ARN of a room.</p>
     */
    inline void SetProviderCalendarId(const char* value) { m_providerCalendarIdHasBeenSet = true; m_providerCalendarId.assign(value); }

    /**
     * <p>The provider calendar ARN of a room.</p>
     */
    inline RoomData& WithProviderCalendarId(const Aws::String& value) { SetProviderCalendarId(value); return *this;}

    /**
     * <p>The provider calendar ARN of a room.</p>
     */
    inline RoomData& WithProviderCalendarId(Aws::String&& value) { SetProviderCalendarId(std::move(value)); return *this;}

    /**
     * <p>The provider calendar ARN of a room.</p>
     */
    inline RoomData& WithProviderCalendarId(const char* value) { SetProviderCalendarId(value); return *this;}


    /**
     * <p>The profile ARN of a room.</p>
     */
    inline const Aws::String& GetProfileArn() const{ return m_profileArn; }

    /**
     * <p>The profile ARN of a room.</p>
     */
    inline bool ProfileArnHasBeenSet() const { return m_profileArnHasBeenSet; }

    /**
     * <p>The profile ARN of a room.</p>
     */
    inline void SetProfileArn(const Aws::String& value) { m_profileArnHasBeenSet = true; m_profileArn = value; }

    /**
     * <p>The profile ARN of a room.</p>
     */
    inline void SetProfileArn(Aws::String&& value) { m_profileArnHasBeenSet = true; m_profileArn = std::move(value); }

    /**
     * <p>The profile ARN of a room.</p>
     */
    inline void SetProfileArn(const char* value) { m_profileArnHasBeenSet = true; m_profileArn.assign(value); }

    /**
     * <p>The profile ARN of a room.</p>
     */
    inline RoomData& WithProfileArn(const Aws::String& value) { SetProfileArn(value); return *this;}

    /**
     * <p>The profile ARN of a room.</p>
     */
    inline RoomData& WithProfileArn(Aws::String&& value) { SetProfileArn(std::move(value)); return *this;}

    /**
     * <p>The profile ARN of a room.</p>
     */
    inline RoomData& WithProfileArn(const char* value) { SetProfileArn(value); return *this;}


    /**
     * <p>The profile name of a room.</p>
     */
    inline const Aws::String& GetProfileName() const{ return m_profileName; }

    /**
     * <p>The profile name of a room.</p>
     */
    inline bool ProfileNameHasBeenSet() const { return m_profileNameHasBeenSet; }

    /**
     * <p>The profile name of a room.</p>
     */
    inline void SetProfileName(const Aws::String& value) { m_profileNameHasBeenSet = true; m_profileName = value; }

    /**
     * <p>The profile name of a room.</p>
     */
    inline void SetProfileName(Aws::String&& value) { m_profileNameHasBeenSet = true; m_profileName = std::move(value); }

    /**
     * <p>The profile name of a room.</p>
     */
    inline void SetProfileName(const char* value) { m_profileNameHasBeenSet = true; m_profileName.assign(value); }

    /**
     * <p>The profile name of a room.</p>
     */
    inline RoomData& WithProfileName(const Aws::String& value) { SetProfileName(value); return *this;}

    /**
     * <p>The profile name of a room.</p>
     */
    inline RoomData& WithProfileName(Aws::String&& value) { SetProfileName(std::move(value)); return *this;}

    /**
     * <p>The profile name of a room.</p>
     */
    inline RoomData& WithProfileName(const char* value) { SetProfileName(value); return *this;}

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

    Aws::String m_profileName;
    bool m_profileNameHasBeenSet;
  };

} // namespace Model
} // namespace AlexaForBusiness
} // namespace Aws
