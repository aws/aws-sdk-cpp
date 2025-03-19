/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime-sdk-media-pipelines/ChimeSDKMediaPipelines_EXPORTS.h>
#include <aws/chime-sdk-media-pipelines/model/MediaInsightsPipelineConfiguration.h>
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
  class CreateMediaInsightsPipelineConfigurationResult
  {
  public:
    AWS_CHIMESDKMEDIAPIPELINES_API CreateMediaInsightsPipelineConfigurationResult() = default;
    AWS_CHIMESDKMEDIAPIPELINES_API CreateMediaInsightsPipelineConfigurationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CHIMESDKMEDIAPIPELINES_API CreateMediaInsightsPipelineConfigurationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The configuration settings for the media insights pipeline.</p>
     */
    inline const MediaInsightsPipelineConfiguration& GetMediaInsightsPipelineConfiguration() const { return m_mediaInsightsPipelineConfiguration; }
    template<typename MediaInsightsPipelineConfigurationT = MediaInsightsPipelineConfiguration>
    void SetMediaInsightsPipelineConfiguration(MediaInsightsPipelineConfigurationT&& value) { m_mediaInsightsPipelineConfigurationHasBeenSet = true; m_mediaInsightsPipelineConfiguration = std::forward<MediaInsightsPipelineConfigurationT>(value); }
    template<typename MediaInsightsPipelineConfigurationT = MediaInsightsPipelineConfiguration>
    CreateMediaInsightsPipelineConfigurationResult& WithMediaInsightsPipelineConfiguration(MediaInsightsPipelineConfigurationT&& value) { SetMediaInsightsPipelineConfiguration(std::forward<MediaInsightsPipelineConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    CreateMediaInsightsPipelineConfigurationResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    MediaInsightsPipelineConfiguration m_mediaInsightsPipelineConfiguration;
    bool m_mediaInsightsPipelineConfigurationHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace ChimeSDKMediaPipelines
} // namespace Aws
