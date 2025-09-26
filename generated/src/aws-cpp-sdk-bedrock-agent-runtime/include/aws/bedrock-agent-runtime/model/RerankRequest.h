/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agent-runtime/BedrockAgentRuntime_EXPORTS.h>
#include <aws/bedrock-agent-runtime/BedrockAgentRuntimeRequest.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/bedrock-agent-runtime/model/RerankingConfiguration.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/bedrock-agent-runtime/model/RerankQuery.h>
#include <aws/bedrock-agent-runtime/model/RerankSource.h>
#include <utility>

namespace Aws
{
namespace BedrockAgentRuntime
{
namespace Model
{

  /**
   */
  class RerankRequest : public BedrockAgentRuntimeRequest
  {
  public:
    AWS_BEDROCKAGENTRUNTIME_API RerankRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "Rerank"; }

    AWS_BEDROCKAGENTRUNTIME_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>An array of objects, each of which contains information about a query to
     * submit to the reranker model.</p>
     */
    inline const Aws::Vector<RerankQuery>& GetQueries() const { return m_queries; }
    inline bool QueriesHasBeenSet() const { return m_queriesHasBeenSet; }
    template<typename QueriesT = Aws::Vector<RerankQuery>>
    void SetQueries(QueriesT&& value) { m_queriesHasBeenSet = true; m_queries = std::forward<QueriesT>(value); }
    template<typename QueriesT = Aws::Vector<RerankQuery>>
    RerankRequest& WithQueries(QueriesT&& value) { SetQueries(std::forward<QueriesT>(value)); return *this;}
    template<typename QueriesT = RerankQuery>
    RerankRequest& AddQueries(QueriesT&& value) { m_queriesHasBeenSet = true; m_queries.emplace_back(std::forward<QueriesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>An array of objects, each of which contains information about the sources to
     * rerank.</p>
     */
    inline const Aws::Vector<RerankSource>& GetSources() const { return m_sources; }
    inline bool SourcesHasBeenSet() const { return m_sourcesHasBeenSet; }
    template<typename SourcesT = Aws::Vector<RerankSource>>
    void SetSources(SourcesT&& value) { m_sourcesHasBeenSet = true; m_sources = std::forward<SourcesT>(value); }
    template<typename SourcesT = Aws::Vector<RerankSource>>
    RerankRequest& WithSources(SourcesT&& value) { SetSources(std::forward<SourcesT>(value)); return *this;}
    template<typename SourcesT = RerankSource>
    RerankRequest& AddSources(SourcesT&& value) { m_sourcesHasBeenSet = true; m_sources.emplace_back(std::forward<SourcesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Contains configurations for reranking.</p>
     */
    inline const RerankingConfiguration& GetRerankingConfiguration() const { return m_rerankingConfiguration; }
    inline bool RerankingConfigurationHasBeenSet() const { return m_rerankingConfigurationHasBeenSet; }
    template<typename RerankingConfigurationT = RerankingConfiguration>
    void SetRerankingConfiguration(RerankingConfigurationT&& value) { m_rerankingConfigurationHasBeenSet = true; m_rerankingConfiguration = std::forward<RerankingConfigurationT>(value); }
    template<typename RerankingConfigurationT = RerankingConfiguration>
    RerankRequest& WithRerankingConfiguration(RerankingConfigurationT&& value) { SetRerankingConfiguration(std::forward<RerankingConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>If the total number of results was greater than could fit in a response, a
     * token is returned in the <code>nextToken</code> field. You can enter that token
     * in this field to return the next batch of results.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    RerankRequest& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<RerankQuery> m_queries;
    bool m_queriesHasBeenSet = false;

    Aws::Vector<RerankSource> m_sources;
    bool m_sourcesHasBeenSet = false;

    RerankingConfiguration m_rerankingConfiguration;
    bool m_rerankingConfigurationHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgentRuntime
} // namespace Aws
