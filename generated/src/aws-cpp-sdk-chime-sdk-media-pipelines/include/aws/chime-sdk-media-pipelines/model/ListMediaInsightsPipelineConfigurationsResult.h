/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime-sdk-media-pipelines/ChimeSDKMediaPipelines_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/chime-sdk-media-pipelines/model/MediaInsightsPipelineConfigurationSummary.h>
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
  class ListMediaInsightsPipelineConfigurationsResult
  {
  public:
    AWS_CHIMESDKMEDIAPIPELINES_API ListMediaInsightsPipelineConfigurationsResult();
    AWS_CHIMESDKMEDIAPIPELINES_API ListMediaInsightsPipelineConfigurationsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CHIMESDKMEDIAPIPELINES_API ListMediaInsightsPipelineConfigurationsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The requested list of media insights pipeline configurations.</p>
     */
    inline const Aws::Vector<MediaInsightsPipelineConfigurationSummary>& GetMediaInsightsPipelineConfigurations() const{ return m_mediaInsightsPipelineConfigurations; }

    /**
     * <p>The requested list of media insights pipeline configurations.</p>
     */
    inline void SetMediaInsightsPipelineConfigurations(const Aws::Vector<MediaInsightsPipelineConfigurationSummary>& value) { m_mediaInsightsPipelineConfigurations = value; }

    /**
     * <p>The requested list of media insights pipeline configurations.</p>
     */
    inline void SetMediaInsightsPipelineConfigurations(Aws::Vector<MediaInsightsPipelineConfigurationSummary>&& value) { m_mediaInsightsPipelineConfigurations = std::move(value); }

    /**
     * <p>The requested list of media insights pipeline configurations.</p>
     */
    inline ListMediaInsightsPipelineConfigurationsResult& WithMediaInsightsPipelineConfigurations(const Aws::Vector<MediaInsightsPipelineConfigurationSummary>& value) { SetMediaInsightsPipelineConfigurations(value); return *this;}

    /**
     * <p>The requested list of media insights pipeline configurations.</p>
     */
    inline ListMediaInsightsPipelineConfigurationsResult& WithMediaInsightsPipelineConfigurations(Aws::Vector<MediaInsightsPipelineConfigurationSummary>&& value) { SetMediaInsightsPipelineConfigurations(std::move(value)); return *this;}

    /**
     * <p>The requested list of media insights pipeline configurations.</p>
     */
    inline ListMediaInsightsPipelineConfigurationsResult& AddMediaInsightsPipelineConfigurations(const MediaInsightsPipelineConfigurationSummary& value) { m_mediaInsightsPipelineConfigurations.push_back(value); return *this; }

    /**
     * <p>The requested list of media insights pipeline configurations.</p>
     */
    inline ListMediaInsightsPipelineConfigurationsResult& AddMediaInsightsPipelineConfigurations(MediaInsightsPipelineConfigurationSummary&& value) { m_mediaInsightsPipelineConfigurations.push_back(std::move(value)); return *this; }


    /**
     * <p>The token used to return the next page of results. </p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The token used to return the next page of results. </p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>The token used to return the next page of results. </p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>The token used to return the next page of results. </p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>The token used to return the next page of results. </p>
     */
    inline ListMediaInsightsPipelineConfigurationsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token used to return the next page of results. </p>
     */
    inline ListMediaInsightsPipelineConfigurationsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token used to return the next page of results. </p>
     */
    inline ListMediaInsightsPipelineConfigurationsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline ListMediaInsightsPipelineConfigurationsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline ListMediaInsightsPipelineConfigurationsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline ListMediaInsightsPipelineConfigurationsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::Vector<MediaInsightsPipelineConfigurationSummary> m_mediaInsightsPipelineConfigurations;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace ChimeSDKMediaPipelines
} // namespace Aws
