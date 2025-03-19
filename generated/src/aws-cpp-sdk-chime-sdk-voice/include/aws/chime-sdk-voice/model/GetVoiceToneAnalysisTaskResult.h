/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime-sdk-voice/ChimeSDKVoice_EXPORTS.h>
#include <aws/chime-sdk-voice/model/VoiceToneAnalysisTask.h>
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
namespace ChimeSDKVoice
{
namespace Model
{
  class GetVoiceToneAnalysisTaskResult
  {
  public:
    AWS_CHIMESDKVOICE_API GetVoiceToneAnalysisTaskResult() = default;
    AWS_CHIMESDKVOICE_API GetVoiceToneAnalysisTaskResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CHIMESDKVOICE_API GetVoiceToneAnalysisTaskResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The details of the voice tone analysis task.</p>
     */
    inline const VoiceToneAnalysisTask& GetVoiceToneAnalysisTask() const { return m_voiceToneAnalysisTask; }
    template<typename VoiceToneAnalysisTaskT = VoiceToneAnalysisTask>
    void SetVoiceToneAnalysisTask(VoiceToneAnalysisTaskT&& value) { m_voiceToneAnalysisTaskHasBeenSet = true; m_voiceToneAnalysisTask = std::forward<VoiceToneAnalysisTaskT>(value); }
    template<typename VoiceToneAnalysisTaskT = VoiceToneAnalysisTask>
    GetVoiceToneAnalysisTaskResult& WithVoiceToneAnalysisTask(VoiceToneAnalysisTaskT&& value) { SetVoiceToneAnalysisTask(std::forward<VoiceToneAnalysisTaskT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetVoiceToneAnalysisTaskResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    VoiceToneAnalysisTask m_voiceToneAnalysisTask;
    bool m_voiceToneAnalysisTaskHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace ChimeSDKVoice
} // namespace Aws
