/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/connect/model/ParticipantTokenCredentials.h>
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
  class CreateParticipantResult
  {
  public:
    AWS_CONNECT_API CreateParticipantResult() = default;
    AWS_CONNECT_API CreateParticipantResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CONNECT_API CreateParticipantResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The token used by the chat participant to call
     * <code>CreateParticipantConnection</code>. The participant token is valid for the
     * lifetime of a chat participant.</p>
     */
    inline const ParticipantTokenCredentials& GetParticipantCredentials() const { return m_participantCredentials; }
    template<typename ParticipantCredentialsT = ParticipantTokenCredentials>
    void SetParticipantCredentials(ParticipantCredentialsT&& value) { m_participantCredentialsHasBeenSet = true; m_participantCredentials = std::forward<ParticipantCredentialsT>(value); }
    template<typename ParticipantCredentialsT = ParticipantTokenCredentials>
    CreateParticipantResult& WithParticipantCredentials(ParticipantCredentialsT&& value) { SetParticipantCredentials(std::forward<ParticipantCredentialsT>(value)); return *this;}
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
    CreateParticipantResult& WithParticipantId(ParticipantIdT&& value) { SetParticipantId(std::forward<ParticipantIdT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    CreateParticipantResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    ParticipantTokenCredentials m_participantCredentials;
    bool m_participantCredentialsHasBeenSet = false;

    Aws::String m_participantId;
    bool m_participantIdHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
