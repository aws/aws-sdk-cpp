/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime-sdk-media-pipelines/ChimeSDKMediaPipelines_EXPORTS.h>
#include <aws/chime-sdk-media-pipelines/model/MediaConcatenationPipeline.h>
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
  class CreateMediaConcatenationPipelineResult
  {
  public:
    AWS_CHIMESDKMEDIAPIPELINES_API CreateMediaConcatenationPipelineResult() = default;
    AWS_CHIMESDKMEDIAPIPELINES_API CreateMediaConcatenationPipelineResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CHIMESDKMEDIAPIPELINES_API CreateMediaConcatenationPipelineResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A media concatenation pipeline object, the ID, source type,
     * <code>MediaPipelineARN</code>, and sink of a media concatenation pipeline
     * object.</p>
     */
    inline const MediaConcatenationPipeline& GetMediaConcatenationPipeline() const { return m_mediaConcatenationPipeline; }
    template<typename MediaConcatenationPipelineT = MediaConcatenationPipeline>
    void SetMediaConcatenationPipeline(MediaConcatenationPipelineT&& value) { m_mediaConcatenationPipelineHasBeenSet = true; m_mediaConcatenationPipeline = std::forward<MediaConcatenationPipelineT>(value); }
    template<typename MediaConcatenationPipelineT = MediaConcatenationPipeline>
    CreateMediaConcatenationPipelineResult& WithMediaConcatenationPipeline(MediaConcatenationPipelineT&& value) { SetMediaConcatenationPipeline(std::forward<MediaConcatenationPipelineT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    CreateMediaConcatenationPipelineResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    MediaConcatenationPipeline m_mediaConcatenationPipeline;
    bool m_mediaConcatenationPipelineHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace ChimeSDKMediaPipelines
} // namespace Aws
