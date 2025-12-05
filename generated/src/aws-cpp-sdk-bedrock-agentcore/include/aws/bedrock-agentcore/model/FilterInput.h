/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore/BedrockAgentCore_EXPORTS.h>
#include <aws/bedrock-agentcore/model/BranchFilter.h>
#include <aws/bedrock-agentcore/model/EventMetadataFilterExpression.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace BedrockAgentCore {
namespace Model {

/**
 * <p>Contains filter criteria for listing events.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-2024-02-28/FilterInput">AWS
 * API Reference</a></p>
 */
class FilterInput {
 public:
  AWS_BEDROCKAGENTCORE_API FilterInput() = default;
  AWS_BEDROCKAGENTCORE_API FilterInput(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORE_API FilterInput& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORE_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The branch filter criteria to apply when listing events.</p>
   */
  inline const BranchFilter& GetBranch() const { return m_branch; }
  inline bool BranchHasBeenSet() const { return m_branchHasBeenSet; }
  template <typename BranchT = BranchFilter>
  void SetBranch(BranchT&& value) {
    m_branchHasBeenSet = true;
    m_branch = std::forward<BranchT>(value);
  }
  template <typename BranchT = BranchFilter>
  FilterInput& WithBranch(BranchT&& value) {
    SetBranch(std::forward<BranchT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Event metadata filter criteria to apply when retrieving events.</p>
   */
  inline const Aws::Vector<EventMetadataFilterExpression>& GetEventMetadata() const { return m_eventMetadata; }
  inline bool EventMetadataHasBeenSet() const { return m_eventMetadataHasBeenSet; }
  template <typename EventMetadataT = Aws::Vector<EventMetadataFilterExpression>>
  void SetEventMetadata(EventMetadataT&& value) {
    m_eventMetadataHasBeenSet = true;
    m_eventMetadata = std::forward<EventMetadataT>(value);
  }
  template <typename EventMetadataT = Aws::Vector<EventMetadataFilterExpression>>
  FilterInput& WithEventMetadata(EventMetadataT&& value) {
    SetEventMetadata(std::forward<EventMetadataT>(value));
    return *this;
  }
  template <typename EventMetadataT = EventMetadataFilterExpression>
  FilterInput& AddEventMetadata(EventMetadataT&& value) {
    m_eventMetadataHasBeenSet = true;
    m_eventMetadata.emplace_back(std::forward<EventMetadataT>(value));
    return *this;
  }
  ///@}
 private:
  BranchFilter m_branch;

  Aws::Vector<EventMetadataFilterExpression> m_eventMetadata;
  bool m_branchHasBeenSet = false;
  bool m_eventMetadataHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockAgentCore
}  // namespace Aws
