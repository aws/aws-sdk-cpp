/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lexv2-runtime/LexRuntimeV2_EXPORTS.h>
#include <aws/lexv2-runtime/LexRuntimeV2Request.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/Array.h>
#include <utility>

namespace Aws
{
namespace LexRuntimeV2
{
namespace Model
{

  /**
   */
  class RecognizeUtteranceRequest : public StreamingLexRuntimeV2Request
  {
  public:
    AWS_LEXRUNTIMEV2_API RecognizeUtteranceRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "RecognizeUtterance"; }

    AWS_LEXRUNTIMEV2_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

    AWS_LEXRUNTIMEV2_API bool SignBody() const override { return false; }


    ///@{
    /**
     * <p>The identifier of the bot that should receive the request.</p>
     */
    inline const Aws::String& GetBotId() const { return m_botId; }
    inline bool BotIdHasBeenSet() const { return m_botIdHasBeenSet; }
    template<typename BotIdT = Aws::String>
    void SetBotId(BotIdT&& value) { m_botIdHasBeenSet = true; m_botId = std::forward<BotIdT>(value); }
    template<typename BotIdT = Aws::String>
    RecognizeUtteranceRequest& WithBotId(BotIdT&& value) { SetBotId(std::forward<BotIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The alias identifier in use for the bot that should receive the request.</p>
     */
    inline const Aws::String& GetBotAliasId() const { return m_botAliasId; }
    inline bool BotAliasIdHasBeenSet() const { return m_botAliasIdHasBeenSet; }
    template<typename BotAliasIdT = Aws::String>
    void SetBotAliasId(BotAliasIdT&& value) { m_botAliasIdHasBeenSet = true; m_botAliasId = std::forward<BotAliasIdT>(value); }
    template<typename BotAliasIdT = Aws::String>
    RecognizeUtteranceRequest& WithBotAliasId(BotAliasIdT&& value) { SetBotAliasId(std::forward<BotAliasIdT>(value)); return *this;}
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
    RecognizeUtteranceRequest& WithLocaleId(LocaleIdT&& value) { SetLocaleId(std::forward<LocaleIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the session in use.</p>
     */
    inline const Aws::String& GetSessionId() const { return m_sessionId; }
    inline bool SessionIdHasBeenSet() const { return m_sessionIdHasBeenSet; }
    template<typename SessionIdT = Aws::String>
    void SetSessionId(SessionIdT&& value) { m_sessionIdHasBeenSet = true; m_sessionId = std::forward<SessionIdT>(value); }
    template<typename SessionIdT = Aws::String>
    RecognizeUtteranceRequest& WithSessionId(SessionIdT&& value) { SetSessionId(std::forward<SessionIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Sets the state of the session with the user. You can use this to set the
     * current intent, attributes, context, and dialog action. Use the dialog action to
     * determine the next step that Amazon Lex V2 should use in the conversation with
     * the user.</p> <p>The <code>sessionState</code> field must be compressed using
     * gzip and then base64 encoded before sending to Amazon Lex V2.</p>
     */
    inline const Aws::String& GetSessionState() const { return m_sessionState; }
    inline bool SessionStateHasBeenSet() const { return m_sessionStateHasBeenSet; }
    template<typename SessionStateT = Aws::String>
    void SetSessionState(SessionStateT&& value) { m_sessionStateHasBeenSet = true; m_sessionState = std::forward<SessionStateT>(value); }
    template<typename SessionStateT = Aws::String>
    RecognizeUtteranceRequest& WithSessionState(SessionStateT&& value) { SetSessionState(std::forward<SessionStateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Request-specific information passed between the client application and Amazon
     * Lex V2 </p> <p>The namespace <code>x-amz-lex:</code> is reserved for special
     * attributes. Don't create any request attributes for prefix
     * <code>x-amz-lex:</code>.</p> <p>The <code>requestAttributes</code> field must be
     * compressed using gzip and then base64 encoded before sending to Amazon Lex
     * V2.</p>
     */
    inline const Aws::String& GetRequestAttributes() const { return m_requestAttributes; }
    inline bool RequestAttributesHasBeenSet() const { return m_requestAttributesHasBeenSet; }
    template<typename RequestAttributesT = Aws::String>
    void SetRequestAttributes(RequestAttributesT&& value) { m_requestAttributesHasBeenSet = true; m_requestAttributes = std::forward<RequestAttributesT>(value); }
    template<typename RequestAttributesT = Aws::String>
    RecognizeUtteranceRequest& WithRequestAttributes(RequestAttributesT&& value) { SetRequestAttributes(std::forward<RequestAttributesT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates the format for audio input or that the content is text. The header
     * must start with one of the following prefixes:</p> <ul> <li> <p>PCM format,
     * audio data must be in little-endian byte order.</p> <ul> <li> <p>audio/l16;
     * rate=16000; channels=1</p> </li> <li> <p>audio/x-l16; sample-rate=16000;
     * channel-count=1</p> </li> <li> <p>audio/lpcm; sample-rate=8000;
     * sample-size-bits=16; channel-count=1; is-big-endian=false</p> </li> </ul> </li>
     * <li> <p>Opus format</p> <ul> <li>
     * <p>audio/x-cbr-opus-with-preamble;preamble-size=0;bit-rate=256000;frame-size-milliseconds=4</p>
     * </li> </ul> </li> <li> <p>Text format</p> <ul> <li> <p>text/plain;
     * charset=utf-8</p> </li> </ul> </li> </ul>
     */
    inline const Aws::String& GetRequestContentType() const { return m_requestContentType; }
    inline bool RequestContentTypeHasBeenSet() const { return m_requestContentTypeHasBeenSet; }
    template<typename RequestContentTypeT = Aws::String>
    void SetRequestContentType(RequestContentTypeT&& value) { m_requestContentTypeHasBeenSet = true; m_requestContentType = std::forward<RequestContentTypeT>(value); }
    template<typename RequestContentTypeT = Aws::String>
    RecognizeUtteranceRequest& WithRequestContentType(RequestContentTypeT&& value) { SetRequestContentType(std::forward<RequestContentTypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The message that Amazon Lex V2 returns in the response can be either text or
     * speech based on the <code>responseContentType</code> value.</p> <ul> <li> <p>If
     * the value is <code>text/plain;charset=utf-8</code>, Amazon Lex V2 returns text
     * in the response.</p> </li> <li> <p>If the value begins with <code>audio/</code>,
     * Amazon Lex V2 returns speech in the response. Amazon Lex V2 uses Amazon Polly to
     * generate the speech using the configuration that you specified in the
     * <code>responseContentType</code> parameter. For example, if you specify
     * <code>audio/mpeg</code> as the value, Amazon Lex V2 returns speech in the MPEG
     * format.</p> </li> <li> <p>If the value is <code>audio/pcm</code>, the speech
     * returned is <code>audio/pcm</code> at 16 KHz in 16-bit, little-endian
     * format.</p> </li> <li> <p>The following are the accepted values:</p> <ul> <li>
     * <p>audio/mpeg</p> </li> <li> <p>audio/ogg</p> </li> <li> <p>audio/pcm (16
     * KHz)</p> </li> <li> <p>audio/ * (defaults to mpeg)</p> </li> <li> <p>text/plain;
     * charset=utf-8</p> </li> </ul> </li> </ul>
     */
    inline const Aws::String& GetResponseContentType() const { return m_responseContentType; }
    inline bool ResponseContentTypeHasBeenSet() const { return m_responseContentTypeHasBeenSet; }
    template<typename ResponseContentTypeT = Aws::String>
    void SetResponseContentType(ResponseContentTypeT&& value) { m_responseContentTypeHasBeenSet = true; m_responseContentType = std::forward<ResponseContentTypeT>(value); }
    template<typename ResponseContentTypeT = Aws::String>
    RecognizeUtteranceRequest& WithResponseContentType(ResponseContentTypeT&& value) { SetResponseContentType(std::forward<ResponseContentTypeT>(value)); return *this;}
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

    Aws::String m_sessionState;
    bool m_sessionStateHasBeenSet = false;

    Aws::String m_requestAttributes;
    bool m_requestAttributesHasBeenSet = false;

    Aws::String m_requestContentType;
    bool m_requestContentTypeHasBeenSet = false;

    Aws::String m_responseContentType;
    bool m_responseContentTypeHasBeenSet = false;

  };

} // namespace Model
} // namespace LexRuntimeV2
} // namespace Aws
