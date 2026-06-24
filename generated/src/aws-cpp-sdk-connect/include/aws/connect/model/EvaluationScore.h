/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/connect/model/PerformanceCategoryName.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace Connect {
namespace Model {

/**
 * <p>Information about scores of a contact evaluation item (section or
 * question).</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/EvaluationScore">AWS
 * API Reference</a></p>
 */
class EvaluationScore {
 public:
  AWS_CONNECT_API EvaluationScore() = default;
  AWS_CONNECT_API EvaluationScore(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONNECT_API EvaluationScore& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The score percentage for an item in a contact evaluation.</p>
   */
  inline double GetPercentage() const { return m_percentage; }
  inline bool PercentageHasBeenSet() const { return m_percentageHasBeenSet; }
  inline void SetPercentage(double value) {
    m_percentageHasBeenSet = true;
    m_percentage = value;
  }
  inline EvaluationScore& WithPercentage(double value) {
    SetPercentage(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The flag to mark the item as not applicable for scoring.</p>
   */
  inline bool GetNotApplicable() const { return m_notApplicable; }
  inline bool NotApplicableHasBeenSet() const { return m_notApplicableHasBeenSet; }
  inline void SetNotApplicable(bool value) {
    m_notApplicableHasBeenSet = true;
    m_notApplicable = value;
  }
  inline EvaluationScore& WithNotApplicable(bool value) {
    SetNotApplicable(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The flag that marks the item as automatic fail. If the item or a child item
   * gets an automatic fail answer, this flag will be true.</p>
   */
  inline bool GetAutomaticFail() const { return m_automaticFail; }
  inline bool AutomaticFailHasBeenSet() const { return m_automaticFailHasBeenSet; }
  inline void SetAutomaticFail(bool value) {
    m_automaticFailHasBeenSet = true;
    m_automaticFail = value;
  }
  inline EvaluationScore& WithAutomaticFail(bool value) {
    SetAutomaticFail(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Weight applied to this evaluation score.</p>
   */
  inline double GetAppliedWeight() const { return m_appliedWeight; }
  inline bool AppliedWeightHasBeenSet() const { return m_appliedWeightHasBeenSet; }
  inline void SetAppliedWeight(double value) {
    m_appliedWeightHasBeenSet = true;
    m_appliedWeight = value;
  }
  inline EvaluationScore& WithAppliedWeight(double value) {
    SetAppliedWeight(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The points earned for the item.</p>
   */
  inline int GetEarnedPoints() const { return m_earnedPoints; }
  inline bool EarnedPointsHasBeenSet() const { return m_earnedPointsHasBeenSet; }
  inline void SetEarnedPoints(int value) {
    m_earnedPointsHasBeenSet = true;
    m_earnedPoints = value;
  }
  inline EvaluationScore& WithEarnedPoints(int value) {
    SetEarnedPoints(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The maximum base points possible for the item.</p>
   */
  inline int GetMaxBasePoint() const { return m_maxBasePoint; }
  inline bool MaxBasePointHasBeenSet() const { return m_maxBasePointHasBeenSet; }
  inline void SetMaxBasePoint(int value) {
    m_maxBasePointHasBeenSet = true;
    m_maxBasePoint = value;
  }
  inline EvaluationScore& WithMaxBasePoint(int value) {
    SetMaxBasePoint(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The performance category for the score.</p>
   */
  inline PerformanceCategoryName GetPerformanceCategory() const { return m_performanceCategory; }
  inline bool PerformanceCategoryHasBeenSet() const { return m_performanceCategoryHasBeenSet; }
  inline void SetPerformanceCategory(PerformanceCategoryName value) {
    m_performanceCategoryHasBeenSet = true;
    m_performanceCategory = value;
  }
  inline EvaluationScore& WithPerformanceCategory(PerformanceCategoryName value) {
    SetPerformanceCategory(value);
    return *this;
  }
  ///@}
 private:
  double m_percentage{0.0};

  bool m_notApplicable{false};

  bool m_automaticFail{false};

  double m_appliedWeight{0.0};

  int m_earnedPoints{0};

  int m_maxBasePoint{0};

  PerformanceCategoryName m_performanceCategory{PerformanceCategoryName::NOT_SET};
  bool m_percentageHasBeenSet = false;
  bool m_notApplicableHasBeenSet = false;
  bool m_automaticFailHasBeenSet = false;
  bool m_appliedWeightHasBeenSet = false;
  bool m_earnedPointsHasBeenSet = false;
  bool m_maxBasePointHasBeenSet = false;
  bool m_performanceCategoryHasBeenSet = false;
};

}  // namespace Model
}  // namespace Connect
}  // namespace Aws
