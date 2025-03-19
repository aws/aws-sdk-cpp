/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime-sdk-media-pipelines/ChimeSDKMediaPipelines_EXPORTS.h>
#include <aws/chime-sdk-media-pipelines/model/MediaPipeline.h>
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
  class GetMediaPipelineResult
  {
  public:
    AWS_CHIMESDKMEDIAPIPELINES_API GetMediaPipelineResult() = default;
    AWS_CHIMESDKMEDIAPIPELINES_API GetMediaPipelineResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CHIMESDKMEDIAPIPELINES_API GetMediaPipelineResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The media pipeline object.</p>
     */
    inline const MediaPipeline& GetMediaPipeline() const { return m_mediaPipeline; }
    template<typename MediaPipelineT = MediaPipeline>
    void SetMediaPipeline(MediaPipelineT&& value) { m_mediaPipelineHasBeenSet = true; m_mediaPipeline = std::forward<MediaPipelineT>(value); }
    template<typename MediaPipelineT = MediaPipeline>
    GetMediaPipelineResult& WithMediaPipeline(MediaPipelineT&& value) { SetMediaPipeline(std::forward<MediaPipelineT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetMediaPipelineResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    MediaPipeline m_mediaPipeline;
    bool m_mediaPipelineHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace ChimeSDKMediaPipelines
} // namespace Aws
