﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace Connect
{
namespace Model
{
  class StartChatContactResult
  {
  public:
    AWS_CONNECT_API StartChatContactResult();
    AWS_CONNECT_API StartChatContactResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CONNECT_API StartChatContactResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The identifier of this contact within the Amazon Connect instance. </p>
     */
    inline const Aws::String& GetContactId() const{ return m_contactId; }
    inline void SetContactId(const Aws::String& value) { m_contactId = value; }
    inline void SetContactId(Aws::String&& value) { m_contactId = std::move(value); }
    inline void SetContactId(const char* value) { m_contactId.assign(value); }
    inline StartChatContactResult& WithContactId(const Aws::String& value) { SetContactId(value); return *this;}
    inline StartChatContactResult& WithContactId(Aws::String&& value) { SetContactId(std::move(value)); return *this;}
    inline StartChatContactResult& WithContactId(const char* value) { SetContactId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier for a chat participant. The participantId for a chat
     * participant is the same throughout the chat lifecycle.</p>
     */
    inline const Aws::String& GetParticipantId() const{ return m_participantId; }
    inline void SetParticipantId(const Aws::String& value) { m_participantId = value; }
    inline void SetParticipantId(Aws::String&& value) { m_participantId = std::move(value); }
    inline void SetParticipantId(const char* value) { m_participantId.assign(value); }
    inline StartChatContactResult& WithParticipantId(const Aws::String& value) { SetParticipantId(value); return *this;}
    inline StartChatContactResult& WithParticipantId(Aws::String&& value) { SetParticipantId(std::move(value)); return *this;}
    inline StartChatContactResult& WithParticipantId(const char* value) { SetParticipantId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The token used by the chat participant to call <a
     * href="https://docs.aws.amazon.com/connect-participant/latest/APIReference/API_CreateParticipantConnection.html">CreateParticipantConnection</a>.
     * The participant token is valid for the lifetime of a chat participant.</p>
     */
    inline const Aws::String& GetParticipantToken() const{ return m_participantToken; }
    inline void SetParticipantToken(const Aws::String& value) { m_participantToken = value; }
    inline void SetParticipantToken(Aws::String&& value) { m_participantToken = std::move(value); }
    inline void SetParticipantToken(const char* value) { m_participantToken.assign(value); }
    inline StartChatContactResult& WithParticipantToken(const Aws::String& value) { SetParticipantToken(value); return *this;}
    inline StartChatContactResult& WithParticipantToken(Aws::String&& value) { SetParticipantToken(std::move(value)); return *this;}
    inline StartChatContactResult& WithParticipantToken(const char* value) { SetParticipantToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The contactId from which a persistent chat session is started. This field is
     * populated only for persistent chats.</p>
     */
    inline const Aws::String& GetContinuedFromContactId() const{ return m_continuedFromContactId; }
    inline void SetContinuedFromContactId(const Aws::String& value) { m_continuedFromContactId = value; }
    inline void SetContinuedFromContactId(Aws::String&& value) { m_continuedFromContactId = std::move(value); }
    inline void SetContinuedFromContactId(const char* value) { m_continuedFromContactId.assign(value); }
    inline StartChatContactResult& WithContinuedFromContactId(const Aws::String& value) { SetContinuedFromContactId(value); return *this;}
    inline StartChatContactResult& WithContinuedFromContactId(Aws::String&& value) { SetContinuedFromContactId(std::move(value)); return *this;}
    inline StartChatContactResult& WithContinuedFromContactId(const char* value) { SetContinuedFromContactId(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline StartChatContactResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline StartChatContactResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline StartChatContactResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_contactId;

    Aws::String m_participantId;

    Aws::String m_participantToken;

    Aws::String m_continuedFromContactId;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
