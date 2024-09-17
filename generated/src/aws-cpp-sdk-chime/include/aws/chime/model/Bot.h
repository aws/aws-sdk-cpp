/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class Bot
  {
  public:
    AWS_CHIME_API Bot();
    AWS_CHIME_API Bot(Aws::Utils::Json::JsonView jsonValue);
    AWS_CHIME_API Bot& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CHIME_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The bot ID.</p>
     */
    inline const Aws::String& GetBotId() const{ return m_botId; }
    inline bool BotIdHasBeenSet() const { return m_botIdHasBeenSet; }
    inline void SetBotId(const Aws::String& value) { m_botIdHasBeenSet = true; m_botId = value; }
    inline void SetBotId(Aws::String&& value) { m_botIdHasBeenSet = true; m_botId = std::move(value); }
    inline void SetBotId(const char* value) { m_botIdHasBeenSet = true; m_botId.assign(value); }
    inline Bot& WithBotId(const Aws::String& value) { SetBotId(value); return *this;}
    inline Bot& WithBotId(Aws::String&& value) { SetBotId(std::move(value)); return *this;}
    inline Bot& WithBotId(const char* value) { SetBotId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique ID for the bot user.</p>
     */
    inline const Aws::String& GetUserId() const{ return m_userId; }
    inline bool UserIdHasBeenSet() const { return m_userIdHasBeenSet; }
    inline void SetUserId(const Aws::String& value) { m_userIdHasBeenSet = true; m_userId = value; }
    inline void SetUserId(Aws::String&& value) { m_userIdHasBeenSet = true; m_userId = std::move(value); }
    inline void SetUserId(const char* value) { m_userIdHasBeenSet = true; m_userId.assign(value); }
    inline Bot& WithUserId(const Aws::String& value) { SetUserId(value); return *this;}
    inline Bot& WithUserId(Aws::String&& value) { SetUserId(std::move(value)); return *this;}
    inline Bot& WithUserId(const char* value) { SetUserId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The bot display name.</p>
     */
    inline const Aws::String& GetDisplayName() const{ return m_displayName; }
    inline bool DisplayNameHasBeenSet() const { return m_displayNameHasBeenSet; }
    inline void SetDisplayName(const Aws::String& value) { m_displayNameHasBeenSet = true; m_displayName = value; }
    inline void SetDisplayName(Aws::String&& value) { m_displayNameHasBeenSet = true; m_displayName = std::move(value); }
    inline void SetDisplayName(const char* value) { m_displayNameHasBeenSet = true; m_displayName.assign(value); }
    inline Bot& WithDisplayName(const Aws::String& value) { SetDisplayName(value); return *this;}
    inline Bot& WithDisplayName(Aws::String&& value) { SetDisplayName(std::move(value)); return *this;}
    inline Bot& WithDisplayName(const char* value) { SetDisplayName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The bot type.</p>
     */
    inline const BotType& GetBotType() const{ return m_botType; }
    inline bool BotTypeHasBeenSet() const { return m_botTypeHasBeenSet; }
    inline void SetBotType(const BotType& value) { m_botTypeHasBeenSet = true; m_botType = value; }
    inline void SetBotType(BotType&& value) { m_botTypeHasBeenSet = true; m_botType = std::move(value); }
    inline Bot& WithBotType(const BotType& value) { SetBotType(value); return *this;}
    inline Bot& WithBotType(BotType&& value) { SetBotType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>When true, the bot is stopped from running in your account.</p>
     */
    inline bool GetDisabled() const{ return m_disabled; }
    inline bool DisabledHasBeenSet() const { return m_disabledHasBeenSet; }
    inline void SetDisabled(bool value) { m_disabledHasBeenSet = true; m_disabled = value; }
    inline Bot& WithDisabled(bool value) { SetDisabled(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The bot creation timestamp, in ISO 8601 format.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedTimestamp() const{ return m_createdTimestamp; }
    inline bool CreatedTimestampHasBeenSet() const { return m_createdTimestampHasBeenSet; }
    inline void SetCreatedTimestamp(const Aws::Utils::DateTime& value) { m_createdTimestampHasBeenSet = true; m_createdTimestamp = value; }
    inline void SetCreatedTimestamp(Aws::Utils::DateTime&& value) { m_createdTimestampHasBeenSet = true; m_createdTimestamp = std::move(value); }
    inline Bot& WithCreatedTimestamp(const Aws::Utils::DateTime& value) { SetCreatedTimestamp(value); return *this;}
    inline Bot& WithCreatedTimestamp(Aws::Utils::DateTime&& value) { SetCreatedTimestamp(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The updated bot timestamp, in ISO 8601 format.</p>
     */
    inline const Aws::Utils::DateTime& GetUpdatedTimestamp() const{ return m_updatedTimestamp; }
    inline bool UpdatedTimestampHasBeenSet() const { return m_updatedTimestampHasBeenSet; }
    inline void SetUpdatedTimestamp(const Aws::Utils::DateTime& value) { m_updatedTimestampHasBeenSet = true; m_updatedTimestamp = value; }
    inline void SetUpdatedTimestamp(Aws::Utils::DateTime&& value) { m_updatedTimestampHasBeenSet = true; m_updatedTimestamp = std::move(value); }
    inline Bot& WithUpdatedTimestamp(const Aws::Utils::DateTime& value) { SetUpdatedTimestamp(value); return *this;}
    inline Bot& WithUpdatedTimestamp(Aws::Utils::DateTime&& value) { SetUpdatedTimestamp(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The bot email address.</p>
     */
    inline const Aws::String& GetBotEmail() const{ return m_botEmail; }
    inline bool BotEmailHasBeenSet() const { return m_botEmailHasBeenSet; }
    inline void SetBotEmail(const Aws::String& value) { m_botEmailHasBeenSet = true; m_botEmail = value; }
    inline void SetBotEmail(Aws::String&& value) { m_botEmailHasBeenSet = true; m_botEmail = std::move(value); }
    inline void SetBotEmail(const char* value) { m_botEmailHasBeenSet = true; m_botEmail.assign(value); }
    inline Bot& WithBotEmail(const Aws::String& value) { SetBotEmail(value); return *this;}
    inline Bot& WithBotEmail(Aws::String&& value) { SetBotEmail(std::move(value)); return *this;}
    inline Bot& WithBotEmail(const char* value) { SetBotEmail(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The security token used to authenticate Amazon Chime with the outgoing event
     * endpoint.</p>
     */
    inline const Aws::String& GetSecurityToken() const{ return m_securityToken; }
    inline bool SecurityTokenHasBeenSet() const { return m_securityTokenHasBeenSet; }
    inline void SetSecurityToken(const Aws::String& value) { m_securityTokenHasBeenSet = true; m_securityToken = value; }
    inline void SetSecurityToken(Aws::String&& value) { m_securityTokenHasBeenSet = true; m_securityToken = std::move(value); }
    inline void SetSecurityToken(const char* value) { m_securityTokenHasBeenSet = true; m_securityToken.assign(value); }
    inline Bot& WithSecurityToken(const Aws::String& value) { SetSecurityToken(value); return *this;}
    inline Bot& WithSecurityToken(Aws::String&& value) { SetSecurityToken(std::move(value)); return *this;}
    inline Bot& WithSecurityToken(const char* value) { SetSecurityToken(value); return *this;}
    ///@}
  private:

    Aws::String m_botId;
    bool m_botIdHasBeenSet = false;

    Aws::String m_userId;
    bool m_userIdHasBeenSet = false;

    Aws::String m_displayName;
    bool m_displayNameHasBeenSet = false;

    BotType m_botType;
    bool m_botTypeHasBeenSet = false;

    bool m_disabled;
    bool m_disabledHasBeenSet = false;

    Aws::Utils::DateTime m_createdTimestamp;
    bool m_createdTimestampHasBeenSet = false;

    Aws::Utils::DateTime m_updatedTimestamp;
    bool m_updatedTimestampHasBeenSet = false;

    Aws::String m_botEmail;
    bool m_botEmailHasBeenSet = false;

    Aws::String m_securityToken;
    bool m_securityTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace Chime
} // namespace Aws
