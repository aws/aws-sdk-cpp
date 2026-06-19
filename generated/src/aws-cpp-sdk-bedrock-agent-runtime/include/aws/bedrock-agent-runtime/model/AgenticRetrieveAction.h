/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agent-runtime/BedrockAgentRuntime_EXPORTS.h>
#include <aws/bedrock-agent-runtime/model/AgenticRetrieveActionDetails.h>
#include <aws/bedrock-agent-runtime/model/AgenticRetrieveFullDocExpansionDetails.h>

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

  AgenticRetrieveActionDetails m_retrieve;
  bool m_fullDocumentExpansionHasBeenSet = false;
  bool m_retrieveHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockAgentRuntime
}  // namespace Aws
