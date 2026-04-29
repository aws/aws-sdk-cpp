/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore/BedrockAgentCore_EXPORTS.h>
#include <aws/bedrock-agentcore/model/CloudWatchLogsFilter.h>
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
 * <p>A rule configuration for filtering agent traces from CloudWatch
 * Logs.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-2024-02-28/CloudWatchLogsRule">AWS
 * API Reference</a></p>
 */
class CloudWatchLogsRule {
 public:
  AWS_BEDROCKAGENTCORE_API CloudWatchLogsRule() = default;
  AWS_BEDROCKAGENTCORE_API CloudWatchLogsRule(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORE_API CloudWatchLogsRule& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORE_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The list of filters to apply when reading agent traces.</p>
   */
  inline const Aws::Vector<CloudWatchLogsFilter>& GetFilters() const { return m_filters; }
  inline bool FiltersHasBeenSet() const { return m_filtersHasBeenSet; }
  template <typename FiltersT = Aws::Vector<CloudWatchLogsFilter>>
  void SetFilters(FiltersT&& value) {
    m_filtersHasBeenSet = true;
    m_filters = std::forward<FiltersT>(value);
  }
  template <typename FiltersT = Aws::Vector<CloudWatchLogsFilter>>
  CloudWatchLogsRule& WithFilters(FiltersT&& value) {
    SetFilters(std::forward<FiltersT>(value));
    return *this;
  }
  template <typename FiltersT = CloudWatchLogsFilter>
  CloudWatchLogsRule& AddFilters(FiltersT&& value) {
    m_filtersHasBeenSet = true;
    m_filters.emplace_back(std::forward<FiltersT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Vector<CloudWatchLogsFilter> m_filters;
  bool m_filtersHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockAgentCore
}  // namespace Aws
