/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime-sdk-media-pipelines/ChimeSDKMediaPipelines_EXPORTS.h>
#include <aws/chime-sdk-media-pipelines/model/MediaCapturePipeline.h>
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
  class GetMediaCapturePipelineResult
  {
  public:
    AWS_CHIMESDKMEDIAPIPELINES_API GetMediaCapturePipelineResult() = default;
    AWS_CHIMESDKMEDIAPIPELINES_API GetMediaCapturePipelineResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CHIMESDKMEDIAPIPELINES_API GetMediaCapturePipelineResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The media pipeline object.</p>
     */
    inline const MediaCapturePipeline& GetMediaCapturePipeline() const { return m_mediaCapturePipeline; }
    template<typename MediaCapturePipelineT = MediaCapturePipeline>
    void SetMediaCapturePipeline(MediaCapturePipelineT&& value) { m_mediaCapturePipelineHasBeenSet = true; m_mediaCapturePipeline = std::forward<MediaCapturePipelineT>(value); }
    template<typename MediaCapturePipelineT = MediaCapturePipeline>
    GetMediaCapturePipelineResult& WithMediaCapturePipeline(MediaCapturePipelineT&& value) { SetMediaCapturePipeline(std::forward<MediaCapturePipelineT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetMediaCapturePipelineResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    MediaCapturePipeline m_mediaCapturePipeline;
    bool m_mediaCapturePipelineHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace ChimeSDKMediaPipelines
} // namespace Aws
