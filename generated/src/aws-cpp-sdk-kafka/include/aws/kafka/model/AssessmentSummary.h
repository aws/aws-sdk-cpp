/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/kafka/Kafka_EXPORTS.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace Kafka {
namespace Model {

/**
 * <p>Summary of assessment findings broken down by category and
 * severity.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/kafka-2018-11-14/AssessmentSummary">AWS
 * API Reference</a></p>
 */
class AssessmentSummary {
 public:
  AWS_KAFKA_API AssessmentSummary() = default;
  AWS_KAFKA_API AssessmentSummary(Aws::Utils::Json::JsonView jsonValue);
  AWS_KAFKA_API AssessmentSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_KAFKA_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Count of findings grouped by category.</p>
   */
  inline const Aws::Map<Aws::String, int>& GetByCategory() const { return m_byCategory; }
  inline bool ByCategoryHasBeenSet() const { return m_byCategoryHasBeenSet; }
  template <typename ByCategoryT = Aws::Map<Aws::String, int>>
  void SetByCategory(ByCategoryT&& value) {
    m_byCategoryHasBeenSet = true;
    m_byCategory = std::forward<ByCategoryT>(value);
  }
  template <typename ByCategoryT = Aws::Map<Aws::String, int>>
  AssessmentSummary& WithByCategory(ByCategoryT&& value) {
    SetByCategory(std::forward<ByCategoryT>(value));
    return *this;
  }
  inline AssessmentSummary& AddByCategory(Aws::String key, int value) {
    m_byCategoryHasBeenSet = true;
    m_byCategory.emplace(key, value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Count of findings grouped by severity.</p>
   */
  inline const Aws::Map<Aws::String, int>& GetBySeverity() const { return m_bySeverity; }
  inline bool BySeverityHasBeenSet() const { return m_bySeverityHasBeenSet; }
  template <typename BySeverityT = Aws::Map<Aws::String, int>>
  void SetBySeverity(BySeverityT&& value) {
    m_bySeverityHasBeenSet = true;
    m_bySeverity = std::forward<BySeverityT>(value);
  }
  template <typename BySeverityT = Aws::Map<Aws::String, int>>
  AssessmentSummary& WithBySeverity(BySeverityT&& value) {
    SetBySeverity(std::forward<BySeverityT>(value));
    return *this;
  }
  inline AssessmentSummary& AddBySeverity(Aws::String key, int value) {
    m_bySeverityHasBeenSet = true;
    m_bySeverity.emplace(key, value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>True when the assessment detected more findings than it stores. Resolve the
   * reported findings and re-run the assessment to surface the remaining ones.</p>
   */
  inline bool GetFindingsCapped() const { return m_findingsCapped; }
  inline bool FindingsCappedHasBeenSet() const { return m_findingsCappedHasBeenSet; }
  inline void SetFindingsCapped(bool value) {
    m_findingsCappedHasBeenSet = true;
    m_findingsCapped = value;
  }
  inline AssessmentSummary& WithFindingsCapped(bool value) {
    SetFindingsCapped(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>True when the assessment detected at least one ERROR-severity finding. ERROR
   * findings block the migration until resolved.</p>
   */
  inline bool GetHasBlockingFindings() const { return m_hasBlockingFindings; }
  inline bool HasBlockingFindingsHasBeenSet() const { return m_hasBlockingFindingsHasBeenSet; }
  inline void SetHasBlockingFindings(bool value) {
    m_hasBlockingFindingsHasBeenSet = true;
    m_hasBlockingFindings = value;
  }
  inline AssessmentSummary& WithHasBlockingFindings(bool value) {
    SetHasBlockingFindings(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The total number of findings detected by the assessment, including any
   * findings beyond the stored-findings cap.</p>
   */
  inline int GetTotalFindings() const { return m_totalFindings; }
  inline bool TotalFindingsHasBeenSet() const { return m_totalFindingsHasBeenSet; }
  inline void SetTotalFindings(int value) {
    m_totalFindingsHasBeenSet = true;
    m_totalFindings = value;
  }
  inline AssessmentSummary& WithTotalFindings(int value) {
    SetTotalFindings(value);
    return *this;
  }
  ///@}
 private:
  Aws::Map<Aws::String, int> m_byCategory;

  Aws::Map<Aws::String, int> m_bySeverity;

  bool m_findingsCapped{false};

  bool m_hasBlockingFindings{false};

  int m_totalFindings{0};
  bool m_byCategoryHasBeenSet = false;
  bool m_bySeverityHasBeenSet = false;
  bool m_findingsCappedHasBeenSet = false;
  bool m_hasBlockingFindingsHasBeenSet = false;
  bool m_totalFindingsHasBeenSet = false;
};

}  // namespace Model
}  // namespace Kafka
}  // namespace Aws
