/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cleanroomsml/CleanRoomsML_EXPORTS.h>
#include <aws/cleanroomsml/model/SyntheticDataColumnType.h>
#include <aws/core/utils/memory/stl/AWSString.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace CleanRoomsML {
namespace Model {

/**
 * <p>Properties that define how a specific data column should be handled during
 * synthetic data generation, including its name, type, and role in predictive
 * modeling.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/cleanroomsml-2023-09-06/SyntheticDataColumnProperties">AWS
 * API Reference</a></p>
 */
class SyntheticDataColumnProperties {
 public:
  AWS_CLEANROOMSML_API SyntheticDataColumnProperties() = default;
  AWS_CLEANROOMSML_API SyntheticDataColumnProperties(Aws::Utils::Json::JsonView jsonValue);
  AWS_CLEANROOMSML_API SyntheticDataColumnProperties& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_CLEANROOMSML_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The name of the data column as it appears in the dataset.</p>
   */
  inline const Aws::String& GetColumnName() const { return m_columnName; }
  inline bool ColumnNameHasBeenSet() const { return m_columnNameHasBeenSet; }
  template <typename ColumnNameT = Aws::String>
  void SetColumnName(ColumnNameT&& value) {
    m_columnNameHasBeenSet = true;
    m_columnName = std::forward<ColumnNameT>(value);
  }
  template <typename ColumnNameT = Aws::String>
  SyntheticDataColumnProperties& WithColumnName(ColumnNameT&& value) {
    SetColumnName(std::forward<ColumnNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The data type of the column, which determines how the synthetic data
   * generation algorithm processes and synthesizes values for this column.</p>
   */
  inline SyntheticDataColumnType GetColumnType() const { return m_columnType; }
  inline bool ColumnTypeHasBeenSet() const { return m_columnTypeHasBeenSet; }
  inline void SetColumnType(SyntheticDataColumnType value) {
    m_columnTypeHasBeenSet = true;
    m_columnType = value;
  }
  inline SyntheticDataColumnProperties& WithColumnType(SyntheticDataColumnType value) {
    SetColumnType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Indicates if this column contains predictive values that should be treated as
   * target variables in machine learning models. This affects how the synthetic data
   * generation preserves statistical relationships.</p>
   */
  inline bool GetIsPredictiveValue() const { return m_isPredictiveValue; }
  inline bool IsPredictiveValueHasBeenSet() const { return m_isPredictiveValueHasBeenSet; }
  inline void SetIsPredictiveValue(bool value) {
    m_isPredictiveValueHasBeenSet = true;
    m_isPredictiveValue = value;
  }
  inline SyntheticDataColumnProperties& WithIsPredictiveValue(bool value) {
    SetIsPredictiveValue(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_columnName;
  bool m_columnNameHasBeenSet = false;

  SyntheticDataColumnType m_columnType{SyntheticDataColumnType::NOT_SET};
  bool m_columnTypeHasBeenSet = false;

  bool m_isPredictiveValue{false};
  bool m_isPredictiveValueHasBeenSet = false;
};

}  // namespace Model
}  // namespace CleanRoomsML
}  // namespace Aws
