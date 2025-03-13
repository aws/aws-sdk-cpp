/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime-sdk-media-pipelines/ChimeSDKMediaPipelines_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/chime-sdk-media-pipelines/model/MediaCapturePipelineSummary.h>
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
  class ListMediaCapturePipelinesResult
  {
  public:
    AWS_CHIMESDKMEDIAPIPELINES_API ListMediaCapturePipelinesResult() = default;
    AWS_CHIMESDKMEDIAPIPELINES_API ListMediaCapturePipelinesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CHIMESDKMEDIAPIPELINES_API ListMediaCapturePipelinesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The media pipeline objects in the list.</p>
     */
    inline const Aws::Vector<MediaCapturePipelineSummary>& GetMediaCapturePipelines() const { return m_mediaCapturePipelines; }
    template<typename MediaCapturePipelinesT = Aws::Vector<MediaCapturePipelineSummary>>
    void SetMediaCapturePipelines(MediaCapturePipelinesT&& value) { m_mediaCapturePipelinesHasBeenSet = true; m_mediaCapturePipelines = std::forward<MediaCapturePipelinesT>(value); }
    template<typename MediaCapturePipelinesT = Aws::Vector<MediaCapturePipelineSummary>>
    ListMediaCapturePipelinesResult& WithMediaCapturePipelines(MediaCapturePipelinesT&& value) { SetMediaCapturePipelines(std::forward<MediaCapturePipelinesT>(value)); return *this;}
    template<typename MediaCapturePipelinesT = MediaCapturePipelineSummary>
    ListMediaCapturePipelinesResult& AddMediaCapturePipelines(MediaCapturePipelinesT&& value) { m_mediaCapturePipelinesHasBeenSet = true; m_mediaCapturePipelines.emplace_back(std::forward<MediaCapturePipelinesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The token used to retrieve the next page of results. </p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListMediaCapturePipelinesResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListMediaCapturePipelinesResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<MediaCapturePipelineSummary> m_mediaCapturePipelines;
    bool m_mediaCapturePipelinesHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace ChimeSDKMediaPipelines
} // namespace Aws
