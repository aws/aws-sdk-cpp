/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lexv2-runtime/LexRuntimeV2_EXPORTS.h>
#include <aws/lexv2-runtime/LexRuntimeV2Request.h>
#include <aws/lexv2-runtime/model/StartConversationHandler.h>
#include <aws/core/utils/event/EventStreamDecoder.h>
#include <memory>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/lexv2-runtime/model/ConversationMode.h>
#include <aws/lexv2-runtime/model/StartConversationRequestEventStream.h>
#include <utility>

namespace Aws
{
namespace LexRuntimeV2
{
namespace Model
{

  /**
   */
  class StartConversationRequest : public LexRuntimeV2Request
  {
  public:
    AWS_LEXRUNTIMEV2_API StartConversationRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "StartConversation"; }

    inline virtual bool IsEventStreamRequest() const override { return true; }
    inline virtual bool HasEventStreamResponse() const override { return true; }
    // SerializePayload will not be invoked.
    // This request is sent by encoding its data in event-streams which is sent as IOStream via GetBody()
    AWS_LEXRUNTIMEV2_API Aws::String SerializePayload() const override { return {}; }
    AWS_LEXRUNTIMEV2_API std::shared_ptr<Aws::IOStream> GetBody() const override;
    AWS_LEXRUNTIMEV2_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

    /**
     * Underlying Event Stream Decoder.
     */
    inline Aws::Utils::Event::EventStreamDecoder& GetEventStreamDecoder() { return m_decoder; }

    /**
     * Underlying Event Stream Handler which is used to define callback functions.
     */
    inline StartConversationHandler& GetEventStreamHandler() { return m_handler; }

    /**
     * Underlying Event Stream Handler which is used to define callback functions.
     */
    inline void SetEventStreamHandler(const StartConversationHandler& value) { m_handler = value; m_decoder.ResetEventStreamHandler(&m_handler); }

    /**
     * Underlying Event Stream Handler which is used to define callback functions.
     */
    inline StartConversationRequest& WithEventStreamHandler(const StartConversationHandler& value) { SetEventStreamHandler(value); return *this; }


    ///@{
    /**
     * <p>The identifier of the bot to process the request.</p>
     */
    inline const Aws::String& GetBotId() const { return m_botId; }
    inline bool BotIdHasBeenSet() const { return m_botIdHasBeenSet; }
    template<typename BotIdT = Aws::String>
    void SetBotId(BotIdT&& value) { m_botIdHasBeenSet = true; m_botId = std::forward<BotIdT>(value); }
    template<typename BotIdT = Aws::String>
    StartConversationRequest& WithBotId(BotIdT&& value) { SetBotId(std::forward<BotIdT>(value)); return *this;}
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
    StartConversationRequest& WithBotAliasId(BotAliasIdT&& value) { SetBotAliasId(std::forward<BotAliasIdT>(value)); return *this;}
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
    StartConversationRequest& WithLocaleId(LocaleIdT&& value) { SetLocaleId(std::forward<LocaleIdT>(value)); return *this;}
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
    StartConversationRequest& WithSessionId(SessionIdT&& value) { SetSessionId(std::forward<SessionIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The conversation type that you are using the Amazon Lex V2. If the
     * conversation mode is <code>AUDIO</code> you can send both audio and DTMF
     * information. If the mode is <code>TEXT</code> you can only send text.</p>
     */
    inline ConversationMode GetConversationMode() const { return m_conversationMode; }
    inline bool ConversationModeHasBeenSet() const { return m_conversationModeHasBeenSet; }
    inline void SetConversationMode(ConversationMode value) { m_conversationModeHasBeenSet = true; m_conversationMode = value; }
    inline StartConversationRequest& WithConversationMode(ConversationMode value) { SetConversationMode(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Represents the stream of events to Amazon Lex V2 from your application. The
     * events are encoded as HTTP/2 data frames.</p>
     */
    AWS_LEXRUNTIMEV2_API std::shared_ptr<StartConversationRequestEventStream> GetRequestEventStream() const  { return m_requestEventStream; }
    AWS_LEXRUNTIMEV2_API void SetRequestEventStream(const std::shared_ptr<StartConversationRequestEventStream>& value) { m_requestEventStreamHasBeenSet = true; m_requestEventStream = value; }
    AWS_LEXRUNTIMEV2_API StartConversationRequest& WithRequestEventStream(const std::shared_ptr<StartConversationRequestEventStream>& value) { SetRequestEventStream(value); return *this;}

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

    ConversationMode m_conversationMode{ConversationMode::NOT_SET};
    bool m_conversationModeHasBeenSet = false;

    std::shared_ptr<StartConversationRequestEventStream> m_requestEventStream;
    bool m_requestEventStreamHasBeenSet = false;
    StartConversationHandler m_handler;
    Aws::Utils::Event::EventStreamDecoder m_decoder{Utils::Event::EventStreamDecoder(&m_handler)};

  };

} // namespace Model
} // namespace LexRuntimeV2
} // namespace Aws
