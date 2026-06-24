/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore/BedrockAgentCore_EXPORTS.h>
#include <aws/bedrock-agentcore/model/FailureCategoryCluster.h>
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
 * <p>The failure analysis clustering result containing categorized failure
 * clusters with root causes and remediation recommendations.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-2024-02-28/FailureAnalysisResultContent">AWS
 * API Reference</a></p>
 */
class FailureAnalysisResultContent {
 public:
  AWS_BEDROCKAGENTCORE_API FailureAnalysisResultContent() = default;
  AWS_BEDROCKAGENTCORE_API FailureAnalysisResultContent(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORE_API FailureAnalysisResultContent& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORE_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The list of failure category clusters identified across analyzed
   * sessions.</p>
   */
  inline const Aws::Vector<FailureCategoryCluster>& GetFailures() const { return m_failures; }
  inline bool FailuresHasBeenSet() const { return m_failuresHasBeenSet; }
  template <typename FailuresT = Aws::Vector<FailureCategoryCluster>>
  void SetFailures(FailuresT&& value) {
    m_failuresHasBeenSet = true;
    m_failures = std::forward<FailuresT>(value);
  }
  template <typename FailuresT = Aws::Vector<FailureCategoryCluster>>
  FailureAnalysisResultContent& WithFailures(FailuresT&& value) {
    SetFailures(std::forward<FailuresT>(value));
    return *this;
  }
  template <typename FailuresT = FailureCategoryCluster>
  FailureAnalysisResultContent& AddFailures(FailuresT&& value) {
    m_failuresHasBeenSet = true;
    m_failures.emplace_back(std::forward<FailuresT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Vector<FailureCategoryCluster> m_failures;
  bool m_failuresHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockAgentCore
}  // namespace Aws
