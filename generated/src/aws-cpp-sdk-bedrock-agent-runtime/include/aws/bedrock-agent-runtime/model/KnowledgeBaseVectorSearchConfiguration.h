/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agent-runtime/BedrockAgentRuntime_EXPORTS.h>
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
   * <p>Configurations for how to carry out the search.</p><p><h3>See Also:</h3>   <a
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
     * <p>The number of results to return.</p>  <p>The
     * <code>numberOfResults</code> field is currently unsupported for
     * <code>RetrieveAndGenerate</code>. Don't include it in this field if you are
     * sending a <code>RetrieveAndGenerate</code> request.</p> 
     */
    inline int GetNumberOfResults() const{ return m_numberOfResults; }

    /**
     * <p>The number of results to return.</p>  <p>The
     * <code>numberOfResults</code> field is currently unsupported for
     * <code>RetrieveAndGenerate</code>. Don't include it in this field if you are
     * sending a <code>RetrieveAndGenerate</code> request.</p> 
     */
    inline bool NumberOfResultsHasBeenSet() const { return m_numberOfResultsHasBeenSet; }

    /**
     * <p>The number of results to return.</p>  <p>The
     * <code>numberOfResults</code> field is currently unsupported for
     * <code>RetrieveAndGenerate</code>. Don't include it in this field if you are
     * sending a <code>RetrieveAndGenerate</code> request.</p> 
     */
    inline void SetNumberOfResults(int value) { m_numberOfResultsHasBeenSet = true; m_numberOfResults = value; }

    /**
     * <p>The number of results to return.</p>  <p>The
     * <code>numberOfResults</code> field is currently unsupported for
     * <code>RetrieveAndGenerate</code>. Don't include it in this field if you are
     * sending a <code>RetrieveAndGenerate</code> request.</p> 
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

    int m_numberOfResults;
    bool m_numberOfResultsHasBeenSet = false;

    SearchType m_overrideSearchType;
    bool m_overrideSearchTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgentRuntime
} // namespace Aws
