/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime-sdk-media-pipelines/ChimeSDKMediaPipelines_EXPORTS.h>
#include <aws/chime-sdk-media-pipelines/model/MediaCapturePipeline.h>
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
  class GetMediaCapturePipelineResult
  {
  public:
    AWS_CHIMESDKMEDIAPIPELINES_API GetMediaCapturePipelineResult();
    AWS_CHIMESDKMEDIAPIPELINES_API GetMediaCapturePipelineResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CHIMESDKMEDIAPIPELINES_API GetMediaCapturePipelineResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The media pipeline object.</p>
     */
    inline const MediaCapturePipeline& GetMediaCapturePipeline() const{ return m_mediaCapturePipeline; }

    /**
     * <p>The media pipeline object.</p>
     */
    inline void SetMediaCapturePipeline(const MediaCapturePipeline& value) { m_mediaCapturePipeline = value; }

    /**
     * <p>The media pipeline object.</p>
     */
    inline void SetMediaCapturePipeline(MediaCapturePipeline&& value) { m_mediaCapturePipeline = std::move(value); }

    /**
     * <p>The media pipeline object.</p>
     */
    inline GetMediaCapturePipelineResult& WithMediaCapturePipeline(const MediaCapturePipeline& value) { SetMediaCapturePipeline(value); return *this;}

    /**
     * <p>The media pipeline object.</p>
     */
    inline GetMediaCapturePipelineResult& WithMediaCapturePipeline(MediaCapturePipeline&& value) { SetMediaCapturePipeline(std::move(value)); return *this;}

  private:

    MediaCapturePipeline m_mediaCapturePipeline;
  };

} // namespace Model
} // namespace ChimeSDKMediaPipelines
} // namespace Aws
