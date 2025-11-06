/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/connect/model/DecimalComparisonType.h>
#include <aws/core/utils/memory/stl/AWSString.h>

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
 * <p>A decimal search condition for Search APIs.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/DecimalCondition">AWS
 * API Reference</a></p>
 */
class DecimalCondition {
 public:
  AWS_CONNECT_API DecimalCondition() = default;
  AWS_CONNECT_API DecimalCondition(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONNECT_API DecimalCondition& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>A name of the decimal property to be searched.</p>
   */
  inline const Aws::String& GetFieldName() const { return m_fieldName; }
  inline bool FieldNameHasBeenSet() const { return m_fieldNameHasBeenSet; }
  template <typename FieldNameT = Aws::String>
  void SetFieldName(FieldNameT&& value) {
    m_fieldNameHasBeenSet = true;
    m_fieldName = std::forward<FieldNameT>(value);
  }
  template <typename FieldNameT = Aws::String>
  DecimalCondition& WithFieldName(FieldNameT&& value) {
    SetFieldName(std::forward<FieldNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A minimum value of the decimal property.</p>
   */
  inline double GetMinValue() const { return m_minValue; }
  inline bool MinValueHasBeenSet() const { return m_minValueHasBeenSet; }
  inline void SetMinValue(double value) {
    m_minValueHasBeenSet = true;
    m_minValue = value;
  }
  inline DecimalCondition& WithMinValue(double value) {
    SetMinValue(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A maximum value of the decimal property.</p>
   */
  inline double GetMaxValue() const { return m_maxValue; }
  inline bool MaxValueHasBeenSet() const { return m_maxValueHasBeenSet; }
  inline void SetMaxValue(double value) {
    m_maxValueHasBeenSet = true;
    m_maxValue = value;
  }
  inline DecimalCondition& WithMaxValue(double value) {
    SetMaxValue(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The type of comparison to be made when evaluating the decimal condition. </p>
   */
  inline DecimalComparisonType GetComparisonType() const { return m_comparisonType; }
  inline bool ComparisonTypeHasBeenSet() const { return m_comparisonTypeHasBeenSet; }
  inline void SetComparisonType(DecimalComparisonType value) {
    m_comparisonTypeHasBeenSet = true;
    m_comparisonType = value;
  }
  inline DecimalCondition& WithComparisonType(DecimalComparisonType value) {
    SetComparisonType(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_fieldName;
  bool m_fieldNameHasBeenSet = false;

  double m_minValue{0.0};
  bool m_minValueHasBeenSet = false;

  double m_maxValue{0.0};
  bool m_maxValueHasBeenSet = false;

  DecimalComparisonType m_comparisonType{DecimalComparisonType::NOT_SET};
  bool m_comparisonTypeHasBeenSet = false;
};

}  // namespace Model
}  // namespace Connect
}  // namespace Aws
