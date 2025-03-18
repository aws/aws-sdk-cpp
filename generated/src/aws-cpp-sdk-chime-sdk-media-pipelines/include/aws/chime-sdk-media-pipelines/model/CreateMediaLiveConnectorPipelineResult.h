/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime-sdk-media-pipelines/ChimeSDKMediaPipelines_EXPORTS.h>
#include <aws/chime-sdk-media-pipelines/model/MediaLiveConnectorPipeline.h>
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
  class CreateMediaLiveConnectorPipelineResult
  {
  public:
    AWS_CHIMESDKMEDIAPIPELINES_API CreateMediaLiveConnectorPipelineResult() = default;
    AWS_CHIMESDKMEDIAPIPELINES_API CreateMediaLiveConnectorPipelineResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CHIMESDKMEDIAPIPELINES_API CreateMediaLiveConnectorPipelineResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The new media live connector pipeline.</p>
     */
    inline const MediaLiveConnectorPipeline& GetMediaLiveConnectorPipeline() const { return m_mediaLiveConnectorPipeline; }
    template<typename MediaLiveConnectorPipelineT = MediaLiveConnectorPipeline>
    void SetMediaLiveConnectorPipeline(MediaLiveConnectorPipelineT&& value) { m_mediaLiveConnectorPipelineHasBeenSet = true; m_mediaLiveConnectorPipeline = std::forward<MediaLiveConnectorPipelineT>(value); }
    template<typename MediaLiveConnectorPipelineT = MediaLiveConnectorPipeline>
    CreateMediaLiveConnectorPipelineResult& WithMediaLiveConnectorPipeline(MediaLiveConnectorPipelineT&& value) { SetMediaLiveConnectorPipeline(std::forward<MediaLiveConnectorPipelineT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    CreateMediaLiveConnectorPipelineResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    MediaLiveConnectorPipeline m_mediaLiveConnectorPipeline;
    bool m_mediaLiveConnectorPipelineHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace ChimeSDKMediaPipelines
} // namespace Aws
