/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime-sdk-media-pipelines/ChimeSDKMediaPipelines_EXPORTS.h>
#include <aws/chime-sdk-media-pipelines/ChimeSDKMediaPipelinesRequest.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/chime-sdk-media-pipelines/model/MediaStreamSource.h>
#include <aws/chime-sdk-media-pipelines/model/MediaStreamSink.h>
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
  class CreateMediaStreamPipelineRequest : public ChimeSDKMediaPipelinesRequest
  {
  public:
    AWS_CHIMESDKMEDIAPIPELINES_API CreateMediaStreamPipelineRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateMediaStreamPipeline"; }

    AWS_CHIMESDKMEDIAPIPELINES_API Aws::String SerializePayload() const override;


    /**
     * <p>The data sources for the media pipeline.</p>
     */
    inline const Aws::Vector<MediaStreamSource>& GetSources() const{ return m_sources; }

    /**
     * <p>The data sources for the media pipeline.</p>
     */
    inline bool SourcesHasBeenSet() const { return m_sourcesHasBeenSet; }

    /**
     * <p>The data sources for the media pipeline.</p>
     */
    inline void SetSources(const Aws::Vector<MediaStreamSource>& value) { m_sourcesHasBeenSet = true; m_sources = value; }

    /**
     * <p>The data sources for the media pipeline.</p>
     */
    inline void SetSources(Aws::Vector<MediaStreamSource>&& value) { m_sourcesHasBeenSet = true; m_sources = std::move(value); }

    /**
     * <p>The data sources for the media pipeline.</p>
     */
    inline CreateMediaStreamPipelineRequest& WithSources(const Aws::Vector<MediaStreamSource>& value) { SetSources(value); return *this;}

    /**
     * <p>The data sources for the media pipeline.</p>
     */
    inline CreateMediaStreamPipelineRequest& WithSources(Aws::Vector<MediaStreamSource>&& value) { SetSources(std::move(value)); return *this;}

    /**
     * <p>The data sources for the media pipeline.</p>
     */
    inline CreateMediaStreamPipelineRequest& AddSources(const MediaStreamSource& value) { m_sourcesHasBeenSet = true; m_sources.push_back(value); return *this; }

    /**
     * <p>The data sources for the media pipeline.</p>
     */
    inline CreateMediaStreamPipelineRequest& AddSources(MediaStreamSource&& value) { m_sourcesHasBeenSet = true; m_sources.push_back(std::move(value)); return *this; }


    /**
     * <p>The data sink for the media pipeline.</p>
     */
    inline const Aws::Vector<MediaStreamSink>& GetSinks() const{ return m_sinks; }

    /**
     * <p>The data sink for the media pipeline.</p>
     */
    inline bool SinksHasBeenSet() const { return m_sinksHasBeenSet; }

    /**
     * <p>The data sink for the media pipeline.</p>
     */
    inline void SetSinks(const Aws::Vector<MediaStreamSink>& value) { m_sinksHasBeenSet = true; m_sinks = value; }

    /**
     * <p>The data sink for the media pipeline.</p>
     */
    inline void SetSinks(Aws::Vector<MediaStreamSink>&& value) { m_sinksHasBeenSet = true; m_sinks = std::move(value); }

    /**
     * <p>The data sink for the media pipeline.</p>
     */
    inline CreateMediaStreamPipelineRequest& WithSinks(const Aws::Vector<MediaStreamSink>& value) { SetSinks(value); return *this;}

    /**
     * <p>The data sink for the media pipeline.</p>
     */
    inline CreateMediaStreamPipelineRequest& WithSinks(Aws::Vector<MediaStreamSink>&& value) { SetSinks(std::move(value)); return *this;}

    /**
     * <p>The data sink for the media pipeline.</p>
     */
    inline CreateMediaStreamPipelineRequest& AddSinks(const MediaStreamSink& value) { m_sinksHasBeenSet = true; m_sinks.push_back(value); return *this; }

    /**
     * <p>The data sink for the media pipeline.</p>
     */
    inline CreateMediaStreamPipelineRequest& AddSinks(MediaStreamSink&& value) { m_sinksHasBeenSet = true; m_sinks.push_back(std::move(value)); return *this; }


    /**
     * <p>The token assigned to the client making the request.</p>
     */
    inline const Aws::String& GetClientRequestToken() const{ return m_clientRequestToken; }

    /**
     * <p>The token assigned to the client making the request.</p>
     */
    inline bool ClientRequestTokenHasBeenSet() const { return m_clientRequestTokenHasBeenSet; }

    /**
     * <p>The token assigned to the client making the request.</p>
     */
    inline void SetClientRequestToken(const Aws::String& value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken = value; }

    /**
     * <p>The token assigned to the client making the request.</p>
     */
    inline void SetClientRequestToken(Aws::String&& value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken = std::move(value); }

    /**
     * <p>The token assigned to the client making the request.</p>
     */
    inline void SetClientRequestToken(const char* value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken.assign(value); }

    /**
     * <p>The token assigned to the client making the request.</p>
     */
    inline CreateMediaStreamPipelineRequest& WithClientRequestToken(const Aws::String& value) { SetClientRequestToken(value); return *this;}

    /**
     * <p>The token assigned to the client making the request.</p>
     */
    inline CreateMediaStreamPipelineRequest& WithClientRequestToken(Aws::String&& value) { SetClientRequestToken(std::move(value)); return *this;}

    /**
     * <p>The token assigned to the client making the request.</p>
     */
    inline CreateMediaStreamPipelineRequest& WithClientRequestToken(const char* value) { SetClientRequestToken(value); return *this;}


    /**
     * <p>The tags assigned to the media pipeline.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /**
     * <p>The tags assigned to the media pipeline.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>The tags assigned to the media pipeline.</p>
     */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>The tags assigned to the media pipeline.</p>
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>The tags assigned to the media pipeline.</p>
     */
    inline CreateMediaStreamPipelineRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>The tags assigned to the media pipeline.</p>
     */
    inline CreateMediaStreamPipelineRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>The tags assigned to the media pipeline.</p>
     */
    inline CreateMediaStreamPipelineRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>The tags assigned to the media pipeline.</p>
     */
    inline CreateMediaStreamPipelineRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<MediaStreamSource> m_sources;
    bool m_sourcesHasBeenSet = false;

    Aws::Vector<MediaStreamSink> m_sinks;
    bool m_sinksHasBeenSet = false;

    Aws::String m_clientRequestToken;
    bool m_clientRequestTokenHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace ChimeSDKMediaPipelines
} // namespace Aws
