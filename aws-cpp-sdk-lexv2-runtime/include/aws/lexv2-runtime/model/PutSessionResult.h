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
    AWS_LEXRUNTIMEV2_API PutSessionResult();
    //We have to define these because Microsoft doesn't auto generate them
    AWS_LEXRUNTIMEV2_API PutSessionResult(PutSessionResult&&);
    AWS_LEXRUNTIMEV2_API PutSessionResult& operator=(PutSessionResult&&);
    //we delete these because Microsoft doesn't handle move generation correctly
    //and we therefore don't trust them to get it right here either.
    PutSessionResult(const PutSessionResult&) = delete;
    PutSessionResult& operator=(const PutSessionResult&) = delete;


    AWS_LEXRUNTIMEV2_API PutSessionResult(Aws::AmazonWebServiceResult<Aws::Utils::Stream::ResponseStream>&& result);
    AWS_LEXRUNTIMEV2_API PutSessionResult& operator=(Aws::AmazonWebServiceResult<Aws::Utils::Stream::ResponseStream>&& result);



    /**
     * <p>The type of response. Same as the type specified in the
     * <code>responseContentType</code> field in the request.</p>
     */
    inline const Aws::String& GetContentType() const{ return m_contentType; }

    /**
     * <p>The type of response. Same as the type specified in the
     * <code>responseContentType</code> field in the request.</p>
     */
    inline void SetContentType(const Aws::String& value) { m_contentType = value; }

    /**
     * <p>The type of response. Same as the type specified in the
     * <code>responseContentType</code> field in the request.</p>
     */
    inline void SetContentType(Aws::String&& value) { m_contentType = std::move(value); }

    /**
     * <p>The type of response. Same as the type specified in the
     * <code>responseContentType</code> field in the request.</p>
     */
    inline void SetContentType(const char* value) { m_contentType.assign(value); }

    /**
     * <p>The type of response. Same as the type specified in the
     * <code>responseContentType</code> field in the request.</p>
     */
    inline PutSessionResult& WithContentType(const Aws::String& value) { SetContentType(value); return *this;}

    /**
     * <p>The type of response. Same as the type specified in the
     * <code>responseContentType</code> field in the request.</p>
     */
    inline PutSessionResult& WithContentType(Aws::String&& value) { SetContentType(std::move(value)); return *this;}

    /**
     * <p>The type of response. Same as the type specified in the
     * <code>responseContentType</code> field in the request.</p>
     */
    inline PutSessionResult& WithContentType(const char* value) { SetContentType(value); return *this;}


    /**
     * <p>A list of messages that were last sent to the user. The messages are ordered
     * based on how you return the messages from you Lambda function or the order that
     * the messages are defined in the bot.</p>
     */
    inline const Aws::String& GetMessages() const{ return m_messages; }

    /**
     * <p>A list of messages that were last sent to the user. The messages are ordered
     * based on how you return the messages from you Lambda function or the order that
     * the messages are defined in the bot.</p>
     */
    inline void SetMessages(const Aws::String& value) { m_messages = value; }

    /**
     * <p>A list of messages that were last sent to the user. The messages are ordered
     * based on how you return the messages from you Lambda function or the order that
     * the messages are defined in the bot.</p>
     */
    inline void SetMessages(Aws::String&& value) { m_messages = std::move(value); }

    /**
     * <p>A list of messages that were last sent to the user. The messages are ordered
     * based on how you return the messages from you Lambda function or the order that
     * the messages are defined in the bot.</p>
     */
    inline void SetMessages(const char* value) { m_messages.assign(value); }

    /**
     * <p>A list of messages that were last sent to the user. The messages are ordered
     * based on how you return the messages from you Lambda function or the order that
     * the messages are defined in the bot.</p>
     */
    inline PutSessionResult& WithMessages(const Aws::String& value) { SetMessages(value); return *this;}

    /**
     * <p>A list of messages that were last sent to the user. The messages are ordered
     * based on how you return the messages from you Lambda function or the order that
     * the messages are defined in the bot.</p>
     */
    inline PutSessionResult& WithMessages(Aws::String&& value) { SetMessages(std::move(value)); return *this;}

    /**
     * <p>A list of messages that were last sent to the user. The messages are ordered
     * based on how you return the messages from you Lambda function or the order that
     * the messages are defined in the bot.</p>
     */
    inline PutSessionResult& WithMessages(const char* value) { SetMessages(value); return *this;}


    /**
     * <p>Represents the current state of the dialog between the user and the bot.</p>
     * <p>Use this to determine the progress of the conversation and what the next
     * action may be.</p>
     */
    inline const Aws::String& GetSessionState() const{ return m_sessionState; }

    /**
     * <p>Represents the current state of the dialog between the user and the bot.</p>
     * <p>Use this to determine the progress of the conversation and what the next
     * action may be.</p>
     */
    inline void SetSessionState(const Aws::String& value) { m_sessionState = value; }

    /**
     * <p>Represents the current state of the dialog between the user and the bot.</p>
     * <p>Use this to determine the progress of the conversation and what the next
     * action may be.</p>
     */
    inline void SetSessionState(Aws::String&& value) { m_sessionState = std::move(value); }

    /**
     * <p>Represents the current state of the dialog between the user and the bot.</p>
     * <p>Use this to determine the progress of the conversation and what the next
     * action may be.</p>
     */
    inline void SetSessionState(const char* value) { m_sessionState.assign(value); }

    /**
     * <p>Represents the current state of the dialog between the user and the bot.</p>
     * <p>Use this to determine the progress of the conversation and what the next
     * action may be.</p>
     */
    inline PutSessionResult& WithSessionState(const Aws::String& value) { SetSessionState(value); return *this;}

    /**
     * <p>Represents the current state of the dialog between the user and the bot.</p>
     * <p>Use this to determine the progress of the conversation and what the next
     * action may be.</p>
     */
    inline PutSessionResult& WithSessionState(Aws::String&& value) { SetSessionState(std::move(value)); return *this;}

    /**
     * <p>Represents the current state of the dialog between the user and the bot.</p>
     * <p>Use this to determine the progress of the conversation and what the next
     * action may be.</p>
     */
    inline PutSessionResult& WithSessionState(const char* value) { SetSessionState(value); return *this;}


    /**
     * <p>Request-specific information passed between the client application and Amazon
     * Lex V2. These are the same as the <code>requestAttribute</code> parameter in the
     * call to the <code>PutSession</code> operation.</p>
     */
    inline const Aws::String& GetRequestAttributes() const{ return m_requestAttributes; }

    /**
     * <p>Request-specific information passed between the client application and Amazon
     * Lex V2. These are the same as the <code>requestAttribute</code> parameter in the
     * call to the <code>PutSession</code> operation.</p>
     */
    inline void SetRequestAttributes(const Aws::String& value) { m_requestAttributes = value; }

    /**
     * <p>Request-specific information passed between the client application and Amazon
     * Lex V2. These are the same as the <code>requestAttribute</code> parameter in the
     * call to the <code>PutSession</code> operation.</p>
     */
    inline void SetRequestAttributes(Aws::String&& value) { m_requestAttributes = std::move(value); }

    /**
     * <p>Request-specific information passed between the client application and Amazon
     * Lex V2. These are the same as the <code>requestAttribute</code> parameter in the
     * call to the <code>PutSession</code> operation.</p>
     */
    inline void SetRequestAttributes(const char* value) { m_requestAttributes.assign(value); }

    /**
     * <p>Request-specific information passed between the client application and Amazon
     * Lex V2. These are the same as the <code>requestAttribute</code> parameter in the
     * call to the <code>PutSession</code> operation.</p>
     */
    inline PutSessionResult& WithRequestAttributes(const Aws::String& value) { SetRequestAttributes(value); return *this;}

    /**
     * <p>Request-specific information passed between the client application and Amazon
     * Lex V2. These are the same as the <code>requestAttribute</code> parameter in the
     * call to the <code>PutSession</code> operation.</p>
     */
    inline PutSessionResult& WithRequestAttributes(Aws::String&& value) { SetRequestAttributes(std::move(value)); return *this;}

    /**
     * <p>Request-specific information passed between the client application and Amazon
     * Lex V2. These are the same as the <code>requestAttribute</code> parameter in the
     * call to the <code>PutSession</code> operation.</p>
     */
    inline PutSessionResult& WithRequestAttributes(const char* value) { SetRequestAttributes(value); return *this;}


    /**
     * <p>The identifier of the session that received the data.</p>
     */
    inline const Aws::String& GetSessionId() const{ return m_sessionId; }

    /**
     * <p>The identifier of the session that received the data.</p>
     */
    inline void SetSessionId(const Aws::String& value) { m_sessionId = value; }

    /**
     * <p>The identifier of the session that received the data.</p>
     */
    inline void SetSessionId(Aws::String&& value) { m_sessionId = std::move(value); }

    /**
     * <p>The identifier of the session that received the data.</p>
     */
    inline void SetSessionId(const char* value) { m_sessionId.assign(value); }

    /**
     * <p>The identifier of the session that received the data.</p>
     */
    inline PutSessionResult& WithSessionId(const Aws::String& value) { SetSessionId(value); return *this;}

    /**
     * <p>The identifier of the session that received the data.</p>
     */
    inline PutSessionResult& WithSessionId(Aws::String&& value) { SetSessionId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the session that received the data.</p>
     */
    inline PutSessionResult& WithSessionId(const char* value) { SetSessionId(value); return *this;}


    /**
     * <p>If the requested content type was audio, the audio version of the message to
     * convey to the user.</p>
     */
    inline Aws::IOStream& GetAudioStream() { return m_audioStream.GetUnderlyingStream(); }

    /**
     * <p>If the requested content type was audio, the audio version of the message to
     * convey to the user.</p>
     */
    inline void ReplaceBody(Aws::IOStream* body) { m_audioStream = Aws::Utils::Stream::ResponseStream(body); }

  private:

    Aws::String m_contentType;

    Aws::String m_messages;

    Aws::String m_sessionState;

    Aws::String m_requestAttributes;

    Aws::String m_sessionId;

  Aws::Utils::Stream::ResponseStream m_audioStream;
  };

} // namespace Model
} // namespace LexRuntimeV2
} // namespace Aws
