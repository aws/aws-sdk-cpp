/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/connect/model/ConnectionData.h>
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
  class StartWebRTCContactResult
  {
  public:
    AWS_CONNECT_API StartWebRTCContactResult() = default;
    AWS_CONNECT_API StartWebRTCContactResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CONNECT_API StartWebRTCContactResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Information required for the client application (mobile application or
     * website) to connect to the call.</p>
     */
    inline const ConnectionData& GetConnectionData() const { return m_connectionData; }
    template<typename ConnectionDataT = ConnectionData>
    void SetConnectionData(ConnectionDataT&& value) { m_connectionDataHasBeenSet = true; m_connectionData = std::forward<ConnectionDataT>(value); }
    template<typename ConnectionDataT = ConnectionData>
    StartWebRTCContactResult& WithConnectionData(ConnectionDataT&& value) { SetConnectionData(std::forward<ConnectionDataT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the contact in this instance of Amazon Connect. </p>
     */
    inline const Aws::String& GetContactId() const { return m_contactId; }
    template<typename ContactIdT = Aws::String>
    void SetContactId(ContactIdT&& value) { m_contactIdHasBeenSet = true; m_contactId = std::forward<ContactIdT>(value); }
    template<typename ContactIdT = Aws::String>
    StartWebRTCContactResult& WithContactId(ContactIdT&& value) { SetContactId(std::forward<ContactIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier for a contact participant. The <code>ParticipantId</code> for
     * a contact participant is the same throughout the contact lifecycle.</p>
     */
    inline const Aws::String& GetParticipantId() const { return m_participantId; }
    template<typename ParticipantIdT = Aws::String>
    void SetParticipantId(ParticipantIdT&& value) { m_participantIdHasBeenSet = true; m_participantId = std::forward<ParticipantIdT>(value); }
    template<typename ParticipantIdT = Aws::String>
    StartWebRTCContactResult& WithParticipantId(ParticipantIdT&& value) { SetParticipantId(std::forward<ParticipantIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The token used by the contact participant to call the <a
     * href="https://docs.aws.amazon.com/connect-participant/latest/APIReference/API_CreateParticipantConnection.html">CreateParticipantConnection</a>
     * API. The participant token is valid for the lifetime of a contact
     * participant.</p>
     */
    inline const Aws::String& GetParticipantToken() const { return m_participantToken; }
    template<typename ParticipantTokenT = Aws::String>
    void SetParticipantToken(ParticipantTokenT&& value) { m_participantTokenHasBeenSet = true; m_participantToken = std::forward<ParticipantTokenT>(value); }
    template<typename ParticipantTokenT = Aws::String>
    StartWebRTCContactResult& WithParticipantToken(ParticipantTokenT&& value) { SetParticipantToken(std::forward<ParticipantTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    StartWebRTCContactResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    ConnectionData m_connectionData;
    bool m_connectionDataHasBeenSet = false;

    Aws::String m_contactId;
    bool m_contactIdHasBeenSet = false;

    Aws::String m_participantId;
    bool m_participantIdHasBeenSet = false;

    Aws::String m_participantToken;
    bool m_participantTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
