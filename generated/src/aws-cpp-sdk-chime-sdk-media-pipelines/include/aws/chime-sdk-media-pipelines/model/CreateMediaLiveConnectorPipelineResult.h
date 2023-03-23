/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime-sdk-media-pipelines/ChimeSDKMediaPipelines_EXPORTS.h>
#include <aws/chime-sdk-media-pipelines/model/MediaLiveConnectorPipeline.h>
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
  class CreateMediaLiveConnectorPipelineResult
  {
  public:
    AWS_CHIMESDKMEDIAPIPELINES_API CreateMediaLiveConnectorPipelineResult();
    AWS_CHIMESDKMEDIAPIPELINES_API CreateMediaLiveConnectorPipelineResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CHIMESDKMEDIAPIPELINES_API CreateMediaLiveConnectorPipelineResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The new media live connector pipeline.</p>
     */
    inline const MediaLiveConnectorPipeline& GetMediaLiveConnectorPipeline() const{ return m_mediaLiveConnectorPipeline; }

    /**
     * <p>The new media live connector pipeline.</p>
     */
    inline void SetMediaLiveConnectorPipeline(const MediaLiveConnectorPipeline& value) { m_mediaLiveConnectorPipeline = value; }

    /**
     * <p>The new media live connector pipeline.</p>
     */
    inline void SetMediaLiveConnectorPipeline(MediaLiveConnectorPipeline&& value) { m_mediaLiveConnectorPipeline = std::move(value); }

    /**
     * <p>The new media live connector pipeline.</p>
     */
    inline CreateMediaLiveConnectorPipelineResult& WithMediaLiveConnectorPipeline(const MediaLiveConnectorPipeline& value) { SetMediaLiveConnectorPipeline(value); return *this;}

    /**
     * <p>The new media live connector pipeline.</p>
     */
    inline CreateMediaLiveConnectorPipelineResult& WithMediaLiveConnectorPipeline(MediaLiveConnectorPipeline&& value) { SetMediaLiveConnectorPipeline(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline CreateMediaLiveConnectorPipelineResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline CreateMediaLiveConnectorPipelineResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline CreateMediaLiveConnectorPipelineResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    MediaLiveConnectorPipeline m_mediaLiveConnectorPipeline;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace ChimeSDKMediaPipelines
} // namespace Aws
