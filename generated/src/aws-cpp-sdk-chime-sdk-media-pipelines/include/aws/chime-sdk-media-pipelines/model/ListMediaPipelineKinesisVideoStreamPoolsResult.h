/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime-sdk-media-pipelines/ChimeSDKMediaPipelines_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/chime-sdk-media-pipelines/model/KinesisVideoStreamPoolSummary.h>
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
  class ListMediaPipelineKinesisVideoStreamPoolsResult
  {
  public:
    AWS_CHIMESDKMEDIAPIPELINES_API ListMediaPipelineKinesisVideoStreamPoolsResult() = default;
    AWS_CHIMESDKMEDIAPIPELINES_API ListMediaPipelineKinesisVideoStreamPoolsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CHIMESDKMEDIAPIPELINES_API ListMediaPipelineKinesisVideoStreamPoolsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The list of video stream pools.</p>
     */
    inline const Aws::Vector<KinesisVideoStreamPoolSummary>& GetKinesisVideoStreamPools() const { return m_kinesisVideoStreamPools; }
    template<typename KinesisVideoStreamPoolsT = Aws::Vector<KinesisVideoStreamPoolSummary>>
    void SetKinesisVideoStreamPools(KinesisVideoStreamPoolsT&& value) { m_kinesisVideoStreamPoolsHasBeenSet = true; m_kinesisVideoStreamPools = std::forward<KinesisVideoStreamPoolsT>(value); }
    template<typename KinesisVideoStreamPoolsT = Aws::Vector<KinesisVideoStreamPoolSummary>>
    ListMediaPipelineKinesisVideoStreamPoolsResult& WithKinesisVideoStreamPools(KinesisVideoStreamPoolsT&& value) { SetKinesisVideoStreamPools(std::forward<KinesisVideoStreamPoolsT>(value)); return *this;}
    template<typename KinesisVideoStreamPoolsT = KinesisVideoStreamPoolSummary>
    ListMediaPipelineKinesisVideoStreamPoolsResult& AddKinesisVideoStreamPools(KinesisVideoStreamPoolsT&& value) { m_kinesisVideoStreamPoolsHasBeenSet = true; m_kinesisVideoStreamPools.emplace_back(std::forward<KinesisVideoStreamPoolsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The token used to return the next page of results.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListMediaPipelineKinesisVideoStreamPoolsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListMediaPipelineKinesisVideoStreamPoolsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<KinesisVideoStreamPoolSummary> m_kinesisVideoStreamPools;
    bool m_kinesisVideoStreamPoolsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace ChimeSDKMediaPipelines
} // namespace Aws
