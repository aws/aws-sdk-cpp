/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agent-runtime/BedrockAgentRuntime_EXPORTS.h>
#include <aws/bedrock-agent-runtime/model/RetrievalFilter.h>
#include <aws/bedrock-agent-runtime/model/SearchType.h>
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


    /**
     * <p>Specifies the filters to use on the metadata in the knowledge base data
     * sources before returning results. For more information, see <a
     * href="https://docs.aws.amazon.com/bedrock/latest/userguide/kb-test-config.html">Query
     * configurations</a>.</p>
     */
    inline const RetrievalFilter& GetFilter() const{ return m_filter; }

    /**
     * <p>Specifies the filters to use on the metadata in the knowledge base data
     * sources before returning results. For more information, see <a
     * href="https://docs.aws.amazon.com/bedrock/latest/userguide/kb-test-config.html">Query
     * configurations</a>.</p>
     */
    inline bool FilterHasBeenSet() const { return m_filterHasBeenSet; }

    /**
     * <p>Specifies the filters to use on the metadata in the knowledge base data
     * sources before returning results. For more information, see <a
     * href="https://docs.aws.amazon.com/bedrock/latest/userguide/kb-test-config.html">Query
     * configurations</a>.</p>
     */
    inline void SetFilter(const RetrievalFilter& value) { m_filterHasBeenSet = true; m_filter = value; }

    /**
     * <p>Specifies the filters to use on the metadata in the knowledge base data
     * sources before returning results. For more information, see <a
     * href="https://docs.aws.amazon.com/bedrock/latest/userguide/kb-test-config.html">Query
     * configurations</a>.</p>
     */
    inline void SetFilter(RetrievalFilter&& value) { m_filterHasBeenSet = true; m_filter = std::move(value); }

    /**
     * <p>Specifies the filters to use on the metadata in the knowledge base data
     * sources before returning results. For more information, see <a
     * href="https://docs.aws.amazon.com/bedrock/latest/userguide/kb-test-config.html">Query
     * configurations</a>.</p>
     */
    inline KnowledgeBaseVectorSearchConfiguration& WithFilter(const RetrievalFilter& value) { SetFilter(value); return *this;}

    /**
     * <p>Specifies the filters to use on the metadata in the knowledge base data
     * sources before returning results. For more information, see <a
     * href="https://docs.aws.amazon.com/bedrock/latest/userguide/kb-test-config.html">Query
     * configurations</a>.</p>
     */
    inline KnowledgeBaseVectorSearchConfiguration& WithFilter(RetrievalFilter&& value) { SetFilter(std::move(value)); return *this;}


    /**
     * <p>The number of source chunks to retrieve.</p>
     */
    inline int GetNumberOfResults() const{ return m_numberOfResults; }

    /**
     * <p>The number of source chunks to retrieve.</p>
     */
    inline bool NumberOfResultsHasBeenSet() const { return m_numberOfResultsHasBeenSet; }

    /**
     * <p>The number of source chunks to retrieve.</p>
     */
    inline void SetNumberOfResults(int value) { m_numberOfResultsHasBeenSet = true; m_numberOfResults = value; }

    /**
     * <p>The number of source chunks to retrieve.</p>
     */
    inline KnowledgeBaseVectorSearchConfiguration& WithNumberOfResults(int value) { SetNumberOfResults(value); return *this;}


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
    inline bool OverrideSearchTypeHasBeenSet() const { return m_overrideSearchTypeHasBeenSet; }

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
    inline void SetOverrideSearchType(const SearchType& value) { m_overrideSearchTypeHasBeenSet = true; m_overrideSearchType = value; }

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
    inline void SetOverrideSearchType(SearchType&& value) { m_overrideSearchTypeHasBeenSet = true; m_overrideSearchType = std::move(value); }

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
    inline KnowledgeBaseVectorSearchConfiguration& WithOverrideSearchType(const SearchType& value) { SetOverrideSearchType(value); return *this;}

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
    inline KnowledgeBaseVectorSearchConfiguration& WithOverrideSearchType(SearchType&& value) { SetOverrideSearchType(std::move(value)); return *this;}

  private:

    RetrievalFilter m_filter;
    bool m_filterHasBeenSet = false;

    int m_numberOfResults;
    bool m_numberOfResultsHasBeenSet = false;

    SearchType m_overrideSearchType;
    bool m_overrideSearchTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgentRuntime
} // namespace Aws
