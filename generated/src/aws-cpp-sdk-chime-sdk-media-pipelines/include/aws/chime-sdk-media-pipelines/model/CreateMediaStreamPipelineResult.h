/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime-sdk-media-pipelines/ChimeSDKMediaPipelines_EXPORTS.h>
#include <aws/chime-sdk-media-pipelines/model/MediaStreamPipeline.h>
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
  class CreateMediaStreamPipelineResult
  {
  public:
    AWS_CHIMESDKMEDIAPIPELINES_API CreateMediaStreamPipelineResult();
    AWS_CHIMESDKMEDIAPIPELINES_API CreateMediaStreamPipelineResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CHIMESDKMEDIAPIPELINES_API CreateMediaStreamPipelineResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The requested media pipeline.</p>
     */
    inline const MediaStreamPipeline& GetMediaStreamPipeline() const{ return m_mediaStreamPipeline; }

    /**
     * <p>The requested media pipeline.</p>
     */
    inline void SetMediaStreamPipeline(const MediaStreamPipeline& value) { m_mediaStreamPipeline = value; }

    /**
     * <p>The requested media pipeline.</p>
     */
    inline void SetMediaStreamPipeline(MediaStreamPipeline&& value) { m_mediaStreamPipeline = std::move(value); }

    /**
     * <p>The requested media pipeline.</p>
     */
    inline CreateMediaStreamPipelineResult& WithMediaStreamPipeline(const MediaStreamPipeline& value) { SetMediaStreamPipeline(value); return *this;}

    /**
     * <p>The requested media pipeline.</p>
     */
    inline CreateMediaStreamPipelineResult& WithMediaStreamPipeline(MediaStreamPipeline&& value) { SetMediaStreamPipeline(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline CreateMediaStreamPipelineResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline CreateMediaStreamPipelineResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline CreateMediaStreamPipelineResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    MediaStreamPipeline m_mediaStreamPipeline;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace ChimeSDKMediaPipelines
} // namespace Aws
