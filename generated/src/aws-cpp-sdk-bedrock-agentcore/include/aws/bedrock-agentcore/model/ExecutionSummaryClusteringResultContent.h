/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore/BedrockAgentCore_EXPORTS.h>
#include <aws/bedrock-agentcore/model/ExecutionSummaryCluster.h>
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
 * <p>Customer-facing execution summary clustering result written to
 * S3.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-2024-02-28/ExecutionSummaryClusteringResultContent">AWS
 * API Reference</a></p>
 */
class ExecutionSummaryClusteringResultContent {
 public:
  AWS_BEDROCKAGENTCORE_API ExecutionSummaryClusteringResultContent() = default;
  AWS_BEDROCKAGENTCORE_API ExecutionSummaryClusteringResultContent(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORE_API ExecutionSummaryClusteringResultContent& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORE_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The list of execution summary clusters identified across analyzed
   * sessions.</p>
   */
  inline const Aws::Vector<ExecutionSummaryCluster>& GetExecutionSummaries() const { return m_executionSummaries; }
  inline bool ExecutionSummariesHasBeenSet() const { return m_executionSummariesHasBeenSet; }
  template <typename ExecutionSummariesT = Aws::Vector<ExecutionSummaryCluster>>
  void SetExecutionSummaries(ExecutionSummariesT&& value) {
    m_executionSummariesHasBeenSet = true;
    m_executionSummaries = std::forward<ExecutionSummariesT>(value);
  }
  template <typename ExecutionSummariesT = Aws::Vector<ExecutionSummaryCluster>>
  ExecutionSummaryClusteringResultContent& WithExecutionSummaries(ExecutionSummariesT&& value) {
    SetExecutionSummaries(std::forward<ExecutionSummariesT>(value));
    return *this;
  }
  template <typename ExecutionSummariesT = ExecutionSummaryCluster>
  ExecutionSummaryClusteringResultContent& AddExecutionSummaries(ExecutionSummariesT&& value) {
    m_executionSummariesHasBeenSet = true;
    m_executionSummaries.emplace_back(std::forward<ExecutionSummariesT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Vector<ExecutionSummaryCluster> m_executionSummaries;
  bool m_executionSummariesHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockAgentCore
}  // namespace Aws
