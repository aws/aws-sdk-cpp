/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cleanrooms/CleanRooms_EXPORTS.h>
#include <aws/cleanrooms/model/Column.h>
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
 * <p>Contains the schema definition of an intermediate table.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/cleanrooms-2022-02-17/IntermediateTableSchema">AWS
 * API Reference</a></p>
 */
class IntermediateTableSchema {
 public:
  AWS_CLEANROOMS_API IntermediateTableSchema() = default;
  AWS_CLEANROOMS_API IntermediateTableSchema(Aws::Utils::Json::JsonView jsonValue);
  AWS_CLEANROOMS_API IntermediateTableSchema& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_CLEANROOMS_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The list of columns in the intermediate table schema.</p>
   */
  inline const Aws::Vector<Column>& GetColumns() const { return m_columns; }
  inline bool ColumnsHasBeenSet() const { return m_columnsHasBeenSet; }
  template <typename ColumnsT = Aws::Vector<Column>>
  void SetColumns(ColumnsT&& value) {
    m_columnsHasBeenSet = true;
    m_columns = std::forward<ColumnsT>(value);
  }
  template <typename ColumnsT = Aws::Vector<Column>>
  IntermediateTableSchema& WithColumns(ColumnsT&& value) {
    SetColumns(std::forward<ColumnsT>(value));
    return *this;
  }
  template <typename ColumnsT = Column>
  IntermediateTableSchema& AddColumns(ColumnsT&& value) {
    m_columnsHasBeenSet = true;
    m_columns.emplace_back(std::forward<ColumnsT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Vector<Column> m_columns;
  bool m_columnsHasBeenSet = false;
};

}  // namespace Model
}  // namespace CleanRooms
}  // namespace Aws
