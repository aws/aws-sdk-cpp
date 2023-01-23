/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime/Chime_EXPORTS.h>
#include <aws/chime/model/MediaCapturePipeline.h>
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
namespace Chime
{
namespace Model
{
  class CreateMediaCapturePipelineResult
  {
  public:
    AWS_CHIME_API CreateMediaCapturePipelineResult();
    AWS_CHIME_API CreateMediaCapturePipelineResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CHIME_API CreateMediaCapturePipelineResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A media capture pipeline object, the ID, source type, source ARN, sink type,
     * and sink ARN of a media capture pipeline object.</p>
     */
    inline const MediaCapturePipeline& GetMediaCapturePipeline() const{ return m_mediaCapturePipeline; }

    /**
     * <p>A media capture pipeline object, the ID, source type, source ARN, sink type,
     * and sink ARN of a media capture pipeline object.</p>
     */
    inline void SetMediaCapturePipeline(const MediaCapturePipeline& value) { m_mediaCapturePipeline = value; }

    /**
     * <p>A media capture pipeline object, the ID, source type, source ARN, sink type,
     * and sink ARN of a media capture pipeline object.</p>
     */
    inline void SetMediaCapturePipeline(MediaCapturePipeline&& value) { m_mediaCapturePipeline = std::move(value); }

    /**
     * <p>A media capture pipeline object, the ID, source type, source ARN, sink type,
     * and sink ARN of a media capture pipeline object.</p>
     */
    inline CreateMediaCapturePipelineResult& WithMediaCapturePipeline(const MediaCapturePipeline& value) { SetMediaCapturePipeline(value); return *this;}

    /**
     * <p>A media capture pipeline object, the ID, source type, source ARN, sink type,
     * and sink ARN of a media capture pipeline object.</p>
     */
    inline CreateMediaCapturePipelineResult& WithMediaCapturePipeline(MediaCapturePipeline&& value) { SetMediaCapturePipeline(std::move(value)); return *this;}

  private:

    MediaCapturePipeline m_mediaCapturePipeline;
  };

} // namespace Model
} // namespace Chime
} // namespace Aws
