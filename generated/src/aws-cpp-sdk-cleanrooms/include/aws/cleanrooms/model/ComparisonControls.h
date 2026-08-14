/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cleanrooms/CleanRooms_EXPORTS.h>
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
 * <p>Specifies how a query can compare the columns in a table, including literal
 * comparisons and column-to-column comparisons.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/cleanrooms-2022-02-17/ComparisonControls">AWS
 * API Reference</a></p>
 */
class ComparisonControls {
 public:
  AWS_CLEANROOMS_API ComparisonControls() = default;
  AWS_CLEANROOMS_API ComparisonControls(Aws::Utils::Json::JsonView jsonValue);
  AWS_CLEANROOMS_API ComparisonControls& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_CLEANROOMS_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The columns that a query can compare to literal values, for example, in a
   * WHERE clause. Clean Rooms rejects a query that compares any other column to a
   * literal value. Specify an empty list to block literal comparison on every
   * column. You can't specify a column that you also use as an identity column in an
   * aggregation threshold.</p>
   */
  inline const Aws::Vector<Aws::String>& GetAllowedLiteralComparisonColumns() const { return m_allowedLiteralComparisonColumns; }
  inline bool AllowedLiteralComparisonColumnsHasBeenSet() const { return m_allowedLiteralComparisonColumnsHasBeenSet; }
  template <typename AllowedLiteralComparisonColumnsT = Aws::Vector<Aws::String>>
  void SetAllowedLiteralComparisonColumns(AllowedLiteralComparisonColumnsT&& value) {
    m_allowedLiteralComparisonColumnsHasBeenSet = true;
    m_allowedLiteralComparisonColumns = std::forward<AllowedLiteralComparisonColumnsT>(value);
  }
  template <typename AllowedLiteralComparisonColumnsT = Aws::Vector<Aws::String>>
  ComparisonControls& WithAllowedLiteralComparisonColumns(AllowedLiteralComparisonColumnsT&& value) {
    SetAllowedLiteralComparisonColumns(std::forward<AllowedLiteralComparisonColumnsT>(value));
    return *this;
  }
  template <typename AllowedLiteralComparisonColumnsT = Aws::String>
  ComparisonControls& AddAllowedLiteralComparisonColumns(AllowedLiteralComparisonColumnsT&& value) {
    m_allowedLiteralComparisonColumnsHasBeenSet = true;
    m_allowedLiteralComparisonColumns.emplace_back(std::forward<AllowedLiteralComparisonColumnsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The columns that a query can compare to another column, for example, in a
   * join, a WHERE clause, a GROUP BY clause, or a window function. Clean Rooms
   * rejects a query that uses any other column in a column-to-column comparison.
   * Specify an empty list to block column-to-column comparison on every column.</p>
   */
  inline const Aws::Vector<Aws::String>& GetAllowedColumnComparisonColumns() const { return m_allowedColumnComparisonColumns; }
  inline bool AllowedColumnComparisonColumnsHasBeenSet() const { return m_allowedColumnComparisonColumnsHasBeenSet; }
  template <typename AllowedColumnComparisonColumnsT = Aws::Vector<Aws::String>>
  void SetAllowedColumnComparisonColumns(AllowedColumnComparisonColumnsT&& value) {
    m_allowedColumnComparisonColumnsHasBeenSet = true;
    m_allowedColumnComparisonColumns = std::forward<AllowedColumnComparisonColumnsT>(value);
  }
  template <typename AllowedColumnComparisonColumnsT = Aws::Vector<Aws::String>>
  ComparisonControls& WithAllowedColumnComparisonColumns(AllowedColumnComparisonColumnsT&& value) {
    SetAllowedColumnComparisonColumns(std::forward<AllowedColumnComparisonColumnsT>(value));
    return *this;
  }
  template <typename AllowedColumnComparisonColumnsT = Aws::String>
  ComparisonControls& AddAllowedColumnComparisonColumns(AllowedColumnComparisonColumnsT&& value) {
    m_allowedColumnComparisonColumnsHasBeenSet = true;
    m_allowedColumnComparisonColumns.emplace_back(std::forward<AllowedColumnComparisonColumnsT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Vector<Aws::String> m_allowedLiteralComparisonColumns;

  Aws::Vector<Aws::String> m_allowedColumnComparisonColumns;
  bool m_allowedLiteralComparisonColumnsHasBeenSet = false;
  bool m_allowedColumnComparisonColumnsHasBeenSet = false;
};

}  // namespace Model
}  // namespace CleanRooms
}  // namespace Aws
