﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime-sdk-media-pipelines/ChimeSDKMediaPipelines_EXPORTS.h>
#include <aws/chime-sdk-media-pipelines/model/MediaPipeline.h>
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
  class GetMediaPipelineResult
  {
  public:
    AWS_CHIMESDKMEDIAPIPELINES_API GetMediaPipelineResult();
    AWS_CHIMESDKMEDIAPIPELINES_API GetMediaPipelineResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CHIMESDKMEDIAPIPELINES_API GetMediaPipelineResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The media pipeline object.</p>
     */
    inline const MediaPipeline& GetMediaPipeline() const{ return m_mediaPipeline; }

    /**
     * <p>The media pipeline object.</p>
     */
    inline void SetMediaPipeline(const MediaPipeline& value) { m_mediaPipeline = value; }

    /**
     * <p>The media pipeline object.</p>
     */
    inline void SetMediaPipeline(MediaPipeline&& value) { m_mediaPipeline = std::move(value); }

    /**
     * <p>The media pipeline object.</p>
     */
    inline GetMediaPipelineResult& WithMediaPipeline(const MediaPipeline& value) { SetMediaPipeline(value); return *this;}

    /**
     * <p>The media pipeline object.</p>
     */
    inline GetMediaPipelineResult& WithMediaPipeline(MediaPipeline&& value) { SetMediaPipeline(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline GetMediaPipelineResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline GetMediaPipelineResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline GetMediaPipelineResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    MediaPipeline m_mediaPipeline;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace ChimeSDKMediaPipelines
} // namespace Aws
