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
  class CreateMediaCapturePipelineResult
  {
  public:
    AWS_CHIMESDKMEDIAPIPELINES_API CreateMediaCapturePipelineResult();
    AWS_CHIMESDKMEDIAPIPELINES_API CreateMediaCapturePipelineResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CHIMESDKMEDIAPIPELINES_API CreateMediaCapturePipelineResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A media pipeline object, the ID, source type, source ARN, sink type, and sink
     * ARN of a media pipeline object.</p>
     */
    inline const MediaCapturePipeline& GetMediaCapturePipeline() const{ return m_mediaCapturePipeline; }

    /**
     * <p>A media pipeline object, the ID, source type, source ARN, sink type, and sink
     * ARN of a media pipeline object.</p>
     */
    inline void SetMediaCapturePipeline(const MediaCapturePipeline& value) { m_mediaCapturePipeline = value; }

    /**
     * <p>A media pipeline object, the ID, source type, source ARN, sink type, and sink
     * ARN of a media pipeline object.</p>
     */
    inline void SetMediaCapturePipeline(MediaCapturePipeline&& value) { m_mediaCapturePipeline = std::move(value); }

    /**
     * <p>A media pipeline object, the ID, source type, source ARN, sink type, and sink
     * ARN of a media pipeline object.</p>
     */
    inline CreateMediaCapturePipelineResult& WithMediaCapturePipeline(const MediaCapturePipeline& value) { SetMediaCapturePipeline(value); return *this;}

    /**
     * <p>A media pipeline object, the ID, source type, source ARN, sink type, and sink
     * ARN of a media pipeline object.</p>
     */
    inline CreateMediaCapturePipelineResult& WithMediaCapturePipeline(MediaCapturePipeline&& value) { SetMediaCapturePipeline(std::move(value)); return *this;}

  private:

    MediaCapturePipeline m_mediaCapturePipeline;
  };

} // namespace Model
} // namespace ChimeSDKMediaPipelines
} // namespace Aws
