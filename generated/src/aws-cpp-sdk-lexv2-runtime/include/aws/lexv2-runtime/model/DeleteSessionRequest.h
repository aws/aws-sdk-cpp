/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lexv2-runtime/LexRuntimeV2_EXPORTS.h>
#include <aws/lexv2-runtime/LexRuntimeV2Request.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace LexRuntimeV2
{
namespace Model
{

  /**
   */
  class DeleteSessionRequest : public LexRuntimeV2Request
  {
  public:
    AWS_LEXRUNTIMEV2_API DeleteSessionRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteSession"; }

    AWS_LEXRUNTIMEV2_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The identifier of the bot that contains the session data.</p>
     */
    inline const Aws::String& GetBotId() const { return m_botId; }
    inline bool BotIdHasBeenSet() const { return m_botIdHasBeenSet; }
    template<typename BotIdT = Aws::String>
    void SetBotId(BotIdT&& value) { m_botIdHasBeenSet = true; m_botId = std::forward<BotIdT>(value); }
    template<typename BotIdT = Aws::String>
    DeleteSessionRequest& WithBotId(BotIdT&& value) { SetBotId(std::forward<BotIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The alias identifier in use for the bot that contains the session data.</p>
     */
    inline const Aws::String& GetBotAliasId() const { return m_botAliasId; }
    inline bool BotAliasIdHasBeenSet() const { return m_botAliasIdHasBeenSet; }
    template<typename BotAliasIdT = Aws::String>
    void SetBotAliasId(BotAliasIdT&& value) { m_botAliasIdHasBeenSet = true; m_botAliasId = std::forward<BotAliasIdT>(value); }
    template<typename BotAliasIdT = Aws::String>
    DeleteSessionRequest& WithBotAliasId(BotAliasIdT&& value) { SetBotAliasId(std::forward<BotAliasIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The locale where the session is in use.</p>
     */
    inline const Aws::String& GetLocaleId() const { return m_localeId; }
    inline bool LocaleIdHasBeenSet() const { return m_localeIdHasBeenSet; }
    template<typename LocaleIdT = Aws::String>
    void SetLocaleId(LocaleIdT&& value) { m_localeIdHasBeenSet = true; m_localeId = std::forward<LocaleIdT>(value); }
    template<typename LocaleIdT = Aws::String>
    DeleteSessionRequest& WithLocaleId(LocaleIdT&& value) { SetLocaleId(std::forward<LocaleIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the session to delete.</p>
     */
    inline const Aws::String& GetSessionId() const { return m_sessionId; }
    inline bool SessionIdHasBeenSet() const { return m_sessionIdHasBeenSet; }
    template<typename SessionIdT = Aws::String>
    void SetSessionId(SessionIdT&& value) { m_sessionIdHasBeenSet = true; m_sessionId = std::forward<SessionIdT>(value); }
    template<typename SessionIdT = Aws::String>
    DeleteSessionRequest& WithSessionId(SessionIdT&& value) { SetSessionId(std::forward<SessionIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_botId;
    bool m_botIdHasBeenSet = false;

    Aws::String m_botAliasId;
    bool m_botAliasIdHasBeenSet = false;

    Aws::String m_localeId;
    bool m_localeIdHasBeenSet = false;

    Aws::String m_sessionId;
    bool m_sessionIdHasBeenSet = false;
  };

} // namespace Model
} // namespace LexRuntimeV2
} // namespace Aws
