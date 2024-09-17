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
    AWS_IVSREALTIME_API CreateStageResult();
    AWS_IVSREALTIME_API CreateStageResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IVSREALTIME_API CreateStageResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The stage that was created.</p>
     */
    inline const Stage& GetStage() const{ return m_stage; }
    inline void SetStage(const Stage& value) { m_stage = value; }
    inline void SetStage(Stage&& value) { m_stage = std::move(value); }
    inline CreateStageResult& WithStage(const Stage& value) { SetStage(value); return *this;}
    inline CreateStageResult& WithStage(Stage&& value) { SetStage(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Participant tokens attached to the stage. These correspond to the
     * <code>participants</code> in the request.</p>
     */
    inline const Aws::Vector<ParticipantToken>& GetParticipantTokens() const{ return m_participantTokens; }
    inline void SetParticipantTokens(const Aws::Vector<ParticipantToken>& value) { m_participantTokens = value; }
    inline void SetParticipantTokens(Aws::Vector<ParticipantToken>&& value) { m_participantTokens = std::move(value); }
    inline CreateStageResult& WithParticipantTokens(const Aws::Vector<ParticipantToken>& value) { SetParticipantTokens(value); return *this;}
    inline CreateStageResult& WithParticipantTokens(Aws::Vector<ParticipantToken>&& value) { SetParticipantTokens(std::move(value)); return *this;}
    inline CreateStageResult& AddParticipantTokens(const ParticipantToken& value) { m_participantTokens.push_back(value); return *this; }
    inline CreateStageResult& AddParticipantTokens(ParticipantToken&& value) { m_participantTokens.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline CreateStageResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline CreateStageResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline CreateStageResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Stage m_stage;

    Aws::Vector<ParticipantToken> m_participantTokens;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace ivsrealtime
} // namespace Aws
