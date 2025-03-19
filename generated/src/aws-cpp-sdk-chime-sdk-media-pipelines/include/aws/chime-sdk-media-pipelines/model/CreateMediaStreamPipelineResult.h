/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime-sdk-media-pipelines/ChimeSDKMediaPipelines_EXPORTS.h>
#include <aws/chime-sdk-media-pipelines/model/MediaStreamPipeline.h>
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
  class CreateMediaStreamPipelineResult
  {
  public:
    AWS_CHIMESDKMEDIAPIPELINES_API CreateMediaStreamPipelineResult() = default;
    AWS_CHIMESDKMEDIAPIPELINES_API CreateMediaStreamPipelineResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CHIMESDKMEDIAPIPELINES_API CreateMediaStreamPipelineResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The requested media pipeline.</p>
     */
    inline const MediaStreamPipeline& GetMediaStreamPipeline() const { return m_mediaStreamPipeline; }
    template<typename MediaStreamPipelineT = MediaStreamPipeline>
    void SetMediaStreamPipeline(MediaStreamPipelineT&& value) { m_mediaStreamPipelineHasBeenSet = true; m_mediaStreamPipeline = std::forward<MediaStreamPipelineT>(value); }
    template<typename MediaStreamPipelineT = MediaStreamPipeline>
    CreateMediaStreamPipelineResult& WithMediaStreamPipeline(MediaStreamPipelineT&& value) { SetMediaStreamPipeline(std::forward<MediaStreamPipelineT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    CreateMediaStreamPipelineResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    MediaStreamPipeline m_mediaStreamPipeline;
    bool m_mediaStreamPipelineHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace ChimeSDKMediaPipelines
} // namespace Aws
