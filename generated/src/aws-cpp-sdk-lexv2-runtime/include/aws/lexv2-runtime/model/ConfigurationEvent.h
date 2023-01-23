/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lexv2-runtime/LexRuntimeV2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/lexv2-runtime/model/SessionState.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/lexv2-runtime/model/Message.h>
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
namespace LexRuntimeV2
{
namespace Model
{

  /**
   * <p>The initial event sent from the application to Amazon Lex V2 to configure the
   * conversation, including session and request attributes and the response content
   * type.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/runtime.lex.v2-2020-08-07/ConfigurationEvent">AWS
   * API Reference</a></p>
   */
  class ConfigurationEvent
  {
  public:
    AWS_LEXRUNTIMEV2_API ConfigurationEvent();
    AWS_LEXRUNTIMEV2_API ConfigurationEvent(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXRUNTIMEV2_API ConfigurationEvent& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXRUNTIMEV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Request-specific information passed between the client application and Amazon
     * Lex V2.</p> <p>The namespace <code>x-amz-lex:</code> is reserved for special
     * attributes. Don't create any request attributes for prefix
     * <code>x-amz-lex:</code>.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetRequestAttributes() const{ return m_requestAttributes; }

    /**
     * <p>Request-specific information passed between the client application and Amazon
     * Lex V2.</p> <p>The namespace <code>x-amz-lex:</code> is reserved for special
     * attributes. Don't create any request attributes for prefix
     * <code>x-amz-lex:</code>.</p>
     */
    inline bool RequestAttributesHasBeenSet() const { return m_requestAttributesHasBeenSet; }

    /**
     * <p>Request-specific information passed between the client application and Amazon
     * Lex V2.</p> <p>The namespace <code>x-amz-lex:</code> is reserved for special
     * attributes. Don't create any request attributes for prefix
     * <code>x-amz-lex:</code>.</p>
     */
    inline void SetRequestAttributes(const Aws::Map<Aws::String, Aws::String>& value) { m_requestAttributesHasBeenSet = true; m_requestAttributes = value; }

    /**
     * <p>Request-specific information passed between the client application and Amazon
     * Lex V2.</p> <p>The namespace <code>x-amz-lex:</code> is reserved for special
     * attributes. Don't create any request attributes for prefix
     * <code>x-amz-lex:</code>.</p>
     */
    inline void SetRequestAttributes(Aws::Map<Aws::String, Aws::String>&& value) { m_requestAttributesHasBeenSet = true; m_requestAttributes = std::move(value); }

    /**
     * <p>Request-specific information passed between the client application and Amazon
     * Lex V2.</p> <p>The namespace <code>x-amz-lex:</code> is reserved for special
     * attributes. Don't create any request attributes for prefix
     * <code>x-amz-lex:</code>.</p>
     */
    inline ConfigurationEvent& WithRequestAttributes(const Aws::Map<Aws::String, Aws::String>& value) { SetRequestAttributes(value); return *this;}

    /**
     * <p>Request-specific information passed between the client application and Amazon
     * Lex V2.</p> <p>The namespace <code>x-amz-lex:</code> is reserved for special
     * attributes. Don't create any request attributes for prefix
     * <code>x-amz-lex:</code>.</p>
     */
    inline ConfigurationEvent& WithRequestAttributes(Aws::Map<Aws::String, Aws::String>&& value) { SetRequestAttributes(std::move(value)); return *this;}

    /**
     * <p>Request-specific information passed between the client application and Amazon
     * Lex V2.</p> <p>The namespace <code>x-amz-lex:</code> is reserved for special
     * attributes. Don't create any request attributes for prefix
     * <code>x-amz-lex:</code>.</p>
     */
    inline ConfigurationEvent& AddRequestAttributes(const Aws::String& key, const Aws::String& value) { m_requestAttributesHasBeenSet = true; m_requestAttributes.emplace(key, value); return *this; }

    /**
     * <p>Request-specific information passed between the client application and Amazon
     * Lex V2.</p> <p>The namespace <code>x-amz-lex:</code> is reserved for special
     * attributes. Don't create any request attributes for prefix
     * <code>x-amz-lex:</code>.</p>
     */
    inline ConfigurationEvent& AddRequestAttributes(Aws::String&& key, const Aws::String& value) { m_requestAttributesHasBeenSet = true; m_requestAttributes.emplace(std::move(key), value); return *this; }

    /**
     * <p>Request-specific information passed between the client application and Amazon
     * Lex V2.</p> <p>The namespace <code>x-amz-lex:</code> is reserved for special
     * attributes. Don't create any request attributes for prefix
     * <code>x-amz-lex:</code>.</p>
     */
    inline ConfigurationEvent& AddRequestAttributes(const Aws::String& key, Aws::String&& value) { m_requestAttributesHasBeenSet = true; m_requestAttributes.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Request-specific information passed between the client application and Amazon
     * Lex V2.</p> <p>The namespace <code>x-amz-lex:</code> is reserved for special
     * attributes. Don't create any request attributes for prefix
     * <code>x-amz-lex:</code>.</p>
     */
    inline ConfigurationEvent& AddRequestAttributes(Aws::String&& key, Aws::String&& value) { m_requestAttributesHasBeenSet = true; m_requestAttributes.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>Request-specific information passed between the client application and Amazon
     * Lex V2.</p> <p>The namespace <code>x-amz-lex:</code> is reserved for special
     * attributes. Don't create any request attributes for prefix
     * <code>x-amz-lex:</code>.</p>
     */
    inline ConfigurationEvent& AddRequestAttributes(const char* key, Aws::String&& value) { m_requestAttributesHasBeenSet = true; m_requestAttributes.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Request-specific information passed between the client application and Amazon
     * Lex V2.</p> <p>The namespace <code>x-amz-lex:</code> is reserved for special
     * attributes. Don't create any request attributes for prefix
     * <code>x-amz-lex:</code>.</p>
     */
    inline ConfigurationEvent& AddRequestAttributes(Aws::String&& key, const char* value) { m_requestAttributesHasBeenSet = true; m_requestAttributes.emplace(std::move(key), value); return *this; }

    /**
     * <p>Request-specific information passed between the client application and Amazon
     * Lex V2.</p> <p>The namespace <code>x-amz-lex:</code> is reserved for special
     * attributes. Don't create any request attributes for prefix
     * <code>x-amz-lex:</code>.</p>
     */
    inline ConfigurationEvent& AddRequestAttributes(const char* key, const char* value) { m_requestAttributesHasBeenSet = true; m_requestAttributes.emplace(key, value); return *this; }


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
     * returned is audio/pcm in 16-bit, little-endian format.</p> </li> <li> <p>The
     * following are the accepted values:</p> <ul> <li> <p>audio/mpeg</p> </li> <li>
     * <p>audio/ogg</p> </li> <li> <p>audio/pcm</p> </li> <li> <p>audio/ * (defaults to
     * mpeg)</p> </li> <li> <p>text/plain; charset=utf-8</p> </li> </ul> </li> </ul>
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
     * returned is audio/pcm in 16-bit, little-endian format.</p> </li> <li> <p>The
     * following are the accepted values:</p> <ul> <li> <p>audio/mpeg</p> </li> <li>
     * <p>audio/ogg</p> </li> <li> <p>audio/pcm</p> </li> <li> <p>audio/ * (defaults to
     * mpeg)</p> </li> <li> <p>text/plain; charset=utf-8</p> </li> </ul> </li> </ul>
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
     * returned is audio/pcm in 16-bit, little-endian format.</p> </li> <li> <p>The
     * following are the accepted values:</p> <ul> <li> <p>audio/mpeg</p> </li> <li>
     * <p>audio/ogg</p> </li> <li> <p>audio/pcm</p> </li> <li> <p>audio/ * (defaults to
     * mpeg)</p> </li> <li> <p>text/plain; charset=utf-8</p> </li> </ul> </li> </ul>
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
     * returned is audio/pcm in 16-bit, little-endian format.</p> </li> <li> <p>The
     * following are the accepted values:</p> <ul> <li> <p>audio/mpeg</p> </li> <li>
     * <p>audio/ogg</p> </li> <li> <p>audio/pcm</p> </li> <li> <p>audio/ * (defaults to
     * mpeg)</p> </li> <li> <p>text/plain; charset=utf-8</p> </li> </ul> </li> </ul>
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
     * returned is audio/pcm in 16-bit, little-endian format.</p> </li> <li> <p>The
     * following are the accepted values:</p> <ul> <li> <p>audio/mpeg</p> </li> <li>
     * <p>audio/ogg</p> </li> <li> <p>audio/pcm</p> </li> <li> <p>audio/ * (defaults to
     * mpeg)</p> </li> <li> <p>text/plain; charset=utf-8</p> </li> </ul> </li> </ul>
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
     * returned is audio/pcm in 16-bit, little-endian format.</p> </li> <li> <p>The
     * following are the accepted values:</p> <ul> <li> <p>audio/mpeg</p> </li> <li>
     * <p>audio/ogg</p> </li> <li> <p>audio/pcm</p> </li> <li> <p>audio/ * (defaults to
     * mpeg)</p> </li> <li> <p>text/plain; charset=utf-8</p> </li> </ul> </li> </ul>
     */
    inline ConfigurationEvent& WithResponseContentType(const Aws::String& value) { SetResponseContentType(value); return *this;}

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
     * returned is audio/pcm in 16-bit, little-endian format.</p> </li> <li> <p>The
     * following are the accepted values:</p> <ul> <li> <p>audio/mpeg</p> </li> <li>
     * <p>audio/ogg</p> </li> <li> <p>audio/pcm</p> </li> <li> <p>audio/ * (defaults to
     * mpeg)</p> </li> <li> <p>text/plain; charset=utf-8</p> </li> </ul> </li> </ul>
     */
    inline ConfigurationEvent& WithResponseContentType(Aws::String&& value) { SetResponseContentType(std::move(value)); return *this;}

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
     * returned is audio/pcm in 16-bit, little-endian format.</p> </li> <li> <p>The
     * following are the accepted values:</p> <ul> <li> <p>audio/mpeg</p> </li> <li>
     * <p>audio/ogg</p> </li> <li> <p>audio/pcm</p> </li> <li> <p>audio/ * (defaults to
     * mpeg)</p> </li> <li> <p>text/plain; charset=utf-8</p> </li> </ul> </li> </ul>
     */
    inline ConfigurationEvent& WithResponseContentType(const char* value) { SetResponseContentType(value); return *this;}


    
    inline const SessionState& GetSessionState() const{ return m_sessionState; }

    
    inline bool SessionStateHasBeenSet() const { return m_sessionStateHasBeenSet; }

    
    inline void SetSessionState(const SessionState& value) { m_sessionStateHasBeenSet = true; m_sessionState = value; }

    
    inline void SetSessionState(SessionState&& value) { m_sessionStateHasBeenSet = true; m_sessionState = std::move(value); }

    
    inline ConfigurationEvent& WithSessionState(const SessionState& value) { SetSessionState(value); return *this;}

    
    inline ConfigurationEvent& WithSessionState(SessionState&& value) { SetSessionState(std::move(value)); return *this;}


    /**
     * <p>A list of messages to send to the user.</p> <p>If you set the
     * <code>welcomeMessage</code> field, you must also set the <a
     * href="https://docs.aws.amazon.com/lexv2/latest/dg/API_runtime_DialogAction.html">
     * <code>DialogAction</code> </a> structure's <a
     * href="https://docs.aws.amazon.com/lexv2/latest/dg/API_runtime_DialogAction.html#lexv2-Type-runtime_DialogAction-type">
     * <code>type</code> </a> field.</p>
     */
    inline const Aws::Vector<Message>& GetWelcomeMessages() const{ return m_welcomeMessages; }

    /**
     * <p>A list of messages to send to the user.</p> <p>If you set the
     * <code>welcomeMessage</code> field, you must also set the <a
     * href="https://docs.aws.amazon.com/lexv2/latest/dg/API_runtime_DialogAction.html">
     * <code>DialogAction</code> </a> structure's <a
     * href="https://docs.aws.amazon.com/lexv2/latest/dg/API_runtime_DialogAction.html#lexv2-Type-runtime_DialogAction-type">
     * <code>type</code> </a> field.</p>
     */
    inline bool WelcomeMessagesHasBeenSet() const { return m_welcomeMessagesHasBeenSet; }

    /**
     * <p>A list of messages to send to the user.</p> <p>If you set the
     * <code>welcomeMessage</code> field, you must also set the <a
     * href="https://docs.aws.amazon.com/lexv2/latest/dg/API_runtime_DialogAction.html">
     * <code>DialogAction</code> </a> structure's <a
     * href="https://docs.aws.amazon.com/lexv2/latest/dg/API_runtime_DialogAction.html#lexv2-Type-runtime_DialogAction-type">
     * <code>type</code> </a> field.</p>
     */
    inline void SetWelcomeMessages(const Aws::Vector<Message>& value) { m_welcomeMessagesHasBeenSet = true; m_welcomeMessages = value; }

    /**
     * <p>A list of messages to send to the user.</p> <p>If you set the
     * <code>welcomeMessage</code> field, you must also set the <a
     * href="https://docs.aws.amazon.com/lexv2/latest/dg/API_runtime_DialogAction.html">
     * <code>DialogAction</code> </a> structure's <a
     * href="https://docs.aws.amazon.com/lexv2/latest/dg/API_runtime_DialogAction.html#lexv2-Type-runtime_DialogAction-type">
     * <code>type</code> </a> field.</p>
     */
    inline void SetWelcomeMessages(Aws::Vector<Message>&& value) { m_welcomeMessagesHasBeenSet = true; m_welcomeMessages = std::move(value); }

    /**
     * <p>A list of messages to send to the user.</p> <p>If you set the
     * <code>welcomeMessage</code> field, you must also set the <a
     * href="https://docs.aws.amazon.com/lexv2/latest/dg/API_runtime_DialogAction.html">
     * <code>DialogAction</code> </a> structure's <a
     * href="https://docs.aws.amazon.com/lexv2/latest/dg/API_runtime_DialogAction.html#lexv2-Type-runtime_DialogAction-type">
     * <code>type</code> </a> field.</p>
     */
    inline ConfigurationEvent& WithWelcomeMessages(const Aws::Vector<Message>& value) { SetWelcomeMessages(value); return *this;}

    /**
     * <p>A list of messages to send to the user.</p> <p>If you set the
     * <code>welcomeMessage</code> field, you must also set the <a
     * href="https://docs.aws.amazon.com/lexv2/latest/dg/API_runtime_DialogAction.html">
     * <code>DialogAction</code> </a> structure's <a
     * href="https://docs.aws.amazon.com/lexv2/latest/dg/API_runtime_DialogAction.html#lexv2-Type-runtime_DialogAction-type">
     * <code>type</code> </a> field.</p>
     */
    inline ConfigurationEvent& WithWelcomeMessages(Aws::Vector<Message>&& value) { SetWelcomeMessages(std::move(value)); return *this;}

    /**
     * <p>A list of messages to send to the user.</p> <p>If you set the
     * <code>welcomeMessage</code> field, you must also set the <a
     * href="https://docs.aws.amazon.com/lexv2/latest/dg/API_runtime_DialogAction.html">
     * <code>DialogAction</code> </a> structure's <a
     * href="https://docs.aws.amazon.com/lexv2/latest/dg/API_runtime_DialogAction.html#lexv2-Type-runtime_DialogAction-type">
     * <code>type</code> </a> field.</p>
     */
    inline ConfigurationEvent& AddWelcomeMessages(const Message& value) { m_welcomeMessagesHasBeenSet = true; m_welcomeMessages.push_back(value); return *this; }

    /**
     * <p>A list of messages to send to the user.</p> <p>If you set the
     * <code>welcomeMessage</code> field, you must also set the <a
     * href="https://docs.aws.amazon.com/lexv2/latest/dg/API_runtime_DialogAction.html">
     * <code>DialogAction</code> </a> structure's <a
     * href="https://docs.aws.amazon.com/lexv2/latest/dg/API_runtime_DialogAction.html#lexv2-Type-runtime_DialogAction-type">
     * <code>type</code> </a> field.</p>
     */
    inline ConfigurationEvent& AddWelcomeMessages(Message&& value) { m_welcomeMessagesHasBeenSet = true; m_welcomeMessages.push_back(std::move(value)); return *this; }


    /**
     * <p>Determines whether Amazon Lex V2 should send audio responses to the client
     * application. </p> <p>Set this field to false when the client is operating in a
     * playback mode where audio responses are played to the user. If the client isn't
     * operating in playback mode, such as a text chat application, set this to true so
     * that Amazon Lex V2 doesn't wait for the prompt to finish playing on the
     * client.</p>
     */
    inline bool GetDisablePlayback() const{ return m_disablePlayback; }

    /**
     * <p>Determines whether Amazon Lex V2 should send audio responses to the client
     * application. </p> <p>Set this field to false when the client is operating in a
     * playback mode where audio responses are played to the user. If the client isn't
     * operating in playback mode, such as a text chat application, set this to true so
     * that Amazon Lex V2 doesn't wait for the prompt to finish playing on the
     * client.</p>
     */
    inline bool DisablePlaybackHasBeenSet() const { return m_disablePlaybackHasBeenSet; }

    /**
     * <p>Determines whether Amazon Lex V2 should send audio responses to the client
     * application. </p> <p>Set this field to false when the client is operating in a
     * playback mode where audio responses are played to the user. If the client isn't
     * operating in playback mode, such as a text chat application, set this to true so
     * that Amazon Lex V2 doesn't wait for the prompt to finish playing on the
     * client.</p>
     */
    inline void SetDisablePlayback(bool value) { m_disablePlaybackHasBeenSet = true; m_disablePlayback = value; }

    /**
     * <p>Determines whether Amazon Lex V2 should send audio responses to the client
     * application. </p> <p>Set this field to false when the client is operating in a
     * playback mode where audio responses are played to the user. If the client isn't
     * operating in playback mode, such as a text chat application, set this to true so
     * that Amazon Lex V2 doesn't wait for the prompt to finish playing on the
     * client.</p>
     */
    inline ConfigurationEvent& WithDisablePlayback(bool value) { SetDisablePlayback(value); return *this;}


    /**
     * <p>A unique identifier that your application assigns to the event. You can use
     * this to identify events in logs.</p>
     */
    inline const Aws::String& GetEventId() const{ return m_eventId; }

    /**
     * <p>A unique identifier that your application assigns to the event. You can use
     * this to identify events in logs.</p>
     */
    inline bool EventIdHasBeenSet() const { return m_eventIdHasBeenSet; }

    /**
     * <p>A unique identifier that your application assigns to the event. You can use
     * this to identify events in logs.</p>
     */
    inline void SetEventId(const Aws::String& value) { m_eventIdHasBeenSet = true; m_eventId = value; }

    /**
     * <p>A unique identifier that your application assigns to the event. You can use
     * this to identify events in logs.</p>
     */
    inline void SetEventId(Aws::String&& value) { m_eventIdHasBeenSet = true; m_eventId = std::move(value); }

    /**
     * <p>A unique identifier that your application assigns to the event. You can use
     * this to identify events in logs.</p>
     */
    inline void SetEventId(const char* value) { m_eventIdHasBeenSet = true; m_eventId.assign(value); }

    /**
     * <p>A unique identifier that your application assigns to the event. You can use
     * this to identify events in logs.</p>
     */
    inline ConfigurationEvent& WithEventId(const Aws::String& value) { SetEventId(value); return *this;}

    /**
     * <p>A unique identifier that your application assigns to the event. You can use
     * this to identify events in logs.</p>
     */
    inline ConfigurationEvent& WithEventId(Aws::String&& value) { SetEventId(std::move(value)); return *this;}

    /**
     * <p>A unique identifier that your application assigns to the event. You can use
     * this to identify events in logs.</p>
     */
    inline ConfigurationEvent& WithEventId(const char* value) { SetEventId(value); return *this;}


    /**
     * <p>A timestamp set by the client of the date and time that the event was sent to
     * Amazon Lex V2.</p>
     */
    inline long long GetClientTimestampMillis() const{ return m_clientTimestampMillis; }

    /**
     * <p>A timestamp set by the client of the date and time that the event was sent to
     * Amazon Lex V2.</p>
     */
    inline bool ClientTimestampMillisHasBeenSet() const { return m_clientTimestampMillisHasBeenSet; }

    /**
     * <p>A timestamp set by the client of the date and time that the event was sent to
     * Amazon Lex V2.</p>
     */
    inline void SetClientTimestampMillis(long long value) { m_clientTimestampMillisHasBeenSet = true; m_clientTimestampMillis = value; }

    /**
     * <p>A timestamp set by the client of the date and time that the event was sent to
     * Amazon Lex V2.</p>
     */
    inline ConfigurationEvent& WithClientTimestampMillis(long long value) { SetClientTimestampMillis(value); return *this;}

  private:

    Aws::Map<Aws::String, Aws::String> m_requestAttributes;
    bool m_requestAttributesHasBeenSet = false;

    Aws::String m_responseContentType;
    bool m_responseContentTypeHasBeenSet = false;

    SessionState m_sessionState;
    bool m_sessionStateHasBeenSet = false;

    Aws::Vector<Message> m_welcomeMessages;
    bool m_welcomeMessagesHasBeenSet = false;

    bool m_disablePlayback;
    bool m_disablePlaybackHasBeenSet = false;

    Aws::String m_eventId;
    bool m_eventIdHasBeenSet = false;

    long long m_clientTimestampMillis;
    bool m_clientTimestampMillisHasBeenSet = false;
  };

} // namespace Model
} // namespace LexRuntimeV2
} // namespace Aws
