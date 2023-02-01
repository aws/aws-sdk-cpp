/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime-sdk-media-pipelines/ChimeSDKMediaPipelines_EXPORTS.h>
#include <aws/chime-sdk-media-pipelines/ChimeSDKMediaPipelinesRequest.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/chime-sdk-media-pipelines/model/ConcatenationSource.h>
#include <aws/chime-sdk-media-pipelines/model/ConcatenationSink.h>
#include <aws/chime-sdk-media-pipelines/model/Tag.h>
#include <utility>
#include <aws/core/utils/UUID.h>

namespace Aws
{
namespace ChimeSDKMediaPipelines
{
namespace Model
{

  /**
   */
  class CreateMediaConcatenationPipelineRequest : public ChimeSDKMediaPipelinesRequest
  {
  public:
    AWS_CHIMESDKMEDIAPIPELINES_API CreateMediaConcatenationPipelineRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateMediaConcatenationPipeline"; }

    AWS_CHIMESDKMEDIAPIPELINES_API Aws::String SerializePayload() const override;


    /**
     * <p>An object that specifies the sources for the media concatenation
     * pipeline.</p>
     */
    inline const Aws::Vector<ConcatenationSource>& GetSources() const{ return m_sources; }

    /**
     * <p>An object that specifies the sources for the media concatenation
     * pipeline.</p>
     */
    inline bool SourcesHasBeenSet() const { return m_sourcesHasBeenSet; }

    /**
     * <p>An object that specifies the sources for the media concatenation
     * pipeline.</p>
     */
    inline void SetSources(const Aws::Vector<ConcatenationSource>& value) { m_sourcesHasBeenSet = true; m_sources = value; }

    /**
     * <p>An object that specifies the sources for the media concatenation
     * pipeline.</p>
     */
    inline void SetSources(Aws::Vector<ConcatenationSource>&& value) { m_sourcesHasBeenSet = true; m_sources = std::move(value); }

    /**
     * <p>An object that specifies the sources for the media concatenation
     * pipeline.</p>
     */
    inline CreateMediaConcatenationPipelineRequest& WithSources(const Aws::Vector<ConcatenationSource>& value) { SetSources(value); return *this;}

    /**
     * <p>An object that specifies the sources for the media concatenation
     * pipeline.</p>
     */
    inline CreateMediaConcatenationPipelineRequest& WithSources(Aws::Vector<ConcatenationSource>&& value) { SetSources(std::move(value)); return *this;}

    /**
     * <p>An object that specifies the sources for the media concatenation
     * pipeline.</p>
     */
    inline CreateMediaConcatenationPipelineRequest& AddSources(const ConcatenationSource& value) { m_sourcesHasBeenSet = true; m_sources.push_back(value); return *this; }

    /**
     * <p>An object that specifies the sources for the media concatenation
     * pipeline.</p>
     */
    inline CreateMediaConcatenationPipelineRequest& AddSources(ConcatenationSource&& value) { m_sourcesHasBeenSet = true; m_sources.push_back(std::move(value)); return *this; }


    /**
     * <p>An object that specifies the data sinks for the media concatenation
     * pipeline.</p>
     */
    inline const Aws::Vector<ConcatenationSink>& GetSinks() const{ return m_sinks; }

    /**
     * <p>An object that specifies the data sinks for the media concatenation
     * pipeline.</p>
     */
    inline bool SinksHasBeenSet() const { return m_sinksHasBeenSet; }

    /**
     * <p>An object that specifies the data sinks for the media concatenation
     * pipeline.</p>
     */
    inline void SetSinks(const Aws::Vector<ConcatenationSink>& value) { m_sinksHasBeenSet = true; m_sinks = value; }

    /**
     * <p>An object that specifies the data sinks for the media concatenation
     * pipeline.</p>
     */
    inline void SetSinks(Aws::Vector<ConcatenationSink>&& value) { m_sinksHasBeenSet = true; m_sinks = std::move(value); }

    /**
     * <p>An object that specifies the data sinks for the media concatenation
     * pipeline.</p>
     */
    inline CreateMediaConcatenationPipelineRequest& WithSinks(const Aws::Vector<ConcatenationSink>& value) { SetSinks(value); return *this;}

    /**
     * <p>An object that specifies the data sinks for the media concatenation
     * pipeline.</p>
     */
    inline CreateMediaConcatenationPipelineRequest& WithSinks(Aws::Vector<ConcatenationSink>&& value) { SetSinks(std::move(value)); return *this;}

    /**
     * <p>An object that specifies the data sinks for the media concatenation
     * pipeline.</p>
     */
    inline CreateMediaConcatenationPipelineRequest& AddSinks(const ConcatenationSink& value) { m_sinksHasBeenSet = true; m_sinks.push_back(value); return *this; }

    /**
     * <p>An object that specifies the data sinks for the media concatenation
     * pipeline.</p>
     */
    inline CreateMediaConcatenationPipelineRequest& AddSinks(ConcatenationSink&& value) { m_sinksHasBeenSet = true; m_sinks.push_back(std::move(value)); return *this; }


    /**
     * <p>The unique identifier for the client request. The token makes the API request
     * idempotent. Use a unique token for each media concatenation pipeline
     * request.</p>
     */
    inline const Aws::String& GetClientRequestToken() const{ return m_clientRequestToken; }

    /**
     * <p>The unique identifier for the client request. The token makes the API request
     * idempotent. Use a unique token for each media concatenation pipeline
     * request.</p>
     */
    inline bool ClientRequestTokenHasBeenSet() const { return m_clientRequestTokenHasBeenSet; }

    /**
     * <p>The unique identifier for the client request. The token makes the API request
     * idempotent. Use a unique token for each media concatenation pipeline
     * request.</p>
     */
    inline void SetClientRequestToken(const Aws::String& value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken = value; }

    /**
     * <p>The unique identifier for the client request. The token makes the API request
     * idempotent. Use a unique token for each media concatenation pipeline
     * request.</p>
     */
    inline void SetClientRequestToken(Aws::String&& value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken = std::move(value); }

    /**
     * <p>The unique identifier for the client request. The token makes the API request
     * idempotent. Use a unique token for each media concatenation pipeline
     * request.</p>
     */
    inline void SetClientRequestToken(const char* value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken.assign(value); }

    /**
     * <p>The unique identifier for the client request. The token makes the API request
     * idempotent. Use a unique token for each media concatenation pipeline
     * request.</p>
     */
    inline CreateMediaConcatenationPipelineRequest& WithClientRequestToken(const Aws::String& value) { SetClientRequestToken(value); return *this;}

    /**
     * <p>The unique identifier for the client request. The token makes the API request
     * idempotent. Use a unique token for each media concatenation pipeline
     * request.</p>
     */
    inline CreateMediaConcatenationPipelineRequest& WithClientRequestToken(Aws::String&& value) { SetClientRequestToken(std::move(value)); return *this;}

    /**
     * <p>The unique identifier for the client request. The token makes the API request
     * idempotent. Use a unique token for each media concatenation pipeline
     * request.</p>
     */
    inline CreateMediaConcatenationPipelineRequest& WithClientRequestToken(const char* value) { SetClientRequestToken(value); return *this;}


    /**
     * <p>The tags associated with the media concatenation pipeline.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /**
     * <p>The tags associated with the media concatenation pipeline.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>The tags associated with the media concatenation pipeline.</p>
     */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>The tags associated with the media concatenation pipeline.</p>
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>The tags associated with the media concatenation pipeline.</p>
     */
    inline CreateMediaConcatenationPipelineRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>The tags associated with the media concatenation pipeline.</p>
     */
    inline CreateMediaConcatenationPipelineRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>The tags associated with the media concatenation pipeline.</p>
     */
    inline CreateMediaConcatenationPipelineRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>The tags associated with the media concatenation pipeline.</p>
     */
    inline CreateMediaConcatenationPipelineRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<ConcatenationSource> m_sources;
    bool m_sourcesHasBeenSet = false;

    Aws::Vector<ConcatenationSink> m_sinks;
    bool m_sinksHasBeenSet = false;

    Aws::String m_clientRequestToken;
    bool m_clientRequestTokenHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace ChimeSDKMediaPipelines
} // namespace Aws
