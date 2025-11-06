/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/connect/model/BooleanComparisonType.h>
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
 * <p>A boolean search condition for Search APIs.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/BooleanCondition">AWS
 * API Reference</a></p>
 */
class BooleanCondition {
 public:
  AWS_CONNECT_API BooleanCondition() = default;
  AWS_CONNECT_API BooleanCondition(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONNECT_API BooleanCondition& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>A name of the property to be searched.</p>
   */
  inline const Aws::String& GetFieldName() const { return m_fieldName; }
  inline bool FieldNameHasBeenSet() const { return m_fieldNameHasBeenSet; }
  template <typename FieldNameT = Aws::String>
  void SetFieldName(FieldNameT&& value) {
    m_fieldNameHasBeenSet = true;
    m_fieldName = std::forward<FieldNameT>(value);
  }
  template <typename FieldNameT = Aws::String>
  BooleanCondition& WithFieldName(FieldNameT&& value) {
    SetFieldName(std::forward<FieldNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Boolean property comparison type.</p>
   */
  inline BooleanComparisonType GetComparisonType() const { return m_comparisonType; }
  inline bool ComparisonTypeHasBeenSet() const { return m_comparisonTypeHasBeenSet; }
  inline void SetComparisonType(BooleanComparisonType value) {
    m_comparisonTypeHasBeenSet = true;
    m_comparisonType = value;
  }
  inline BooleanCondition& WithComparisonType(BooleanComparisonType value) {
    SetComparisonType(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_fieldName;
  bool m_fieldNameHasBeenSet = false;

  BooleanComparisonType m_comparisonType{BooleanComparisonType::NOT_SET};
  bool m_comparisonTypeHasBeenSet = false;
};

}  // namespace Model
}  // namespace Connect
}  // namespace Aws
