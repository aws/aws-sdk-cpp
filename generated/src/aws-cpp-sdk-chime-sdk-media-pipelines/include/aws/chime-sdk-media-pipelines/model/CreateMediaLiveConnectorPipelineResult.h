/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime-sdk-media-pipelines/ChimeSDKMediaPipelines_EXPORTS.h>
#include <aws/chime-sdk-media-pipelines/model/MediaLiveConnectorPipeline.h>
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
  class CreateMediaLiveConnectorPipelineResult
  {
  public:
    AWS_CHIMESDKMEDIAPIPELINES_API CreateMediaLiveConnectorPipelineResult();
    AWS_CHIMESDKMEDIAPIPELINES_API CreateMediaLiveConnectorPipelineResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CHIMESDKMEDIAPIPELINES_API CreateMediaLiveConnectorPipelineResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The new media pipeline.</p>
     */
    inline const MediaLiveConnectorPipeline& GetMediaLiveConnectorPipeline() const{ return m_mediaLiveConnectorPipeline; }

    /**
     * <p>The new media pipeline.</p>
     */
    inline void SetMediaLiveConnectorPipeline(const MediaLiveConnectorPipeline& value) { m_mediaLiveConnectorPipeline = value; }

    /**
     * <p>The new media pipeline.</p>
     */
    inline void SetMediaLiveConnectorPipeline(MediaLiveConnectorPipeline&& value) { m_mediaLiveConnectorPipeline = std::move(value); }

    /**
     * <p>The new media pipeline.</p>
     */
    inline CreateMediaLiveConnectorPipelineResult& WithMediaLiveConnectorPipeline(const MediaLiveConnectorPipeline& value) { SetMediaLiveConnectorPipeline(value); return *this;}

    /**
     * <p>The new media pipeline.</p>
     */
    inline CreateMediaLiveConnectorPipelineResult& WithMediaLiveConnectorPipeline(MediaLiveConnectorPipeline&& value) { SetMediaLiveConnectorPipeline(std::move(value)); return *this;}

  private:

    MediaLiveConnectorPipeline m_mediaLiveConnectorPipeline;
  };

} // namespace Model
} // namespace ChimeSDKMediaPipelines
} // namespace Aws
