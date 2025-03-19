/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime-sdk-media-pipelines/ChimeSDKMediaPipelines_EXPORTS.h>
#include <aws/chime-sdk-media-pipelines/model/SpeakerSearchTask.h>
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
  class GetSpeakerSearchTaskResult
  {
  public:
    AWS_CHIMESDKMEDIAPIPELINES_API GetSpeakerSearchTaskResult() = default;
    AWS_CHIMESDKMEDIAPIPELINES_API GetSpeakerSearchTaskResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CHIMESDKMEDIAPIPELINES_API GetSpeakerSearchTaskResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The details of the speaker search task.</p>
     */
    inline const SpeakerSearchTask& GetSpeakerSearchTask() const { return m_speakerSearchTask; }
    template<typename SpeakerSearchTaskT = SpeakerSearchTask>
    void SetSpeakerSearchTask(SpeakerSearchTaskT&& value) { m_speakerSearchTaskHasBeenSet = true; m_speakerSearchTask = std::forward<SpeakerSearchTaskT>(value); }
    template<typename SpeakerSearchTaskT = SpeakerSearchTask>
    GetSpeakerSearchTaskResult& WithSpeakerSearchTask(SpeakerSearchTaskT&& value) { SetSpeakerSearchTask(std::forward<SpeakerSearchTaskT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetSpeakerSearchTaskResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    SpeakerSearchTask m_speakerSearchTask;
    bool m_speakerSearchTaskHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace ChimeSDKMediaPipelines
} // namespace Aws
