/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore/BedrockAgentCore_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/bedrock-agentcore/model/MemoryContent.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/DateTime.h>
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
namespace BedrockAgentCore
{
namespace Model
{

  /**
   * <p>Contains summary information about a memory record.</p><p><h3>See Also:</h3> 
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-2024-02-28/MemoryRecordSummary">AWS
   * API Reference</a></p>
   */
  class MemoryRecordSummary
  {
  public:
    AWS_BEDROCKAGENTCORE_API MemoryRecordSummary() = default;
    AWS_BEDROCKAGENTCORE_API MemoryRecordSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENTCORE_API MemoryRecordSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENTCORE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The unique identifier of the memory record.</p>
     */
    inline const Aws::String& GetMemoryRecordId() const { return m_memoryRecordId; }
    inline bool MemoryRecordIdHasBeenSet() const { return m_memoryRecordIdHasBeenSet; }
    template<typename MemoryRecordIdT = Aws::String>
    void SetMemoryRecordId(MemoryRecordIdT&& value) { m_memoryRecordIdHasBeenSet = true; m_memoryRecordId = std::forward<MemoryRecordIdT>(value); }
    template<typename MemoryRecordIdT = Aws::String>
    MemoryRecordSummary& WithMemoryRecordId(MemoryRecordIdT&& value) { SetMemoryRecordId(std::forward<MemoryRecordIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The content of the memory record.</p>
     */
    inline const MemoryContent& GetContent() const { return m_content; }
    inline bool ContentHasBeenSet() const { return m_contentHasBeenSet; }
    template<typename ContentT = MemoryContent>
    void SetContent(ContentT&& value) { m_contentHasBeenSet = true; m_content = std::forward<ContentT>(value); }
    template<typename ContentT = MemoryContent>
    MemoryRecordSummary& WithContent(ContentT&& value) { SetContent(std::forward<ContentT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the memory strategy associated with this record.</p>
     */
    inline const Aws::String& GetMemoryStrategyId() const { return m_memoryStrategyId; }
    inline bool MemoryStrategyIdHasBeenSet() const { return m_memoryStrategyIdHasBeenSet; }
    template<typename MemoryStrategyIdT = Aws::String>
    void SetMemoryStrategyId(MemoryStrategyIdT&& value) { m_memoryStrategyIdHasBeenSet = true; m_memoryStrategyId = std::forward<MemoryStrategyIdT>(value); }
    template<typename MemoryStrategyIdT = Aws::String>
    MemoryRecordSummary& WithMemoryStrategyId(MemoryStrategyIdT&& value) { SetMemoryStrategyId(std::forward<MemoryStrategyIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The namespaces associated with this memory record.</p>
     */
    inline const Aws::Vector<Aws::String>& GetNamespaces() const { return m_namespaces; }
    inline bool NamespacesHasBeenSet() const { return m_namespacesHasBeenSet; }
    template<typename NamespacesT = Aws::Vector<Aws::String>>
    void SetNamespaces(NamespacesT&& value) { m_namespacesHasBeenSet = true; m_namespaces = std::forward<NamespacesT>(value); }
    template<typename NamespacesT = Aws::Vector<Aws::String>>
    MemoryRecordSummary& WithNamespaces(NamespacesT&& value) { SetNamespaces(std::forward<NamespacesT>(value)); return *this;}
    template<typename NamespacesT = Aws::String>
    MemoryRecordSummary& AddNamespaces(NamespacesT&& value) { m_namespacesHasBeenSet = true; m_namespaces.emplace_back(std::forward<NamespacesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The timestamp when the memory record was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    void SetCreatedAt(CreatedAtT&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::forward<CreatedAtT>(value); }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    MemoryRecordSummary& WithCreatedAt(CreatedAtT&& value) { SetCreatedAt(std::forward<CreatedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The relevance score of the memory record when returned as part of a search
     * result. Higher values indicate greater relevance to the search query.</p>
     */
    inline double GetScore() const { return m_score; }
    inline bool ScoreHasBeenSet() const { return m_scoreHasBeenSet; }
    inline void SetScore(double value) { m_scoreHasBeenSet = true; m_score = value; }
    inline MemoryRecordSummary& WithScore(double value) { SetScore(value); return *this;}
    ///@}
  private:

    Aws::String m_memoryRecordId;
    bool m_memoryRecordIdHasBeenSet = false;

    MemoryContent m_content;
    bool m_contentHasBeenSet = false;

    Aws::String m_memoryStrategyId;
    bool m_memoryStrategyIdHasBeenSet = false;

    Aws::Vector<Aws::String> m_namespaces;
    bool m_namespacesHasBeenSet = false;

    Aws::Utils::DateTime m_createdAt{};
    bool m_createdAtHasBeenSet = false;

    double m_score{0.0};
    bool m_scoreHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgentCore
} // namespace Aws
