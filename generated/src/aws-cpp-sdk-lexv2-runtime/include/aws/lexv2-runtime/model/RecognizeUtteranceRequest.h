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
    AWS_LEXRUNTIMEV2_API RecognizeUtteranceRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "RecognizeUtterance"; }

    AWS_LEXRUNTIMEV2_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

    AWS_LEXRUNTIMEV2_API bool SignBody() const override { return false; }


    /**
     * <p>The identifier of the bot that should receive the request.</p>
     */
    inline const Aws::String& GetBotId() const{ return m_botId; }

    /**
     * <p>The identifier of the bot that should receive the request.</p>
     */
    inline bool BotIdHasBeenSet() const { return m_botIdHasBeenSet; }

    /**
     * <p>The identifier of the bot that should receive the request.</p>
     */
    inline void SetBotId(const Aws::String& value) { m_botIdHasBeenSet = true; m_botId = value; }

    /**
     * <p>The identifier of the bot that should receive the request.</p>
     */
    inline void SetBotId(Aws::String&& value) { m_botIdHasBeenSet = true; m_botId = std::move(value); }

    /**
     * <p>The identifier of the bot that should receive the request.</p>
     */
    inline void SetBotId(const char* value) { m_botIdHasBeenSet = true; m_botId.assign(value); }

    /**
     * <p>The identifier of the bot that should receive the request.</p>
     */
    inline RecognizeUtteranceRequest& WithBotId(const Aws::String& value) { SetBotId(value); return *this;}

    /**
     * <p>The identifier of the bot that should receive the request.</p>
     */
    inline RecognizeUtteranceRequest& WithBotId(Aws::String&& value) { SetBotId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the bot that should receive the request.</p>
     */
    inline RecognizeUtteranceRequest& WithBotId(const char* value) { SetBotId(value); return *this;}


    /**
     * <p>The alias identifier in use for the bot that should receive the request.</p>
     */
    inline const Aws::String& GetBotAliasId() const{ return m_botAliasId; }

    /**
     * <p>The alias identifier in use for the bot that should receive the request.</p>
     */
    inline bool BotAliasIdHasBeenSet() const { return m_botAliasIdHasBeenSet; }

    /**
     * <p>The alias identifier in use for the bot that should receive the request.</p>
     */
    inline void SetBotAliasId(const Aws::String& value) { m_botAliasIdHasBeenSet = true; m_botAliasId = value; }

    /**
     * <p>The alias identifier in use for the bot that should receive the request.</p>
     */
    inline void SetBotAliasId(Aws::String&& value) { m_botAliasIdHasBeenSet = true; m_botAliasId = std::move(value); }

    /**
     * <p>The alias identifier in use for the bot that should receive the request.</p>
     */
    inline void SetBotAliasId(const char* value) { m_botAliasIdHasBeenSet = true; m_botAliasId.assign(value); }

    /**
     * <p>The alias identifier in use for the bot that should receive the request.</p>
     */
    inline RecognizeUtteranceRequest& WithBotAliasId(const Aws::String& value) { SetBotAliasId(value); return *this;}

    /**
     * <p>The alias identifier in use for the bot that should receive the request.</p>
     */
    inline RecognizeUtteranceRequest& WithBotAliasId(Aws::String&& value) { SetBotAliasId(std::move(value)); return *this;}

    /**
     * <p>The alias identifier in use for the bot that should receive the request.</p>
     */
    inline RecognizeUtteranceRequest& WithBotAliasId(const char* value) { SetBotAliasId(value); return *this;}


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
    inline RecognizeUtteranceRequest& WithLocaleId(const Aws::String& value) { SetLocaleId(value); return *this;}

    /**
     * <p>The locale where the session is in use.</p>
     */
    inline RecognizeUtteranceRequest& WithLocaleId(Aws::String&& value) { SetLocaleId(std::move(value)); return *this;}

    /**
     * <p>The locale where the session is in use.</p>
     */
    inline RecognizeUtteranceRequest& WithLocaleId(const char* value) { SetLocaleId(value); return *this;}


    /**
     * <p>The identifier of the session in use.</p>
     */
    inline const Aws::String& GetSessionId() const{ return m_sessionId; }

    /**
     * <p>The identifier of the session in use.</p>
     */
    inline bool SessionIdHasBeenSet() const { return m_sessionIdHasBeenSet; }

    /**
     * <p>The identifier of the session in use.</p>
     */
    inline void SetSessionId(const Aws::String& value) { m_sessionIdHasBeenSet = true; m_sessionId = value; }

    /**
     * <p>The identifier of the session in use.</p>
     */
    inline void SetSessionId(Aws::String&& value) { m_sessionIdHasBeenSet = true; m_sessionId = std::move(value); }

    /**
     * <p>The identifier of the session in use.</p>
     */
    inline void SetSessionId(const char* value) { m_sessionIdHasBeenSet = true; m_sessionId.assign(value); }

    /**
     * <p>The identifier of the session in use.</p>
     */
    inline RecognizeUtteranceRequest& WithSessionId(const Aws::String& value) { SetSessionId(value); return *this;}

    /**
     * <p>The identifier of the session in use.</p>
     */
    inline RecognizeUtteranceRequest& WithSessionId(Aws::String&& value) { SetSessionId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the session in use.</p>
     */
    inline RecognizeUtteranceRequest& WithSessionId(const char* value) { SetSessionId(value); return *this;}


    /**
     * <p>Sets the state of the session with the user. You can use this to set the
     * current intent, attributes, context, and dialog action. Use the dialog action to
     * determine the next step that Amazon Lex V2 should use in the conversation with
     * the user.</p> <p>The <code>sessionState</code> field must be compressed using
     * gzip and then base64 encoded before sending to Amazon Lex V2.</p>
     */
    inline const Aws::String& GetSessionState() const{ return m_sessionState; }

    /**
     * <p>Sets the state of the session with the user. You can use this to set the
     * current intent, attributes, context, and dialog action. Use the dialog action to
     * determine the next step that Amazon Lex V2 should use in the conversation with
     * the user.</p> <p>The <code>sessionState</code> field must be compressed using
     * gzip and then base64 encoded before sending to Amazon Lex V2.</p>
     */
    inline bool SessionStateHasBeenSet() const { return m_sessionStateHasBeenSet; }

    /**
     * <p>Sets the state of the session with the user. You can use this to set the
     * current intent, attributes, context, and dialog action. Use the dialog action to
     * determine the next step that Amazon Lex V2 should use in the conversation with
     * the user.</p> <p>The <code>sessionState</code> field must be compressed using
     * gzip and then base64 encoded before sending to Amazon Lex V2.</p>
     */
    inline void SetSessionState(const Aws::String& value) { m_sessionStateHasBeenSet = true; m_sessionState = value; }

    /**
     * <p>Sets the state of the session with the user. You can use this to set the
     * current intent, attributes, context, and dialog action. Use the dialog action to
     * determine the next step that Amazon Lex V2 should use in the conversation with
     * the user.</p> <p>The <code>sessionState</code> field must be compressed using
     * gzip and then base64 encoded before sending to Amazon Lex V2.</p>
     */
    inline void SetSessionState(Aws::String&& value) { m_sessionStateHasBeenSet = true; m_sessionState = std::move(value); }

    /**
     * <p>Sets the state of the session with the user. You can use this to set the
     * current intent, attributes, context, and dialog action. Use the dialog action to
     * determine the next step that Amazon Lex V2 should use in the conversation with
     * the user.</p> <p>The <code>sessionState</code> field must be compressed using
     * gzip and then base64 encoded before sending to Amazon Lex V2.</p>
     */
    inline void SetSessionState(const char* value) { m_sessionStateHasBeenSet = true; m_sessionState.assign(value); }

    /**
     * <p>Sets the state of the session with the user. You can use this to set the
     * current intent, attributes, context, and dialog action. Use the dialog action to
     * determine the next step that Amazon Lex V2 should use in the conversation with
     * the user.</p> <p>The <code>sessionState</code> field must be compressed using
     * gzip and then base64 encoded before sending to Amazon Lex V2.</p>
     */
    inline RecognizeUtteranceRequest& WithSessionState(const Aws::String& value) { SetSessionState(value); return *this;}

    /**
     * <p>Sets the state of the session with the user. You can use this to set the
     * current intent, attributes, context, and dialog action. Use the dialog action to
     * determine the next step that Amazon Lex V2 should use in the conversation with
     * the user.</p> <p>The <code>sessionState</code> field must be compressed using
     * gzip and then base64 encoded before sending to Amazon Lex V2.</p>
     */
    inline RecognizeUtteranceRequest& WithSessionState(Aws::String&& value) { SetSessionState(std::move(value)); return *this;}

    /**
     * <p>Sets the state of the session with the user. You can use this to set the
     * current intent, attributes, context, and dialog action. Use the dialog action to
     * determine the next step that Amazon Lex V2 should use in the conversation with
     * the user.</p> <p>The <code>sessionState</code> field must be compressed using
     * gzip and then base64 encoded before sending to Amazon Lex V2.</p>
     */
    inline RecognizeUtteranceRequest& WithSessionState(const char* value) { SetSessionState(value); return *this;}


    /**
     * <p>Request-specific information passed between the client application and Amazon
     * Lex V2 </p> <p>The namespace <code>x-amz-lex:</code> is reserved for special
     * attributes. Don't create any request attributes for prefix
     * <code>x-amz-lex:</code>.</p> <p>The <code>requestAttributes</code> field must be
     * compressed using gzip and then base64 encoded before sending to Amazon Lex
     * V2.</p>
     */
    inline const Aws::String& GetRequestAttributes() const{ return m_requestAttributes; }

    /**
     * <p>Request-specific information passed between the client application and Amazon
     * Lex V2 </p> <p>The namespace <code>x-amz-lex:</code> is reserved for special
     * attributes. Don't create any request attributes for prefix
     * <code>x-amz-lex:</code>.</p> <p>The <code>requestAttributes</code> field must be
     * compressed using gzip and then base64 encoded before sending to Amazon Lex
     * V2.</p>
     */
    inline bool RequestAttributesHasBeenSet() const { return m_requestAttributesHasBeenSet; }

    /**
     * <p>Request-specific information passed between the client application and Amazon
     * Lex V2 </p> <p>The namespace <code>x-amz-lex:</code> is reserved for special
     * attributes. Don't create any request attributes for prefix
     * <code>x-amz-lex:</code>.</p> <p>The <code>requestAttributes</code> field must be
     * compressed using gzip and then base64 encoded before sending to Amazon Lex
     * V2.</p>
     */
    inline void SetRequestAttributes(const Aws::String& value) { m_requestAttributesHasBeenSet = true; m_requestAttributes = value; }

    /**
     * <p>Request-specific information passed between the client application and Amazon
     * Lex V2 </p> <p>The namespace <code>x-amz-lex:</code> is reserved for special
     * attributes. Don't create any request attributes for prefix
     * <code>x-amz-lex:</code>.</p> <p>The <code>requestAttributes</code> field must be
     * compressed using gzip and then base64 encoded before sending to Amazon Lex
     * V2.</p>
     */
    inline void SetRequestAttributes(Aws::String&& value) { m_requestAttributesHasBeenSet = true; m_requestAttributes = std::move(value); }

    /**
     * <p>Request-specific information passed between the client application and Amazon
     * Lex V2 </p> <p>The namespace <code>x-amz-lex:</code> is reserved for special
     * attributes. Don't create any request attributes for prefix
     * <code>x-amz-lex:</code>.</p> <p>The <code>requestAttributes</code> field must be
     * compressed using gzip and then base64 encoded before sending to Amazon Lex
     * V2.</p>
     */
    inline void SetRequestAttributes(const char* value) { m_requestAttributesHasBeenSet = true; m_requestAttributes.assign(value); }

    /**
     * <p>Request-specific information passed between the client application and Amazon
     * Lex V2 </p> <p>The namespace <code>x-amz-lex:</code> is reserved for special
     * attributes. Don't create any request attributes for prefix
     * <code>x-amz-lex:</code>.</p> <p>The <code>requestAttributes</code> field must be
     * compressed using gzip and then base64 encoded before sending to Amazon Lex
     * V2.</p>
     */
    inline RecognizeUtteranceRequest& WithRequestAttributes(const Aws::String& value) { SetRequestAttributes(value); return *this;}

    /**
     * <p>Request-specific information passed between the client application and Amazon
     * Lex V2 </p> <p>The namespace <code>x-amz-lex:</code> is reserved for special
     * attributes. Don't create any request attributes for prefix
     * <code>x-amz-lex:</code>.</p> <p>The <code>requestAttributes</code> field must be
     * compressed using gzip and then base64 encoded before sending to Amazon Lex
     * V2.</p>
     */
    inline RecognizeUtteranceRequest& WithRequestAttributes(Aws::String&& value) { SetRequestAttributes(std::move(value)); return *this;}

    /**
     * <p>Request-specific information passed between the client application and Amazon
     * Lex V2 </p> <p>The namespace <code>x-amz-lex:</code> is reserved for special
     * attributes. Don't create any request attributes for prefix
     * <code>x-amz-lex:</code>.</p> <p>The <code>requestAttributes</code> field must be
     * compressed using gzip and then base64 encoded before sending to Amazon Lex
     * V2.</p>
     */
    inline RecognizeUtteranceRequest& WithRequestAttributes(const char* value) { SetRequestAttributes(value); return *this;}


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
    inline const Aws::String& GetRequestContentType() const{ return m_requestContentType; }

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
    inline bool RequestContentTypeHasBeenSet() const { return m_requestContentTypeHasBeenSet; }

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
    inline void SetRequestContentType(const Aws::String& value) { m_requestContentTypeHasBeenSet = true; m_requestContentType = value; }

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
    inline void SetRequestContentType(Aws::String&& value) { m_requestContentTypeHasBeenSet = true; m_requestContentType = std::move(value); }

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
    inline void SetRequestContentType(const char* value) { m_requestContentTypeHasBeenSet = true; m_requestContentType.assign(value); }

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
    inline RecognizeUtteranceRequest& WithRequestContentType(const Aws::String& value) { SetRequestContentType(value); return *this;}

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
    inline RecognizeUtteranceRequest& WithRequestContentType(Aws::String&& value) { SetRequestContentType(std::move(value)); return *this;}

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
    inline RecognizeUtteranceRequest& WithRequestContentType(const char* value) { SetRequestContentType(value); return *this;}


    /**
     * <p>The message that Amazon Lex V2 returns in the response can be either text or
     * speech based on the <code>responseContentType</code> value.</p> <ul> <li> <p>If
     * the value is <code>text/plain;charset=utf-8</code>, Amazon Lex V2 returns text
     * in the response.</p> </li> <li> <p>If the value begins with <code>audio/</code>,
     * Amazon Lex V2 returns speech in the response. Amazon Lex V2 uses Amazon Polly to
     * generate the speech using the configuration that you specified in the
     * <code>requestContentType</code> parameter. For example, if you specify
     * <code>audio/mpeg</code> as the value, Amazon Lex V2 returns speech in the MPEG
     * format.</p> </li> <li> <p>If the value is <code>audio/pcm</code>, the speech
     * returned is <code>audio/pcm</code> at 16 KHz in 16-bit, little-endian
     * format.</p> </li> <li> <p>The following are the accepted values:</p> <ul> <li>
     * <p>audio/mpeg</p> </li> <li> <p>audio/ogg</p> </li> <li> <p>audio/pcm (16
     * KHz)</p> </li> <li> <p>audio/ * (defaults to mpeg)</p> </li> <li> <p>text/plain;
     * charset=utf-8</p> </li> </ul> </li> </ul>
     */
    inline const Aws::String& GetResponseContentType() const{ return m_responseContentType; }

    /**
     * <p>The message that Amazon Lex V2 returns in the response can be either text or
     * speech based on the <code>responseContentType</code> value.</p> <ul> <li> <p>If
     * the value is <code>text/plain;charset=utf-8</code>, Amazon Lex V2 returns text
     * in the response.</p> </li> <li> <p>If the value begins with <code>audio/</code>,
     * Amazon Lex V2 returns speech in the response. Amazon Lex V2 uses Amazon Polly to
     * generate the speech using the configuration that you specified in the
     * <code>requestContentType</code> parameter. For example, if you specify
     * <code>audio/mpeg</code> as the value, Amazon Lex V2 returns speech in the MPEG
     * format.</p> </li> <li> <p>If the value is <code>audio/pcm</code>, the speech
     * returned is <code>audio/pcm</code> at 16 KHz in 16-bit, little-endian
     * format.</p> </li> <li> <p>The following are the accepted values:</p> <ul> <li>
     * <p>audio/mpeg</p> </li> <li> <p>audio/ogg</p> </li> <li> <p>audio/pcm (16
     * KHz)</p> </li> <li> <p>audio/ * (defaults to mpeg)</p> </li> <li> <p>text/plain;
     * charset=utf-8</p> </li> </ul> </li> </ul>
     */
    inline bool ResponseContentTypeHasBeenSet() const { return m_responseContentTypeHasBeenSet; }

    /**
     * <p>The message that Amazon Lex V2 returns in the response can be either text or
     * speech based on the <code>responseContentType</code> value.</p> <ul> <li> <p>If
     * the value is <code>text/plain;charset=utf-8</code>, Amazon Lex V2 returns text
     * in the response.</p> </li> <li> <p>If the value begins with <code>audio/</code>,
     * Amazon Lex V2 returns speech in the response. Amazon Lex V2 uses Amazon Polly to
     * generate the speech using the configuration that you specified in the
     * <code>requestContentType</code> parameter. For example, if you specify
     * <code>audio/mpeg</code> as the value, Amazon Lex V2 returns speech in the MPEG
     * format.</p> </li> <li> <p>If the value is <code>audio/pcm</code>, the speech
     * returned is <code>audio/pcm</code> at 16 KHz in 16-bit, little-endian
     * format.</p> </li> <li> <p>The following are the accepted values:</p> <ul> <li>
     * <p>audio/mpeg</p> </li> <li> <p>audio/ogg</p> </li> <li> <p>audio/pcm (16
     * KHz)</p> </li> <li> <p>audio/ * (defaults to mpeg)</p> </li> <li> <p>text/plain;
     * charset=utf-8</p> </li> </ul> </li> </ul>
     */
    inline void SetResponseContentType(const Aws::String& value) { m_responseContentTypeHasBeenSet = true; m_responseContentType = value; }

    /**
     * <p>The message that Amazon Lex V2 returns in the response can be either text or
     * speech based on the <code>responseContentType</code> value.</p> <ul> <li> <p>If
     * the value is <code>text/plain;charset=utf-8</code>, Amazon Lex V2 returns text
     * in the response.</p> </li> <li> <p>If the value begins with <code>audio/</code>,
     * Amazon Lex V2 returns speech in the response. Amazon Lex V2 uses Amazon Polly to
     * generate the speech using the configuration that you specified in the
     * <code>requestContentType</code> parameter. For example, if you specify
     * <code>audio/mpeg</code> as the value, Amazon Lex V2 returns speech in the MPEG
     * format.</p> </li> <li> <p>If the value is <code>audio/pcm</code>, the speech
     * returned is <code>audio/pcm</code> at 16 KHz in 16-bit, little-endian
     * format.</p> </li> <li> <p>The following are the accepted values:</p> <ul> <li>
     * <p>audio/mpeg</p> </li> <li> <p>audio/ogg</p> </li> <li> <p>audio/pcm (16
     * KHz)</p> </li> <li> <p>audio/ * (defaults to mpeg)</p> </li> <li> <p>text/plain;
     * charset=utf-8</p> </li> </ul> </li> </ul>
     */
    inline void SetResponseContentType(Aws::String&& value) { m_responseContentTypeHasBeenSet = true; m_responseContentType = std::move(value); }

    /**
     * <p>The message that Amazon Lex V2 returns in the response can be either text or
     * speech based on the <code>responseContentType</code> value.</p> <ul> <li> <p>If
     * the value is <code>text/plain;charset=utf-8</code>, Amazon Lex V2 returns text
     * in the response.</p> </li> <li> <p>If the value begins with <code>audio/</code>,
     * Amazon Lex V2 returns speech in the response. Amazon Lex V2 uses Amazon Polly to
     * generate the speech using the configuration that you specified in the
     * <code>requestContentType</code> parameter. For example, if you specify
     * <code>audio/mpeg</code> as the value, Amazon Lex V2 returns speech in the MPEG
     * format.</p> </li> <li> <p>If the value is <code>audio/pcm</code>, the speech
     * returned is <code>audio/pcm</code> at 16 KHz in 16-bit, little-endian
     * format.</p> </li> <li> <p>The following are the accepted values:</p> <ul> <li>
     * <p>audio/mpeg</p> </li> <li> <p>audio/ogg</p> </li> <li> <p>audio/pcm (16
     * KHz)</p> </li> <li> <p>audio/ * (defaults to mpeg)</p> </li> <li> <p>text/plain;
     * charset=utf-8</p> </li> </ul> </li> </ul>
     */
    inline void SetResponseContentType(const char* value) { m_responseContentTypeHasBeenSet = true; m_responseContentType.assign(value); }

    /**
     * <p>The message that Amazon Lex V2 returns in the response can be either text or
     * speech based on the <code>responseContentType</code> value.</p> <ul> <li> <p>If
     * the value is <code>text/plain;charset=utf-8</code>, Amazon Lex V2 returns text
     * in the response.</p> </li> <li> <p>If the value begins with <code>audio/</code>,
     * Amazon Lex V2 returns speech in the response. Amazon Lex V2 uses Amazon Polly to
     * generate the speech using the configuration that you specified in the
     * <code>requestContentType</code> parameter. For example, if you specify
     * <code>audio/mpeg</code> as the value, Amazon Lex V2 returns speech in the MPEG
     * format.</p> </li> <li> <p>If the value is <code>audio/pcm</code>, the speech
     * returned is <code>audio/pcm</code> at 16 KHz in 16-bit, little-endian
     * format.</p> </li> <li> <p>The following are the accepted values:</p> <ul> <li>
     * <p>audio/mpeg</p> </li> <li> <p>audio/ogg</p> </li> <li> <p>audio/pcm (16
     * KHz)</p> </li> <li> <p>audio/ * (defaults to mpeg)</p> </li> <li> <p>text/plain;
     * charset=utf-8</p> </li> </ul> </li> </ul>
     */
    inline RecognizeUtteranceRequest& WithResponseContentType(const Aws::String& value) { SetResponseContentType(value); return *this;}

    /**
     * <p>The message that Amazon Lex V2 returns in the response can be either text or
     * speech based on the <code>responseContentType</code> value.</p> <ul> <li> <p>If
     * the value is <code>text/plain;charset=utf-8</code>, Amazon Lex V2 returns text
     * in the response.</p> </li> <li> <p>If the value begins with <code>audio/</code>,
     * Amazon Lex V2 returns speech in the response. Amazon Lex V2 uses Amazon Polly to
     * generate the speech using the configuration that you specified in the
     * <code>requestContentType</code> parameter. For example, if you specify
     * <code>audio/mpeg</code> as the value, Amazon Lex V2 returns speech in the MPEG
     * format.</p> </li> <li> <p>If the value is <code>audio/pcm</code>, the speech
     * returned is <code>audio/pcm</code> at 16 KHz in 16-bit, little-endian
     * format.</p> </li> <li> <p>The following are the accepted values:</p> <ul> <li>
     * <p>audio/mpeg</p> </li> <li> <p>audio/ogg</p> </li> <li> <p>audio/pcm (16
     * KHz)</p> </li> <li> <p>audio/ * (defaults to mpeg)</p> </li> <li> <p>text/plain;
     * charset=utf-8</p> </li> </ul> </li> </ul>
     */
    inline RecognizeUtteranceRequest& WithResponseContentType(Aws::String&& value) { SetResponseContentType(std::move(value)); return *this;}

    /**
     * <p>The message that Amazon Lex V2 returns in the response can be either text or
     * speech based on the <code>responseContentType</code> value.</p> <ul> <li> <p>If
     * the value is <code>text/plain;charset=utf-8</code>, Amazon Lex V2 returns text
     * in the response.</p> </li> <li> <p>If the value begins with <code>audio/</code>,
     * Amazon Lex V2 returns speech in the response. Amazon Lex V2 uses Amazon Polly to
     * generate the speech using the configuration that you specified in the
     * <code>requestContentType</code> parameter. For example, if you specify
     * <code>audio/mpeg</code> as the value, Amazon Lex V2 returns speech in the MPEG
     * format.</p> </li> <li> <p>If the value is <code>audio/pcm</code>, the speech
     * returned is <code>audio/pcm</code> at 16 KHz in 16-bit, little-endian
     * format.</p> </li> <li> <p>The following are the accepted values:</p> <ul> <li>
     * <p>audio/mpeg</p> </li> <li> <p>audio/ogg</p> </li> <li> <p>audio/pcm (16
     * KHz)</p> </li> <li> <p>audio/ * (defaults to mpeg)</p> </li> <li> <p>text/plain;
     * charset=utf-8</p> </li> </ul> </li> </ul>
     */
    inline RecognizeUtteranceRequest& WithResponseContentType(const char* value) { SetResponseContentType(value); return *this;}

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
