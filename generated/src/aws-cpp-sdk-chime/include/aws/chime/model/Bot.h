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
    AWS_CHIME_API Bot() = default;
    AWS_CHIME_API Bot(Aws::Utils::Json::JsonView jsonValue);
    AWS_CHIME_API Bot& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CHIME_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The bot ID.</p>
     */
    inline const Aws::String& GetBotId() const { return m_botId; }
    inline bool BotIdHasBeenSet() const { return m_botIdHasBeenSet; }
    template<typename BotIdT = Aws::String>
    void SetBotId(BotIdT&& value) { m_botIdHasBeenSet = true; m_botId = std::forward<BotIdT>(value); }
    template<typename BotIdT = Aws::String>
    Bot& WithBotId(BotIdT&& value) { SetBotId(std::forward<BotIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique ID for the bot user.</p>
     */
    inline const Aws::String& GetUserId() const { return m_userId; }
    inline bool UserIdHasBeenSet() const { return m_userIdHasBeenSet; }
    template<typename UserIdT = Aws::String>
    void SetUserId(UserIdT&& value) { m_userIdHasBeenSet = true; m_userId = std::forward<UserIdT>(value); }
    template<typename UserIdT = Aws::String>
    Bot& WithUserId(UserIdT&& value) { SetUserId(std::forward<UserIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The bot display name.</p>
     */
    inline const Aws::String& GetDisplayName() const { return m_displayName; }
    inline bool DisplayNameHasBeenSet() const { return m_displayNameHasBeenSet; }
    template<typename DisplayNameT = Aws::String>
    void SetDisplayName(DisplayNameT&& value) { m_displayNameHasBeenSet = true; m_displayName = std::forward<DisplayNameT>(value); }
    template<typename DisplayNameT = Aws::String>
    Bot& WithDisplayName(DisplayNameT&& value) { SetDisplayName(std::forward<DisplayNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The bot type.</p>
     */
    inline BotType GetBotType() const { return m_botType; }
    inline bool BotTypeHasBeenSet() const { return m_botTypeHasBeenSet; }
    inline void SetBotType(BotType value) { m_botTypeHasBeenSet = true; m_botType = value; }
    inline Bot& WithBotType(BotType value) { SetBotType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>When true, the bot is stopped from running in your account.</p>
     */
    inline bool GetDisabled() const { return m_disabled; }
    inline bool DisabledHasBeenSet() const { return m_disabledHasBeenSet; }
    inline void SetDisabled(bool value) { m_disabledHasBeenSet = true; m_disabled = value; }
    inline Bot& WithDisabled(bool value) { SetDisabled(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The bot creation timestamp, in ISO 8601 format.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedTimestamp() const { return m_createdTimestamp; }
    inline bool CreatedTimestampHasBeenSet() const { return m_createdTimestampHasBeenSet; }
    template<typename CreatedTimestampT = Aws::Utils::DateTime>
    void SetCreatedTimestamp(CreatedTimestampT&& value) { m_createdTimestampHasBeenSet = true; m_createdTimestamp = std::forward<CreatedTimestampT>(value); }
    template<typename CreatedTimestampT = Aws::Utils::DateTime>
    Bot& WithCreatedTimestamp(CreatedTimestampT&& value) { SetCreatedTimestamp(std::forward<CreatedTimestampT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The updated bot timestamp, in ISO 8601 format.</p>
     */
    inline const Aws::Utils::DateTime& GetUpdatedTimestamp() const { return m_updatedTimestamp; }
    inline bool UpdatedTimestampHasBeenSet() const { return m_updatedTimestampHasBeenSet; }
    template<typename UpdatedTimestampT = Aws::Utils::DateTime>
    void SetUpdatedTimestamp(UpdatedTimestampT&& value) { m_updatedTimestampHasBeenSet = true; m_updatedTimestamp = std::forward<UpdatedTimestampT>(value); }
    template<typename UpdatedTimestampT = Aws::Utils::DateTime>
    Bot& WithUpdatedTimestamp(UpdatedTimestampT&& value) { SetUpdatedTimestamp(std::forward<UpdatedTimestampT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The bot email address.</p>
     */
    inline const Aws::String& GetBotEmail() const { return m_botEmail; }
    inline bool BotEmailHasBeenSet() const { return m_botEmailHasBeenSet; }
    template<typename BotEmailT = Aws::String>
    void SetBotEmail(BotEmailT&& value) { m_botEmailHasBeenSet = true; m_botEmail = std::forward<BotEmailT>(value); }
    template<typename BotEmailT = Aws::String>
    Bot& WithBotEmail(BotEmailT&& value) { SetBotEmail(std::forward<BotEmailT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The security token used to authenticate Amazon Chime with the outgoing event
     * endpoint.</p>
     */
    inline const Aws::String& GetSecurityToken() const { return m_securityToken; }
    inline bool SecurityTokenHasBeenSet() const { return m_securityTokenHasBeenSet; }
    template<typename SecurityTokenT = Aws::String>
    void SetSecurityToken(SecurityTokenT&& value) { m_securityTokenHasBeenSet = true; m_securityToken = std::forward<SecurityTokenT>(value); }
    template<typename SecurityTokenT = Aws::String>
    Bot& WithSecurityToken(SecurityTokenT&& value) { SetSecurityToken(std::forward<SecurityTokenT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_botId;
    bool m_botIdHasBeenSet = false;

    Aws::String m_userId;
    bool m_userIdHasBeenSet = false;

    Aws::String m_displayName;
    bool m_displayNameHasBeenSet = false;

    BotType m_botType{BotType::NOT_SET};
    bool m_botTypeHasBeenSet = false;

    bool m_disabled{false};
    bool m_disabledHasBeenSet = false;

    Aws::Utils::DateTime m_createdTimestamp{};
    bool m_createdTimestampHasBeenSet = false;

    Aws::Utils::DateTime m_updatedTimestamp{};
    bool m_updatedTimestampHasBeenSet = false;

    Aws::String m_botEmail;
    bool m_botEmailHasBeenSet = false;

    Aws::String m_securityToken;
    bool m_securityTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace Chime
} // namespace Aws
