/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agent-runtime/BedrockAgentRuntime_EXPORTS.h>
#include <aws/bedrock-agent-runtime/BedrockAgentRuntimeRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/bedrock-agent-runtime/model/RerankingConfiguration.h>
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
    AWS_BEDROCKAGENTRUNTIME_API RerankRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "Rerank"; }

    AWS_BEDROCKAGENTRUNTIME_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>If the total number of results was greater than could fit in a response, a
     * token is returned in the <code>nextToken</code> field. You can enter that token
     * in this field to return the next batch of results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }
    inline RerankRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline RerankRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline RerankRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array of objects, each of which contains information about a query to
     * submit to the reranker model.</p>
     */
    inline const Aws::Vector<RerankQuery>& GetQueries() const{ return m_queries; }
    inline bool QueriesHasBeenSet() const { return m_queriesHasBeenSet; }
    inline void SetQueries(const Aws::Vector<RerankQuery>& value) { m_queriesHasBeenSet = true; m_queries = value; }
    inline void SetQueries(Aws::Vector<RerankQuery>&& value) { m_queriesHasBeenSet = true; m_queries = std::move(value); }
    inline RerankRequest& WithQueries(const Aws::Vector<RerankQuery>& value) { SetQueries(value); return *this;}
    inline RerankRequest& WithQueries(Aws::Vector<RerankQuery>&& value) { SetQueries(std::move(value)); return *this;}
    inline RerankRequest& AddQueries(const RerankQuery& value) { m_queriesHasBeenSet = true; m_queries.push_back(value); return *this; }
    inline RerankRequest& AddQueries(RerankQuery&& value) { m_queriesHasBeenSet = true; m_queries.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Contains configurations for reranking.</p>
     */
    inline const RerankingConfiguration& GetRerankingConfiguration() const{ return m_rerankingConfiguration; }
    inline bool RerankingConfigurationHasBeenSet() const { return m_rerankingConfigurationHasBeenSet; }
    inline void SetRerankingConfiguration(const RerankingConfiguration& value) { m_rerankingConfigurationHasBeenSet = true; m_rerankingConfiguration = value; }
    inline void SetRerankingConfiguration(RerankingConfiguration&& value) { m_rerankingConfigurationHasBeenSet = true; m_rerankingConfiguration = std::move(value); }
    inline RerankRequest& WithRerankingConfiguration(const RerankingConfiguration& value) { SetRerankingConfiguration(value); return *this;}
    inline RerankRequest& WithRerankingConfiguration(RerankingConfiguration&& value) { SetRerankingConfiguration(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array of objects, each of which contains information about the sources to
     * rerank.</p>
     */
    inline const Aws::Vector<RerankSource>& GetSources() const{ return m_sources; }
    inline bool SourcesHasBeenSet() const { return m_sourcesHasBeenSet; }
    inline void SetSources(const Aws::Vector<RerankSource>& value) { m_sourcesHasBeenSet = true; m_sources = value; }
    inline void SetSources(Aws::Vector<RerankSource>&& value) { m_sourcesHasBeenSet = true; m_sources = std::move(value); }
    inline RerankRequest& WithSources(const Aws::Vector<RerankSource>& value) { SetSources(value); return *this;}
    inline RerankRequest& WithSources(Aws::Vector<RerankSource>&& value) { SetSources(std::move(value)); return *this;}
    inline RerankRequest& AddSources(const RerankSource& value) { m_sourcesHasBeenSet = true; m_sources.push_back(value); return *this; }
    inline RerankRequest& AddSources(RerankSource&& value) { m_sourcesHasBeenSet = true; m_sources.push_back(std::move(value)); return *this; }
    ///@}
  private:

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::Vector<RerankQuery> m_queries;
    bool m_queriesHasBeenSet = false;

    RerankingConfiguration m_rerankingConfiguration;
    bool m_rerankingConfigurationHasBeenSet = false;

    Aws::Vector<RerankSource> m_sources;
    bool m_sourcesHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgentRuntime
} // namespace Aws
