/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lexv2-runtime/LexRuntimeV2_EXPORTS.h>
#include <aws/core/utils/stream/ResponseStream.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/Array.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace LexRuntimeV2
{
namespace Model
{
  class PutSessionResult
  {
  public:
    AWS_LEXRUNTIMEV2_API PutSessionResult() = default;
    AWS_LEXRUNTIMEV2_API PutSessionResult(PutSessionResult&&) = default;
    AWS_LEXRUNTIMEV2_API PutSessionResult& operator=(PutSessionResult&&) = default;
    //we delete these because Microsoft doesn't handle move generation correctly
    //and we therefore don't trust them to get it right here either.
    PutSessionResult(const PutSessionResult&) = delete;
    PutSessionResult& operator=(const PutSessionResult&) = delete;


    AWS_LEXRUNTIMEV2_API PutSessionResult(Aws::AmazonWebServiceResult<Aws::Utils::Stream::ResponseStream>&& result);
    AWS_LEXRUNTIMEV2_API PutSessionResult& operator=(Aws::AmazonWebServiceResult<Aws::Utils::Stream::ResponseStream>&& result);



    ///@{
    /**
     * <p>The type of response. Same as the type specified in the
     * <code>responseContentType</code> field in the request.</p>
     */
    inline const Aws::String& GetContentType() const { return m_contentType; }
    template<typename ContentTypeT = Aws::String>
    void SetContentType(ContentTypeT&& value) { m_contentTypeHasBeenSet = true; m_contentType = std::forward<ContentTypeT>(value); }
    template<typename ContentTypeT = Aws::String>
    PutSessionResult& WithContentType(ContentTypeT&& value) { SetContentType(std::forward<ContentTypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of messages that were last sent to the user. The messages are ordered
     * based on how you return the messages from you Lambda function or the order that
     * the messages are defined in the bot.</p>
     */
    inline const Aws::String& GetMessages() const { return m_messages; }
    template<typename MessagesT = Aws::String>
    void SetMessages(MessagesT&& value) { m_messagesHasBeenSet = true; m_messages = std::forward<MessagesT>(value); }
    template<typename MessagesT = Aws::String>
    PutSessionResult& WithMessages(MessagesT&& value) { SetMessages(std::forward<MessagesT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A base-64-encoded gzipped field that represents the current state of the
     * dialog between the user and the bot. Use this to determine the progress of the
     * conversation and what the next action may be.</p>
     */
    inline const Aws::String& GetSessionState() const { return m_sessionState; }
    template<typename SessionStateT = Aws::String>
    void SetSessionState(SessionStateT&& value) { m_sessionStateHasBeenSet = true; m_sessionState = std::forward<SessionStateT>(value); }
    template<typename SessionStateT = Aws::String>
    PutSessionResult& WithSessionState(SessionStateT&& value) { SetSessionState(std::forward<SessionStateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A base-64-encoded gzipped field that provides request-specific information
     * passed between the client application and Amazon Lex V2. These are the same as
     * the <code>requestAttribute</code> parameter in the call to the
     * <code>PutSession</code> operation.</p>
     */
    inline const Aws::String& GetRequestAttributes() const { return m_requestAttributes; }
    template<typename RequestAttributesT = Aws::String>
    void SetRequestAttributes(RequestAttributesT&& value) { m_requestAttributesHasBeenSet = true; m_requestAttributes = std::forward<RequestAttributesT>(value); }
    template<typename RequestAttributesT = Aws::String>
    PutSessionResult& WithRequestAttributes(RequestAttributesT&& value) { SetRequestAttributes(std::forward<RequestAttributesT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the session that received the data.</p>
     */
    inline const Aws::String& GetSessionId() const { return m_sessionId; }
    template<typename SessionIdT = Aws::String>
    void SetSessionId(SessionIdT&& value) { m_sessionIdHasBeenSet = true; m_sessionId = std::forward<SessionIdT>(value); }
    template<typename SessionIdT = Aws::String>
    PutSessionResult& WithSessionId(SessionIdT&& value) { SetSessionId(std::forward<SessionIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>If the requested content type was audio, the audio version of the message to
     * convey to the user.</p>
     */
    inline Aws::IOStream& GetAudioStream() const { return m_audioStream.GetUnderlyingStream(); }
    inline void ReplaceBody(Aws::IOStream* body) { m_audioStream = Aws::Utils::Stream::ResponseStream(body); }

    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    PutSessionResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_contentType;
    bool m_contentTypeHasBeenSet = false;

    Aws::String m_messages;
    bool m_messagesHasBeenSet = false;

    Aws::String m_sessionState;
    bool m_sessionStateHasBeenSet = false;

    Aws::String m_requestAttributes;
    bool m_requestAttributesHasBeenSet = false;

    Aws::String m_sessionId;
    bool m_sessionIdHasBeenSet = false;

    Aws::Utils::Stream::ResponseStream m_audioStream{};
    bool m_audioStreamHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace LexRuntimeV2
} // namespace Aws
