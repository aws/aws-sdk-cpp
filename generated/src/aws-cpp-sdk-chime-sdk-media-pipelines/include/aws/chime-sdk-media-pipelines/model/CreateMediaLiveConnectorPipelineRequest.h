/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime-sdk-media-pipelines/ChimeSDKMediaPipelines_EXPORTS.h>
#include <aws/chime-sdk-media-pipelines/ChimeSDKMediaPipelinesRequest.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/chime-sdk-media-pipelines/model/LiveConnectorSourceConfiguration.h>
#include <aws/chime-sdk-media-pipelines/model/LiveConnectorSinkConfiguration.h>
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
  class CreateMediaLiveConnectorPipelineRequest : public ChimeSDKMediaPipelinesRequest
  {
  public:
    AWS_CHIMESDKMEDIAPIPELINES_API CreateMediaLiveConnectorPipelineRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateMediaLiveConnectorPipeline"; }

    AWS_CHIMESDKMEDIAPIPELINES_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The media live connector pipeline's data sources.</p>
     */
    inline const Aws::Vector<LiveConnectorSourceConfiguration>& GetSources() const { return m_sources; }
    inline bool SourcesHasBeenSet() const { return m_sourcesHasBeenSet; }
    template<typename SourcesT = Aws::Vector<LiveConnectorSourceConfiguration>>
    void SetSources(SourcesT&& value) { m_sourcesHasBeenSet = true; m_sources = std::forward<SourcesT>(value); }
    template<typename SourcesT = Aws::Vector<LiveConnectorSourceConfiguration>>
    CreateMediaLiveConnectorPipelineRequest& WithSources(SourcesT&& value) { SetSources(std::forward<SourcesT>(value)); return *this;}
    template<typename SourcesT = LiveConnectorSourceConfiguration>
    CreateMediaLiveConnectorPipelineRequest& AddSources(SourcesT&& value) { m_sourcesHasBeenSet = true; m_sources.emplace_back(std::forward<SourcesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The media live connector pipeline's data sinks.</p>
     */
    inline const Aws::Vector<LiveConnectorSinkConfiguration>& GetSinks() const { return m_sinks; }
    inline bool SinksHasBeenSet() const { return m_sinksHasBeenSet; }
    template<typename SinksT = Aws::Vector<LiveConnectorSinkConfiguration>>
    void SetSinks(SinksT&& value) { m_sinksHasBeenSet = true; m_sinks = std::forward<SinksT>(value); }
    template<typename SinksT = Aws::Vector<LiveConnectorSinkConfiguration>>
    CreateMediaLiveConnectorPipelineRequest& WithSinks(SinksT&& value) { SetSinks(std::forward<SinksT>(value)); return *this;}
    template<typename SinksT = LiveConnectorSinkConfiguration>
    CreateMediaLiveConnectorPipelineRequest& AddSinks(SinksT&& value) { m_sinksHasBeenSet = true; m_sinks.emplace_back(std::forward<SinksT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The token assigned to the client making the request.</p>
     */
    inline const Aws::String& GetClientRequestToken() const { return m_clientRequestToken; }
    inline bool ClientRequestTokenHasBeenSet() const { return m_clientRequestTokenHasBeenSet; }
    template<typename ClientRequestTokenT = Aws::String>
    void SetClientRequestToken(ClientRequestTokenT&& value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken = std::forward<ClientRequestTokenT>(value); }
    template<typename ClientRequestTokenT = Aws::String>
    CreateMediaLiveConnectorPipelineRequest& WithClientRequestToken(ClientRequestTokenT&& value) { SetClientRequestToken(std::forward<ClientRequestTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The tags associated with the media live connector pipeline.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Vector<Tag>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Vector<Tag>>
    CreateMediaLiveConnectorPipelineRequest& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsT = Tag>
    CreateMediaLiveConnectorPipelineRequest& AddTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags.emplace_back(std::forward<TagsT>(value)); return *this; }
    ///@}
  private:

    Aws::Vector<LiveConnectorSourceConfiguration> m_sources;
    bool m_sourcesHasBeenSet = false;

    Aws::Vector<LiveConnectorSinkConfiguration> m_sinks;
    bool m_sinksHasBeenSet = false;

    Aws::String m_clientRequestToken{Aws::Utils::UUID::PseudoRandomUUID()};
    bool m_clientRequestTokenHasBeenSet = true;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace ChimeSDKMediaPipelines
} // namespace Aws
