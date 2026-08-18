/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agent-runtime/BedrockAgentRuntime_EXPORTS.h>
#include <aws/bedrock-agent-runtime/model/AgenticRetrieveActionDetails.h>
#include <aws/bedrock-agent-runtime/model/AgenticRetrieveFullDocExpansionDetails.h>
#include <aws/bedrock-agent-runtime/model/AgenticRetrieveMemoryRetrieveDetails.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace BedrockAgentRuntime {
namespace Model {

/**
 * <p>An action taken during agentic retrieval.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agent-runtime-2023-07-26/AgenticRetrieveAction">AWS
 * API Reference</a></p>
 */
class AgenticRetrieveAction {
 public:
  AWS_BEDROCKAGENTRUNTIME_API AgenticRetrieveAction() = default;
  AWS_BEDROCKAGENTRUNTIME_API AgenticRetrieveAction(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTRUNTIME_API AgenticRetrieveAction& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTRUNTIME_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Details of a full document expansion action.</p>
   */
  inline const AgenticRetrieveFullDocExpansionDetails& GetFullDocumentExpansion() const { return m_fullDocumentExpansion; }
  inline bool FullDocumentExpansionHasBeenSet() const { return m_fullDocumentExpansionHasBeenSet; }
  template <typename FullDocumentExpansionT = AgenticRetrieveFullDocExpansionDetails>
  void SetFullDocumentExpansion(FullDocumentExpansionT&& value) {
    m_fullDocumentExpansionHasBeenSet = true;
    m_fullDocumentExpansion = std::forward<FullDocumentExpansionT>(value);
  }
  template <typename FullDocumentExpansionT = AgenticRetrieveFullDocExpansionDetails>
  AgenticRetrieveAction& WithFullDocumentExpansion(FullDocumentExpansionT&& value) {
    SetFullDocumentExpansion(std::forward<FullDocumentExpansionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The details of a long-term memory retrieval that the agent chose to
   * perform.</p>
   */
  inline const AgenticRetrieveMemoryRetrieveDetails& GetMemoryRetrieve() const { return m_memoryRetrieve; }
  inline bool MemoryRetrieveHasBeenSet() const { return m_memoryRetrieveHasBeenSet; }
  template <typename MemoryRetrieveT = AgenticRetrieveMemoryRetrieveDetails>
  void SetMemoryRetrieve(MemoryRetrieveT&& value) {
    m_memoryRetrieveHasBeenSet = true;
    m_memoryRetrieve = std::forward<MemoryRetrieveT>(value);
  }
  template <typename MemoryRetrieveT = AgenticRetrieveMemoryRetrieveDetails>
  AgenticRetrieveAction& WithMemoryRetrieve(MemoryRetrieveT&& value) {
    SetMemoryRetrieve(std::forward<MemoryRetrieveT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Details of the retrieve action.</p>
   */
  inline const AgenticRetrieveActionDetails& GetRetrieve() const { return m_retrieve; }
  inline bool RetrieveHasBeenSet() const { return m_retrieveHasBeenSet; }
  template <typename RetrieveT = AgenticRetrieveActionDetails>
  void SetRetrieve(RetrieveT&& value) {
    m_retrieveHasBeenSet = true;
    m_retrieve = std::forward<RetrieveT>(value);
  }
  template <typename RetrieveT = AgenticRetrieveActionDetails>
  AgenticRetrieveAction& WithRetrieve(RetrieveT&& value) {
    SetRetrieve(std::forward<RetrieveT>(value));
    return *this;
  }
  ///@}
 private:
  AgenticRetrieveFullDocExpansionDetails m_fullDocumentExpansion;

  AgenticRetrieveMemoryRetrieveDetails m_memoryRetrieve;

  AgenticRetrieveActionDetails m_retrieve;
  bool m_fullDocumentExpansionHasBeenSet = false;
  bool m_memoryRetrieveHasBeenSet = false;
  bool m_retrieveHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockAgentRuntime
}  // namespace Aws
