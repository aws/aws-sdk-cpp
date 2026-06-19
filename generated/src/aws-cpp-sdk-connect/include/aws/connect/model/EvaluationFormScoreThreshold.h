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
 * <p>Information about a score threshold for a performance category.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/EvaluationFormScoreThreshold">AWS
 * API Reference</a></p>
 */
class EvaluationFormScoreThreshold {
 public:
  AWS_CONNECT_API EvaluationFormScoreThreshold() = default;
  AWS_CONNECT_API EvaluationFormScoreThreshold(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONNECT_API EvaluationFormScoreThreshold& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The performance category name.</p>
   */
  inline PerformanceCategoryName GetPerformanceCategory() const { return m_performanceCategory; }
  inline bool PerformanceCategoryHasBeenSet() const { return m_performanceCategoryHasBeenSet; }
  inline void SetPerformanceCategory(PerformanceCategoryName value) {
    m_performanceCategoryHasBeenSet = true;
    m_performanceCategory = value;
  }
  inline EvaluationFormScoreThreshold& WithPerformanceCategory(PerformanceCategoryName value) {
    SetPerformanceCategory(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The minimum score percentage for the performance category.</p>
   */
  inline double GetMinScorePercentage() const { return m_minScorePercentage; }
  inline bool MinScorePercentageHasBeenSet() const { return m_minScorePercentageHasBeenSet; }
  inline void SetMinScorePercentage(double value) {
    m_minScorePercentageHasBeenSet = true;
    m_minScorePercentage = value;
  }
  inline EvaluationFormScoreThreshold& WithMinScorePercentage(double value) {
    SetMinScorePercentage(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The maximum score percentage for the performance category.</p>
   */
  inline double GetMaxScorePercentage() const { return m_maxScorePercentage; }
  inline bool MaxScorePercentageHasBeenSet() const { return m_maxScorePercentageHasBeenSet; }
  inline void SetMaxScorePercentage(double value) {
    m_maxScorePercentageHasBeenSet = true;
    m_maxScorePercentage = value;
  }
  inline EvaluationFormScoreThreshold& WithMaxScorePercentage(double value) {
    SetMaxScorePercentage(value);
    return *this;
  }
  ///@}
 private:
  PerformanceCategoryName m_performanceCategory{PerformanceCategoryName::NOT_SET};

  double m_minScorePercentage{0.0};

  double m_maxScorePercentage{0.0};
  bool m_performanceCategoryHasBeenSet = false;
  bool m_minScorePercentageHasBeenSet = false;
  bool m_maxScorePercentageHasBeenSet = false;
};

}  // namespace Model
}  // namespace Connect
}  // namespace Aws
