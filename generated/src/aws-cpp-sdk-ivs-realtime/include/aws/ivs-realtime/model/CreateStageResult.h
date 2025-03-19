/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ivs-realtime/Ivsrealtime_EXPORTS.h>
#include <aws/ivs-realtime/model/Stage.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ivs-realtime/model/ParticipantToken.h>
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
  class CreateStageResult
  {
  public:
    AWS_IVSREALTIME_API CreateStageResult() = default;
    AWS_IVSREALTIME_API CreateStageResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IVSREALTIME_API CreateStageResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The stage that was created.</p>
     */
    inline const Stage& GetStage() const { return m_stage; }
    template<typename StageT = Stage>
    void SetStage(StageT&& value) { m_stageHasBeenSet = true; m_stage = std::forward<StageT>(value); }
    template<typename StageT = Stage>
    CreateStageResult& WithStage(StageT&& value) { SetStage(std::forward<StageT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Participant tokens attached to the stage. These correspond to the
     * <code>participants</code> in the request.</p>
     */
    inline const Aws::Vector<ParticipantToken>& GetParticipantTokens() const { return m_participantTokens; }
    template<typename ParticipantTokensT = Aws::Vector<ParticipantToken>>
    void SetParticipantTokens(ParticipantTokensT&& value) { m_participantTokensHasBeenSet = true; m_participantTokens = std::forward<ParticipantTokensT>(value); }
    template<typename ParticipantTokensT = Aws::Vector<ParticipantToken>>
    CreateStageResult& WithParticipantTokens(ParticipantTokensT&& value) { SetParticipantTokens(std::forward<ParticipantTokensT>(value)); return *this;}
    template<typename ParticipantTokensT = ParticipantToken>
    CreateStageResult& AddParticipantTokens(ParticipantTokensT&& value) { m_participantTokensHasBeenSet = true; m_participantTokens.emplace_back(std::forward<ParticipantTokensT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    CreateStageResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Stage m_stage;
    bool m_stageHasBeenSet = false;

    Aws::Vector<ParticipantToken> m_participantTokens;
    bool m_participantTokensHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace ivsrealtime
} // namespace Aws
