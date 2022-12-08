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
    AWS_LEXRUNTIMEV2_API StartConversationRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "StartConversation"; }

    inline virtual bool IsEventStreamRequest() const override { return true; }
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
    inline const StartConversationHandler& GetEventStreamHandler() const { return m_handler; }

    /**
     * Underlying Event Stream Handler which is used to define callback functions.
     */
    inline void SetEventStreamHandler(const StartConversationHandler& value) { m_handler = value; m_decoder.ResetEventStreamHandler(&m_handler); }

    /**
     * Underlying Event Stream Handler which is used to define callback functions.
     */
    inline StartConversationRequest& WithEventStreamHandler(const StartConversationHandler& value) { SetEventStreamHandler(value); return *this; }


    /**
     * <p>The identifier of the bot to process the request.</p>
     */
    inline const Aws::String& GetBotId() const{ return m_botId; }

    /**
     * <p>The identifier of the bot to process the request.</p>
     */
    inline bool BotIdHasBeenSet() const { return m_botIdHasBeenSet; }

    /**
     * <p>The identifier of the bot to process the request.</p>
     */
    inline void SetBotId(const Aws::String& value) { m_botIdHasBeenSet = true; m_botId = value; }

    /**
     * <p>The identifier of the bot to process the request.</p>
     */
    inline void SetBotId(Aws::String&& value) { m_botIdHasBeenSet = true; m_botId = std::move(value); }

    /**
     * <p>The identifier of the bot to process the request.</p>
     */
    inline void SetBotId(const char* value) { m_botIdHasBeenSet = true; m_botId.assign(value); }

    /**
     * <p>The identifier of the bot to process the request.</p>
     */
    inline StartConversationRequest& WithBotId(const Aws::String& value) { SetBotId(value); return *this;}

    /**
     * <p>The identifier of the bot to process the request.</p>
     */
    inline StartConversationRequest& WithBotId(Aws::String&& value) { SetBotId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the bot to process the request.</p>
     */
    inline StartConversationRequest& WithBotId(const char* value) { SetBotId(value); return *this;}


    /**
     * <p>The alias identifier in use for the bot that processes the request.</p>
     */
    inline const Aws::String& GetBotAliasId() const{ return m_botAliasId; }

    /**
     * <p>The alias identifier in use for the bot that processes the request.</p>
     */
    inline bool BotAliasIdHasBeenSet() const { return m_botAliasIdHasBeenSet; }

    /**
     * <p>The alias identifier in use for the bot that processes the request.</p>
     */
    inline void SetBotAliasId(const Aws::String& value) { m_botAliasIdHasBeenSet = true; m_botAliasId = value; }

    /**
     * <p>The alias identifier in use for the bot that processes the request.</p>
     */
    inline void SetBotAliasId(Aws::String&& value) { m_botAliasIdHasBeenSet = true; m_botAliasId = std::move(value); }

    /**
     * <p>The alias identifier in use for the bot that processes the request.</p>
     */
    inline void SetBotAliasId(const char* value) { m_botAliasIdHasBeenSet = true; m_botAliasId.assign(value); }

    /**
     * <p>The alias identifier in use for the bot that processes the request.</p>
     */
    inline StartConversationRequest& WithBotAliasId(const Aws::String& value) { SetBotAliasId(value); return *this;}

    /**
     * <p>The alias identifier in use for the bot that processes the request.</p>
     */
    inline StartConversationRequest& WithBotAliasId(Aws::String&& value) { SetBotAliasId(std::move(value)); return *this;}

    /**
     * <p>The alias identifier in use for the bot that processes the request.</p>
     */
    inline StartConversationRequest& WithBotAliasId(const char* value) { SetBotAliasId(value); return *this;}


    /**
     * <p>The locale where the session is in use.</p>
     */
    inline const Aws::String& GetLocaleId() const{ return m_localeId; }

    /**
     * <p>The locale where the session is in use.</p>
     */
    inline bool LocaleIdHasBeenSet() const { return m_localeIdHasBeenSet; }

    /**
     * <p>The locale where the session is in use.</p>
     */
    inline void SetLocaleId(const Aws::String& value) { m_localeIdHasBeenSet = true; m_localeId = value; }

    /**
     * <p>The locale where the session is in use.</p>
     */
    inline void SetLocaleId(Aws::String&& value) { m_localeIdHasBeenSet = true; m_localeId = std::move(value); }

    /**
     * <p>The locale where the session is in use.</p>
     */
    inline void SetLocaleId(const char* value) { m_localeIdHasBeenSet = true; m_localeId.assign(value); }

    /**
     * <p>The locale where the session is in use.</p>
     */
    inline StartConversationRequest& WithLocaleId(const Aws::String& value) { SetLocaleId(value); return *this;}

    /**
     * <p>The locale where the session is in use.</p>
     */
    inline StartConversationRequest& WithLocaleId(Aws::String&& value) { SetLocaleId(std::move(value)); return *this;}

    /**
     * <p>The locale where the session is in use.</p>
     */
    inline StartConversationRequest& WithLocaleId(const char* value) { SetLocaleId(value); return *this;}


    /**
     * <p>The identifier of the user session that is having the conversation.</p>
     */
    inline const Aws::String& GetSessionId() const{ return m_sessionId; }

    /**
     * <p>The identifier of the user session that is having the conversation.</p>
     */
    inline bool SessionIdHasBeenSet() const { return m_sessionIdHasBeenSet; }

    /**
     * <p>The identifier of the user session that is having the conversation.</p>
     */
    inline void SetSessionId(const Aws::String& value) { m_sessionIdHasBeenSet = true; m_sessionId = value; }

    /**
     * <p>The identifier of the user session that is having the conversation.</p>
     */
    inline void SetSessionId(Aws::String&& value) { m_sessionIdHasBeenSet = true; m_sessionId = std::move(value); }

    /**
     * <p>The identifier of the user session that is having the conversation.</p>
     */
    inline void SetSessionId(const char* value) { m_sessionIdHasBeenSet = true; m_sessionId.assign(value); }

    /**
     * <p>The identifier of the user session that is having the conversation.</p>
     */
    inline StartConversationRequest& WithSessionId(const Aws::String& value) { SetSessionId(value); return *this;}

    /**
     * <p>The identifier of the user session that is having the conversation.</p>
     */
    inline StartConversationRequest& WithSessionId(Aws::String&& value) { SetSessionId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the user session that is having the conversation.</p>
     */
    inline StartConversationRequest& WithSessionId(const char* value) { SetSessionId(value); return *this;}


    /**
     * <p>The conversation type that you are using the Amazon Lex V2. If the
     * conversation mode is <code>AUDIO</code> you can send both audio and DTMF
     * information. If the mode is <code>TEXT</code> you can only send text.</p>
     */
    inline const ConversationMode& GetConversationMode() const{ return m_conversationMode; }

    /**
     * <p>The conversation type that you are using the Amazon Lex V2. If the
     * conversation mode is <code>AUDIO</code> you can send both audio and DTMF
     * information. If the mode is <code>TEXT</code> you can only send text.</p>
     */
    inline bool ConversationModeHasBeenSet() const { return m_conversationModeHasBeenSet; }

    /**
     * <p>The conversation type that you are using the Amazon Lex V2. If the
     * conversation mode is <code>AUDIO</code> you can send both audio and DTMF
     * information. If the mode is <code>TEXT</code> you can only send text.</p>
     */
    inline void SetConversationMode(const ConversationMode& value) { m_conversationModeHasBeenSet = true; m_conversationMode = value; }

    /**
     * <p>The conversation type that you are using the Amazon Lex V2. If the
     * conversation mode is <code>AUDIO</code> you can send both audio and DTMF
     * information. If the mode is <code>TEXT</code> you can only send text.</p>
     */
    inline void SetConversationMode(ConversationMode&& value) { m_conversationModeHasBeenSet = true; m_conversationMode = std::move(value); }

    /**
     * <p>The conversation type that you are using the Amazon Lex V2. If the
     * conversation mode is <code>AUDIO</code> you can send both audio and DTMF
     * information. If the mode is <code>TEXT</code> you can only send text.</p>
     */
    inline StartConversationRequest& WithConversationMode(const ConversationMode& value) { SetConversationMode(value); return *this;}

    /**
     * <p>The conversation type that you are using the Amazon Lex V2. If the
     * conversation mode is <code>AUDIO</code> you can send both audio and DTMF
     * information. If the mode is <code>TEXT</code> you can only send text.</p>
     */
    inline StartConversationRequest& WithConversationMode(ConversationMode&& value) { SetConversationMode(std::move(value)); return *this;}


    /**
     * <p>Represents the stream of events to Amazon Lex V2 from your application. The
     * events are encoded as HTTP/2 data frames.</p>
     */
    AWS_LEXRUNTIMEV2_API std::shared_ptr<StartConversationRequestEventStream> GetRequestEventStream() const { return m_requestEventStream; }

    /**
     * <p>Represents the stream of events to Amazon Lex V2 from your application. The
     * events are encoded as HTTP/2 data frames.</p>
     */
    AWS_LEXRUNTIMEV2_API void SetRequestEventStream(const std::shared_ptr<StartConversationRequestEventStream>& value) { m_requestEventStream = value; }

    /**
     * <p>Represents the stream of events to Amazon Lex V2 from your application. The
     * events are encoded as HTTP/2 data frames.</p>
     */
    AWS_LEXRUNTIMEV2_API StartConversationRequest& WithRequestEventStream(const std::shared_ptr<StartConversationRequestEventStream>& value) { SetRequestEventStream(value); return *this;}

  private:

    Aws::String m_botId;
    bool m_botIdHasBeenSet = false;

    Aws::String m_botAliasId;
    bool m_botAliasIdHasBeenSet = false;

    Aws::String m_localeId;
    bool m_localeIdHasBeenSet = false;

    Aws::String m_sessionId;
    bool m_sessionIdHasBeenSet = false;

    ConversationMode m_conversationMode;
    bool m_conversationModeHasBeenSet = false;

    std::shared_ptr<StartConversationRequestEventStream> m_requestEventStream;
    StartConversationHandler m_handler;
    Aws::Utils::Event::EventStreamDecoder m_decoder;

  };

} // namespace Model
} // namespace LexRuntimeV2
} // namespace Aws
