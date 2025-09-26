/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agent-runtime/BedrockAgentRuntime_EXPORTS.h>
#include <aws/bedrock-agent-runtime/model/RerankDocument.h>
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
   * <p>Contains information about a document that was reranked.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agent-runtime-2023-07-26/RerankResult">AWS
   * API Reference</a></p>
   */
  class RerankResult
  {
  public:
    AWS_BEDROCKAGENTRUNTIME_API RerankResult() = default;
    AWS_BEDROCKAGENTRUNTIME_API RerankResult(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENTRUNTIME_API RerankResult& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENTRUNTIME_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ranking of the document. The lower a number, the higher the document is
     * ranked.</p>
     */
    inline int GetIndex() const { return m_index; }
    inline bool IndexHasBeenSet() const { return m_indexHasBeenSet; }
    inline void SetIndex(int value) { m_indexHasBeenSet = true; m_index = value; }
    inline RerankResult& WithIndex(int value) { SetIndex(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The relevance score of the document.</p>
     */
    inline double GetRelevanceScore() const { return m_relevanceScore; }
    inline bool RelevanceScoreHasBeenSet() const { return m_relevanceScoreHasBeenSet; }
    inline void SetRelevanceScore(double value) { m_relevanceScoreHasBeenSet = true; m_relevanceScore = value; }
    inline RerankResult& WithRelevanceScore(double value) { SetRelevanceScore(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains information about the document.</p>
     */
    inline const RerankDocument& GetDocument() const { return m_document; }
    inline bool DocumentHasBeenSet() const { return m_documentHasBeenSet; }
    template<typename DocumentT = RerankDocument>
    void SetDocument(DocumentT&& value) { m_documentHasBeenSet = true; m_document = std::forward<DocumentT>(value); }
    template<typename DocumentT = RerankDocument>
    RerankResult& WithDocument(DocumentT&& value) { SetDocument(std::forward<DocumentT>(value)); return *this;}
    ///@}
  private:

    int m_index{0};
    bool m_indexHasBeenSet = false;

    double m_relevanceScore{0.0};
    bool m_relevanceScoreHasBeenSet = false;

    RerankDocument m_document;
    bool m_documentHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgentRuntime
} // namespace Aws
