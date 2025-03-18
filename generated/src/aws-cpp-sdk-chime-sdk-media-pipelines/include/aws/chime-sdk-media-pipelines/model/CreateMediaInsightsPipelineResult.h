/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime-sdk-media-pipelines/ChimeSDKMediaPipelines_EXPORTS.h>
#include <aws/chime-sdk-media-pipelines/model/MediaInsightsPipeline.h>
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
  class CreateMediaInsightsPipelineResult
  {
  public:
    AWS_CHIMESDKMEDIAPIPELINES_API CreateMediaInsightsPipelineResult() = default;
    AWS_CHIMESDKMEDIAPIPELINES_API CreateMediaInsightsPipelineResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CHIMESDKMEDIAPIPELINES_API CreateMediaInsightsPipelineResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The media insights pipeline object.</p>
     */
    inline const MediaInsightsPipeline& GetMediaInsightsPipeline() const { return m_mediaInsightsPipeline; }
    template<typename MediaInsightsPipelineT = MediaInsightsPipeline>
    void SetMediaInsightsPipeline(MediaInsightsPipelineT&& value) { m_mediaInsightsPipelineHasBeenSet = true; m_mediaInsightsPipeline = std::forward<MediaInsightsPipelineT>(value); }
    template<typename MediaInsightsPipelineT = MediaInsightsPipeline>
    CreateMediaInsightsPipelineResult& WithMediaInsightsPipeline(MediaInsightsPipelineT&& value) { SetMediaInsightsPipeline(std::forward<MediaInsightsPipelineT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    CreateMediaInsightsPipelineResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    MediaInsightsPipeline m_mediaInsightsPipeline;
    bool m_mediaInsightsPipelineHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace ChimeSDKMediaPipelines
} // namespace Aws
