/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock/Bedrock_EXPORTS.h>
#include <aws/bedrock/model/SearchType.h>
#include <aws/bedrock/model/RetrievalFilter.h>
#include <aws/bedrock/model/ImplicitFilterConfiguration.h>
#include <aws/bedrock/model/VectorSearchRerankingConfiguration.h>
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
namespace Bedrock
{
namespace Model
{

  /**
   * <p>The configuration details for returning the results from the knowledge base
   * vector search.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-2023-04-20/KnowledgeBaseVectorSearchConfiguration">AWS
   * API Reference</a></p>
   */
  class KnowledgeBaseVectorSearchConfiguration
  {
  public:
    AWS_BEDROCK_API KnowledgeBaseVectorSearchConfiguration() = default;
    AWS_BEDROCK_API KnowledgeBaseVectorSearchConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCK_API KnowledgeBaseVectorSearchConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCK_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The number of text chunks to retrieve; the number of results to return.</p>
     */
    inline int GetNumberOfResults() const { return m_numberOfResults; }
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
     * store configurations, only <code>SEMANTIC</code> search is available.</p>
     */
    inline SearchType GetOverrideSearchType() const { return m_overrideSearchType; }
    inline bool OverrideSearchTypeHasBeenSet() const { return m_overrideSearchTypeHasBeenSet; }
    inline void SetOverrideSearchType(SearchType value) { m_overrideSearchTypeHasBeenSet = true; m_overrideSearchType = value; }
    inline KnowledgeBaseVectorSearchConfiguration& WithOverrideSearchType(SearchType value) { SetOverrideSearchType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the filters to use on the metadata fields in the knowledge base
     * data sources before returning results.</p>
     */
    inline const RetrievalFilter& GetFilter() const { return m_filter; }
    inline bool FilterHasBeenSet() const { return m_filterHasBeenSet; }
    template<typename FilterT = RetrievalFilter>
    void SetFilter(FilterT&& value) { m_filterHasBeenSet = true; m_filter = std::forward<FilterT>(value); }
    template<typename FilterT = RetrievalFilter>
    KnowledgeBaseVectorSearchConfiguration& WithFilter(FilterT&& value) { SetFilter(std::forward<FilterT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Configuration for implicit filtering in Knowledge Base vector searches. This
     * allows the system to automatically apply filters based on the query context
     * without requiring explicit filter expressions.</p>
     */
    inline const ImplicitFilterConfiguration& GetImplicitFilterConfiguration() const { return m_implicitFilterConfiguration; }
    inline bool ImplicitFilterConfigurationHasBeenSet() const { return m_implicitFilterConfigurationHasBeenSet; }
    template<typename ImplicitFilterConfigurationT = ImplicitFilterConfiguration>
    void SetImplicitFilterConfiguration(ImplicitFilterConfigurationT&& value) { m_implicitFilterConfigurationHasBeenSet = true; m_implicitFilterConfiguration = std::forward<ImplicitFilterConfigurationT>(value); }
    template<typename ImplicitFilterConfigurationT = ImplicitFilterConfiguration>
    KnowledgeBaseVectorSearchConfiguration& WithImplicitFilterConfiguration(ImplicitFilterConfigurationT&& value) { SetImplicitFilterConfiguration(std::forward<ImplicitFilterConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Configuration for reranking search results in Knowledge Base vector searches.
     * Reranking improves search relevance by reordering initial vector search results
     * using more sophisticated relevance models.</p>
     */
    inline const VectorSearchRerankingConfiguration& GetRerankingConfiguration() const { return m_rerankingConfiguration; }
    inline bool RerankingConfigurationHasBeenSet() const { return m_rerankingConfigurationHasBeenSet; }
    template<typename RerankingConfigurationT = VectorSearchRerankingConfiguration>
    void SetRerankingConfiguration(RerankingConfigurationT&& value) { m_rerankingConfigurationHasBeenSet = true; m_rerankingConfiguration = std::forward<RerankingConfigurationT>(value); }
    template<typename RerankingConfigurationT = VectorSearchRerankingConfiguration>
    KnowledgeBaseVectorSearchConfiguration& WithRerankingConfiguration(RerankingConfigurationT&& value) { SetRerankingConfiguration(std::forward<RerankingConfigurationT>(value)); return *this;}
    ///@}
  private:

    int m_numberOfResults{0};
    bool m_numberOfResultsHasBeenSet = false;

    SearchType m_overrideSearchType{SearchType::NOT_SET};
    bool m_overrideSearchTypeHasBeenSet = false;

    RetrievalFilter m_filter;
    bool m_filterHasBeenSet = false;

    ImplicitFilterConfiguration m_implicitFilterConfiguration;
    bool m_implicitFilterConfigurationHasBeenSet = false;

    VectorSearchRerankingConfiguration m_rerankingConfiguration;
    bool m_rerankingConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace Bedrock
} // namespace Aws
