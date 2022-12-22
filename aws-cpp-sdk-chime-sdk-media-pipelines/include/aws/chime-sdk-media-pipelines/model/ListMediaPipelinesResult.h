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
    AWS_CHIMESDKMEDIAPIPELINES_API ListMediaPipelinesResult();
    AWS_CHIMESDKMEDIAPIPELINES_API ListMediaPipelinesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CHIMESDKMEDIAPIPELINES_API ListMediaPipelinesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The media pipeline objects in the list.</p>
     */
    inline const Aws::Vector<MediaPipelineSummary>& GetMediaPipelines() const{ return m_mediaPipelines; }

    /**
     * <p>The media pipeline objects in the list.</p>
     */
    inline void SetMediaPipelines(const Aws::Vector<MediaPipelineSummary>& value) { m_mediaPipelines = value; }

    /**
     * <p>The media pipeline objects in the list.</p>
     */
    inline void SetMediaPipelines(Aws::Vector<MediaPipelineSummary>&& value) { m_mediaPipelines = std::move(value); }

    /**
     * <p>The media pipeline objects in the list.</p>
     */
    inline ListMediaPipelinesResult& WithMediaPipelines(const Aws::Vector<MediaPipelineSummary>& value) { SetMediaPipelines(value); return *this;}

    /**
     * <p>The media pipeline objects in the list.</p>
     */
    inline ListMediaPipelinesResult& WithMediaPipelines(Aws::Vector<MediaPipelineSummary>&& value) { SetMediaPipelines(std::move(value)); return *this;}

    /**
     * <p>The media pipeline objects in the list.</p>
     */
    inline ListMediaPipelinesResult& AddMediaPipelines(const MediaPipelineSummary& value) { m_mediaPipelines.push_back(value); return *this; }

    /**
     * <p>The media pipeline objects in the list.</p>
     */
    inline ListMediaPipelinesResult& AddMediaPipelines(MediaPipelineSummary&& value) { m_mediaPipelines.push_back(std::move(value)); return *this; }


    /**
     * <p>The token used to retrieve the next page of results. </p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The token used to retrieve the next page of results. </p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>The token used to retrieve the next page of results. </p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>The token used to retrieve the next page of results. </p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>The token used to retrieve the next page of results. </p>
     */
    inline ListMediaPipelinesResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token used to retrieve the next page of results. </p>
     */
    inline ListMediaPipelinesResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token used to retrieve the next page of results. </p>
     */
    inline ListMediaPipelinesResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<MediaPipelineSummary> m_mediaPipelines;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace ChimeSDKMediaPipelines
} // namespace Aws
