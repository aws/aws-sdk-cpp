/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/devops-agent/DevOpsAgent_EXPORTS.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace DevOpsAgent {
namespace Model {

/**
 * <p>Content of a recommendation</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/devops-agent-2026-01-01/RecommendationContent">AWS
 * API Reference</a></p>
 */
class RecommendationContent {
 public:
  AWS_DEVOPSAGENT_API RecommendationContent() = default;
  AWS_DEVOPSAGENT_API RecommendationContent(Aws::Utils::Json::JsonView jsonValue);
  AWS_DEVOPSAGENT_API RecommendationContent& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_DEVOPSAGENT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>A brief summary of the recommendation.</p>
   */
  inline const Aws::String& GetSummary() const { return m_summary; }
  inline bool SummaryHasBeenSet() const { return m_summaryHasBeenSet; }
  template <typename SummaryT = Aws::String>
  void SetSummary(SummaryT&& value) {
    m_summaryHasBeenSet = true;
    m_summary = std::forward<SummaryT>(value);
  }
  template <typename SummaryT = Aws::String>
  RecommendationContent& WithSummary(SummaryT&& value) {
    SetSummary(std::forward<SummaryT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Agent-ready specification with detailed implementation steps</p>
   */
  inline const Aws::String& GetSpec() const { return m_spec; }
  inline bool SpecHasBeenSet() const { return m_specHasBeenSet; }
  template <typename SpecT = Aws::String>
  void SetSpec(SpecT&& value) {
    m_specHasBeenSet = true;
    m_spec = std::forward<SpecT>(value);
  }
  template <typename SpecT = Aws::String>
  RecommendationContent& WithSpec(SpecT&& value) {
    SetSpec(std::forward<SpecT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_summary;

  Aws::String m_spec;
  bool m_summaryHasBeenSet = false;
  bool m_specHasBeenSet = false;
};

}  // namespace Model
}  // namespace DevOpsAgent
}  // namespace Aws
