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
    AWS_LEXRUNTIMEV2_API ConfigurationEvent() = default;
    AWS_LEXRUNTIMEV2_API ConfigurationEvent(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXRUNTIMEV2_API ConfigurationEvent& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXRUNTIMEV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Request-specific information passed between the client application and Amazon
     * Lex V2.</p> <p>The namespace <code>x-amz-lex:</code> is reserved for special
     * attributes. Don't create any request attributes for prefix
     * <code>x-amz-lex:</code>.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetRequestAttributes() const { return m_requestAttributes; }
    inline bool RequestAttributesHasBeenSet() const { return m_requestAttributesHasBeenSet; }
    template<typename RequestAttributesT = Aws::Map<Aws::String, Aws::String>>
    void SetRequestAttributes(RequestAttributesT&& value) { m_requestAttributesHasBeenSet = true; m_requestAttributes = std::forward<RequestAttributesT>(value); }
    template<typename RequestAttributesT = Aws::Map<Aws::String, Aws::String>>
    ConfigurationEvent& WithRequestAttributes(RequestAttributesT&& value) { SetRequestAttributes(std::forward<RequestAttributesT>(value)); return *this;}
    template<typename RequestAttributesKeyT = Aws::String, typename RequestAttributesValueT = Aws::String>
    ConfigurationEvent& AddRequestAttributes(RequestAttributesKeyT&& key, RequestAttributesValueT&& value) {
      m_requestAttributesHasBeenSet = true; m_requestAttributes.emplace(std::forward<RequestAttributesKeyT>(key), std::forward<RequestAttributesValueT>(value)); return *this;
    }
    ///@}

    ///@{
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
    inline const Aws::String& GetResponseContentType() const { return m_responseContentType; }
    inline bool ResponseContentTypeHasBeenSet() const { return m_responseContentTypeHasBeenSet; }
    template<typename ResponseContentTypeT = Aws::String>
    void SetResponseContentType(ResponseContentTypeT&& value) { m_responseContentTypeHasBeenSet = true; m_responseContentType = std::forward<ResponseContentTypeT>(value); }
    template<typename ResponseContentTypeT = Aws::String>
    ConfigurationEvent& WithResponseContentType(ResponseContentTypeT&& value) { SetResponseContentType(std::forward<ResponseContentTypeT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const SessionState& GetSessionState() const { return m_sessionState; }
    inline bool SessionStateHasBeenSet() const { return m_sessionStateHasBeenSet; }
    template<typename SessionStateT = SessionState>
    void SetSessionState(SessionStateT&& value) { m_sessionStateHasBeenSet = true; m_sessionState = std::forward<SessionStateT>(value); }
    template<typename SessionStateT = SessionState>
    ConfigurationEvent& WithSessionState(SessionStateT&& value) { SetSessionState(std::forward<SessionStateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of messages to send to the user.</p> <p>If you set the
     * <code>welcomeMessage</code> field, you must also set the <a
     * href="https://docs.aws.amazon.com/lexv2/latest/dg/API_runtime_DialogAction.html">
     * <code>DialogAction</code> </a> structure's <a
     * href="https://docs.aws.amazon.com/lexv2/latest/dg/API_runtime_DialogAction.html#lexv2-Type-runtime_DialogAction-type">
     * <code>type</code> </a> field.</p>
     */
    inline const Aws::Vector<Message>& GetWelcomeMessages() const { return m_welcomeMessages; }
    inline bool WelcomeMessagesHasBeenSet() const { return m_welcomeMessagesHasBeenSet; }
    template<typename WelcomeMessagesT = Aws::Vector<Message>>
    void SetWelcomeMessages(WelcomeMessagesT&& value) { m_welcomeMessagesHasBeenSet = true; m_welcomeMessages = std::forward<WelcomeMessagesT>(value); }
    template<typename WelcomeMessagesT = Aws::Vector<Message>>
    ConfigurationEvent& WithWelcomeMessages(WelcomeMessagesT&& value) { SetWelcomeMessages(std::forward<WelcomeMessagesT>(value)); return *this;}
    template<typename WelcomeMessagesT = Message>
    ConfigurationEvent& AddWelcomeMessages(WelcomeMessagesT&& value) { m_welcomeMessagesHasBeenSet = true; m_welcomeMessages.emplace_back(std::forward<WelcomeMessagesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Determines whether Amazon Lex V2 should send audio responses to the client
     * application. </p> <p>Set this field to false when the client is operating in a
     * playback mode where audio responses are played to the user. If the client isn't
     * operating in playback mode, such as a text chat application, set this to true so
     * that Amazon Lex V2 doesn't wait for the prompt to finish playing on the
     * client.</p>
     */
    inline bool GetDisablePlayback() const { return m_disablePlayback; }
    inline bool DisablePlaybackHasBeenSet() const { return m_disablePlaybackHasBeenSet; }
    inline void SetDisablePlayback(bool value) { m_disablePlaybackHasBeenSet = true; m_disablePlayback = value; }
    inline ConfigurationEvent& WithDisablePlayback(bool value) { SetDisablePlayback(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A unique identifier that your application assigns to the event. You can use
     * this to identify events in logs.</p>
     */
    inline const Aws::String& GetEventId() const { return m_eventId; }
    inline bool EventIdHasBeenSet() const { return m_eventIdHasBeenSet; }
    template<typename EventIdT = Aws::String>
    void SetEventId(EventIdT&& value) { m_eventIdHasBeenSet = true; m_eventId = std::forward<EventIdT>(value); }
    template<typename EventIdT = Aws::String>
    ConfigurationEvent& WithEventId(EventIdT&& value) { SetEventId(std::forward<EventIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A timestamp set by the client of the date and time that the event was sent to
     * Amazon Lex V2.</p>
     */
    inline long long GetClientTimestampMillis() const { return m_clientTimestampMillis; }
    inline bool ClientTimestampMillisHasBeenSet() const { return m_clientTimestampMillisHasBeenSet; }
    inline void SetClientTimestampMillis(long long value) { m_clientTimestampMillisHasBeenSet = true; m_clientTimestampMillis = value; }
    inline ConfigurationEvent& WithClientTimestampMillis(long long value) { SetClientTimestampMillis(value); return *this;}
    ///@}
  private:

    Aws::Map<Aws::String, Aws::String> m_requestAttributes;
    bool m_requestAttributesHasBeenSet = false;

    Aws::String m_responseContentType;
    bool m_responseContentTypeHasBeenSet = false;

    SessionState m_sessionState;
    bool m_sessionStateHasBeenSet = false;

    Aws::Vector<Message> m_welcomeMessages;
    bool m_welcomeMessagesHasBeenSet = false;

    bool m_disablePlayback{false};
    bool m_disablePlaybackHasBeenSet = false;

    Aws::String m_eventId;
    bool m_eventIdHasBeenSet = false;

    long long m_clientTimestampMillis{0};
    bool m_clientTimestampMillisHasBeenSet = false;
  };

} // namespace Model
} // namespace LexRuntimeV2
} // namespace Aws
