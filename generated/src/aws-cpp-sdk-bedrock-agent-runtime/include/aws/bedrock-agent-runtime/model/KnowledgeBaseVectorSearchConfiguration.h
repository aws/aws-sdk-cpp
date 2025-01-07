﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agent-runtime/BedrockAgentRuntime_EXPORTS.h>
#include <aws/bedrock-agent-runtime/model/RetrievalFilter.h>
#include <aws/bedrock-agent-runtime/model/ImplicitFilterConfiguration.h>
#include <aws/bedrock-agent-runtime/model/SearchType.h>
#include <aws/bedrock-agent-runtime/model/VectorSearchRerankingConfiguration.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace BedrockAgentRuntime
{
namespace Model
{

  /**
   * <p>Configurations for how to perform the search query and return results. For
   * more information, see <a
   * href="https://docs.aws.amazon.com/bedrock/latest/userguide/kb-test-config.html">Query
   * configurations</a>.</p> <p>This data type is used in the following API
   * operations:</p> <ul> <li> <p> <a
   * href="https://docs.aws.amazon.com/bedrock/latest/APIReference/API_agent-runtime_Retrieve.html#API_agent-runtime_Retrieve_RequestSyntax">Retrieve
   * request</a> – in the <code>vectorSearchConfiguration</code> field</p> </li> <li>
   * <p> <a
   * href="https://docs.aws.amazon.com/bedrock/latest/APIReference/API_agent-runtime_RetrieveAndGenerate.html#API_agent-runtime_RetrieveAndGenerate_RequestSyntax">RetrieveAndGenerate
   * request</a> – in the <code>vectorSearchConfiguration</code> field</p> </li>
   * </ul><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agent-runtime-2023-07-26/KnowledgeBaseVectorSearchConfiguration">AWS
   * API Reference</a></p>
   */
  class KnowledgeBaseVectorSearchConfiguration
  {
  public:
    AWS_BEDROCKAGENTRUNTIME_API KnowledgeBaseVectorSearchConfiguration();
    AWS_BEDROCKAGENTRUNTIME_API KnowledgeBaseVectorSearchConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENTRUNTIME_API KnowledgeBaseVectorSearchConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENTRUNTIME_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Specifies the filters to use on the metadata in the knowledge base data
     * sources before returning results. For more information, see <a
     * href="https://docs.aws.amazon.com/bedrock/latest/userguide/kb-test-config.html">Query
     * configurations</a>.</p>
     */
    inline const RetrievalFilter& GetFilter() const{ return m_filter; }
    inline bool FilterHasBeenSet() const { return m_filterHasBeenSet; }
    inline void SetFilter(const RetrievalFilter& value) { m_filterHasBeenSet = true; m_filter = value; }
    inline void SetFilter(RetrievalFilter&& value) { m_filterHasBeenSet = true; m_filter = std::move(value); }
    inline KnowledgeBaseVectorSearchConfiguration& WithFilter(const RetrievalFilter& value) { SetFilter(value); return *this;}
    inline KnowledgeBaseVectorSearchConfiguration& WithFilter(RetrievalFilter&& value) { SetFilter(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Settings for implicit filtering.</p>
     */
    inline const ImplicitFilterConfiguration& GetImplicitFilterConfiguration() const{ return m_implicitFilterConfiguration; }
    inline bool ImplicitFilterConfigurationHasBeenSet() const { return m_implicitFilterConfigurationHasBeenSet; }
    inline void SetImplicitFilterConfiguration(const ImplicitFilterConfiguration& value) { m_implicitFilterConfigurationHasBeenSet = true; m_implicitFilterConfiguration = value; }
    inline void SetImplicitFilterConfiguration(ImplicitFilterConfiguration&& value) { m_implicitFilterConfigurationHasBeenSet = true; m_implicitFilterConfiguration = std::move(value); }
    inline KnowledgeBaseVectorSearchConfiguration& WithImplicitFilterConfiguration(const ImplicitFilterConfiguration& value) { SetImplicitFilterConfiguration(value); return *this;}
    inline KnowledgeBaseVectorSearchConfiguration& WithImplicitFilterConfiguration(ImplicitFilterConfiguration&& value) { SetImplicitFilterConfiguration(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of source chunks to retrieve.</p>
     */
    inline int GetNumberOfResults() const{ return m_numberOfResults; }
    inline bool NumberOfResultsHasBeenSet() const { return m_numberOfResultsHasBeenSet; }
    inline void SetNumberOfResults(int value) { m_numberOfResultsHasBeenSet = true; m_numberOfResults = value; }
    inline KnowledgeBaseVectorSearchConfiguration& WithNumberOfResults(int value) { SetNumberOfResults(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>By default, Amazon Bedrock decides a search strategy for you. If you're using
     * an Amazon OpenSearch Serverless vector store that contains a filterable text
     * field, you can specify whether to query the knowledge base with a
     * <code>HYBRID</code> search using both vector embeddings and raw text, or
     * <code>SEMANTIC</code> search using only vector embeddings. For other vector
     * store configurations, only <code>SEMANTIC</code> search is available. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/bedrock/latest/userguide/knowledge-base-test.html">Test
     * a knowledge base</a>.</p>
     */
    inline const SearchType& GetOverrideSearchType() const{ return m_overrideSearchType; }
    inline bool OverrideSearchTypeHasBeenSet() const { return m_overrideSearchTypeHasBeenSet; }
    inline void SetOverrideSearchType(const SearchType& value) { m_overrideSearchTypeHasBeenSet = true; m_overrideSearchType = value; }
    inline void SetOverrideSearchType(SearchType&& value) { m_overrideSearchTypeHasBeenSet = true; m_overrideSearchType = std::move(value); }
    inline KnowledgeBaseVectorSearchConfiguration& WithOverrideSearchType(const SearchType& value) { SetOverrideSearchType(value); return *this;}
    inline KnowledgeBaseVectorSearchConfiguration& WithOverrideSearchType(SearchType&& value) { SetOverrideSearchType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains configurations for reranking the retrieved results. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/bedrock/latest/userguide/rerank.html">Improve
     * the relevance of query responses with a reranker model</a>.</p>
     */
    inline const VectorSearchRerankingConfiguration& GetRerankingConfiguration() const{ return m_rerankingConfiguration; }
    inline bool RerankingConfigurationHasBeenSet() const { return m_rerankingConfigurationHasBeenSet; }
    inline void SetRerankingConfiguration(const VectorSearchRerankingConfiguration& value) { m_rerankingConfigurationHasBeenSet = true; m_rerankingConfiguration = value; }
    inline void SetRerankingConfiguration(VectorSearchRerankingConfiguration&& value) { m_rerankingConfigurationHasBeenSet = true; m_rerankingConfiguration = std::move(value); }
    inline KnowledgeBaseVectorSearchConfiguration& WithRerankingConfiguration(const VectorSearchRerankingConfiguration& value) { SetRerankingConfiguration(value); return *this;}
    inline KnowledgeBaseVectorSearchConfiguration& WithRerankingConfiguration(VectorSearchRerankingConfiguration&& value) { SetRerankingConfiguration(std::move(value)); return *this;}
    ///@}
  private:

    RetrievalFilter m_filter;
    bool m_filterHasBeenSet = false;

    ImplicitFilterConfiguration m_implicitFilterConfiguration;
    bool m_implicitFilterConfigurationHasBeenSet = false;

    int m_numberOfResults;
    bool m_numberOfResultsHasBeenSet = false;

    SearchType m_overrideSearchType;
    bool m_overrideSearchTypeHasBeenSet = false;

    VectorSearchRerankingConfiguration m_rerankingConfiguration;
    bool m_rerankingConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgentRuntime
} // namespace Aws
