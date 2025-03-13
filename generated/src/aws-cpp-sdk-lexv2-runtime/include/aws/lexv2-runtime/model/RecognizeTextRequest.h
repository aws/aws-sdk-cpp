/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lexv2-runtime/LexRuntimeV2_EXPORTS.h>
#include <aws/lexv2-runtime/LexRuntimeV2Request.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/lexv2-runtime/model/SessionState.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <utility>

namespace Aws
{
namespace LexRuntimeV2
{
namespace Model
{

  /**
   */
  class RecognizeTextRequest : public LexRuntimeV2Request
  {
  public:
    AWS_LEXRUNTIMEV2_API RecognizeTextRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "RecognizeText"; }

    AWS_LEXRUNTIMEV2_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The identifier of the bot that processes the request.</p>
     */
    inline const Aws::String& GetBotId() const { return m_botId; }
    inline bool BotIdHasBeenSet() const { return m_botIdHasBeenSet; }
    template<typename BotIdT = Aws::String>
    void SetBotId(BotIdT&& value) { m_botIdHasBeenSet = true; m_botId = std::forward<BotIdT>(value); }
    template<typename BotIdT = Aws::String>
    RecognizeTextRequest& WithBotId(BotIdT&& value) { SetBotId(std::forward<BotIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The alias identifier in use for the bot that processes the request.</p>
     */
    inline const Aws::String& GetBotAliasId() const { return m_botAliasId; }
    inline bool BotAliasIdHasBeenSet() const { return m_botAliasIdHasBeenSet; }
    template<typename BotAliasIdT = Aws::String>
    void SetBotAliasId(BotAliasIdT&& value) { m_botAliasIdHasBeenSet = true; m_botAliasId = std::forward<BotAliasIdT>(value); }
    template<typename BotAliasIdT = Aws::String>
    RecognizeTextRequest& WithBotAliasId(BotAliasIdT&& value) { SetBotAliasId(std::forward<BotAliasIdT>(value)); return *this;}
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
    RecognizeTextRequest& WithLocaleId(LocaleIdT&& value) { SetLocaleId(std::forward<LocaleIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the user session that is having the conversation.</p>
     */
    inline const Aws::String& GetSessionId() const { return m_sessionId; }
    inline bool SessionIdHasBeenSet() const { return m_sessionIdHasBeenSet; }
    template<typename SessionIdT = Aws::String>
    void SetSessionId(SessionIdT&& value) { m_sessionIdHasBeenSet = true; m_sessionId = std::forward<SessionIdT>(value); }
    template<typename SessionIdT = Aws::String>
    RecognizeTextRequest& WithSessionId(SessionIdT&& value) { SetSessionId(std::forward<SessionIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The text that the user entered. Amazon Lex V2 interprets this text.</p>
     */
    inline const Aws::String& GetText() const { return m_text; }
    inline bool TextHasBeenSet() const { return m_textHasBeenSet; }
    template<typename TextT = Aws::String>
    void SetText(TextT&& value) { m_textHasBeenSet = true; m_text = std::forward<TextT>(value); }
    template<typename TextT = Aws::String>
    RecognizeTextRequest& WithText(TextT&& value) { SetText(std::forward<TextT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current state of the dialog between the user and the bot.</p>
     */
    inline const SessionState& GetSessionState() const { return m_sessionState; }
    inline bool SessionStateHasBeenSet() const { return m_sessionStateHasBeenSet; }
    template<typename SessionStateT = SessionState>
    void SetSessionState(SessionStateT&& value) { m_sessionStateHasBeenSet = true; m_sessionState = std::forward<SessionStateT>(value); }
    template<typename SessionStateT = SessionState>
    RecognizeTextRequest& WithSessionState(SessionStateT&& value) { SetSessionState(std::forward<SessionStateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Request-specific information passed between the client application and Amazon
     * Lex V2 </p> <p>The namespace <code>x-amz-lex:</code> is reserved for special
     * attributes. Don't create any request attributes with the prefix
     * <code>x-amz-lex:</code>.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetRequestAttributes() const { return m_requestAttributes; }
    inline bool RequestAttributesHasBeenSet() const { return m_requestAttributesHasBeenSet; }
    template<typename RequestAttributesT = Aws::Map<Aws::String, Aws::String>>
    void SetRequestAttributes(RequestAttributesT&& value) { m_requestAttributesHasBeenSet = true; m_requestAttributes = std::forward<RequestAttributesT>(value); }
    template<typename RequestAttributesT = Aws::Map<Aws::String, Aws::String>>
    RecognizeTextRequest& WithRequestAttributes(RequestAttributesT&& value) { SetRequestAttributes(std::forward<RequestAttributesT>(value)); return *this;}
    template<typename RequestAttributesKeyT = Aws::String, typename RequestAttributesValueT = Aws::String>
    RecognizeTextRequest& AddRequestAttributes(RequestAttributesKeyT&& key, RequestAttributesValueT&& value) {
      m_requestAttributesHasBeenSet = true; m_requestAttributes.emplace(std::forward<RequestAttributesKeyT>(key), std::forward<RequestAttributesValueT>(value)); return *this;
    }
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

    Aws::String m_text;
    bool m_textHasBeenSet = false;

    SessionState m_sessionState;
    bool m_sessionStateHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_requestAttributes;
    bool m_requestAttributesHasBeenSet = false;
  };

} // namespace Model
} // namespace LexRuntimeV2
} // namespace Aws
