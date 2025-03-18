/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ivs-realtime/Ivsrealtime_EXPORTS.h>
#include <aws/ivs-realtime/model/ParticipantToken.h>
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
namespace ivsrealtime
{
namespace Model
{
  class CreateParticipantTokenResult
  {
  public:
    AWS_IVSREALTIME_API CreateParticipantTokenResult() = default;
    AWS_IVSREALTIME_API CreateParticipantTokenResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IVSREALTIME_API CreateParticipantTokenResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The participant token that was created.</p>
     */
    inline const ParticipantToken& GetParticipantToken() const { return m_participantToken; }
    template<typename ParticipantTokenT = ParticipantToken>
    void SetParticipantToken(ParticipantTokenT&& value) { m_participantTokenHasBeenSet = true; m_participantToken = std::forward<ParticipantTokenT>(value); }
    template<typename ParticipantTokenT = ParticipantToken>
    CreateParticipantTokenResult& WithParticipantToken(ParticipantTokenT&& value) { SetParticipantToken(std::forward<ParticipantTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    CreateParticipantTokenResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    ParticipantToken m_participantToken;
    bool m_participantTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace ivsrealtime
} // namespace Aws
