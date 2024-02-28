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
   * <p>Knowledge base vector search configuration</p><p><h3>See Also:</h3>   <a
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
     * <p>Top-K results to retrieve from knowledge base.</p>
     */
    inline int GetNumberOfResults() const{ return m_numberOfResults; }

    /**
     * <p>Top-K results to retrieve from knowledge base.</p>
     */
    inline bool NumberOfResultsHasBeenSet() const { return m_numberOfResultsHasBeenSet; }

    /**
     * <p>Top-K results to retrieve from knowledge base.</p>
     */
    inline void SetNumberOfResults(int value) { m_numberOfResultsHasBeenSet = true; m_numberOfResults = value; }

    /**
     * <p>Top-K results to retrieve from knowledge base.</p>
     */
    inline KnowledgeBaseVectorSearchConfiguration& WithNumberOfResults(int value) { SetNumberOfResults(value); return *this;}


    /**
     * <p>Override the type of query to be performed on data store</p>
     */
    inline const SearchType& GetOverrideSearchType() const{ return m_overrideSearchType; }

    /**
     * <p>Override the type of query to be performed on data store</p>
     */
    inline bool OverrideSearchTypeHasBeenSet() const { return m_overrideSearchTypeHasBeenSet; }

    /**
     * <p>Override the type of query to be performed on data store</p>
     */
    inline void SetOverrideSearchType(const SearchType& value) { m_overrideSearchTypeHasBeenSet = true; m_overrideSearchType = value; }

    /**
     * <p>Override the type of query to be performed on data store</p>
     */
    inline void SetOverrideSearchType(SearchType&& value) { m_overrideSearchTypeHasBeenSet = true; m_overrideSearchType = std::move(value); }

    /**
     * <p>Override the type of query to be performed on data store</p>
     */
    inline KnowledgeBaseVectorSearchConfiguration& WithOverrideSearchType(const SearchType& value) { SetOverrideSearchType(value); return *this;}

    /**
     * <p>Override the type of query to be performed on data store</p>
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
