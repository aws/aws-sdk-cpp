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
    AWS_LEXRUNTIMEV2_API RecognizeTextRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "RecognizeText"; }

    AWS_LEXRUNTIMEV2_API Aws::String SerializePayload() const override;


    /**
     * <p>The identifier of the bot that processes the request.</p>
     */
    inline const Aws::String& GetBotId() const{ return m_botId; }

    /**
     * <p>The identifier of the bot that processes the request.</p>
     */
    inline bool BotIdHasBeenSet() const { return m_botIdHasBeenSet; }

    /**
     * <p>The identifier of the bot that processes the request.</p>
     */
    inline void SetBotId(const Aws::String& value) { m_botIdHasBeenSet = true; m_botId = value; }

    /**
     * <p>The identifier of the bot that processes the request.</p>
     */
    inline void SetBotId(Aws::String&& value) { m_botIdHasBeenSet = true; m_botId = std::move(value); }

    /**
     * <p>The identifier of the bot that processes the request.</p>
     */
    inline void SetBotId(const char* value) { m_botIdHasBeenSet = true; m_botId.assign(value); }

    /**
     * <p>The identifier of the bot that processes the request.</p>
     */
    inline RecognizeTextRequest& WithBotId(const Aws::String& value) { SetBotId(value); return *this;}

    /**
     * <p>The identifier of the bot that processes the request.</p>
     */
    inline RecognizeTextRequest& WithBotId(Aws::String&& value) { SetBotId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the bot that processes the request.</p>
     */
    inline RecognizeTextRequest& WithBotId(const char* value) { SetBotId(value); return *this;}


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
    inline RecognizeTextRequest& WithBotAliasId(const Aws::String& value) { SetBotAliasId(value); return *this;}

    /**
     * <p>The alias identifier in use for the bot that processes the request.</p>
     */
    inline RecognizeTextRequest& WithBotAliasId(Aws::String&& value) { SetBotAliasId(std::move(value)); return *this;}

    /**
     * <p>The alias identifier in use for the bot that processes the request.</p>
     */
    inline RecognizeTextRequest& WithBotAliasId(const char* value) { SetBotAliasId(value); return *this;}


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
    inline RecognizeTextRequest& WithLocaleId(const Aws::String& value) { SetLocaleId(value); return *this;}

    /**
     * <p>The locale where the session is in use.</p>
     */
    inline RecognizeTextRequest& WithLocaleId(Aws::String&& value) { SetLocaleId(std::move(value)); return *this;}

    /**
     * <p>The locale where the session is in use.</p>
     */
    inline RecognizeTextRequest& WithLocaleId(const char* value) { SetLocaleId(value); return *this;}


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
    inline RecognizeTextRequest& WithSessionId(const Aws::String& value) { SetSessionId(value); return *this;}

    /**
     * <p>The identifier of the user session that is having the conversation.</p>
     */
    inline RecognizeTextRequest& WithSessionId(Aws::String&& value) { SetSessionId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the user session that is having the conversation.</p>
     */
    inline RecognizeTextRequest& WithSessionId(const char* value) { SetSessionId(value); return *this;}


    /**
     * <p>The text that the user entered. Amazon Lex V2 interprets this text.</p>
     */
    inline const Aws::String& GetText() const{ return m_text; }

    /**
     * <p>The text that the user entered. Amazon Lex V2 interprets this text.</p>
     */
    inline bool TextHasBeenSet() const { return m_textHasBeenSet; }

    /**
     * <p>The text that the user entered. Amazon Lex V2 interprets this text.</p>
     */
    inline void SetText(const Aws::String& value) { m_textHasBeenSet = true; m_text = value; }

    /**
     * <p>The text that the user entered. Amazon Lex V2 interprets this text.</p>
     */
    inline void SetText(Aws::String&& value) { m_textHasBeenSet = true; m_text = std::move(value); }

    /**
     * <p>The text that the user entered. Amazon Lex V2 interprets this text.</p>
     */
    inline void SetText(const char* value) { m_textHasBeenSet = true; m_text.assign(value); }

    /**
     * <p>The text that the user entered. Amazon Lex V2 interprets this text.</p>
     */
    inline RecognizeTextRequest& WithText(const Aws::String& value) { SetText(value); return *this;}

    /**
     * <p>The text that the user entered. Amazon Lex V2 interprets this text.</p>
     */
    inline RecognizeTextRequest& WithText(Aws::String&& value) { SetText(std::move(value)); return *this;}

    /**
     * <p>The text that the user entered. Amazon Lex V2 interprets this text.</p>
     */
    inline RecognizeTextRequest& WithText(const char* value) { SetText(value); return *this;}


    /**
     * <p>The current state of the dialog between the user and the bot.</p>
     */
    inline const SessionState& GetSessionState() const{ return m_sessionState; }

    /**
     * <p>The current state of the dialog between the user and the bot.</p>
     */
    inline bool SessionStateHasBeenSet() const { return m_sessionStateHasBeenSet; }

    /**
     * <p>The current state of the dialog between the user and the bot.</p>
     */
    inline void SetSessionState(const SessionState& value) { m_sessionStateHasBeenSet = true; m_sessionState = value; }

    /**
     * <p>The current state of the dialog between the user and the bot.</p>
     */
    inline void SetSessionState(SessionState&& value) { m_sessionStateHasBeenSet = true; m_sessionState = std::move(value); }

    /**
     * <p>The current state of the dialog between the user and the bot.</p>
     */
    inline RecognizeTextRequest& WithSessionState(const SessionState& value) { SetSessionState(value); return *this;}

    /**
     * <p>The current state of the dialog between the user and the bot.</p>
     */
    inline RecognizeTextRequest& WithSessionState(SessionState&& value) { SetSessionState(std::move(value)); return *this;}


    /**
     * <p>Request-specific information passed between the client application and Amazon
     * Lex V2 </p> <p>The namespace <code>x-amz-lex:</code> is reserved for special
     * attributes. Don't create any request attributes with the prefix
     * <code>x-amz-lex:</code>.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetRequestAttributes() const{ return m_requestAttributes; }

    /**
     * <p>Request-specific information passed between the client application and Amazon
     * Lex V2 </p> <p>The namespace <code>x-amz-lex:</code> is reserved for special
     * attributes. Don't create any request attributes with the prefix
     * <code>x-amz-lex:</code>.</p>
     */
    inline bool RequestAttributesHasBeenSet() const { return m_requestAttributesHasBeenSet; }

    /**
     * <p>Request-specific information passed between the client application and Amazon
     * Lex V2 </p> <p>The namespace <code>x-amz-lex:</code> is reserved for special
     * attributes. Don't create any request attributes with the prefix
     * <code>x-amz-lex:</code>.</p>
     */
    inline void SetRequestAttributes(const Aws::Map<Aws::String, Aws::String>& value) { m_requestAttributesHasBeenSet = true; m_requestAttributes = value; }

    /**
     * <p>Request-specific information passed between the client application and Amazon
     * Lex V2 </p> <p>The namespace <code>x-amz-lex:</code> is reserved for special
     * attributes. Don't create any request attributes with the prefix
     * <code>x-amz-lex:</code>.</p>
     */
    inline void SetRequestAttributes(Aws::Map<Aws::String, Aws::String>&& value) { m_requestAttributesHasBeenSet = true; m_requestAttributes = std::move(value); }

    /**
     * <p>Request-specific information passed between the client application and Amazon
     * Lex V2 </p> <p>The namespace <code>x-amz-lex:</code> is reserved for special
     * attributes. Don't create any request attributes with the prefix
     * <code>x-amz-lex:</code>.</p>
     */
    inline RecognizeTextRequest& WithRequestAttributes(const Aws::Map<Aws::String, Aws::String>& value) { SetRequestAttributes(value); return *this;}

    /**
     * <p>Request-specific information passed between the client application and Amazon
     * Lex V2 </p> <p>The namespace <code>x-amz-lex:</code> is reserved for special
     * attributes. Don't create any request attributes with the prefix
     * <code>x-amz-lex:</code>.</p>
     */
    inline RecognizeTextRequest& WithRequestAttributes(Aws::Map<Aws::String, Aws::String>&& value) { SetRequestAttributes(std::move(value)); return *this;}

    /**
     * <p>Request-specific information passed between the client application and Amazon
     * Lex V2 </p> <p>The namespace <code>x-amz-lex:</code> is reserved for special
     * attributes. Don't create any request attributes with the prefix
     * <code>x-amz-lex:</code>.</p>
     */
    inline RecognizeTextRequest& AddRequestAttributes(const Aws::String& key, const Aws::String& value) { m_requestAttributesHasBeenSet = true; m_requestAttributes.emplace(key, value); return *this; }

    /**
     * <p>Request-specific information passed between the client application and Amazon
     * Lex V2 </p> <p>The namespace <code>x-amz-lex:</code> is reserved for special
     * attributes. Don't create any request attributes with the prefix
     * <code>x-amz-lex:</code>.</p>
     */
    inline RecognizeTextRequest& AddRequestAttributes(Aws::String&& key, const Aws::String& value) { m_requestAttributesHasBeenSet = true; m_requestAttributes.emplace(std::move(key), value); return *this; }

    /**
     * <p>Request-specific information passed between the client application and Amazon
     * Lex V2 </p> <p>The namespace <code>x-amz-lex:</code> is reserved for special
     * attributes. Don't create any request attributes with the prefix
     * <code>x-amz-lex:</code>.</p>
     */
    inline RecognizeTextRequest& AddRequestAttributes(const Aws::String& key, Aws::String&& value) { m_requestAttributesHasBeenSet = true; m_requestAttributes.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Request-specific information passed between the client application and Amazon
     * Lex V2 </p> <p>The namespace <code>x-amz-lex:</code> is reserved for special
     * attributes. Don't create any request attributes with the prefix
     * <code>x-amz-lex:</code>.</p>
     */
    inline RecognizeTextRequest& AddRequestAttributes(Aws::String&& key, Aws::String&& value) { m_requestAttributesHasBeenSet = true; m_requestAttributes.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>Request-specific information passed between the client application and Amazon
     * Lex V2 </p> <p>The namespace <code>x-amz-lex:</code> is reserved for special
     * attributes. Don't create any request attributes with the prefix
     * <code>x-amz-lex:</code>.</p>
     */
    inline RecognizeTextRequest& AddRequestAttributes(const char* key, Aws::String&& value) { m_requestAttributesHasBeenSet = true; m_requestAttributes.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Request-specific information passed between the client application and Amazon
     * Lex V2 </p> <p>The namespace <code>x-amz-lex:</code> is reserved for special
     * attributes. Don't create any request attributes with the prefix
     * <code>x-amz-lex:</code>.</p>
     */
    inline RecognizeTextRequest& AddRequestAttributes(Aws::String&& key, const char* value) { m_requestAttributesHasBeenSet = true; m_requestAttributes.emplace(std::move(key), value); return *this; }

    /**
     * <p>Request-specific information passed between the client application and Amazon
     * Lex V2 </p> <p>The namespace <code>x-amz-lex:</code> is reserved for special
     * attributes. Don't create any request attributes with the prefix
     * <code>x-amz-lex:</code>.</p>
     */
    inline RecognizeTextRequest& AddRequestAttributes(const char* key, const char* value) { m_requestAttributesHasBeenSet = true; m_requestAttributes.emplace(key, value); return *this; }

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
