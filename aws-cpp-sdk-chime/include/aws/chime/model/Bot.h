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
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/chime/model/BotType.h>
#include <aws/core/utils/DateTime.h>
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
namespace Chime
{
namespace Model
{

  /**
   * <p>A resource that allows Enterprise account administrators to configure an
   * interface to receive events from Amazon Chime.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/Bot">AWS API
   * Reference</a></p>
   */
  class AWS_CHIME_API Bot
  {
  public:
    Bot();
    Bot(Aws::Utils::Json::JsonView jsonValue);
    Bot& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The bot ID.</p>
     */
    inline const Aws::String& GetBotId() const{ return m_botId; }

    /**
     * <p>The bot ID.</p>
     */
    inline bool BotIdHasBeenSet() const { return m_botIdHasBeenSet; }

    /**
     * <p>The bot ID.</p>
     */
    inline void SetBotId(const Aws::String& value) { m_botIdHasBeenSet = true; m_botId = value; }

    /**
     * <p>The bot ID.</p>
     */
    inline void SetBotId(Aws::String&& value) { m_botIdHasBeenSet = true; m_botId = std::move(value); }

    /**
     * <p>The bot ID.</p>
     */
    inline void SetBotId(const char* value) { m_botIdHasBeenSet = true; m_botId.assign(value); }

    /**
     * <p>The bot ID.</p>
     */
    inline Bot& WithBotId(const Aws::String& value) { SetBotId(value); return *this;}

    /**
     * <p>The bot ID.</p>
     */
    inline Bot& WithBotId(Aws::String&& value) { SetBotId(std::move(value)); return *this;}

    /**
     * <p>The bot ID.</p>
     */
    inline Bot& WithBotId(const char* value) { SetBotId(value); return *this;}


    /**
     * <p>The unique ID for the bot user.</p>
     */
    inline const Aws::String& GetUserId() const{ return m_userId; }

    /**
     * <p>The unique ID for the bot user.</p>
     */
    inline bool UserIdHasBeenSet() const { return m_userIdHasBeenSet; }

    /**
     * <p>The unique ID for the bot user.</p>
     */
    inline void SetUserId(const Aws::String& value) { m_userIdHasBeenSet = true; m_userId = value; }

    /**
     * <p>The unique ID for the bot user.</p>
     */
    inline void SetUserId(Aws::String&& value) { m_userIdHasBeenSet = true; m_userId = std::move(value); }

    /**
     * <p>The unique ID for the bot user.</p>
     */
    inline void SetUserId(const char* value) { m_userIdHasBeenSet = true; m_userId.assign(value); }

    /**
     * <p>The unique ID for the bot user.</p>
     */
    inline Bot& WithUserId(const Aws::String& value) { SetUserId(value); return *this;}

    /**
     * <p>The unique ID for the bot user.</p>
     */
    inline Bot& WithUserId(Aws::String&& value) { SetUserId(std::move(value)); return *this;}

    /**
     * <p>The unique ID for the bot user.</p>
     */
    inline Bot& WithUserId(const char* value) { SetUserId(value); return *this;}


    /**
     * <p>The bot display name.</p>
     */
    inline const Aws::String& GetDisplayName() const{ return m_displayName; }

    /**
     * <p>The bot display name.</p>
     */
    inline bool DisplayNameHasBeenSet() const { return m_displayNameHasBeenSet; }

    /**
     * <p>The bot display name.</p>
     */
    inline void SetDisplayName(const Aws::String& value) { m_displayNameHasBeenSet = true; m_displayName = value; }

    /**
     * <p>The bot display name.</p>
     */
    inline void SetDisplayName(Aws::String&& value) { m_displayNameHasBeenSet = true; m_displayName = std::move(value); }

    /**
     * <p>The bot display name.</p>
     */
    inline void SetDisplayName(const char* value) { m_displayNameHasBeenSet = true; m_displayName.assign(value); }

    /**
     * <p>The bot display name.</p>
     */
    inline Bot& WithDisplayName(const Aws::String& value) { SetDisplayName(value); return *this;}

    /**
     * <p>The bot display name.</p>
     */
    inline Bot& WithDisplayName(Aws::String&& value) { SetDisplayName(std::move(value)); return *this;}

    /**
     * <p>The bot display name.</p>
     */
    inline Bot& WithDisplayName(const char* value) { SetDisplayName(value); return *this;}


    /**
     * <p>The bot type.</p>
     */
    inline const BotType& GetBotType() const{ return m_botType; }

    /**
     * <p>The bot type.</p>
     */
    inline bool BotTypeHasBeenSet() const { return m_botTypeHasBeenSet; }

    /**
     * <p>The bot type.</p>
     */
    inline void SetBotType(const BotType& value) { m_botTypeHasBeenSet = true; m_botType = value; }

    /**
     * <p>The bot type.</p>
     */
    inline void SetBotType(BotType&& value) { m_botTypeHasBeenSet = true; m_botType = std::move(value); }

    /**
     * <p>The bot type.</p>
     */
    inline Bot& WithBotType(const BotType& value) { SetBotType(value); return *this;}

    /**
     * <p>The bot type.</p>
     */
    inline Bot& WithBotType(BotType&& value) { SetBotType(std::move(value)); return *this;}


    /**
     * <p>When true, the bot is stopped from running in your account.</p>
     */
    inline bool GetDisabled() const{ return m_disabled; }

    /**
     * <p>When true, the bot is stopped from running in your account.</p>
     */
    inline bool DisabledHasBeenSet() const { return m_disabledHasBeenSet; }

    /**
     * <p>When true, the bot is stopped from running in your account.</p>
     */
    inline void SetDisabled(bool value) { m_disabledHasBeenSet = true; m_disabled = value; }

    /**
     * <p>When true, the bot is stopped from running in your account.</p>
     */
    inline Bot& WithDisabled(bool value) { SetDisabled(value); return *this;}


    /**
     * <p>The bot creation timestamp, in ISO 8601 format.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedTimestamp() const{ return m_createdTimestamp; }

    /**
     * <p>The bot creation timestamp, in ISO 8601 format.</p>
     */
    inline bool CreatedTimestampHasBeenSet() const { return m_createdTimestampHasBeenSet; }

    /**
     * <p>The bot creation timestamp, in ISO 8601 format.</p>
     */
    inline void SetCreatedTimestamp(const Aws::Utils::DateTime& value) { m_createdTimestampHasBeenSet = true; m_createdTimestamp = value; }

    /**
     * <p>The bot creation timestamp, in ISO 8601 format.</p>
     */
    inline void SetCreatedTimestamp(Aws::Utils::DateTime&& value) { m_createdTimestampHasBeenSet = true; m_createdTimestamp = std::move(value); }

    /**
     * <p>The bot creation timestamp, in ISO 8601 format.</p>
     */
    inline Bot& WithCreatedTimestamp(const Aws::Utils::DateTime& value) { SetCreatedTimestamp(value); return *this;}

    /**
     * <p>The bot creation timestamp, in ISO 8601 format.</p>
     */
    inline Bot& WithCreatedTimestamp(Aws::Utils::DateTime&& value) { SetCreatedTimestamp(std::move(value)); return *this;}


    /**
     * <p>The updated bot timestamp, in ISO 8601 format.</p>
     */
    inline const Aws::Utils::DateTime& GetUpdatedTimestamp() const{ return m_updatedTimestamp; }

    /**
     * <p>The updated bot timestamp, in ISO 8601 format.</p>
     */
    inline bool UpdatedTimestampHasBeenSet() const { return m_updatedTimestampHasBeenSet; }

    /**
     * <p>The updated bot timestamp, in ISO 8601 format.</p>
     */
    inline void SetUpdatedTimestamp(const Aws::Utils::DateTime& value) { m_updatedTimestampHasBeenSet = true; m_updatedTimestamp = value; }

    /**
     * <p>The updated bot timestamp, in ISO 8601 format.</p>
     */
    inline void SetUpdatedTimestamp(Aws::Utils::DateTime&& value) { m_updatedTimestampHasBeenSet = true; m_updatedTimestamp = std::move(value); }

    /**
     * <p>The updated bot timestamp, in ISO 8601 format.</p>
     */
    inline Bot& WithUpdatedTimestamp(const Aws::Utils::DateTime& value) { SetUpdatedTimestamp(value); return *this;}

    /**
     * <p>The updated bot timestamp, in ISO 8601 format.</p>
     */
    inline Bot& WithUpdatedTimestamp(Aws::Utils::DateTime&& value) { SetUpdatedTimestamp(std::move(value)); return *this;}


    /**
     * <p>The bot email address.</p>
     */
    inline const Aws::String& GetBotEmail() const{ return m_botEmail; }

    /**
     * <p>The bot email address.</p>
     */
    inline bool BotEmailHasBeenSet() const { return m_botEmailHasBeenSet; }

    /**
     * <p>The bot email address.</p>
     */
    inline void SetBotEmail(const Aws::String& value) { m_botEmailHasBeenSet = true; m_botEmail = value; }

    /**
     * <p>The bot email address.</p>
     */
    inline void SetBotEmail(Aws::String&& value) { m_botEmailHasBeenSet = true; m_botEmail = std::move(value); }

    /**
     * <p>The bot email address.</p>
     */
    inline void SetBotEmail(const char* value) { m_botEmailHasBeenSet = true; m_botEmail.assign(value); }

    /**
     * <p>The bot email address.</p>
     */
    inline Bot& WithBotEmail(const Aws::String& value) { SetBotEmail(value); return *this;}

    /**
     * <p>The bot email address.</p>
     */
    inline Bot& WithBotEmail(Aws::String&& value) { SetBotEmail(std::move(value)); return *this;}

    /**
     * <p>The bot email address.</p>
     */
    inline Bot& WithBotEmail(const char* value) { SetBotEmail(value); return *this;}


    /**
     * <p>The security token used to authenticate Amazon Chime with the outgoing event
     * endpoint.</p>
     */
    inline const Aws::String& GetSecurityToken() const{ return m_securityToken; }

    /**
     * <p>The security token used to authenticate Amazon Chime with the outgoing event
     * endpoint.</p>
     */
    inline bool SecurityTokenHasBeenSet() const { return m_securityTokenHasBeenSet; }

    /**
     * <p>The security token used to authenticate Amazon Chime with the outgoing event
     * endpoint.</p>
     */
    inline void SetSecurityToken(const Aws::String& value) { m_securityTokenHasBeenSet = true; m_securityToken = value; }

    /**
     * <p>The security token used to authenticate Amazon Chime with the outgoing event
     * endpoint.</p>
     */
    inline void SetSecurityToken(Aws::String&& value) { m_securityTokenHasBeenSet = true; m_securityToken = std::move(value); }

    /**
     * <p>The security token used to authenticate Amazon Chime with the outgoing event
     * endpoint.</p>
     */
    inline void SetSecurityToken(const char* value) { m_securityTokenHasBeenSet = true; m_securityToken.assign(value); }

    /**
     * <p>The security token used to authenticate Amazon Chime with the outgoing event
     * endpoint.</p>
     */
    inline Bot& WithSecurityToken(const Aws::String& value) { SetSecurityToken(value); return *this;}

    /**
     * <p>The security token used to authenticate Amazon Chime with the outgoing event
     * endpoint.</p>
     */
    inline Bot& WithSecurityToken(Aws::String&& value) { SetSecurityToken(std::move(value)); return *this;}

    /**
     * <p>The security token used to authenticate Amazon Chime with the outgoing event
     * endpoint.</p>
     */
    inline Bot& WithSecurityToken(const char* value) { SetSecurityToken(value); return *this;}

  private:

    Aws::String m_botId;
    bool m_botIdHasBeenSet;

    Aws::String m_userId;
    bool m_userIdHasBeenSet;

    Aws::String m_displayName;
    bool m_displayNameHasBeenSet;

    BotType m_botType;
    bool m_botTypeHasBeenSet;

    bool m_disabled;
    bool m_disabledHasBeenSet;

    Aws::Utils::DateTime m_createdTimestamp;
    bool m_createdTimestampHasBeenSet;

    Aws::Utils::DateTime m_updatedTimestamp;
    bool m_updatedTimestampHasBeenSet;

    Aws::String m_botEmail;
    bool m_botEmailHasBeenSet;

    Aws::String m_securityToken;
    bool m_securityTokenHasBeenSet;
  };

} // namespace Model
} // namespace Chime
} // namespace Aws
