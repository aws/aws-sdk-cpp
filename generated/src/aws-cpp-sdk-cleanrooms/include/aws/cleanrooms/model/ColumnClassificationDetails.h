/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cleanrooms/CleanRooms_EXPORTS.h>
#include <aws/cleanrooms/model/SyntheticDataColumnProperties.h>
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
 * <p>Contains classification information for data columns, including mappings that
 * specify how columns should be handled during synthetic data generation and
 * privacy analysis.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/cleanrooms-2022-02-17/ColumnClassificationDetails">AWS
 * API Reference</a></p>
 */
class ColumnClassificationDetails {
 public:
  AWS_CLEANROOMS_API ColumnClassificationDetails() = default;
  AWS_CLEANROOMS_API ColumnClassificationDetails(Aws::Utils::Json::JsonView jsonValue);
  AWS_CLEANROOMS_API ColumnClassificationDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_CLEANROOMS_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>A mapping that defines the classification of data columns for synthetic data
   * generation and specifies how each column should be handled during the
   * privacy-preserving data synthesis process.</p>
   */
  inline const Aws::Vector<SyntheticDataColumnProperties>& GetColumnMapping() const { return m_columnMapping; }
  inline bool ColumnMappingHasBeenSet() const { return m_columnMappingHasBeenSet; }
  template <typename ColumnMappingT = Aws::Vector<SyntheticDataColumnProperties>>
  void SetColumnMapping(ColumnMappingT&& value) {
    m_columnMappingHasBeenSet = true;
    m_columnMapping = std::forward<ColumnMappingT>(value);
  }
  template <typename ColumnMappingT = Aws::Vector<SyntheticDataColumnProperties>>
  ColumnClassificationDetails& WithColumnMapping(ColumnMappingT&& value) {
    SetColumnMapping(std::forward<ColumnMappingT>(value));
    return *this;
  }
  template <typename ColumnMappingT = SyntheticDataColumnProperties>
  ColumnClassificationDetails& AddColumnMapping(ColumnMappingT&& value) {
    m_columnMappingHasBeenSet = true;
    m_columnMapping.emplace_back(std::forward<ColumnMappingT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Vector<SyntheticDataColumnProperties> m_columnMapping;
  bool m_columnMappingHasBeenSet = false;
};

}  // namespace Model
}  // namespace CleanRooms
}  // namespace Aws
