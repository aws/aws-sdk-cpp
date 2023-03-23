/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime-sdk-media-pipelines/ChimeSDKMediaPipelines_EXPORTS.h>
#include <aws/chime-sdk-media-pipelines/model/MediaInsightsPipelineConfiguration.h>
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
  class CreateMediaInsightsPipelineConfigurationResult
  {
  public:
    AWS_CHIMESDKMEDIAPIPELINES_API CreateMediaInsightsPipelineConfigurationResult();
    AWS_CHIMESDKMEDIAPIPELINES_API CreateMediaInsightsPipelineConfigurationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CHIMESDKMEDIAPIPELINES_API CreateMediaInsightsPipelineConfigurationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The configuration settings for the media insights pipeline.</p>
     */
    inline const MediaInsightsPipelineConfiguration& GetMediaInsightsPipelineConfiguration() const{ return m_mediaInsightsPipelineConfiguration; }

    /**
     * <p>The configuration settings for the media insights pipeline.</p>
     */
    inline void SetMediaInsightsPipelineConfiguration(const MediaInsightsPipelineConfiguration& value) { m_mediaInsightsPipelineConfiguration = value; }

    /**
     * <p>The configuration settings for the media insights pipeline.</p>
     */
    inline void SetMediaInsightsPipelineConfiguration(MediaInsightsPipelineConfiguration&& value) { m_mediaInsightsPipelineConfiguration = std::move(value); }

    /**
     * <p>The configuration settings for the media insights pipeline.</p>
     */
    inline CreateMediaInsightsPipelineConfigurationResult& WithMediaInsightsPipelineConfiguration(const MediaInsightsPipelineConfiguration& value) { SetMediaInsightsPipelineConfiguration(value); return *this;}

    /**
     * <p>The configuration settings for the media insights pipeline.</p>
     */
    inline CreateMediaInsightsPipelineConfigurationResult& WithMediaInsightsPipelineConfiguration(MediaInsightsPipelineConfiguration&& value) { SetMediaInsightsPipelineConfiguration(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline CreateMediaInsightsPipelineConfigurationResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline CreateMediaInsightsPipelineConfigurationResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline CreateMediaInsightsPipelineConfigurationResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    MediaInsightsPipelineConfiguration m_mediaInsightsPipelineConfiguration;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace ChimeSDKMediaPipelines
} // namespace Aws
