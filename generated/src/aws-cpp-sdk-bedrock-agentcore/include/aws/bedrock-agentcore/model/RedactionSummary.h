/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore/BedrockAgentCore_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>

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
 * <p>A summary of what redaction found in a dataset generation. It contains counts
 * only, never the masked data.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-2024-02-28/RedactionSummary">AWS
 * API Reference</a></p>
 */
class RedactionSummary {
 public:
  AWS_BEDROCKAGENTCORE_API RedactionSummary() = default;
  AWS_BEDROCKAGENTCORE_API RedactionSummary(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORE_API RedactionSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORE_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The number of scenarios scanned for sensitive data.</p>
   */
  inline int GetScenariosScanned() const { return m_scenariosScanned; }
  inline bool ScenariosScannedHasBeenSet() const { return m_scenariosScannedHasBeenSet; }
  inline void SetScenariosScanned(int value) {
    m_scenariosScannedHasBeenSet = true;
    m_scenariosScanned = value;
  }
  inline RedactionSummary& WithScenariosScanned(int value) {
    SetScenariosScanned(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The number of matches for each data identifier.</p>
   */
  inline const Aws::Map<Aws::String, int>& GetFindingCounts() const { return m_findingCounts; }
  inline bool FindingCountsHasBeenSet() const { return m_findingCountsHasBeenSet; }
  template <typename FindingCountsT = Aws::Map<Aws::String, int>>
  void SetFindingCounts(FindingCountsT&& value) {
    m_findingCountsHasBeenSet = true;
    m_findingCounts = std::forward<FindingCountsT>(value);
  }
  template <typename FindingCountsT = Aws::Map<Aws::String, int>>
  RedactionSummary& WithFindingCounts(FindingCountsT&& value) {
    SetFindingCounts(std::forward<FindingCountsT>(value));
    return *this;
  }
  inline RedactionSummary& AddFindingCounts(Aws::String key, int value) {
    m_findingCountsHasBeenSet = true;
    m_findingCounts.emplace(key, value);
    return *this;
  }
  ///@}
 private:
  int m_scenariosScanned{0};

  Aws::Map<Aws::String, int> m_findingCounts;
  bool m_scenariosScannedHasBeenSet = false;
  bool m_findingCountsHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockAgentCore
}  // namespace Aws
