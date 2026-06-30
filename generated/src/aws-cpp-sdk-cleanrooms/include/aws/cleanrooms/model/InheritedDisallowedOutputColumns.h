/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cleanrooms/CleanRooms_EXPORTS.h>
#include <aws/cleanrooms/model/ColumnLineageEntry.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace CleanRooms {
namespace Model {

/**
 * <p>Contains the inherited disallowed output columns constraint and the column
 * lineage tracing each column to its source.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/cleanrooms-2022-02-17/InheritedDisallowedOutputColumns">AWS
 * API Reference</a></p>
 */
class InheritedDisallowedOutputColumns {
 public:
  AWS_CLEANROOMS_API InheritedDisallowedOutputColumns() = default;
  AWS_CLEANROOMS_API InheritedDisallowedOutputColumns(Aws::Utils::Json::JsonView jsonValue);
  AWS_CLEANROOMS_API InheritedDisallowedOutputColumns& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_CLEANROOMS_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The list of column names that are disallowed from appearing in query output,
   * inherited from parent tables.</p>
   */
  inline const Aws::Vector<Aws::String>& GetValue() const { return m_value; }
  inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }
  template <typename ValueT = Aws::Vector<Aws::String>>
  void SetValue(ValueT&& value) {
    m_valueHasBeenSet = true;
    m_value = std::forward<ValueT>(value);
  }
  template <typename ValueT = Aws::Vector<Aws::String>>
  InheritedDisallowedOutputColumns& WithValue(ValueT&& value) {
    SetValue(std::forward<ValueT>(value));
    return *this;
  }
  template <typename ValueT = Aws::String>
  InheritedDisallowedOutputColumns& AddValue(ValueT&& value) {
    m_valueHasBeenSet = true;
    m_value.emplace_back(std::forward<ValueT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The lineage information that traces each disallowed output column back to its
   * source in a parent table.</p>
   */
  inline const Aws::Vector<ColumnLineageEntry>& GetColumnLineage() const { return m_columnLineage; }
  inline bool ColumnLineageHasBeenSet() const { return m_columnLineageHasBeenSet; }
  template <typename ColumnLineageT = Aws::Vector<ColumnLineageEntry>>
  void SetColumnLineage(ColumnLineageT&& value) {
    m_columnLineageHasBeenSet = true;
    m_columnLineage = std::forward<ColumnLineageT>(value);
  }
  template <typename ColumnLineageT = Aws::Vector<ColumnLineageEntry>>
  InheritedDisallowedOutputColumns& WithColumnLineage(ColumnLineageT&& value) {
    SetColumnLineage(std::forward<ColumnLineageT>(value));
    return *this;
  }
  template <typename ColumnLineageT = ColumnLineageEntry>
  InheritedDisallowedOutputColumns& AddColumnLineage(ColumnLineageT&& value) {
    m_columnLineageHasBeenSet = true;
    m_columnLineage.emplace_back(std::forward<ColumnLineageT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Vector<Aws::String> m_value;

  Aws::Vector<ColumnLineageEntry> m_columnLineage;
  bool m_valueHasBeenSet = false;
  bool m_columnLineageHasBeenSet = false;
};

}  // namespace Model
}  // namespace CleanRooms
}  // namespace Aws
