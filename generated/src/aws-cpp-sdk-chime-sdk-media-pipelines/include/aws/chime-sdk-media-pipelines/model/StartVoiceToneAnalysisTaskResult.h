/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime-sdk-media-pipelines/ChimeSDKMediaPipelines_EXPORTS.h>
#include <aws/chime-sdk-media-pipelines/model/VoiceToneAnalysisTask.h>
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
namespace ChimeSDKMediaPipelines
{
namespace Model
{
  class StartVoiceToneAnalysisTaskResult
  {
  public:
    AWS_CHIMESDKMEDIAPIPELINES_API StartVoiceToneAnalysisTaskResult();
    AWS_CHIMESDKMEDIAPIPELINES_API StartVoiceToneAnalysisTaskResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CHIMESDKMEDIAPIPELINES_API StartVoiceToneAnalysisTaskResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The details of the voice tone analysis task.</p>
     */
    inline const VoiceToneAnalysisTask& GetVoiceToneAnalysisTask() const{ return m_voiceToneAnalysisTask; }

    /**
     * <p>The details of the voice tone analysis task.</p>
     */
    inline void SetVoiceToneAnalysisTask(const VoiceToneAnalysisTask& value) { m_voiceToneAnalysisTask = value; }

    /**
     * <p>The details of the voice tone analysis task.</p>
     */
    inline void SetVoiceToneAnalysisTask(VoiceToneAnalysisTask&& value) { m_voiceToneAnalysisTask = std::move(value); }

    /**
     * <p>The details of the voice tone analysis task.</p>
     */
    inline StartVoiceToneAnalysisTaskResult& WithVoiceToneAnalysisTask(const VoiceToneAnalysisTask& value) { SetVoiceToneAnalysisTask(value); return *this;}

    /**
     * <p>The details of the voice tone analysis task.</p>
     */
    inline StartVoiceToneAnalysisTaskResult& WithVoiceToneAnalysisTask(VoiceToneAnalysisTask&& value) { SetVoiceToneAnalysisTask(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline StartVoiceToneAnalysisTaskResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline StartVoiceToneAnalysisTaskResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline StartVoiceToneAnalysisTaskResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    VoiceToneAnalysisTask m_voiceToneAnalysisTask;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace ChimeSDKMediaPipelines
} // namespace Aws
