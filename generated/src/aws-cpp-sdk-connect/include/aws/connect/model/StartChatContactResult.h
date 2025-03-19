/**
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
    AWS_CONNECT_API StartChatContactResult() = default;
    AWS_CONNECT_API StartChatContactResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CONNECT_API StartChatContactResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The identifier of this contact within the Amazon Connect instance. </p>
     */
    inline const Aws::String& GetContactId() const { return m_contactId; }
    template<typename ContactIdT = Aws::String>
    void SetContactId(ContactIdT&& value) { m_contactIdHasBeenSet = true; m_contactId = std::forward<ContactIdT>(value); }
    template<typename ContactIdT = Aws::String>
    StartChatContactResult& WithContactId(ContactIdT&& value) { SetContactId(std::forward<ContactIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier for a chat participant. The participantId for a chat
     * participant is the same throughout the chat lifecycle.</p>
     */
    inline const Aws::String& GetParticipantId() const { return m_participantId; }
    template<typename ParticipantIdT = Aws::String>
    void SetParticipantId(ParticipantIdT&& value) { m_participantIdHasBeenSet = true; m_participantId = std::forward<ParticipantIdT>(value); }
    template<typename ParticipantIdT = Aws::String>
    StartChatContactResult& WithParticipantId(ParticipantIdT&& value) { SetParticipantId(std::forward<ParticipantIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The token used by the chat participant to call <a
     * href="https://docs.aws.amazon.com/connect-participant/latest/APIReference/API_CreateParticipantConnection.html">CreateParticipantConnection</a>.
     * The participant token is valid for the lifetime of a chat participant.</p>
     */
    inline const Aws::String& GetParticipantToken() const { return m_participantToken; }
    template<typename ParticipantTokenT = Aws::String>
    void SetParticipantToken(ParticipantTokenT&& value) { m_participantTokenHasBeenSet = true; m_participantToken = std::forward<ParticipantTokenT>(value); }
    template<typename ParticipantTokenT = Aws::String>
    StartChatContactResult& WithParticipantToken(ParticipantTokenT&& value) { SetParticipantToken(std::forward<ParticipantTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The contactId from which a persistent chat session is started. This field is
     * populated only for persistent chats.</p>
     */
    inline const Aws::String& GetContinuedFromContactId() const { return m_continuedFromContactId; }
    template<typename ContinuedFromContactIdT = Aws::String>
    void SetContinuedFromContactId(ContinuedFromContactIdT&& value) { m_continuedFromContactIdHasBeenSet = true; m_continuedFromContactId = std::forward<ContinuedFromContactIdT>(value); }
    template<typename ContinuedFromContactIdT = Aws::String>
    StartChatContactResult& WithContinuedFromContactId(ContinuedFromContactIdT&& value) { SetContinuedFromContactId(std::forward<ContinuedFromContactIdT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    StartChatContactResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_contactId;
    bool m_contactIdHasBeenSet = false;

    Aws::String m_participantId;
    bool m_participantIdHasBeenSet = false;

    Aws::String m_participantToken;
    bool m_participantTokenHasBeenSet = false;

    Aws::String m_continuedFromContactId;
    bool m_continuedFromContactIdHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
