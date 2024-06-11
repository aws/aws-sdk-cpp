﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime-sdk-media-pipelines/ChimeSDKMediaPipelines_EXPORTS.h>
#include <aws/chime-sdk-media-pipelines/model/MediaConcatenationPipeline.h>
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
  class CreateMediaConcatenationPipelineResult
  {
  public:
    AWS_CHIMESDKMEDIAPIPELINES_API CreateMediaConcatenationPipelineResult();
    AWS_CHIMESDKMEDIAPIPELINES_API CreateMediaConcatenationPipelineResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CHIMESDKMEDIAPIPELINES_API CreateMediaConcatenationPipelineResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A media concatenation pipeline object, the ID, source type,
     * <code>MediaPipelineARN</code>, and sink of a media concatenation pipeline
     * object.</p>
     */
    inline const MediaConcatenationPipeline& GetMediaConcatenationPipeline() const{ return m_mediaConcatenationPipeline; }
    inline void SetMediaConcatenationPipeline(const MediaConcatenationPipeline& value) { m_mediaConcatenationPipeline = value; }
    inline void SetMediaConcatenationPipeline(MediaConcatenationPipeline&& value) { m_mediaConcatenationPipeline = std::move(value); }
    inline CreateMediaConcatenationPipelineResult& WithMediaConcatenationPipeline(const MediaConcatenationPipeline& value) { SetMediaConcatenationPipeline(value); return *this;}
    inline CreateMediaConcatenationPipelineResult& WithMediaConcatenationPipeline(MediaConcatenationPipeline&& value) { SetMediaConcatenationPipeline(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline CreateMediaConcatenationPipelineResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline CreateMediaConcatenationPipelineResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline CreateMediaConcatenationPipelineResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    MediaConcatenationPipeline m_mediaConcatenationPipeline;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace ChimeSDKMediaPipelines
} // namespace Aws
