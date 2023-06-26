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
    AWS_CHIMESDKMEDIAPIPELINES_API CreateMediaInsightsPipelineResult();
    AWS_CHIMESDKMEDIAPIPELINES_API CreateMediaInsightsPipelineResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CHIMESDKMEDIAPIPELINES_API CreateMediaInsightsPipelineResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The media insights pipeline object.</p>
     */
    inline const MediaInsightsPipeline& GetMediaInsightsPipeline() const{ return m_mediaInsightsPipeline; }

    /**
     * <p>The media insights pipeline object.</p>
     */
    inline void SetMediaInsightsPipeline(const MediaInsightsPipeline& value) { m_mediaInsightsPipeline = value; }

    /**
     * <p>The media insights pipeline object.</p>
     */
    inline void SetMediaInsightsPipeline(MediaInsightsPipeline&& value) { m_mediaInsightsPipeline = std::move(value); }

    /**
     * <p>The media insights pipeline object.</p>
     */
    inline CreateMediaInsightsPipelineResult& WithMediaInsightsPipeline(const MediaInsightsPipeline& value) { SetMediaInsightsPipeline(value); return *this;}

    /**
     * <p>The media insights pipeline object.</p>
     */
    inline CreateMediaInsightsPipelineResult& WithMediaInsightsPipeline(MediaInsightsPipeline&& value) { SetMediaInsightsPipeline(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline CreateMediaInsightsPipelineResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline CreateMediaInsightsPipelineResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline CreateMediaInsightsPipelineResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    MediaInsightsPipeline m_mediaInsightsPipeline;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace ChimeSDKMediaPipelines
} // namespace Aws
