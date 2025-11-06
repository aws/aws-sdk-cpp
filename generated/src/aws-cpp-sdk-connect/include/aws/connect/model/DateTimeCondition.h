/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/connect/model/DateTimeComparisonType.h>
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
 * <p>A datetime search condition for Search APIs.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/DateTimeCondition">AWS
 * API Reference</a></p>
 */
class DateTimeCondition {
 public:
  AWS_CONNECT_API DateTimeCondition() = default;
  AWS_CONNECT_API DateTimeCondition(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONNECT_API DateTimeCondition& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>A name of the datetime property to be searched</p>
   */
  inline const Aws::String& GetFieldName() const { return m_fieldName; }
  inline bool FieldNameHasBeenSet() const { return m_fieldNameHasBeenSet; }
  template <typename FieldNameT = Aws::String>
  void SetFieldName(FieldNameT&& value) {
    m_fieldNameHasBeenSet = true;
    m_fieldName = std::forward<FieldNameT>(value);
  }
  template <typename FieldNameT = Aws::String>
  DateTimeCondition& WithFieldName(FieldNameT&& value) {
    SetFieldName(std::forward<FieldNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A minimum value of the property. </p>
   */
  inline const Aws::String& GetMinValue() const { return m_minValue; }
  inline bool MinValueHasBeenSet() const { return m_minValueHasBeenSet; }
  template <typename MinValueT = Aws::String>
  void SetMinValue(MinValueT&& value) {
    m_minValueHasBeenSet = true;
    m_minValue = std::forward<MinValueT>(value);
  }
  template <typename MinValueT = Aws::String>
  DateTimeCondition& WithMinValue(MinValueT&& value) {
    SetMinValue(std::forward<MinValueT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A maximum value of the property. </p>
   */
  inline const Aws::String& GetMaxValue() const { return m_maxValue; }
  inline bool MaxValueHasBeenSet() const { return m_maxValueHasBeenSet; }
  template <typename MaxValueT = Aws::String>
  void SetMaxValue(MaxValueT&& value) {
    m_maxValueHasBeenSet = true;
    m_maxValue = std::forward<MaxValueT>(value);
  }
  template <typename MaxValueT = Aws::String>
  DateTimeCondition& WithMaxValue(MaxValueT&& value) {
    SetMaxValue(std::forward<MaxValueT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Datetime property comparison type. </p>
   */
  inline DateTimeComparisonType GetComparisonType() const { return m_comparisonType; }
  inline bool ComparisonTypeHasBeenSet() const { return m_comparisonTypeHasBeenSet; }
  inline void SetComparisonType(DateTimeComparisonType value) {
    m_comparisonTypeHasBeenSet = true;
    m_comparisonType = value;
  }
  inline DateTimeCondition& WithComparisonType(DateTimeComparisonType value) {
    SetComparisonType(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_fieldName;
  bool m_fieldNameHasBeenSet = false;

  Aws::String m_minValue;
  bool m_minValueHasBeenSet = false;

  Aws::String m_maxValue;
  bool m_maxValueHasBeenSet = false;

  DateTimeComparisonType m_comparisonType{DateTimeComparisonType::NOT_SET};
  bool m_comparisonTypeHasBeenSet = false;
};

}  // namespace Model
}  // namespace Connect
}  // namespace Aws
