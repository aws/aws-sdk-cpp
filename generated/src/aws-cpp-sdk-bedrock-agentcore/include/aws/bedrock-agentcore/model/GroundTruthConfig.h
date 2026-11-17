/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore/BedrockAgentCore_EXPORTS.h>
#include <aws/bedrock-agentcore/model/EvaluatorFilter.h>
#include <aws/bedrock-agentcore/model/GroundTruthField.h>
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
 * <p>Reference fields to copy from the sessions into the generated
 * examples.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-2024-02-28/GroundTruthConfig">AWS
 * API Reference</a></p>
 */
class GroundTruthConfig {
 public:
  AWS_BEDROCKAGENTCORE_API GroundTruthConfig() = default;
  AWS_BEDROCKAGENTCORE_API GroundTruthConfig(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORE_API GroundTruthConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORE_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The reference fields to copy. Values are copied from the session as observed,
   * not generated.</p>
   */
  inline const Aws::Vector<GroundTruthField>& GetFields() const { return m_fields; }
  inline bool FieldsHasBeenSet() const { return m_fieldsHasBeenSet; }
  template <typename FieldsT = Aws::Vector<GroundTruthField>>
  void SetFields(FieldsT&& value) {
    m_fieldsHasBeenSet = true;
    m_fields = std::forward<FieldsT>(value);
  }
  template <typename FieldsT = Aws::Vector<GroundTruthField>>
  GroundTruthConfig& WithFields(FieldsT&& value) {
    SetFields(std::forward<FieldsT>(value));
    return *this;
  }
  inline GroundTruthConfig& AddFields(GroundTruthField value) {
    m_fieldsHasBeenSet = true;
    m_fields.push_back(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Evaluator conditions that a selected session must also meet to have reference
   * fields copied. If you don't specify these, the generation uses the evaluator
   * filters from <code>selection</code>. If the selection names sessions and traces
   * by ID, every selected session gets reference fields. Specify an empty list to
   * give every selected session reference fields. You can't specify quality filters
   * with a <code>cloudWatchLogs</code> source.</p>
   */
  inline const Aws::Vector<EvaluatorFilter>& GetQualityFilters() const { return m_qualityFilters; }
  inline bool QualityFiltersHasBeenSet() const { return m_qualityFiltersHasBeenSet; }
  template <typename QualityFiltersT = Aws::Vector<EvaluatorFilter>>
  void SetQualityFilters(QualityFiltersT&& value) {
    m_qualityFiltersHasBeenSet = true;
    m_qualityFilters = std::forward<QualityFiltersT>(value);
  }
  template <typename QualityFiltersT = Aws::Vector<EvaluatorFilter>>
  GroundTruthConfig& WithQualityFilters(QualityFiltersT&& value) {
    SetQualityFilters(std::forward<QualityFiltersT>(value));
    return *this;
  }
  template <typename QualityFiltersT = EvaluatorFilter>
  GroundTruthConfig& AddQualityFilters(QualityFiltersT&& value) {
    m_qualityFiltersHasBeenSet = true;
    m_qualityFilters.emplace_back(std::forward<QualityFiltersT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Vector<GroundTruthField> m_fields;

  Aws::Vector<EvaluatorFilter> m_qualityFilters;
  bool m_fieldsHasBeenSet = false;
  bool m_qualityFiltersHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockAgentCore
}  // namespace Aws
