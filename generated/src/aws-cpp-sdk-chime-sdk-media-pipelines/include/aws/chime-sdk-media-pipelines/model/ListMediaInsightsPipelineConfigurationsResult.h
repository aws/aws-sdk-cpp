/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime-sdk-media-pipelines/ChimeSDKMediaPipelines_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/chime-sdk-media-pipelines/model/MediaInsightsPipelineConfigurationSummary.h>
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
  class ListMediaInsightsPipelineConfigurationsResult
  {
  public:
    AWS_CHIMESDKMEDIAPIPELINES_API ListMediaInsightsPipelineConfigurationsResult() = default;
    AWS_CHIMESDKMEDIAPIPELINES_API ListMediaInsightsPipelineConfigurationsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CHIMESDKMEDIAPIPELINES_API ListMediaInsightsPipelineConfigurationsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The requested list of media insights pipeline configurations.</p>
     */
    inline const Aws::Vector<MediaInsightsPipelineConfigurationSummary>& GetMediaInsightsPipelineConfigurations() const { return m_mediaInsightsPipelineConfigurations; }
    template<typename MediaInsightsPipelineConfigurationsT = Aws::Vector<MediaInsightsPipelineConfigurationSummary>>
    void SetMediaInsightsPipelineConfigurations(MediaInsightsPipelineConfigurationsT&& value) { m_mediaInsightsPipelineConfigurationsHasBeenSet = true; m_mediaInsightsPipelineConfigurations = std::forward<MediaInsightsPipelineConfigurationsT>(value); }
    template<typename MediaInsightsPipelineConfigurationsT = Aws::Vector<MediaInsightsPipelineConfigurationSummary>>
    ListMediaInsightsPipelineConfigurationsResult& WithMediaInsightsPipelineConfigurations(MediaInsightsPipelineConfigurationsT&& value) { SetMediaInsightsPipelineConfigurations(std::forward<MediaInsightsPipelineConfigurationsT>(value)); return *this;}
    template<typename MediaInsightsPipelineConfigurationsT = MediaInsightsPipelineConfigurationSummary>
    ListMediaInsightsPipelineConfigurationsResult& AddMediaInsightsPipelineConfigurations(MediaInsightsPipelineConfigurationsT&& value) { m_mediaInsightsPipelineConfigurationsHasBeenSet = true; m_mediaInsightsPipelineConfigurations.emplace_back(std::forward<MediaInsightsPipelineConfigurationsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The token used to return the next page of results. </p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListMediaInsightsPipelineConfigurationsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListMediaInsightsPipelineConfigurationsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<MediaInsightsPipelineConfigurationSummary> m_mediaInsightsPipelineConfigurations;
    bool m_mediaInsightsPipelineConfigurationsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace ChimeSDKMediaPipelines
} // namespace Aws
