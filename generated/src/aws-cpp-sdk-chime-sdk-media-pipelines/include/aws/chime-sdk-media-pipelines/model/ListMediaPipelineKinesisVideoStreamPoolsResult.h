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
    AWS_CHIMESDKMEDIAPIPELINES_API ListMediaPipelineKinesisVideoStreamPoolsResult();
    AWS_CHIMESDKMEDIAPIPELINES_API ListMediaPipelineKinesisVideoStreamPoolsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CHIMESDKMEDIAPIPELINES_API ListMediaPipelineKinesisVideoStreamPoolsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The list of video stream pools.</p>
     */
    inline const Aws::Vector<KinesisVideoStreamPoolSummary>& GetKinesisVideoStreamPools() const{ return m_kinesisVideoStreamPools; }

    /**
     * <p>The list of video stream pools.</p>
     */
    inline void SetKinesisVideoStreamPools(const Aws::Vector<KinesisVideoStreamPoolSummary>& value) { m_kinesisVideoStreamPools = value; }

    /**
     * <p>The list of video stream pools.</p>
     */
    inline void SetKinesisVideoStreamPools(Aws::Vector<KinesisVideoStreamPoolSummary>&& value) { m_kinesisVideoStreamPools = std::move(value); }

    /**
     * <p>The list of video stream pools.</p>
     */
    inline ListMediaPipelineKinesisVideoStreamPoolsResult& WithKinesisVideoStreamPools(const Aws::Vector<KinesisVideoStreamPoolSummary>& value) { SetKinesisVideoStreamPools(value); return *this;}

    /**
     * <p>The list of video stream pools.</p>
     */
    inline ListMediaPipelineKinesisVideoStreamPoolsResult& WithKinesisVideoStreamPools(Aws::Vector<KinesisVideoStreamPoolSummary>&& value) { SetKinesisVideoStreamPools(std::move(value)); return *this;}

    /**
     * <p>The list of video stream pools.</p>
     */
    inline ListMediaPipelineKinesisVideoStreamPoolsResult& AddKinesisVideoStreamPools(const KinesisVideoStreamPoolSummary& value) { m_kinesisVideoStreamPools.push_back(value); return *this; }

    /**
     * <p>The list of video stream pools.</p>
     */
    inline ListMediaPipelineKinesisVideoStreamPoolsResult& AddKinesisVideoStreamPools(KinesisVideoStreamPoolSummary&& value) { m_kinesisVideoStreamPools.push_back(std::move(value)); return *this; }


    /**
     * <p>The token used to return the next page of results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The token used to return the next page of results.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>The token used to return the next page of results.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>The token used to return the next page of results.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>The token used to return the next page of results.</p>
     */
    inline ListMediaPipelineKinesisVideoStreamPoolsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token used to return the next page of results.</p>
     */
    inline ListMediaPipelineKinesisVideoStreamPoolsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token used to return the next page of results.</p>
     */
    inline ListMediaPipelineKinesisVideoStreamPoolsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline ListMediaPipelineKinesisVideoStreamPoolsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline ListMediaPipelineKinesisVideoStreamPoolsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline ListMediaPipelineKinesisVideoStreamPoolsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::Vector<KinesisVideoStreamPoolSummary> m_kinesisVideoStreamPools;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace ChimeSDKMediaPipelines
} // namespace Aws
