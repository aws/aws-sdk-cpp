/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime-sdk-media-pipelines/ChimeSDKMediaPipelines_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/chime-sdk-media-pipelines/model/MediaPipelineSummary.h>
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
  class ListMediaPipelinesResult
  {
  public:
    AWS_CHIMESDKMEDIAPIPELINES_API ListMediaPipelinesResult() = default;
    AWS_CHIMESDKMEDIAPIPELINES_API ListMediaPipelinesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CHIMESDKMEDIAPIPELINES_API ListMediaPipelinesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The media pipeline objects in the list.</p>
     */
    inline const Aws::Vector<MediaPipelineSummary>& GetMediaPipelines() const { return m_mediaPipelines; }
    template<typename MediaPipelinesT = Aws::Vector<MediaPipelineSummary>>
    void SetMediaPipelines(MediaPipelinesT&& value) { m_mediaPipelinesHasBeenSet = true; m_mediaPipelines = std::forward<MediaPipelinesT>(value); }
    template<typename MediaPipelinesT = Aws::Vector<MediaPipelineSummary>>
    ListMediaPipelinesResult& WithMediaPipelines(MediaPipelinesT&& value) { SetMediaPipelines(std::forward<MediaPipelinesT>(value)); return *this;}
    template<typename MediaPipelinesT = MediaPipelineSummary>
    ListMediaPipelinesResult& AddMediaPipelines(MediaPipelinesT&& value) { m_mediaPipelinesHasBeenSet = true; m_mediaPipelines.emplace_back(std::forward<MediaPipelinesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The token used to retrieve the next page of results. </p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListMediaPipelinesResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListMediaPipelinesResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<MediaPipelineSummary> m_mediaPipelines;
    bool m_mediaPipelinesHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace ChimeSDKMediaPipelines
} // namespace Aws
