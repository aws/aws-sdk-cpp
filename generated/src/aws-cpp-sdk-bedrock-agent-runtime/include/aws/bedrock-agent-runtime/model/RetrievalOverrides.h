/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agent-runtime/BedrockAgentRuntime_EXPORTS.h>
#include <aws/bedrock-agent-runtime/model/RetrievalFilter.h>

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
 * <p>Overrides for retrieval behavior.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agent-runtime-2023-07-26/RetrievalOverrides">AWS
 * API Reference</a></p>
 */
class RetrievalOverrides {
 public:
  AWS_BEDROCKAGENTRUNTIME_API RetrievalOverrides() = default;
  AWS_BEDROCKAGENTRUNTIME_API RetrievalOverrides(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTRUNTIME_API RetrievalOverrides& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTRUNTIME_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>A filter to apply to the retrieval results.</p>
   */
  inline const RetrievalFilter& GetFilter() const { return m_filter; }
  inline bool FilterHasBeenSet() const { return m_filterHasBeenSet; }
  template <typename FilterT = RetrievalFilter>
  void SetFilter(FilterT&& value) {
    m_filterHasBeenSet = true;
    m_filter = std::forward<FilterT>(value);
  }
  template <typename FilterT = RetrievalFilter>
  RetrievalOverrides& WithFilter(FilterT&& value) {
    SetFilter(std::forward<FilterT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The maximum number of results to return.</p>
   */
  inline int GetMaxNumberOfResults() const { return m_maxNumberOfResults; }
  inline bool MaxNumberOfResultsHasBeenSet() const { return m_maxNumberOfResultsHasBeenSet; }
  inline void SetMaxNumberOfResults(int value) {
    m_maxNumberOfResultsHasBeenSet = true;
    m_maxNumberOfResults = value;
  }
  inline RetrievalOverrides& WithMaxNumberOfResults(int value) {
    SetMaxNumberOfResults(value);
    return *this;
  }
  ///@}
 private:
  RetrievalFilter m_filter;

  int m_maxNumberOfResults{0};
  bool m_filterHasBeenSet = false;
  bool m_maxNumberOfResultsHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockAgentRuntime
}  // namespace Aws
